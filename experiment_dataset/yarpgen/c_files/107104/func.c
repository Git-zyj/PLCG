/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107104
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)64512)) || (((/* implicit */_Bool) (unsigned short)34161))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        arr_9 [i_0] = ((((/* implicit */_Bool) (~((~(arr_4 [i_0] [i_1])))))) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3])) : (((((((/* implicit */_Bool) (unsigned short)1023)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_6 [i_2])))) & (((/* implicit */int) arr_3 [i_0] [17LL] [i_2])))));
                        arr_10 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_3] [(unsigned short)20] [i_0] [i_0])) ? (6038846029826103822LL) : (((/* implicit */long long int) ((/* implicit */int) min((arr_7 [i_0] [i_1] [(unsigned char)17] [i_2] [i_2]), ((unsigned short)24787)))))));
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-124)) || (((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) arr_6 [i_0]))))))))));
                            arr_15 [i_2] [i_1] [i_0] [i_3] [i_0] [i_4] = ((/* implicit */short) max((((/* implicit */long long int) min((((unsigned int) arr_3 [i_0] [i_0] [i_2])), (((/* implicit */unsigned int) arr_5 [i_0] [i_2] [i_3]))))), ((-(((arr_0 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
                        }
                        for (long long int i_5 = 2; i_5 < 19; i_5 += 3) 
                        {
                            arr_19 [i_0] [14U] [i_0] [i_3] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))));
                            var_16 = ((/* implicit */unsigned short) (signed char)-28);
                            arr_20 [i_0] [i_0] [i_2] [i_3] [i_5 + 2] [i_3] [i_1] = ((/* implicit */unsigned short) (-(max((max((((/* implicit */unsigned int) (unsigned short)1023)), (4152209289U))), (((/* implicit */unsigned int) arr_14 [i_0] [i_5] [i_5] [(unsigned char)20] [i_5 + 1]))))));
                        }
                        for (unsigned int i_6 = 2; i_6 < 17; i_6 += 2) 
                        {
                            arr_23 [i_3] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                            var_17 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (short)316))) / (max((((/* implicit */long long int) 1859834800U)), (-4611686018427387904LL))))) <= (((/* implicit */long long int) arr_5 [i_6 + 3] [i_6 + 1] [i_6 + 2]))));
                        }
                    }
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                        {
                            var_18 ^= ((/* implicit */long long int) (signed char)-93);
                            arr_30 [i_8] [i_8] [i_2] [i_7] [i_8] [i_7] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_7] [i_2])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_7] [i_8])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_7] [i_8]))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1032)) ? (6038846029826103822LL) : (6038846029826103822LL)))) ? (((((/* implicit */_Bool) 18014398375264256LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [(unsigned char)1] [i_0] [i_7]))) : (arr_4 [i_0] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U))))))));
                            arr_31 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_1] [i_2] [i_0] [i_8])) ? (arr_26 [i_0] [i_1] [i_0] [i_8]) : (arr_26 [i_8] [i_0] [i_0] [i_0])));
                        }
                        var_20 += ((/* implicit */signed char) arr_12 [i_0] [i_1] [i_2] [i_7] [i_2] [i_7] [i_0]);
                        arr_32 [i_0] [i_0] [17U] [i_7] = ((/* implicit */unsigned int) (~(((/* implicit */int) (((-(((/* implicit */int) (signed char)-28)))) != (((/* implicit */int) (unsigned short)1002)))))));
                    }
                    arr_33 [i_0] [i_1] [i_2] [(unsigned char)14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned short) arr_14 [i_0] [i_2] [i_0] [i_1] [i_2])), ((unsigned short)1023))), ((unsigned short)0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19))) : (min((arr_24 [i_0] [i_2] [i_2] [i_2] [i_2]), (arr_24 [i_0] [i_1] [i_2] [i_0] [i_2])))));
                    /* LoopSeq 1 */
                    for (signed char i_9 = 1; i_9 < 18; i_9 += 4) 
                    {
                        var_21 -= ((/* implicit */short) ((((((/* implicit */_Bool) arr_36 [i_2] [i_9 + 2] [i_0] [i_9 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [0ULL] [i_1] [i_9 + 2]))) : (arr_36 [i_2] [i_9 - 1] [i_2] [i_9]))) >> (((((/* implicit */int) arr_37 [(unsigned char)18] [i_1] [i_9 + 1])) - (88)))));
                        var_22 -= ((/* implicit */short) ((((/* implicit */long long int) min(((+(((/* implicit */int) (unsigned short)1023)))), ((+(((/* implicit */int) (unsigned short)1054))))))) * (((((/* implicit */long long int) ((/* implicit */int) arr_17 [(unsigned short)18] [(unsigned short)18] [i_1] [i_1] [(signed char)20] [i_1] [i_9]))) * (((arr_0 [(unsigned char)14]) / (((/* implicit */long long int) arr_26 [i_9] [(unsigned short)2] [(unsigned short)2] [(signed char)20]))))))));
                        arr_38 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)32758)) >> (((((/* implicit */int) (signed char)-7)) + (12)))));
                    }
                }
            } 
        } 
        var_23 = ((/* implicit */signed char) (-(min(((~(((/* implicit */int) (unsigned char)101)))), (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
    for (unsigned int i_10 = 3; i_10 < 16; i_10 += 1) 
    {
        arr_41 [(unsigned short)4] [i_10] = (unsigned short)1033;
        var_24 = ((/* implicit */signed char) ((max((((/* implicit */long long int) min((var_1), ((unsigned short)11)))), (6038846029826103798LL))) >= (((/* implicit */long long int) ((/* implicit */int) ((signed char) 252123572U))))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_11 = 0; i_11 < 16; i_11 += 1) /* same iter space */
    {
        arr_44 [i_11] = ((/* implicit */signed char) arr_24 [(signed char)10] [i_11] [i_11] [i_11] [i_11]);
        var_25 = arr_34 [(unsigned short)6] [i_11] [i_11] [(unsigned short)4];
        var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) arr_0 [i_11])))));
        arr_45 [i_11] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */int) (short)-80)) : ((-(((/* implicit */int) var_5))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_11] [i_11])) ? (((/* implicit */int) (unsigned short)1031)) : (((/* implicit */int) arr_3 [(unsigned char)1] [i_11] [(unsigned char)1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_11] [0U] [i_11] [i_11]))) : (13581260659434263500ULL)))));
        var_27 = ((/* implicit */unsigned short) (~((+((+(((/* implicit */int) var_8))))))));
    }
    for (unsigned int i_12 = 0; i_12 < 16; i_12 += 1) /* same iter space */
    {
        var_28 *= (~(((((/* implicit */int) (signed char)-65)) / (((/* implicit */int) (short)23532)))));
        var_29 = ((/* implicit */long long int) arr_28 [i_12] [(short)0] [i_12] [i_12] [i_12] [i_12] [i_12]);
        arr_48 [i_12] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)8)) ? (((((/* implicit */int) (unsigned short)1032)) << (((((/* implicit */int) (short)-16032)) + (16035))))) : (((((/* implicit */_Bool) arr_7 [i_12] [i_12] [i_12] [i_12] [i_12])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)-32749))))))));
    }
}
