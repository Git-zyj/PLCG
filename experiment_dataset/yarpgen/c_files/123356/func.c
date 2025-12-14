/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123356
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_0] [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -9206023734421195638LL)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) var_14))))) & ((~(var_18)))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned short i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? ((-(var_11))) : (((/* implicit */unsigned long long int) (-(0U))))));
                            arr_11 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) arr_2 [i_1] [i_2]);
                            var_19 = ((/* implicit */unsigned short) -9206023734421195628LL);
                            arr_12 [i_2] [i_1] [i_2] [i_3] [i_1] [i_3] = ((/* implicit */unsigned int) var_1);
                        }
                    } 
                } 
                var_20 += ((/* implicit */unsigned char) max(((((~(1319234855U))) ^ (var_0))), (((/* implicit */unsigned int) var_15))));
                var_21 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)44))) % (855405114U));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        arr_16 [i_4] = ((/* implicit */_Bool) var_6);
        var_22 *= ((/* implicit */unsigned int) var_14);
        arr_17 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_10)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)52))))) : (((/* implicit */int) min((var_9), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_14 [i_4]))))))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 18; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (long long int i_9 = 2; i_9 < 18; i_9 += 1) 
                        {
                            {
                                arr_35 [i_5] [i_9] [(_Bool)1] [i_8] [i_9] [i_5] [i_7 - 1] = ((/* implicit */unsigned int) ((unsigned char) 18446744073709551615ULL));
                                var_23 = ((/* implicit */unsigned char) var_5);
                            }
                        } 
                    } 
                    var_24 += ((/* implicit */unsigned short) var_10);
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 2; i_10 < 19; i_10 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((unsigned int) 9206023734421195629LL));
                        arr_38 [i_5] [i_5] [i_5] [i_5] [(unsigned char)7] [i_5] = ((/* implicit */unsigned short) ((((unsigned long long int) arr_15 [i_5])) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_1) : (var_1))))))))));
                        var_26 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_10 - 1] [i_10 - 1] [i_7 + 3])) ? (((/* implicit */int) var_14)) : (var_1)))), (max((9206023734421195638LL), (((/* implicit */long long int) var_14))))));
                    }
                    var_27 = ((/* implicit */unsigned short) (~(arr_32 [i_5] [(_Bool)1] [i_5] [i_5] [(_Bool)1] [(_Bool)1] [(_Bool)1])));
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 3; i_11 < 20; i_11 += 3) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 3) 
                        {
                            {
                                arr_43 [i_12] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_32 [10U] [10U] [12U] [(signed char)8] [i_11 - 3] [i_11 - 1] [4])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_32 [i_7 + 2] [i_11] [i_11] [i_11 - 2] [i_11 - 3] [i_11 - 3] [(signed char)10])))));
                                arr_44 [i_5] [i_11] [i_7] [i_6] [i_5] = ((/* implicit */unsigned short) var_3);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned short) 6620702294106461713LL);
        arr_45 [i_5] = ((/* implicit */unsigned int) (+(((((var_18) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-110))))) ? (((/* implicit */int) arr_14 [i_5])) : (((/* implicit */int) arr_25 [i_5] [i_5] [i_5]))))));
        /* LoopNest 3 */
        for (long long int i_13 = 0; i_13 < 21; i_13 += 2) 
        {
            for (unsigned int i_14 = 0; i_14 < 21; i_14 += 3) 
            {
                for (long long int i_15 = 0; i_15 < 21; i_15 += 3) 
                {
                    {
                        var_29 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)32827)) ? ((~(((((/* implicit */_Bool) (signed char)-11)) ? (var_10) : (63U))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)59)) * (((/* implicit */int) min((var_6), (((/* implicit */unsigned char) var_12))))))))));
                        var_30 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (_Bool)1)), (4019008597U)));
                        var_31 += ((/* implicit */_Bool) 507022179U);
                        var_32 = ((/* implicit */unsigned long long int) -9206023734421195638LL);
                        var_33 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_34 [i_5] [i_13] [i_14] [i_14] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_5] [i_13] [i_14] [i_15] [i_15]))) : (var_0)))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned char i_16 = 0; i_16 < 13; i_16 += 4) 
    {
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            {
                arr_61 [i_17] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_15) ? (arr_20 [i_17]) : (arr_20 [i_16]))))));
                var_34 = ((/* implicit */unsigned int) var_3);
                arr_62 [i_16] [i_17] = ((/* implicit */unsigned short) var_17);
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 1) 
                {
                    for (unsigned int i_19 = 0; i_19 < 13; i_19 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_17)) - (13905546833256399375ULL)));
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_49 [i_16] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_8))))))) ? (((var_11) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-7))))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)22)), (min((-2036324760459627647LL), (((/* implicit */long long int) (signed char)-53)))))))));
                            arr_70 [i_16] [i_17] [i_18] [i_19] = ((/* implicit */signed char) (~(max((max((1602092620U), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) (_Bool)1))))));
                            arr_71 [i_17] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned short) (!(((/* implicit */_Bool) 6ULL))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_20 = 3; i_20 < 9; i_20 += 2) 
                {
                    for (long long int i_21 = 0; i_21 < 13; i_21 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) min((7600313929417454930ULL), (((/* implicit */unsigned long long int) arr_60 [i_16] [i_16])))))))))));
                            var_38 = ((/* implicit */unsigned char) 3301420360U);
                        }
                    } 
                } 
            }
        } 
    } 
}
