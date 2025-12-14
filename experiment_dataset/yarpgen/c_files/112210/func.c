/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112210
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
    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (var_10)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        arr_12 [i_1] [(_Bool)1] [i_3] = ((/* implicit */unsigned short) var_19);
                        arr_13 [4] [i_1] [i_1] [i_3] = max((((unsigned int) 65520)), (arr_8 [i_0] [(unsigned char)2] [i_0] [i_0]));
                    }
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        arr_16 [i_0] [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned short) (-((-(((((/* implicit */_Bool) 2565405662U)) ? (2565405664U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
                        var_21 = ((/* implicit */_Bool) ((short) arr_8 [i_4] [i_2] [i_1] [11ULL]));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_4])) ? (((/* implicit */int) arr_6 [i_4] [i_1] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_4] [i_0]))))) && (((((/* implicit */_Bool) arr_15 [i_0] [(short)15] [i_2] [(short)15])) || (((/* implicit */_Bool) arr_9 [i_0] [(unsigned short)6] [i_0]))))));
                    }
                    for (unsigned short i_5 = 2; i_5 < 21; i_5 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) min((arr_2 [(signed char)20]), (arr_14 [i_0])))) >= (((((/* implicit */_Bool) 2565405671U)) ? (((/* implicit */int) (short)-2226)) : (((/* implicit */int) (unsigned short)41588))))))), (((((/* implicit */_Bool) (unsigned short)23937)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */int) (unsigned short)16172)) : (arr_5 [i_0] [i_0] [i_0] [i_0])))) : (((var_3) ? (2565405660U) : (((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_2] [i_0] [i_5 + 2]))))))));
                        arr_20 [(unsigned short)5] [i_0] [i_0] [i_0] [i_0] = max(((((~(94533458U))) << (((/* implicit */int) arr_2 [i_5 + 4])))), (((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0])));
                        /* LoopSeq 2 */
                        for (long long int i_6 = 1; i_6 < 24; i_6 += 4) 
                        {
                            arr_23 [i_0] [i_6] [i_5] [i_2] [14U] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_6 + 1] [i_5] [i_1] [i_0])) || (var_13))))))) ? ((-(((/* implicit */int) arr_2 [i_6 - 1])))) : ((~(((/* implicit */int) arr_7 [i_6 + 1] [i_6]))))));
                            arr_24 [i_0] [i_0] [i_2] [i_5] [i_5] = ((/* implicit */long long int) var_0);
                        }
                        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            arr_28 [23U] [i_1] [i_2] [(signed char)23] [i_5] [i_7] [i_2] = ((/* implicit */long long int) max(((~(((/* implicit */int) arr_18 [i_0] [(signed char)10] [i_0] [i_0] [i_0] [i_0])))), (((arr_14 [i_5 + 2]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_14 [i_5 + 1]))))));
                            arr_29 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-2226)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((arr_14 [i_5 - 1]) || (((/* implicit */_Bool) 3221225472U)))))));
                            arr_30 [i_0] [i_1] [i_2] [i_5 + 4] [i_5] [i_7] = ((/* implicit */unsigned int) (+(((arr_3 [i_5 + 4]) - (arr_3 [i_5 + 2])))));
                            arr_31 [i_0] [(short)2] [16U] [15LL] [i_7] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(68719476736LL)))), (((((/* implicit */unsigned long long int) arr_22 [i_5] [i_5] [i_5] [i_5 + 2] [i_5 + 2] [i_5])) + (var_11)))));
                        }
                        arr_32 [i_5] [i_5] [i_5] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2227)) ? (arr_10 [i_0] [i_5 - 2] [i_5 + 4] [i_5 + 4]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                        arr_33 [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                    }
                    var_24 = ((/* implicit */long long int) (short)(-32767 - 1));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned int) var_13);
}
