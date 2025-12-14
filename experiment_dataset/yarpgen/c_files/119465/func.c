/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119465
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
    var_14 = ((/* implicit */long long int) (-(var_7)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_7 [i_0] [i_0 - 1] [i_3]) : (((/* implicit */long long int) arr_4 [i_1 + 1] [i_1]))));
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (~(((/* implicit */int) var_8)))))));
                            arr_16 [i_4 + 2] [i_3] [i_3] [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)26)) << (((764152138U) - (764152134U)))));
                            arr_17 [i_0] [i_0] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */signed char) var_13);
                        }
                        var_17 = ((/* implicit */unsigned long long int) (unsigned short)5);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            var_18 = ((/* implicit */long long int) (-((~(arr_12 [i_0] [(_Bool)1] [12ULL] [(_Bool)1] [12ULL] [i_5])))));
            var_19 = ((/* implicit */unsigned int) 9530951689624439242ULL);
            var_20 = ((/* implicit */unsigned char) ((arr_7 [i_0 + 1] [(_Bool)1] [i_0 - 1]) >= (((/* implicit */long long int) (~(arr_9 [i_0] [1ULL]))))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            var_21 = ((/* implicit */long long int) ((_Bool) -1227346634));
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_22 = ((/* implicit */_Bool) ((arr_5 [i_0] [(unsigned char)10] [i_0 - 1]) << (((/* implicit */int) arr_3 [i_0 + 1]))));
                var_23 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_12)))) && (((/* implicit */_Bool) (~(arr_5 [i_6] [i_6] [i_6]))))));
            }
        }
    }
    for (long long int i_8 = 1; i_8 < 12; i_8 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 13; i_9 += 1) 
        {
            for (int i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                {
                    arr_32 [i_10] [i_10] [(short)7] [(short)7] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((var_7) & (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(_Bool)1] [i_9] [i_10] [(_Bool)1] [1] [(_Bool)1]))))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                    arr_33 [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned long long int) -1227346630))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_9), (var_9))))) : (((4257549635U) / (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) << ((((~(((/* implicit */int) ((unsigned char) var_4))))) + (55)))));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_8])) ? (min((((/* implicit */unsigned int) arr_14 [i_10] [i_10] [i_9] [i_9] [i_9] [i_8])), ((+(var_2))))) : (((var_7) >> (((/* implicit */int) arr_3 [i_10]))))));
                    var_25 = ((/* implicit */int) arr_29 [i_8]);
                    var_26 = min((((signed char) (-(((/* implicit */int) arr_25 [i_10] [6LL] [i_10]))))), (arr_14 [(signed char)12] [(signed char)12] [(signed char)12] [i_8] [i_9] [5ULL]));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 2) 
        {
            arr_37 [(_Bool)1] = ((/* implicit */unsigned char) ((((arr_12 [i_8] [i_8] [i_8] [i_8] [i_8] [i_11]) | (1227346634))) * (((/* implicit */int) (!(((/* implicit */_Bool) 7892502280946922284LL)))))));
            arr_38 [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_8] [i_8 + 1] [i_8 + 1] [i_8] [(unsigned short)12] [i_11])) ? (arr_23 [i_8] [i_8 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) || (((/* implicit */_Bool) arr_2 [i_8]))))))));
            var_27 = ((/* implicit */int) 0U);
            arr_39 [i_8] = ((((/* implicit */_Bool) arr_2 [i_8])) ? (((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-122))) : (4294967294U))) : (((/* implicit */unsigned int) ((var_4) << (((((/* implicit */int) (unsigned short)14)) - (14)))))));
        }
        arr_40 [i_8 + 1] = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)33))))) : ((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((arr_28 [i_8]) + (2039505572)))))))));
    }
    for (unsigned short i_12 = 0; i_12 < 14; i_12 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_12] [(unsigned short)6]))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_41 [i_12])) : (((/* implicit */int) var_6))))) / (var_2)))));
        arr_43 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_42 [i_12] [(unsigned short)5])), (84001174U))), (((/* implicit */unsigned int) arr_42 [i_12] [i_12]))))) ? (((3801314858U) + (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) (+(min((((/* implicit */int) var_13)), (var_1))))))));
        var_29 = ((/* implicit */signed char) ((1612268599U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32)))));
    }
    /* vectorizable */
    for (unsigned short i_13 = 0; i_13 < 14; i_13 += 3) /* same iter space */
    {
        arr_46 [i_13] = ((((/* implicit */unsigned long long int) var_5)) < (arr_45 [i_13] [i_13]));
        var_30 = ((/* implicit */signed char) arr_45 [i_13] [i_13]);
        var_31 = ((/* implicit */long long int) arr_41 [i_13]);
        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (signed char)-124))));
    }
}
