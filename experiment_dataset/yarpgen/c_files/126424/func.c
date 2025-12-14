/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126424
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_0] [i_1] [i_3] = ((/* implicit */unsigned int) ((_Bool) ((unsigned short) var_0)));
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((int) ((unsigned short) var_8))))));
                        }
                    } 
                } 
                arr_13 [i_1] [i_1] = ((/* implicit */long long int) ((_Bool) ((short) var_2)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_4 = 1; i_4 < 9; i_4 += 1) 
    {
        for (int i_5 = 2; i_5 < 6; i_5 += 1) 
        {
            for (unsigned int i_6 = 2; i_6 < 8; i_6 += 4) 
            {
                {
                    var_19 ^= ((unsigned char) (-(((/* implicit */int) var_11))));
                    var_20 = (~(var_16));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        for (signed char i_8 = 2; i_8 < 8; i_8 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) var_8);
                                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
