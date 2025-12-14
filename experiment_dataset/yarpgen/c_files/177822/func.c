/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177822
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
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_12)), (max((var_7), (((/* implicit */long long int) ((short) 5993210924046841478LL)))))));
    var_20 = ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_12))));
                arr_4 [i_0] [i_1] = ((/* implicit */short) arr_2 [i_0]);
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        arr_11 [i_3] [i_1] [i_0] [i_2] = ((/* implicit */long long int) var_4);
                        arr_12 [i_0] [i_1] [i_3] [i_3 - 1] = ((/* implicit */unsigned char) ((long long int) (short)(-32767 - 1)));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_1] = ((/* implicit */unsigned int) ((short) ((unsigned short) (+(((/* implicit */int) (short)-32759))))));
                        arr_16 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) var_4))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_1 + 2] [i_5] [i_5] = (-(((((/* implicit */long long int) ((/* implicit */int) var_12))) & (var_2))));
                        arr_20 [i_0] [(signed char)4] [i_0] &= var_10;
                    }
                    var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)32767))));
                    arr_21 [i_2] = ((/* implicit */short) max((((/* implicit */signed char) ((((((/* implicit */_Bool) arr_8 [i_0] [6U] [i_2] [i_0])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_1 + 1] [i_2]))))) != (max((arr_18 [i_0] [i_0] [(unsigned short)18] [i_0]), (arr_1 [i_2] [i_1])))))), (((signed char) (short)32767))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) < ((+(8983404161468189254LL)))));
}
