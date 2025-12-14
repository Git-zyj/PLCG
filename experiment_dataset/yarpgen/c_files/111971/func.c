/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111971
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
    var_12 = (~(-1750871591));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_13 = ((/* implicit */_Bool) arr_1 [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_12 [(short)7] [i_1] [i_2] [i_2] [i_4] = min((max((((/* implicit */long long int) (short)32280)), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_3 [i_0 + 3] [i_0 - 1] [i_0]))))));
                                var_14 *= -1318327614;
                                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_0 - 1])) ? (5159614794535633781LL) : (((/* implicit */long long int) arr_6 [i_2 - 1] [i_0 + 1]))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((short) arr_6 [i_2 - 1] [i_0 + 1]))))))));
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (var_0))))))) << (((((/* implicit */int) (signed char)98)) - (75))))))));
                            }
                        } 
                    } 
                }
                for (short i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 16; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            {
                                arr_24 [i_6 + 2] [i_6 + 2] [i_6] [(signed char)16] [i_6] [i_5] [i_6 + 1] = ((/* implicit */long long int) min((max((((/* implicit */int) arr_7 [i_0 + 3] [i_6 + 1])), (((arr_15 [i_0 + 3] [i_0] [i_0] [i_0 + 2]) << (0))))), (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)32282)) : (((/* implicit */int) var_4)))), (arr_4 [i_0 - 1])))));
                                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_5] [i_6 - 1] [i_7])) ? (((/* implicit */int) arr_23 [i_7])) : (2106982160)))) ? (((/* implicit */long long int) max((((/* implicit */int) arr_22 [i_0 + 2])), (arr_16 [i_0 + 1] [i_1] [i_5] [i_6 + 1])))) : (min((((/* implicit */long long int) arr_23 [i_1])), (4933259411547122448LL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_8 = 1; i_8 < 16; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_18 = (~(((/* implicit */int) min((min((((/* implicit */short) (_Bool)1)), (arr_27 [i_9] [i_5] [i_1] [i_0 + 2]))), (((/* implicit */short) var_8))))));
                                arr_32 [i_5] [i_1] [i_5] [i_8 + 2] [i_9] = ((/* implicit */int) var_10);
                            }
                        } 
                    } 
                    arr_33 [i_5] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) -1318327614)) ? (max((-1177042676), (1177042676))) : (((/* implicit */int) (short)-4096)))), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 2073227504)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-77))))))));
                }
                arr_34 [i_0] [i_1] = ((/* implicit */short) var_2);
                var_19 = ((/* implicit */short) (~(min((var_2), (arr_1 [i_0 + 1])))));
                arr_35 [i_0 + 3] [5] = ((/* implicit */short) ((((/* implicit */int) (signed char)14)) + (((/* implicit */int) (short)-32275))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_9);
    var_21 *= ((/* implicit */_Bool) (~(((/* implicit */int) (short)-4096))));
    var_22 = ((/* implicit */long long int) var_3);
}
