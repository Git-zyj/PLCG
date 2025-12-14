/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180587
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
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_18 ^= ((((/* implicit */int) arr_2 [(unsigned short)12])) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) ((int) (short)16128));
                                var_20 ^= ((/* implicit */_Bool) var_1);
                            }
                        } 
                    } 
                    var_21 = (~(376527056U));
                    arr_16 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) var_3);
                    var_22 = ((/* implicit */unsigned long long int) var_16);
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        for (int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            {
                arr_23 [i_5] [(unsigned short)11] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) 3162535583U)), (((((/* implicit */_Bool) var_13)) ? (var_9) : (((/* implicit */unsigned long long int) var_17))))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) min((max((((/* implicit */unsigned short) arr_17 [(short)2])), ((unsigned short)61907))), (((/* implicit */unsigned short) ((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_12 [i_5])))))))) ^ (arr_18 [i_6])));
                var_24 = ((/* implicit */unsigned short) min((3918440254U), (((/* implicit */unsigned int) (unsigned short)29356))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) > (var_0))))));
}
