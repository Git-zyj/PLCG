/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176880
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_7 [i_1] [3U] [i_1] = ((/* implicit */_Bool) var_9);
            var_17 = ((((/* implicit */_Bool) 2024534497U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14))))) : (192207817U));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned int) arr_6 [i_0]);
            arr_10 [i_2] = 4102759465U;
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_13 [i_3] &= ((/* implicit */unsigned char) var_6);
            var_19 |= ((/* implicit */long long int) arr_11 [i_0] [i_3]);
        }
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            for (short i_5 = 3; i_5 < 10; i_5 += 2) 
            {
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_20 = ((/* implicit */signed char) arr_17 [i_6 - 1]);
                        arr_22 [i_4] &= ((/* implicit */signed char) arr_19 [i_0] [i_4] [i_0]);
                        var_21 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) 879032542U))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            arr_25 [i_0] [(unsigned char)0] [i_4] [i_0] [i_6] [5LL] [i_5] = ((/* implicit */_Bool) arr_12 [i_0] [4U] [i_5]);
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_18 [i_4] [i_5] [i_5] [i_6]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_6 [i_0])))) ? (((/* implicit */unsigned long long int) arr_17 [i_6 - 1])) : (((((/* implicit */_Bool) 2532060606U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-56))) : (arr_6 [i_0]))))))));
                            var_23 = ((/* implicit */signed char) min((var_23), ((signed char)120)));
                            var_24 = ((/* implicit */unsigned short) 4102759499U);
                            arr_26 [i_5] = ((/* implicit */unsigned char) var_12);
                        }
                    }
                } 
            } 
        } 
    }
    for (short i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
    {
        arr_29 [i_8] = ((/* implicit */unsigned long long int) 4294967295U);
        var_25 ^= ((/* implicit */unsigned int) max((arr_11 [i_8] [i_8]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) min((var_9), (((/* implicit */int) arr_16 [i_8] [i_8] [i_8] [i_8]))))) : (2115076515U))))));
        var_26 = ((/* implicit */short) (~(((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_8]))) : (arr_23 [(unsigned short)8] [i_8] [(unsigned short)0] [i_8])))));
    }
    for (short i_9 = 0; i_9 < 12; i_9 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
            {
                {
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) var_1))));
                    var_28 |= ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_30 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_11] [i_10] [i_11]))) : (var_4)))))));
                    arr_39 [i_10] [i_10] [0U] [i_9] = ((/* implicit */int) var_8);
                    arr_40 [i_9] [i_10] [i_11] [i_9] |= ((/* implicit */unsigned short) var_4);
                    var_29 = ((/* implicit */unsigned int) (+(-241512671)));
                }
            } 
        } 
        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_1)), (arr_19 [i_9] [i_9] [i_9])))) ? (((((/* implicit */_Bool) arr_1 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_17 [i_9]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? ((~((+(((/* implicit */int) (signed char)120)))))) : (67961352))))));
        var_31 = ((/* implicit */_Bool) var_8);
        arr_41 [i_9] [i_9] = ((/* implicit */unsigned short) ((arr_20 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) ? (arr_17 [i_9]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_3 [i_9]), (((/* implicit */unsigned char) arr_15 [i_9]))))) ? ((~(((/* implicit */int) arr_36 [i_9] [i_9] [i_9] [i_9])))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_24 [0] [i_9] [i_9] [i_9] [i_9])), (var_5)))))))));
        arr_42 [(signed char)3] |= ((/* implicit */unsigned int) var_1);
    }
    var_32 |= var_3;
    var_33 ^= var_14;
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 24; i_12 += 1) 
    {
        for (signed char i_13 = 3; i_13 < 22; i_13 += 4) 
        {
            for (int i_14 = 1; i_14 < 23; i_14 += 1) 
            {
                {
                    var_34 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((4102759465U), (517219345U)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13))));
                    var_35 &= ((/* implicit */signed char) min(((((!(((/* implicit */_Bool) arr_43 [20U])))) ? (var_16) : ((~(var_16))))), (((/* implicit */unsigned long long int) -67961353))));
                    arr_50 [i_12] [i_12] [i_14] [i_12] = ((/* implicit */long long int) (~(((/* implicit */int) var_11))));
                    var_36 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [6U]))) : (3372322128U)))) ? (((/* implicit */int) arr_44 [(short)22])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_12] [i_14])))));
                }
            } 
        } 
    } 
    var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) var_4))));
}
