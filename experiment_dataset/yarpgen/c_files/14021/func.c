/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14021
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
    var_13 = ((/* implicit */signed char) var_3);
    var_14 = ((/* implicit */_Bool) ((signed char) ((var_8) >> (((((/* implicit */int) var_7)) - (64221))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
        var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            for (signed char i_3 = 1; i_3 < 9; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    {
                        var_16 *= ((/* implicit */_Bool) (-(var_8)));
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 4; i_5 < 7; i_5 += 2) 
                        {
                            var_17 = ((/* implicit */_Bool) (~(min((((long long int) arr_2 [i_1])), ((~(var_11)))))));
                            arr_17 [i_1] [i_2] [i_2] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */signed char) var_4);
                            var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned int) 4194303)) * (((((/* implicit */unsigned int) (+(4194293)))) * (((((/* implicit */_Bool) -4194299)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_11 [i_1] [i_2] [i_4] [i_5])))))));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            var_19 += ((/* implicit */signed char) (~(4194317)));
                            var_20 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_4)) ? (arr_13 [i_1]) : (((/* implicit */unsigned long long int) 1467355910))))));
                            var_21 = (!(((/* implicit */_Bool) arr_13 [i_3 + 1])));
                            var_22 *= ((/* implicit */unsigned long long int) var_4);
                        }
                        for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            arr_23 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((min((((/* implicit */int) arr_14 [i_3] [i_3] [i_2] [i_3] [i_3 - 1] [i_4])), (arr_20 [i_3 - 1] [i_3] [i_3 + 1]))) & (min((4194312), (((/* implicit */int) arr_21 [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_1]))))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) & (((/* implicit */int) arr_2 [i_3]))));
                            var_24 = ((/* implicit */_Bool) arr_21 [i_2] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3]);
                            var_25 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)8))))) ? (((((/* implicit */_Bool) arr_22 [i_2] [i_4] [i_3] [i_3] [i_2] [i_2] [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))) : (arr_9 [i_4] [i_2] [i_3 + 1] [i_4]))));
                        }
                        arr_24 [i_1] [i_2] [i_2] [i_4] = ((/* implicit */signed char) (+(((arr_2 [i_3]) ? (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)22)), (-453406022)))) : ((-(1090058545U)))))));
                        arr_25 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) var_4);
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */short) ((max((((4194313) & (((/* implicit */int) arr_4 [i_1] [i_1])))), (max((4194313), (((/* implicit */int) arr_4 [i_1] [i_1])))))) >> (((min((arr_18 [(_Bool)0] [i_1] [i_1]), (((/* implicit */int) arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [6U])))) + (991545301)))));
        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1])) ? ((-(arr_13 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_11)))))))));
        var_28 ^= ((/* implicit */unsigned int) max((max((((/* implicit */signed char) arr_6 [i_1] [i_1])), ((signed char)-76))), (((/* implicit */signed char) var_2))));
        arr_26 [i_1] |= ((_Bool) min((arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) (unsigned char)224)))))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_30 [(_Bool)1] [i_8] &= ((/* implicit */unsigned long long int) ((((-4194313) * (((/* implicit */int) arr_27 [i_8])))) << ((((~(((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) var_6)) + (16886))))))) + (3)))));
        /* LoopNest 3 */
        for (signed char i_9 = 0; i_9 < 15; i_9 += 1) 
        {
            for (signed char i_10 = 0; i_10 < 15; i_10 += 2) 
            {
                for (signed char i_11 = 1; i_11 < 14; i_11 += 4) 
                {
                    {
                        arr_37 [i_8] [i_8] [i_9] [i_10] [i_10] [i_8] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) | (((/* implicit */int) arr_34 [i_8]))))), (((((/* implicit */_Bool) arr_34 [i_8])) ? (728526005U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_8] [i_9] [i_9])))))))), (((((((/* implicit */_Bool) var_12)) ? (arr_29 [i_8]) : (((/* implicit */unsigned long long int) arr_36 [i_11] [i_9] [i_10] [i_11] [i_9])))) * (((/* implicit */unsigned long long int) (-(arr_36 [i_8] [i_9] [i_11] [i_11] [i_9]))))))));
                        arr_38 [i_8] [i_9] [i_8] [i_11] = ((/* implicit */unsigned int) ((unsigned char) min((((/* implicit */unsigned long long int) arr_36 [i_8] [i_11 - 1] [i_11] [i_11] [i_11 - 1])), (max((((/* implicit */unsigned long long int) arr_35 [i_8] [i_8] [i_10] [i_11])), (0ULL))))));
                        var_29 = (!(((/* implicit */_Bool) ((unsigned short) (short)0))));
                        arr_39 [i_8] [i_11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) arr_36 [i_11] [i_10] [i_9] [i_9] [i_8])))));
                    }
                } 
            } 
        } 
        var_30 *= ((/* implicit */signed char) ((((((/* implicit */int) var_6)) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) min((1321339180U), (3566441290U)))))))));
    }
    var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) var_3))));
}
