/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143647
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
    var_11 = ((/* implicit */unsigned short) max((var_11), ((unsigned short)65532)));
    var_12 = ((unsigned short) 41568418U);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_13 ^= ((/* implicit */int) (~(((135672140U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19795)))))));
                            var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -676254437)), (135672140U)));
                            var_15 = ((/* implicit */unsigned short) (+(-1333996135)));
                            var_16 += ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_10 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) -676254437)) : (70368744177663ULL)))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (unsigned short i_5 = 1; i_5 < 21; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) max((var_17), (arr_10 [i_0] [i_1])));
                                var_18 = ((/* implicit */unsigned long long int) (~(((var_6) | (arr_1 [i_5 + 1])))));
                                var_19 = ((/* implicit */unsigned long long int) var_5);
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */int) (~((~(((unsigned int) arr_1 [i_0]))))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 1; i_7 < 21; i_7 += 2) 
                {
                    for (unsigned short i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned short i_9 = 0; i_9 < 23; i_9 += 4) 
                            {
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) 4159295183U)) : (18193080871706272079ULL)))) ? (min((((/* implicit */unsigned long long int) -676254430)), (arr_4 [i_7 + 1]))) : (max((arr_4 [i_0]), (((/* implicit */unsigned long long int) (unsigned short)12792))))))));
                                var_22 -= ((/* implicit */int) var_4);
                                var_23 = ((/* implicit */int) min((arr_26 [i_1] [i_7 - 1] [i_1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_7] [i_7 - 1] [i_7] [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 - 1])) && (((/* implicit */_Bool) var_7)))))));
                                var_24 *= (+(min((((/* implicit */unsigned long long int) var_5)), (arr_23 [i_7] [i_7 + 2] [i_7 + 1] [i_7 + 2] [i_7] [i_7 + 2]))));
                            }
                            for (unsigned int i_10 = 3; i_10 < 22; i_10 += 1) 
                            {
                                var_25 = ((/* implicit */unsigned short) (~(0U)));
                                var_26 = ((/* implicit */unsigned short) ((int) 4159295183U));
                                var_27 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1794909784U))));
                                var_28 = ((/* implicit */unsigned long long int) arr_7 [i_8]);
                                var_29 = ((/* implicit */int) (unsigned short)46922);
                            }
                            for (unsigned int i_11 = 0; i_11 < 23; i_11 += 2) 
                            {
                                var_30 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_0 [i_7 + 2]))) << (((((((/* implicit */_Bool) ((int) 1609273171))) ? (((1384334025U) >> (((1458302431U) - (1458302407U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((0) == (676254436))))))) - (77U)))));
                                var_31 ^= ((/* implicit */unsigned long long int) (((+(4294967295U))) | (arr_11 [i_7 + 2] [i_7 + 2])));
                                var_32 = ((/* implicit */int) 1384334007U);
                            }
                            /* LoopSeq 2 */
                            for (unsigned short i_12 = 0; i_12 < 23; i_12 += 4) 
                            {
                                var_33 = ((/* implicit */int) ((((((/* implicit */_Bool) ((arr_7 [i_0]) / (((/* implicit */unsigned int) arr_15 [i_0] [i_7] [i_7] [10]))))) ? ((~(3699380287632128393ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (arr_22 [i_0] [i_1] [i_0] [i_8] [i_12] [i_0])))))) / (((/* implicit */unsigned long long int) arr_26 [i_12] [i_8] [1U] [i_7] [i_0] [i_0] [i_0]))));
                                var_34 = (unsigned short)4075;
                            }
                            for (unsigned short i_13 = 2; i_13 < 22; i_13 += 3) 
                            {
                                var_35 = ((/* implicit */int) (unsigned short)13321);
                                var_36 = arr_1 [i_0];
                                var_37 *= ((/* implicit */int) ((((/* implicit */int) (unsigned short)65526)) >= (((/* implicit */int) min((arr_17 [i_0] [i_13 - 1] [i_7 + 2] [i_8] [i_13] [i_7 + 2]), (arr_17 [i_8] [i_13 + 1] [18U] [18U] [i_13 - 2] [i_7 - 1]))))));
                                var_38 ^= ((/* implicit */unsigned short) arr_15 [i_13] [i_1] [i_1] [i_0]);
                                var_39 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_29 [i_13] [i_0] [i_7] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_35 [i_0] [i_1] [i_7] [i_7] [i_13 - 2])) : (arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) ((3446106455U) - (var_7)))) : (((((/* implicit */unsigned long long int) var_10)) * (((((/* implicit */_Bool) 4294967291U)) ? (arr_0 [21]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
                            }
                            var_40 = ((/* implicit */int) 4294967295U);
                        }
                    } 
                } 
                var_41 = ((/* implicit */unsigned int) ((int) 1384334025U));
            }
        } 
    } 
    var_42 = (unsigned short)52211;
    var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) ((((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_5)))) / (((/* implicit */int) var_4))))) > (((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) != (var_6)))))))));
}
