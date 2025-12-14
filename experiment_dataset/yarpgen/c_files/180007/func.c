/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180007
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
    var_11 *= ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        arr_11 [i_3] [i_1] = ((signed char) 2084767562);
                        var_12 = ((/* implicit */long long int) arr_5 [i_1 - 2] [i_1 - 2]);
                        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 13611312755270685784ULL)))))));
                    }
                    var_14 = ((/* implicit */unsigned char) ((arr_7 [i_0 + 3] [(_Bool)1] [i_1 + 2] [i_1] [i_1 - 1]) ? (arr_4 [i_0 + 4] [i_1] [i_1 - 2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 + 2] [(unsigned char)20] [i_1 + 1] [4ULL] [i_1 - 1])))));
                }
                /* vectorizable */
                for (int i_4 = 2; i_4 < 19; i_4 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_20 [(unsigned short)1] [i_1] [(signed char)12] [i_4] [13] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_3))))) / (((/* implicit */int) var_1))));
                                var_15 += ((/* implicit */_Bool) ((arr_2 [i_0 + 1] [i_1 + 2]) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_1 - 2])) : (((/* implicit */int) (signed char)-94))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_4 + 1] [i_1 + 1] [i_0] [i_0 + 2]))));
                }
                /* LoopSeq 2 */
                for (int i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    arr_25 [i_0] [i_1] [i_7] |= ((/* implicit */unsigned int) var_3);
                    var_16 = ((/* implicit */unsigned char) ((unsigned long long int) 429899736U));
                }
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_14 [i_0 + 4] [i_0] [i_0 - 1] [i_0 + 4]))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_26 [i_0 + 1] [i_1]))));
                }
                var_19 = ((/* implicit */long long int) arr_23 [i_0] [i_0 + 1] [14U]);
                var_20 -= ((/* implicit */long long int) ((unsigned int) ((unsigned int) 4005804151U)));
            }
        } 
    } 
}
