/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114214
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            arr_5 [i_0] [6U] |= ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [(unsigned short)8] [i_1]) : (arr_1 [i_0] [i_0])));
            arr_6 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((arr_3 [i_0] [i_1]) + (9223372036854775807LL))) << (((((arr_3 [i_1] [i_0]) + (6935751112803188369LL))) - (56LL)))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        {
                            var_18 -= ((/* implicit */int) ((unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_7 [14] [i_1] [i_2 - 1] [(unsigned short)16])) : (149429834))));
                            var_19 = ((((/* implicit */int) ((_Bool) arr_11 [i_1] [(_Bool)1] [i_3] [i_4]))) < (((/* implicit */int) (_Bool)1)));
                        }
                    } 
                } 
                arr_17 [(unsigned short)0] [(unsigned short)0] |= ((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_1] [i_0]);
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_12 [i_2 - 1] [i_1] [i_2] [i_2]))));
            }
        }
        for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            var_21 *= ((/* implicit */_Bool) arr_4 [i_0] [i_5]);
            arr_20 [i_0] [17LL] [17LL] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)47549)))))));
        }
        /* LoopSeq 1 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_7 = 1; i_7 < 23; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_22 ^= ((((/* implicit */_Bool) 903956858)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 5570856329565459392LL)))));
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned short) ((((((var_3) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)13719)) - (13719))))) < (((/* implicit */long long int) arr_18 [i_7] [i_7] [i_7 + 1]))));
                            arr_30 [i_6] [i_9] = ((/* implicit */_Bool) var_5);
                            arr_31 [i_0] [i_6] [i_9] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [(_Bool)1] [i_8])) ? (((/* implicit */long long int) ((unsigned int) (unsigned short)63150))) : (var_15)));
                        }
                    }
                } 
            } 
            arr_32 [(unsigned short)18] [i_0] [(unsigned short)18] |= ((/* implicit */unsigned int) ((unsigned short) -903956859));
        }
        /* LoopSeq 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_37 [i_0] [i_0] [23] = ((/* implicit */int) var_7);
            arr_38 [i_10] [i_0] = (!(((/* implicit */_Bool) arr_19 [3])));
        }
        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) 
        {
            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_11] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_16)));
            var_25 = ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [i_0]);
            arr_41 [i_0] [i_0] [i_0] = ((/* implicit */int) ((arr_39 [i_0]) ? (((/* implicit */unsigned int) arr_27 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [(unsigned short)14])) : (arr_21 [i_0] [i_0])));
            arr_42 [5] [7] |= ((/* implicit */unsigned short) (!((_Bool)0)));
            arr_43 [(unsigned short)22] = ((/* implicit */_Bool) var_8);
        }
    }
    var_26 = ((/* implicit */long long int) var_14);
    var_27 = ((/* implicit */unsigned int) var_7);
    var_28 = ((/* implicit */_Bool) (unsigned short)33538);
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_12 = 3; i_12 < 14; i_12 += 1) 
    {
        /* LoopNest 3 */
        for (int i_13 = 2; i_13 < 14; i_13 += 3) 
        {
            for (int i_14 = 2; i_14 < 14; i_14 += 1) 
            {
                for (int i_15 = 4; i_15 < 15; i_15 += 3) 
                {
                    {
                        arr_53 [(unsigned short)6] |= arr_19 [i_12 - 2];
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -903956874)) ? (-8386296927231341103LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_18 [i_12 + 2] [7] [21])))) : (var_17)));
                        arr_54 [i_12] [i_13] [i_14 + 2] [i_13] = ((/* implicit */_Bool) ((arr_12 [i_13 - 1] [i_13] [i_14 + 3] [i_15]) ? (((/* implicit */int) ((-5570856329565459393LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45580)))))) : (((/* implicit */int) ((-7005322471576546922LL) < (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */_Bool) ((((/* implicit */int) arr_40 [i_12] [i_12] [i_12])) << (((arr_51 [i_12 - 1] [i_12] [i_12] [i_12]) - (2705474770U)))));
        arr_55 [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_12] [i_12 - 2] [i_12] [4] [i_12 - 2])) ? (((/* implicit */int) arr_26 [i_12] [i_12] [i_12] [0] [i_12 - 3])) : (((/* implicit */int) arr_26 [4] [i_12] [i_12] [16] [i_12 - 1]))));
    }
    for (long long int i_16 = 2; i_16 < 13; i_16 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_17 = 1; i_17 < 13; i_17 += 1) 
        {
            arr_61 [i_16] = ((/* implicit */unsigned int) ((unsigned short) var_3));
            var_31 = ((/* implicit */int) arr_0 [i_16]);
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
        {
            var_32 = min((((((/* implicit */_Bool) (unsigned short)2386)) ? (((((/* implicit */_Bool) arr_34 [i_16] [i_16] [i_18])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((/* implicit */int) var_11))))), (-8471705872874334633LL));
            arr_66 [i_16] [11] [i_16] = max((((((/* implicit */_Bool) arr_27 [i_16 - 2] [i_16 - 1] [i_16 - 2] [i_16 + 1] [i_16 + 1] [i_16])) ? (((arr_23 [i_16] [20] [i_16]) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_14 [(unsigned short)19] [(unsigned short)19] [i_16] [(unsigned short)19] [i_18]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */long long int) ((334413125U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)255)))))));
            arr_67 [i_16] [i_18] [i_16] = ((/* implicit */int) var_10);
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
        {
            arr_71 [i_16] [i_16] = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_16] [i_19]))) < (arr_21 [i_16] [i_16])))), ((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << ((((((((-9223372036854775807LL - 1LL)) - (-9223372036854775763LL))) + (80LL))) - (35LL))))))) < (((/* implicit */long long int) (-(((/* implicit */int) arr_40 [i_16 + 1] [i_19] [i_19])))))));
            arr_72 [(_Bool)1] [(_Bool)1] |= ((/* implicit */int) arr_36 [i_16 - 2] [i_19] [i_16 - 2]);
        }
        arr_73 [i_16] = (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [0] [(_Bool)1] [i_16] [(_Bool)1]))) : (arr_14 [i_16] [i_16] [i_16] [i_16] [i_16])))));
    }
    for (int i_20 = 2; i_20 < 24; i_20 += 3) 
    {
        var_33 = ((/* implicit */unsigned short) (_Bool)0);
        arr_76 [i_20] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4881198803197892971LL)) ? (((((/* implicit */_Bool) var_12)) ? (arr_74 [i_20 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) arr_74 [i_20 + 1])) ? (arr_74 [i_20 - 1]) : (arr_74 [i_20 - 1])))));
    }
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        var_34 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) ((-7273317825120400455LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) < (max((arr_46 [i_21] [(unsigned short)6]), (((/* implicit */int) arr_79 [i_21] [i_21]))))));
        arr_80 [i_21] [i_21] = ((/* implicit */int) (-(max((((var_11) ? (arr_51 [i_21] [i_21] [i_21] [0LL]) : (((/* implicit */unsigned int) 1639200399)))), (((/* implicit */unsigned int) arr_49 [8LL] [i_21] [i_21] [8LL]))))));
        var_35 = ((/* implicit */int) 9223372036854775807LL);
        arr_81 [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7005322471576546921LL)) ? (((/* implicit */long long int) 1339605639)) : (9223372036854775807LL)));
        var_36 -= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -849301473)) ? (arr_28 [i_21] [i_21] [i_21] [10LL] [i_21]) : (903956873)))));
    }
}
