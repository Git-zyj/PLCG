/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112454
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
    var_17 = ((signed char) ((10034980151864786073ULL) + (10034980151864786073ULL)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_18 = ((/* implicit */long long int) (+(3296539526U)));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
                    {
                        arr_10 [i_2] [i_1] [10U] [i_1] = (~(((int) 3296539520U)));
                        arr_11 [i_0] [i_2] [i_2] = ((/* implicit */int) ((_Bool) 10034980151864786073ULL));
                        var_19 = ((/* implicit */signed char) (+((~(3296539520U)))));
                        var_20 = ((/* implicit */unsigned int) ((unsigned char) arr_5 [i_0] [i_0] [i_0]));
                        var_21 = ((/* implicit */unsigned short) (-(3296539530U)));
                    }
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            arr_16 [i_2] = -70045358;
                            arr_17 [i_0] [i_1] [17LL] [i_2] [i_5] = ((/* implicit */int) arr_9 [i_0] [i_2]);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */int) ((((arr_4 [(_Bool)1]) - (((/* implicit */int) (signed char)44)))) < (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_2]))));
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (~((+(arr_4 [i_0]))))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_2] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (arr_6 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                            arr_26 [i_0] [(unsigned char)8] [i_2] [i_0] = ((/* implicit */unsigned char) arr_20 [i_0] [i_2]);
                            arr_27 [i_0] [i_0] [i_0] [i_2] [i_0] [2ULL] [i_0] = ((/* implicit */long long int) (-(arr_22 [i_0] [i_0] [i_0] [i_2] [i_0])));
                            arr_28 [i_0] [i_1] [i_2] [i_2] [i_4] [i_4] [i_2] = ((/* implicit */signed char) arr_1 [i_2]);
                        }
                        arr_29 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((long long int) 3296539526U));
                        arr_30 [i_4] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) (-(arr_3 [8U] [i_0])));
                        var_24 = ((/* implicit */unsigned int) ((_Bool) arr_22 [i_0] [i_1] [i_2] [i_2] [i_4]));
                    }
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (~(arr_3 [i_2] [i_2]))))));
                }
            } 
        } 
    }
    for (long long int i_8 = 0; i_8 < 23; i_8 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            for (short i_10 = 1; i_10 < 22; i_10 += 1) 
            {
                {
                    arr_40 [i_8] [i_9] [i_9] [i_8] = ((/* implicit */unsigned short) 10034980151864786073ULL);
                    arr_41 [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_38 [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10 - 1]))))));
                    var_26 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_38 [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 - 1]))) + (((/* implicit */int) max((arr_38 [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 - 1]), (arr_38 [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 - 1]))))));
                    arr_42 [i_8] [i_9] = ((/* implicit */unsigned char) ((int) ((int) min((arr_38 [i_10] [i_9] [i_8] [i_8]), (((/* implicit */unsigned char) arr_36 [i_9] [i_9]))))));
                }
            } 
        } 
        arr_43 [i_8] = ((/* implicit */signed char) max((((/* implicit */long long int) min((((/* implicit */unsigned int) var_1)), (8U)))), ((+(arr_33 [i_8])))));
    }
    for (long long int i_11 = 0; i_11 < 23; i_11 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_12 = 0; i_12 < 23; i_12 += 2) 
        {
            for (unsigned short i_13 = 0; i_13 < 23; i_13 += 2) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_36 [i_11] [i_12])) & (((/* implicit */int) arr_35 [i_12]))))), (((3296539526U) / (998427775U)))))) ? ((-(arr_52 [(signed char)13]))) : (((min((((/* implicit */unsigned int) (unsigned short)0)), (1465019664U))) >> ((((+(6928164459718811003LL))) - (6928164459718810984LL)))))));
                        arr_57 [i_11] [i_11] [i_14] [i_13] [i_12] [i_11] = ((/* implicit */_Bool) ((long long int) max(((+(((/* implicit */int) arr_38 [(short)12] [i_12] [i_13] [i_12])))), (((/* implicit */int) (unsigned short)30204)))));
                    }
                } 
            } 
        } 
        var_28 ^= ((/* implicit */short) ((((int) (signed char)10)) << (((((int) 3296539526U)) + (998427771)))));
        var_29 = (~((+(-2200041921883112512LL))));
        arr_58 [i_11] = ((/* implicit */unsigned char) ((unsigned long long int) min((((((/* implicit */_Bool) 3296539537U)) ? (((/* implicit */int) (unsigned short)16494)) : (((/* implicit */int) arr_51 [(short)13])))), (min((((/* implicit */int) arr_53 [i_11] [13LL] [i_11])), (395368357))))));
        var_30 = ((/* implicit */int) max(((+(max((8411763921844765535ULL), (((/* implicit */unsigned long long int) arr_39 [i_11] [i_11] [i_11] [i_11])))))), (((/* implicit */unsigned long long int) 3786190121U))));
    }
    for (unsigned short i_15 = 4; i_15 < 20; i_15 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_16 = 0; i_16 < 22; i_16 += 2) 
        {
            for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
            {
                {
                    var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) -395368357))));
                    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_17 - 1] [i_17 - 1] [i_17 - 1])) ? (max((arr_64 [i_17] [i_16] [i_16]), (((/* implicit */unsigned long long int) 6928164459718811003LL)))) : (((/* implicit */unsigned long long int) (+(arr_33 [i_15 - 2]))))))) ? (((/* implicit */long long int) 0U)) : (((((/* implicit */_Bool) arr_62 [i_16] [i_16] [i_17 - 1])) ? (((/* implicit */long long int) ((int) var_0))) : (arr_34 [i_15 - 2] [i_16])))));
                    var_33 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) arr_39 [i_15 - 1] [i_17 - 1] [i_15] [i_17 - 1])))));
                    arr_65 [i_15] [i_15 - 1] [i_15 - 1] [i_15] = ((/* implicit */_Bool) min((-246880691), (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (signed char i_18 = 0; i_18 < 22; i_18 += 4) 
                    {
                        for (int i_19 = 0; i_19 < 22; i_19 += 4) 
                        {
                            {
                                var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) min((((max((((/* implicit */unsigned long long int) 508777175U)), (var_11))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_53 [i_15] [i_15 - 4] [i_15]))))))), (var_11))))));
                                var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (unsigned short)8191))));
                                arr_72 [i_15] [i_15] [i_15 - 3] [i_15 - 3] [(unsigned char)15] = max((arr_44 [i_17 - 1]), (arr_44 [i_17 - 1]));
                                arr_73 [i_16] = arr_64 [i_15] [i_15 - 4] [i_15];
                                arr_74 [9] [i_18] [i_17] [i_16] [i_15] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_35 [i_18])) && (((/* implicit */_Bool) arr_35 [i_19])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_36 = ((/* implicit */int) ((long long int) ((long long int) 134209536)));
    }
    var_37 = ((/* implicit */unsigned long long int) (+(3786190121U)));
}
