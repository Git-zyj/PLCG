/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118475
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */int) min((min((arr_6 [i_0 + 1]), (4549013356784553109ULL))), (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) arr_0 [i_1])), (arr_3 [i_1]))) <= (((/* implicit */unsigned int) arr_0 [i_0])))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    arr_10 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((long long int) (+(((/* implicit */int) (_Bool)1))))));
                    var_12 = ((/* implicit */unsigned long long int) min((var_12), (max((((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(unsigned char)3] [i_1]))) / (arr_3 [i_0 + 2]))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_2] [i_2] [i_1] [i_2])))))))), ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)210))) ^ (arr_1 [i_0])))))))));
                    arr_11 [i_2] = ((/* implicit */signed char) ((2132331442752485044ULL) * (((/* implicit */unsigned long long int) 2575868035U))));
                    var_13 *= ((/* implicit */_Bool) max((((((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)98))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_1])))))) : (max((9223372036854775785LL), (((/* implicit */long long int) arr_5 [i_0 + 1])))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)74)) ? (-6919572963817399274LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-74)))))))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        arr_15 [i_0] [(unsigned char)2] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((min((arr_0 [i_1]), (arr_0 [i_0]))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7288))) != (arr_9 [i_0] [i_0] [i_0] [i_3]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -291883918)) ? (arr_1 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_1])))))) ? (((arr_1 [i_1]) & (arr_9 [i_0] [i_1] [i_2] [i_3]))) : (max((13897730716924998517ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_2]))))), ((~(arr_6 [i_0 - 1])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_4 = 3; i_4 < 10; i_4 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [i_0] [(unsigned char)1])) : (((/* implicit */int) arr_12 [i_2] [i_4] [i_2])))) : (((/* implicit */int) ((short) -291883926))))))));
                            arr_19 [i_0] [i_3] [i_2] [i_2] [i_0] = ((/* implicit */long long int) arr_9 [i_4] [9LL] [i_2] [i_1]);
                        }
                        arr_20 [i_2] [i_2] = max((arr_4 [i_0 + 1] [i_1]), (arr_4 [i_0 + 1] [i_1]));
                        arr_21 [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((_Bool) max((arr_6 [i_0]), (((/* implicit */unsigned long long int) (_Bool)0)))))), (max((((/* implicit */unsigned int) (unsigned short)65532)), (4294967276U)))));
                        arr_22 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] = (~(((/* implicit */int) arr_16 [i_0] [i_0] [i_2] [i_0] [i_3])));
                    }
                }
                /* LoopSeq 4 */
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
                {
                    arr_25 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [(short)2] [i_0]);
                    arr_26 [i_0] [i_0] [i_1] [i_5] = ((/* implicit */unsigned int) min(((unsigned short)14288), (((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) -7675476667689018602LL)))), (((((/* implicit */_Bool) (signed char)74)) && (((/* implicit */_Bool) arr_4 [i_5] [6LL])))))))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
                {
                    var_15 = ((/* implicit */int) arr_3 [9U]);
                    arr_30 [i_0] [8] [i_6] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((4294967288U), (((/* implicit */unsigned int) arr_2 [i_6]))))) ? (max((-328214318), (((/* implicit */int) (short)11645)))) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_6] [i_0] [i_1] [i_0 + 2]))))), (((((/* implicit */unsigned long long int) arr_13 [i_6])) - (var_2))));
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
                {
                    arr_33 [i_7] [i_1] [i_0 + 1] = ((/* implicit */unsigned long long int) (((-(arr_1 [i_1]))) < (((/* implicit */unsigned long long int) arr_0 [i_0 + 2]))));
                    var_16 = ((/* implicit */long long int) arr_4 [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            {
                                arr_41 [i_0] [i_0] [i_0] [i_0] [i_8] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */int) arr_7 [7LL] [i_1] [i_8] [i_8])) : (((/* implicit */int) var_5)))) - (((/* implicit */int) ((arr_1 [i_0]) >= (((/* implicit */unsigned long long int) -7675476667689018584LL)))))));
                                var_17 = ((/* implicit */unsigned char) (unsigned short)58892);
                                var_18 = ((/* implicit */long long int) arr_13 [i_8]);
                                arr_42 [i_9] [i_8] [i_9] [i_1] [i_9] [i_1] [i_9] = ((/* implicit */_Bool) var_7);
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 3) /* same iter space */
                {
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) arr_3 [i_0 - 1]))));
                    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 3029987541U))));
                    arr_46 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)213)) + (((/* implicit */int) arr_16 [i_10] [i_0] [i_1] [i_0] [i_0]))))))) ? (((arr_44 [i_0] [i_1] [i_10]) ? (((unsigned int) 4784078842269611055LL)) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (signed char)63)), (var_3))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-9536)))));
                }
                var_21 = ((/* implicit */long long int) min((((/* implicit */short) (signed char)91)), ((short)11644)));
                var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((min((var_5), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) 9223372036854775754LL)) < (var_2))))))), (var_2)));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned char) (signed char)95)), ((unsigned char)63)));
}
