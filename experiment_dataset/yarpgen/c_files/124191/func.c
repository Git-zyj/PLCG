/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124191
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_18 *= ((/* implicit */signed char) ((long long int) (short)(-32767 - 1)));
                /* LoopSeq 2 */
                for (int i_2 = 3; i_2 < 19; i_2 += 1) /* same iter space */
                {
                    arr_7 [i_2] [i_0] [i_1] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned short) arr_4 [i_0] [i_1]))))), ((~((~(arr_0 [i_0])))))));
                    var_19 = ((/* implicit */unsigned long long int) 4245378798U);
                    var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)(-127 - 1))), (0U)))) ? ((~(((/* implicit */int) arr_5 [i_0] [i_1] [(unsigned short)17])))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_2 [i_0])))))))))));
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_6 [(unsigned short)11] [i_1] [i_1]))));
                    var_22 &= ((/* implicit */unsigned int) min((max(((-(((/* implicit */int) (short)24529)))), (((-2113090642) + (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) arr_5 [i_1] [16] [i_2]))));
                }
                for (int i_3 = 3; i_3 < 19; i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            {
                                var_23 -= ((/* implicit */unsigned int) ((unsigned short) arr_10 [i_5] [20] [i_1] [i_0]));
                                arr_16 [i_3] [(unsigned char)20] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_5] [i_3]))))) : (arr_13 [i_3 + 1] [i_0] [i_3] [i_5] [i_5] [(short)1])))) : ((+(((((/* implicit */unsigned long long int) arr_10 [(signed char)12] [i_4] [i_3] [(short)8])) + (arr_2 [(_Bool)0])))))));
                                var_24 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned char)156)))) && (((/* implicit */_Bool) arr_12 [3ULL] [i_1] [i_1] [i_1] [i_1]))));
                                arr_17 [i_3] [i_0] [i_0] [(_Bool)1] [19U] [i_4] [i_5] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18603))) : (arr_15 [i_0] [i_0] [i_0] [(unsigned short)9] [i_0])))) ? (((/* implicit */int) arr_9 [(short)20] [i_1] [i_3 - 2] [i_4])) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-4915)))))), (((/* implicit */int) max((arr_9 [i_0] [i_1] [i_3 - 3] [i_4]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 264733135720827977ULL)))))))));
                                arr_18 [14LL] [i_1] [i_3] [i_4] [2ULL] [(short)15] = ((/* implicit */unsigned int) (short)24535);
                            }
                        } 
                    } 
                    arr_19 [i_3] [i_1] [i_3] = ((/* implicit */unsigned short) (!(min(((!(((/* implicit */_Bool) (unsigned char)81)))), (((_Bool) arr_0 [14U]))))));
                    arr_20 [3ULL] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_6 [i_3] [i_1] [i_3 - 1]), (arr_6 [(unsigned short)12] [(unsigned char)20] [i_3 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [10U] [i_3 + 2])))))) : (((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */unsigned int) var_7)) : (arr_11 [i_3])))));
                }
                arr_21 [i_0] [(unsigned char)12] = max((max((((5U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(unsigned short)19] [i_1] [i_0] [i_1]))))), (((/* implicit */unsigned int) (unsigned char)231)))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_14))))) | (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_9)));
    var_26 = ((/* implicit */short) var_0);
}
