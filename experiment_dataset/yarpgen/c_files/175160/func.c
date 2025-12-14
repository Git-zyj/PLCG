/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175160
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
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_1)))))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */long long int) arr_6 [i_1] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 4; i_3 < 16; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_5 [i_3 + 3] [i_0] [i_3 - 2])) && (((/* implicit */_Bool) arr_5 [i_3 - 2] [i_0] [i_3 - 4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_8 [i_0 + 2] [i_0 + 2] [i_0] [i_3 - 4]), (arr_8 [i_0 + 1] [i_0 - 1] [i_0] [i_3 + 2]))))) : (((unsigned int) arr_8 [i_0 + 2] [i_0 + 1] [i_0] [i_3 - 2]))));
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_4])))))))))))));
                                arr_11 [i_3 - 3] [i_3] [8U] [i_0] [i_3 - 3] [6ULL] [i_3 - 2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_6 [10U] [10U] [10U])), ((~(((unsigned long long int) arr_5 [i_0] [i_0] [i_4]))))));
                                arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_10 [i_1] [i_1 + 2] [i_1 + 2] [i_3] [(short)15]), (arr_7 [i_1] [i_1] [i_1 + 1] [i_1]))))));
                                var_24 = ((/* implicit */long long int) min((arr_10 [i_4] [i_3 + 3] [14U] [i_1] [0U]), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_0] [i_4])) && (((/* implicit */_Bool) arr_8 [i_0] [11U] [i_0] [5ULL])))), ((!(((/* implicit */_Bool) 3311950727U)))))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0] [i_0 - 1] [i_0 + 2]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1] [i_0 + 2])) ? (arr_3 [i_0] [i_0 - 1] [i_0 + 2]) : (arr_3 [i_0] [i_0 - 1] [i_0 + 2])))) : (((unsigned long long int) arr_3 [i_0] [i_0 - 1] [i_0 + 2])));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) var_14);
}
