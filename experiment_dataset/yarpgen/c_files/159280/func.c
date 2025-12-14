/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159280
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) var_0);
                    var_16 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)233))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3)))))));
        /* LoopNest 2 */
        for (long long int i_3 = 2; i_3 < 8; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */short) (((~(arr_13 [i_0] [i_0] [i_0]))) - (((/* implicit */long long int) ((((/* implicit */int) var_2)) + (var_13))))));
                                var_19 = ((/* implicit */unsigned short) ((int) var_7));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) ((short) arr_6 [i_0 + 1]));
                }
            } 
        } 
    }
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_8))));
}
