/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141307
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
    for (short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (int i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_12))));
                            /* LoopSeq 1 */
                            for (short i_4 = 0; i_4 < 12; i_4 += 1) 
                            {
                                arr_13 [i_0] [i_1 - 2] [i_3] [i_3] [i_3] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_9 [i_0 + 1] [3LL] [i_1 + 1] [i_2]), (arr_9 [i_0 - 2] [(signed char)6] [i_1 + 2] [i_4])))) ? (arr_6 [i_0 + 1] [i_1 + 2] [i_3 + 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_1] [i_1 - 2] [i_2])) ? (((/* implicit */int) var_7)) : (-1141961600))))));
                                arr_14 [i_0] [i_0] [i_0] [(_Bool)1] [i_3] [i_3] [(_Bool)1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)127)), (((((/* implicit */_Bool) arr_3 [i_3 - 1])) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 + 1])))));
                                var_15 += ((/* implicit */signed char) var_3);
                            }
                        }
                    } 
                } 
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0 - 2] [i_1])) ? (var_4) : (((/* implicit */int) arr_0 [i_0 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1 - 3])))))))) : (arr_7 [i_1 - 3] [i_0 - 2] [i_1] [i_1 - 3])));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_5))));
    var_18 = ((/* implicit */_Bool) var_12);
}
