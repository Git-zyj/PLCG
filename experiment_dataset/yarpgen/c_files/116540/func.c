/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116540
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
    var_18 &= ((/* implicit */_Bool) var_14);
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0 + 2]);
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
        {
            arr_6 [i_0] [i_0] [i_1] &= max((((/* implicit */unsigned long long int) max((4194303LL), (((/* implicit */long long int) 3026469620U))))), (arr_4 [i_0] [i_0] [i_1]));
            var_19 = ((/* implicit */long long int) arr_4 [i_0] [i_1] [i_0]);
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_20 = ((/* implicit */long long int) arr_5 [i_0]);
                var_21 = arr_7 [i_2] [i_1] [i_0];
            }
            arr_10 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1])) << (((327065465U) - (327065463U)))))) ? (max((((/* implicit */unsigned long long int) var_3)), (arr_4 [i_0] [i_0 + 2] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [6LL] [i_1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0 + 1])))))))) ? (((((/* implicit */_Bool) 1350444632U)) ? (arr_8 [i_0 - 1]) : (((/* implicit */unsigned long long int) arr_5 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        }
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
        {
            arr_14 [i_0] = ((/* implicit */int) var_6);
            arr_15 [i_0] [i_3] = ((/* implicit */long long int) ((arr_8 [i_0 + 1]) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)229))) % (arr_9 [i_0] [i_3] [i_0] [i_3])))));
            /* LoopSeq 2 */
            for (unsigned char i_4 = 3; i_4 < 9; i_4 += 3) 
            {
                var_22 = arr_4 [i_0 + 3] [i_3] [i_0];
                arr_18 [i_4] [i_3] [i_3] &= ((/* implicit */unsigned int) var_0);
                arr_19 [(short)3] [i_0] [i_0] [i_0] = ((/* implicit */long long int) -1341002924);
            }
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                arr_22 [(_Bool)1] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0 + 1])) ? (arr_17 [i_5] [i_3] [i_3] [i_0]) : (arr_17 [i_5] [i_5] [i_3] [(short)7])));
                arr_23 [i_3] &= ((/* implicit */signed char) ((1LL) - (((((/* implicit */_Bool) var_5)) ? (var_10) : (var_10)))));
                var_23 = ((/* implicit */unsigned long long int) var_14);
            }
            arr_24 [i_0] = ((/* implicit */unsigned int) arr_13 [i_3]);
        }
        var_24 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1341002924)) ? (1341002897) : (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) 22U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (max((arr_3 [i_0] [i_0] [i_0 + 3]), (((/* implicit */unsigned int) arr_13 [i_0]))))))));
        /* LoopSeq 3 */
        for (int i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -1)) ? (4427870119570746444LL) : (((/* implicit */long long int) arr_21 [8U])))), (var_4)))) : (((max((((/* implicit */unsigned long long int) (signed char)-109)), (arr_4 [i_0] [i_0] [i_0]))) + (((/* implicit */unsigned long long int) 1268497677U))))));
            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_6]))));
            var_27 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) -5396368262545435627LL)) ? (((/* implicit */int) ((((((/* implicit */_Bool) -4194303LL)) && (((/* implicit */_Bool) arr_20 [i_0] [i_6] [i_0] [i_6])))) && (((/* implicit */_Bool) var_14))))) : (((((/* implicit */_Bool) arr_3 [8U] [i_6] [8U])) ? (((/* implicit */int) (unsigned char)2)) : (arr_17 [i_6] [i_6] [i_0] [i_0])))));
            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) -1822137207731376899LL))));
        }
        /* vectorizable */
        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                arr_31 [i_0] [i_7] [i_0] = var_16;
                arr_32 [6ULL] [i_0] [4U] [i_7] = ((/* implicit */signed char) var_13);
            }
            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) arr_16 [2ULL] [i_7] [2ULL]))));
        }
        for (long long int i_9 = 0; i_9 < 11; i_9 += 3) 
        {
            var_30 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_11 [3] [i_0 + 1])) ? (arr_8 [i_0 - 1]) : (arr_8 [i_0 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_26 [i_9] [i_9] [i_0]) : (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_9]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_0] [i_0] [i_9] [i_0]))) : (arr_5 [i_0])))) : (((((/* implicit */_Bool) 1822137207731376899LL)) ? (4194303LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
            var_31 = ((/* implicit */long long int) -1);
            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1125831187365888LL)) ? (((/* implicit */long long int) 2147483647)) : (9223372036854775792LL)));
        }
    }
    for (signed char i_10 = 1; i_10 < 13; i_10 += 1) 
    {
        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((((/* implicit */_Bool) 1746802589990605975LL)) ? (((/* implicit */unsigned long long int) 13U)) : (8784287687097761627ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_10 + 1] [i_10 - 1]))))))));
        /* LoopNest 2 */
        for (unsigned char i_11 = 0; i_11 < 14; i_11 += 2) 
        {
            for (unsigned char i_12 = 0; i_12 < 14; i_12 += 4) 
            {
                {
                    arr_44 [i_10 - 1] [i_10 - 1] [i_12] = ((/* implicit */_Bool) (((_Bool)1) ? (((arr_43 [i_10 - 1] [i_10 + 1]) ? (((arr_40 [i_11] [i_12]) ? (arr_39 [i_12] [i_11] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) 3275449608U)) ? (arr_39 [i_10] [i_10] [i_10 + 1]) : (var_11))))) : (((((/* implicit */_Bool) (signed char)-109)) ? (var_9) : (((/* implicit */long long int) var_17))))));
                    arr_45 [2U] [11ULL] [i_12] [i_12] = (_Bool)1;
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_13 = 0; i_13 < 14; i_13 += 3) 
        {
            var_34 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8452)) ? (3386877958784763125LL) : (-4194303LL)))) ? (((((/* implicit */_Bool) (unsigned short)57083)) ? (1341002932) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_17)) ? (-1341002924) : (((/* implicit */int) arr_38 [i_10] [i_13]))))))) ? (arr_37 [i_13]) : (((/* implicit */unsigned int) min((-404314778), (min((arr_41 [i_10] [i_10] [i_13]), (((/* implicit */int) (unsigned short)65535))))))));
            var_35 = ((/* implicit */_Bool) var_15);
        }
        /* vectorizable */
        for (long long int i_14 = 0; i_14 < 14; i_14 += 4) 
        {
            var_36 |= ((((/* implicit */_Bool) arr_48 [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_10 + 1] [i_14]))) : (arr_42 [i_10] [i_14] [i_10 - 1] [i_10 + 1]));
            var_37 = ((/* implicit */long long int) var_1);
            var_38 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_48 [i_10])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (arr_42 [12LL] [12LL] [12LL] [12LL]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (-8998020720672485466LL) : (7143910144951444532LL))))));
        }
        var_39 = ((/* implicit */unsigned long long int) arr_38 [i_10] [i_10]);
    }
}
