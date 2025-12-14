/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146055
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 2])) ? (((/* implicit */int) arr_0 [(unsigned char)7])) : (((/* implicit */int) max(((unsigned short)44365), (((/* implicit */unsigned short) var_7)))))))), (arr_1 [i_0 - 1] [i_0 - 1])));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */short) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21171))) + (2774855725U))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_8)))))));
            arr_6 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_9)), (min((arr_1 [i_0 - 1] [i_0]), (((/* implicit */unsigned long long int) var_4))))));
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                arr_9 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) arr_0 [i_0 - 1])), (min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)0)))));
                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-95)) ? (min((((/* implicit */long long int) 1234340015U)), (0LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)123)))));
            }
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                arr_12 [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) var_11);
                var_14 = ((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */int) (unsigned char)132)) : (((/* implicit */int) arr_0 [i_0]))));
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    var_15 = ((/* implicit */int) 3127701437502197897LL);
                    arr_16 [i_0 - 2] [i_0] [i_3] [i_4] |= ((/* implicit */unsigned int) max((((/* implicit */long long int) (_Bool)1)), (6442450944LL)));
                    arr_17 [i_0] [i_1] [i_3] [i_4] [i_0] [i_4] |= ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), ((short)3469)))) ? (((/* implicit */int) max((arr_7 [i_0 - 2] [i_0 + 1] [i_0 - 1]), (arr_13 [i_3] [i_0 - 1] [i_0 - 1] [i_0])))) : (((/* implicit */int) max((arr_13 [i_1] [i_0] [i_0 + 1] [i_0]), (arr_7 [i_0 - 1] [i_0 + 1] [i_0 - 1])))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_22 [(signed char)4] [(_Bool)1] [i_3] [i_5] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */int) (unsigned char)180))))));
                    arr_23 [(unsigned char)6] [i_3] [i_5] = ((/* implicit */signed char) arr_20 [i_3] [i_3] [i_1] [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
                    {
                        var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1909219180U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) (unsigned char)178))))) : (((((/* implicit */int) (unsigned char)242)) - (var_2)))))), (((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_5] [i_6])) ? (arr_1 [i_0 - 1] [i_0 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0 - 2] [(short)2] [i_0 - 2] [i_0 + 1])))))));
                        arr_28 [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 + 1])) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)6311))))) ? (((/* implicit */unsigned long long int) ((((-3606053316469785442LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_10)) + (86)))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0] [i_1] [i_1] [i_3] [i_3] [i_5] [i_6]))) : (25ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) < (min((((/* implicit */unsigned int) (signed char)-16)), (arr_4 [i_0] [10U] [i_5])))))))));
                        arr_29 [i_0] [i_0] = ((/* implicit */unsigned char) var_11);
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
                    {
                        arr_34 [i_5] [i_5] [i_3] [i_1] [i_0] = ((/* implicit */short) max((arr_30 [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 2] [i_3]), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) max((((/* implicit */short) arr_21 [i_0 + 1] [i_3] [i_5] [i_7])), ((short)-1024)))), (arr_8 [i_0 - 2] [i_0 - 2]))))));
                        arr_35 [i_7] [i_5] [(_Bool)1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)9))));
                        arr_36 [1] [i_5] [i_3] [i_1] [i_0] = ((/* implicit */long long int) min((max((arr_32 [i_0] [i_0] [i_7] [i_5] [i_7]), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_15 [i_1] [i_3] [i_5] [(unsigned char)1])) : (((/* implicit */int) arr_31 [i_0] [i_1] [i_3] [i_5] [(unsigned short)10]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [4ULL] [4ULL])) * (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_0] [i_5])) ? (0) : (((/* implicit */int) var_9)))))))));
                    }
                }
                var_17 ^= ((/* implicit */unsigned char) max((var_5), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15310)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54460))) : (3203366556U)))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)29)), (var_7)))) : (((/* implicit */int) arr_33 [i_1] [i_3])))))));
                var_18 = ((/* implicit */int) max((var_18), ((((-(((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))))) + (((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (arr_26 [i_0] [i_1] [i_3] [i_3] [i_3])))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [3ULL])) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_1] [(unsigned char)0])) : (((/* implicit */int) (short)578)))) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_14 [i_0] [i_1] [i_1] [i_1]))))))))));
            }
        }
        arr_37 [i_0] = ((/* implicit */signed char) var_6);
        arr_38 [i_0] [i_0 + 1] &= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_27 [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 2] [i_0])), (((((/* implicit */_Bool) arr_27 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 2] [i_0 - 1] [(_Bool)1] [8U])) ? (8179421723141994138LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
        arr_39 [(short)8] = (!(((/* implicit */_Bool) min((((/* implicit */int) arr_11 [i_0] [i_0 - 1] [i_0 - 1])), (1174435247)))));
    }
    var_19 ^= min((var_12), (((/* implicit */long long int) (+(((/* implicit */int) min((var_9), (((/* implicit */unsigned short) (_Bool)1)))))))));
    var_20 = ((/* implicit */short) max((max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) 551329587U)) ? (3606053316469785442LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8009))))))), (((/* implicit */long long int) -1174435247))));
}
