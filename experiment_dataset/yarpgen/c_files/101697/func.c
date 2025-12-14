/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101697
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
    var_10 = ((/* implicit */unsigned short) (~(var_7)));
    var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) var_3)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [(unsigned short)18] [i_2] [i_3] [i_4] = ((/* implicit */int) max((arr_11 [i_0] [i_1 + 2] [i_2] [i_0]), (((/* implicit */unsigned int) var_0))));
                                arr_16 [i_0] [i_1 - 2] [i_2] = var_8;
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_6))))));
                    arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) var_2));
                }
            } 
        } 
    } 
    var_13 = 4160749568U;
}
