/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138796
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
    var_17 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    for (short i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_1] [(short)12] = ((/* implicit */signed char) arr_6 [i_3 + 2] [i_2 + 1]);
                                arr_13 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 3] = ((/* implicit */unsigned char) (short)(-32767 - 1));
                                arr_14 [i_0] [i_0] [i_1] [i_3 + 1] [i_4] = ((/* implicit */unsigned short) ((signed char) (+(((/* implicit */int) (short)-9460)))));
                            }
                        } 
                    } 
                } 
                var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_1 - 2] [i_1])) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1]))) : (min((arr_5 [i_1 - 1]), (((/* implicit */long long int) (-(((/* implicit */int) (short)32767)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (short)32764);
}
