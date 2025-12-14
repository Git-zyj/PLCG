/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100170
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */short) ((long long int) ((((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */long long int) 1753053544U)) : (3493010184989077279LL))) * (max((-3493010184989077280LL), (((/* implicit */long long int) var_2)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)7415)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)7415))));
                            var_16 = ((/* implicit */long long int) var_2);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 19; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_15 [i_0] [i_5] [i_4] [i_5] [i_5] [9] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((short) var_11))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))), (((/* implicit */int) (signed char)127))));
                            arr_16 [i_0] [i_0] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)7107)) ? (((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))) >= (arr_13 [i_0] [i_4 + 2] [i_4] [i_4 + 2] [(unsigned short)1])))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_8 [i_4 + 3] [i_4 - 1] [i_4 - 1])) : (((/* implicit */int) var_12))))));
                            arr_17 [i_0] [i_1] [i_0] [i_4] [i_1] [i_5] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_4 - 1] [i_1] [i_4 - 2] [i_5])) ? (2147483646) : (((/* implicit */int) var_14))))), (((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */long long int) ((/* implicit */int) (short)7415))) : (-3493010184989077279LL)))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_0 [i_0])))) >= (((((/* implicit */_Bool) -2147483630)) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_1] [i_1])) : (((/* implicit */int) var_7))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967272U)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) 4198482508U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))) : ((+(((/* implicit */int) var_14)))))) : (max((((/* implicit */int) var_14)), (max((-2147483647), (((/* implicit */int) var_14)))))))))));
    var_19 = ((/* implicit */_Bool) min((var_19), (var_13)));
    var_20 = ((/* implicit */int) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_6 = 0; i_6 < 12; i_6 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) ((arr_12 [i_6] [i_6] [i_6] [i_6]) / (((/* implicit */int) var_4))));
        /* LoopNest 3 */
        for (short i_7 = 0; i_7 < 12; i_7 += 3) 
        {
            for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_28 [i_6] [i_7] [i_8] [i_6] [i_7] [i_6] = ((/* implicit */unsigned short) var_0);
                        arr_29 [i_6] [i_7] [i_8] [(unsigned short)7] = ((/* implicit */_Bool) (+(arr_25 [i_9 - 1] [i_9] [i_9 - 1] [i_9 - 1] [i_9] [i_9])));
                        /* LoopSeq 4 */
                        for (unsigned short i_10 = 1; i_10 < 10; i_10 += 1) 
                        {
                            arr_34 [5] [i_8] [i_7] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_10 - 1] [i_10])) ? (arr_20 [i_6] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_6 [i_7] [i_7] [i_8] [i_9]))))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-3493010184989077280LL)))) ? (((/* implicit */int) arr_30 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1])) : (((((/* implicit */_Bool) arr_20 [i_8] [i_10 + 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))));
                            arr_35 [i_6] [i_7] [i_7] [i_8] [i_9 - 1] [i_10 - 1] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_2))));
                            var_23 = ((/* implicit */_Bool) arr_21 [i_9 - 1]);
                            arr_36 [i_7] [i_8] [i_9 - 1] = ((/* implicit */_Bool) arr_23 [(unsigned short)11] [i_7]);
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_24 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_9 - 1] [i_9 - 1])) ? (((/* implicit */int) var_2)) : (arr_22 [i_9 - 1] [i_9 - 1])));
                            arr_40 [i_6] [i_7] [i_8] [i_9] [i_11] = ((/* implicit */unsigned short) var_0);
                            arr_41 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) -1540337839327553390LL);
                            arr_42 [i_6] [i_7] [i_7] [i_8] [i_9] [i_11] = ((/* implicit */unsigned int) ((((long long int) -756155665)) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_18 [i_8])) : (2147483647))))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 3) 
                        {
                            arr_46 [i_6] [i_12] [i_8] [i_12] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((3493010184989077286LL) / (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_6] [i_7] [i_8] [i_9] [i_9])))))) ? (((/* implicit */unsigned long long int) (~(arr_27 [i_6] [i_7] [i_7])))) : (((var_8) ? (((/* implicit */unsigned long long int) arr_13 [i_6] [i_7] [i_6] [i_9 - 1] [i_12])) : (17912236649010895880ULL)))));
                            var_25 = ((/* implicit */short) ((arr_43 [i_6] [i_7] [i_9 - 1] [i_9 - 1] [i_9 - 1]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4095)))));
                            var_26 = ((/* implicit */short) ((int) ((unsigned int) arr_8 [i_9] [i_9] [i_9 - 1])));
                            var_27 = ((/* implicit */short) (~(arr_31 [i_9] [i_9 - 1] [i_9 - 1] [i_9])));
                            arr_47 [i_9] [i_7] [i_8] [i_12] [11] [i_9 - 1] [i_7] = ((/* implicit */int) 18446744073709551615ULL);
                        }
                        for (long long int i_13 = 3; i_13 < 11; i_13 += 1) 
                        {
                            arr_50 [i_6] [i_8] [i_6] [i_6] [i_6] &= arr_27 [i_9 - 1] [i_9] [i_9];
                            arr_51 [i_6] [i_13] = ((/* implicit */signed char) (unsigned short)24759);
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_14 = 1; i_14 < 15; i_14 += 3) 
    {
        arr_54 [i_14] = ((/* implicit */unsigned long long int) arr_1 [i_14 + 2]);
        arr_55 [(signed char)4] [i_14] = ((short) (+(((/* implicit */int) var_2))));
        var_28 = ((/* implicit */short) (!(arr_3 [i_14 + 3])));
    }
}
