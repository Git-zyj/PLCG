/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105995
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
    var_16 = ((/* implicit */unsigned char) var_15);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_17 = min((((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) var_2))))), ((+(((/* implicit */int) max(((unsigned char)20), (((/* implicit */unsigned char) var_5))))))));
        arr_2 [i_0] = ((/* implicit */long long int) (_Bool)1);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] &= ((/* implicit */unsigned int) ((_Bool) var_11));
        var_18 |= ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_1] [i_1])) / (((/* implicit */int) arr_3 [i_1] [i_1]))));
        var_19 = -8837231246895363176LL;
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_9 [12ULL] |= ((/* implicit */short) ((arr_7 [i_2] [i_2]) & (arr_7 [i_2] [i_2])));
        var_20 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (var_9)));
        var_21 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(15267936976004068153ULL)))) ? (((((/* implicit */_Bool) arr_4 [i_3])) ? ((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_5)))) : (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_1))))), (var_0))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_5 = 2; i_5 < 18; i_5 += 3) 
            {
                arr_17 [i_4] [i_4] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? ((+(((/* implicit */int) var_15)))) : (var_3)));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)168)) ? (9223371968135299072LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_14 [i_3] [i_5 - 1] [i_3]))));
            }
            var_25 = ((/* implicit */_Bool) ((unsigned char) arr_10 [i_3]));
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (15267936976004068160ULL) : (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_10)));
            var_27 = ((/* implicit */long long int) ((var_12) ? (arr_7 [i_3] [(unsigned char)14]) : (((((/* implicit */_Bool) (unsigned char)89)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)25242)) ? (arr_15 [i_3] [i_3] [i_4] [i_4]) : (((/* implicit */int) (unsigned short)8191))))) | (((long long int) 551254485))));
        }
        for (int i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            arr_20 [i_3] [i_6] = ((/* implicit */short) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 13ULL))))), (max(((unsigned short)57540), (((/* implicit */unsigned short) arr_11 [i_3] [i_3]))))));
            /* LoopSeq 1 */
            for (short i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        {
                            arr_29 [i_3] = ((/* implicit */unsigned char) min((((((/* implicit */int) (short)-2146)) == (((/* implicit */int) ((((/* implicit */int) (signed char)4)) < (((/* implicit */int) var_8))))))), ((_Bool)1)));
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_5))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223371968135299068LL)) ? (361551686U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)208)), (var_7))))) : (((long long int) arr_24 [i_3] [i_6] [(unsigned char)1] [i_7]))))));
                        }
                    } 
                } 
                arr_30 [i_3] = ((/* implicit */unsigned char) max((max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [i_6] [i_3]))) / (4187848816636353369ULL))), (((((/* implicit */_Bool) var_3)) ? (17663357100496015377ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) 7)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-9223371968135299073LL)))))));
            }
            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((_Bool) arr_23 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))));
            var_31 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43687)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_9)))) ? (max((var_1), (((/* implicit */long long int) var_15)))) : (((/* implicit */long long int) ((int) -2150286458465397722LL))))), (((/* implicit */long long int) max((var_2), (((/* implicit */unsigned char) (_Bool)0)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 1; i_10 < 19; i_10 += 3) 
            {
                for (short i_11 = 0; i_11 < 20; i_11 += 1) 
                {
                    {
                        arr_36 [i_3] [i_3] [13] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)159)), (14258895257073198263ULL)))) ? (((/* implicit */int) var_7)) : (46245133))))));
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) arr_18 [i_3] [(unsigned char)2]))));
                            arr_39 [i_3] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) % (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10] [i_10]))) : (min((arr_34 [(signed char)3] [(unsigned char)14] [i_10 + 1] [(signed char)1] [(signed char)3]), (((/* implicit */unsigned long long int) var_9)))))));
                        }
                    }
                } 
            } 
        }
        for (long long int i_13 = 0; i_13 < 20; i_13 += 4) 
        {
            arr_43 [i_3] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)57337)) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) var_5)))), (((int) arr_34 [i_3] [i_3] [i_3] [i_3] [i_3]))));
            arr_44 [i_13] &= ((/* implicit */long long int) min(((!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)44))))))), (((((/* implicit */int) (signed char)-82)) > (((/* implicit */int) ((var_6) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)21))))))))));
        }
    }
    var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_15)) ? (4294967287U) : (((/* implicit */unsigned int) -1119543880)))) & (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) ? (((((/* implicit */_Bool) ((unsigned short) (unsigned char)195))) ? (max((15325174148899036228ULL), (((/* implicit */unsigned long long int) 9223372036854775781LL)))) : (min((((/* implicit */unsigned long long int) (signed char)113)), (var_6))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4149251008971879192ULL)) ? (var_1) : (var_1))) / (((/* implicit */long long int) ((3710183007U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120))))))))))))));
}
