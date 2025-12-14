/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172852
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
    var_13 = ((((/* implicit */_Bool) min((((var_12) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) max((4065424032U), (((/* implicit */unsigned int) (signed char)0)))))))) ? (((/* implicit */int) (unsigned short)38122)) : (((/* implicit */int) (short)1023)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) max((min((arr_1 [i_0]), (arr_1 [i_0]))), (((/* implicit */int) ((unsigned char) ((signed char) 1084175119U))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_7 [(_Bool)1] [i_1] [i_1] = ((/* implicit */long long int) max((((((unsigned int) var_0)) | (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_8)))))), (((/* implicit */unsigned int) ((unsigned short) ((unsigned int) 2249233129U))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) min((((/* implicit */long long int) (~(((/* implicit */int) (signed char)0))))), (min((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0] [i_2])), (6426853445275466616LL)))));
                }
            } 
        } 
        var_14 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])), (var_0)))) + (((((/* implicit */_Bool) (short)1023)) ? (2279736975269932267ULL) : (972365426587465460ULL)))));
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned int i_5 = 2; i_5 < 9; i_5 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            var_15 = ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((arr_14 [i_0] [i_0] [i_0] [i_4] [i_3] [i_6]) ? (((/* implicit */int) arr_9 [i_3] [i_3] [i_3])) : (((/* implicit */int) (_Bool)1))))));
                            var_16 &= ((/* implicit */short) ((arr_14 [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5 - 1] [i_0] [i_5 - 2]) ? (((/* implicit */int) arr_13 [i_5 + 2] [i_5 - 1] [i_5 - 1] [i_5 - 2])) : (((/* implicit */int) arr_13 [i_5 + 1] [i_5] [i_5 - 1] [i_5 + 2]))));
                            var_17 = ((/* implicit */int) ((unsigned short) arr_5 [8ULL] [i_3] [i_3] [i_5 - 2]));
                            var_18 = ((/* implicit */long long int) var_1);
                        }
                        var_19 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((_Bool) (unsigned char)28))), (min((((((/* implicit */_Bool) arr_12 [i_5] [i_3] [i_3] [i_5 + 2])) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [i_4] [i_5 + 1])) : (9007199254675456ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_10)))))))));
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)49778)) | (((/* implicit */int) (short)1023))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 11; i_7 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_27 [i_9] [i_9] = ((/* implicit */_Bool) var_9);
                    arr_28 [i_7] [i_9] [i_8] [i_9] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1])));
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 1; i_10 < 7; i_10 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_25 [i_7] [i_8]))));
                        arr_31 [i_7] [i_8] [i_9] [i_9] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_18 [i_9] [i_8])) ? (-7694654488617591659LL) : (((/* implicit */long long int) arr_1 [i_8])))) + (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_9] [i_9] [i_9] [i_9 - 1])))));
                    }
                    /* LoopSeq 2 */
                    for (int i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)142))))) ? (((/* implicit */int) arr_13 [i_9 - 1] [i_9 - 1] [5] [i_8])) : (((((/* implicit */_Bool) arr_30 [i_7] [i_8] [i_9 - 1] [i_11])) ? (((/* implicit */int) (signed char)-1)) : (arr_12 [i_9] [i_11] [i_11] [i_11])))));
                        arr_34 [i_11] [i_9] [i_9] [i_7] = ((((/* implicit */_Bool) arr_10 [i_8] [i_8] [i_7])) ? (((/* implicit */int) arr_14 [i_7] [i_7] [i_8] [i_9] [i_9] [(signed char)0])) : (((/* implicit */int) ((unsigned short) (short)1005))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_13 = 1; i_13 < 8; i_13 += 1) /* same iter space */
                        {
                            arr_39 [i_12] [i_8] [i_12] [i_12] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_29 [i_7] [i_7]))) ? (((((/* implicit */_Bool) arr_18 [i_7] [i_9])) ? (arr_16 [i_12] [(_Bool)0] [i_12] [i_12]) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (_Bool)0))));
                            var_23 = ((/* implicit */int) ((_Bool) var_7));
                            arr_40 [i_9] [i_8] [i_9] [i_9] [i_13 + 2] = ((/* implicit */signed char) ((arr_13 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1]) ? (((/* implicit */int) arr_13 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1])) : (((/* implicit */int) arr_6 [i_9 - 1] [i_9 - 1] [i_9 - 1]))));
                            arr_41 [i_13] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) 2764793720U))) ? (((long long int) 0)) : (((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_12])) % (var_8))))));
                        }
                        for (unsigned short i_14 = 1; i_14 < 8; i_14 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) 68074472)) ? (((/* implicit */unsigned long long int) var_10)) : (var_4))));
                            var_25 = ((/* implicit */long long int) arr_19 [i_9]);
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((_Bool) ((signed char) arr_13 [i_7] [i_8] [i_9] [i_12]))))));
                            arr_44 [i_9] [i_8] [i_14 + 1] [i_12] [i_14 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0)) ? (((int) (unsigned short)10556)) : (((/* implicit */int) (unsigned short)27407))));
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_29 [i_9] [i_8])))));
                            var_28 = ((/* implicit */int) arr_4 [i_9] [i_9] [i_15]);
                            arr_47 [i_9] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_7] [i_8] [i_9] [i_9 - 1] [i_15])) ? (((/* implicit */int) arr_17 [i_7] [i_8] [i_9] [i_9 - 1] [i_12])) : (((/* implicit */int) arr_17 [i_9 - 1] [i_9] [i_15] [i_9 - 1] [i_15]))));
                            var_29 = ((/* implicit */unsigned short) ((_Bool) arr_30 [i_7] [i_8] [i_9] [i_12]));
                        }
                        for (long long int i_16 = 4; i_16 < 10; i_16 += 2) 
                        {
                            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) -4740809460112629096LL))));
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_9] [i_9 - 1] [i_9 - 1])) ? (((/* implicit */unsigned long long int) ((int) (_Bool)1))) : (var_4))))));
                            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_2)))) % (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_8)) : (arr_10 [i_7] [i_12] [i_9])))));
                            arr_51 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((arr_4 [i_7] [i_9] [i_7]) < (((/* implicit */long long int) ((int) -4321883078453708120LL)))));
                        }
                        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_7] [i_7] [i_7] [i_8] [i_12] [i_12])) * (((/* implicit */int) (unsigned short)59409)))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 3) 
                        {
                            arr_54 [i_7] [i_8] [i_9] [i_12] [i_17] [i_12] [i_9] = ((/* implicit */_Bool) ((((/* implicit */long long int) var_0)) ^ (((((/* implicit */_Bool) 6512135276406372335ULL)) ? (arr_38 [i_7] [6] [i_7] [i_12] [i_17]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                            var_34 &= ((/* implicit */int) ((unsigned long long int) ((unsigned short) var_2)));
                        }
                        for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 1) 
                        {
                            var_35 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [(unsigned short)7] [i_8] [i_8] [i_12] [i_18] [i_9] [i_8])))))));
                            var_36 = (_Bool)0;
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (4294967284U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)146)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_9 - 1] [i_8] [i_18] [i_12] [i_9] [i_9 - 1]))) : (((((/* implicit */_Bool) var_4)) ? (arr_57 [i_7] [i_8] [i_9] [i_12] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_7] [i_7])))))));
                        }
                        var_38 = ((/* implicit */signed char) arr_50 [i_7] [i_7] [i_8] [i_8] [i_9 - 1] [i_12]);
                    }
                }
            } 
        } 
        var_39 = ((/* implicit */int) ((long long int) 8989607068696576ULL));
        arr_58 [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (arr_56 [i_7] [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */long long int) var_1))));
        arr_59 [i_7] = ((/* implicit */int) ((unsigned int) arr_52 [i_7] [i_7] [i_7] [i_7] [i_7]));
    }
}
