/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179151
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
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_17))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_9)))) ? (((((/* implicit */_Bool) 3174432745U)) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) (signed char)86)))) : (var_6))) : (((/* implicit */int) (signed char)-101))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0 - 3] [i_0 - 1] [i_0 + 2])) || (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2 - 3]))))), ((unsigned short)46785)));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0]))));
                    arr_10 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_4 [i_0]))))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) var_6)) : (arr_3 [i_1])))) ? (((unsigned int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 + 2] [i_1] [i_1])))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_4 = 4; i_4 < 18; i_4 += 4) 
                        {
                            var_21 -= ((/* implicit */unsigned long long int) (signed char)-42);
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (arr_2 [i_0 - 2] [i_0 - 2] [i_0 - 2]) : (arr_2 [i_0 + 2] [i_0 + 2] [i_3])));
                        }
                        arr_16 [i_2] [i_1] [i_2] [i_2] [i_1] [i_0] = ((long long int) arr_4 [i_0]);
                        arr_17 [i_2] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    }
                    for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        arr_20 [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_4)), (min((6450338033521589450ULL), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_2] [i_0]))))));
                        arr_21 [i_2] = ((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_2] [i_0]);
                        arr_22 [i_0] [i_2] [i_1] [i_1] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2] [i_0 - 2] [i_0] [i_0 + 2] [i_0 - 2])) ? (arr_15 [i_2] [i_0 - 3] [i_0 - 3] [i_0 + 1] [i_0 - 1]) : (arr_15 [i_2] [i_0 - 3] [i_0] [i_0 - 1] [i_0 - 3])))) ? ((-(arr_15 [i_2] [i_0 - 2] [i_2] [i_0 - 3] [i_0 - 2]))) : (((((/* implicit */_Bool) (signed char)30)) ? (arr_15 [i_2] [i_0 + 2] [i_2] [i_0 + 1] [i_0 - 2]) : (arr_15 [i_2] [i_0 - 3] [i_0 - 3] [i_0 + 2] [i_0 + 1])))));
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) min((((((/* implicit */_Bool) arr_18 [i_0] [i_2 - 2] [i_0] [i_0 + 2] [i_0 + 2] [i_2 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_0 [i_5] [i_2]))), (((((/* implicit */_Bool) max((arr_19 [i_0] [i_0] [i_1] [i_1]), (arr_19 [i_0] [i_5] [i_5] [i_0])))) ? (849595337374622618LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_0] [i_5] [i_5] [i_0])) ? (((/* implicit */int) (signed char)-30)) : (arr_1 [i_0])))))))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((signed char) max((((((/* implicit */_Bool) (unsigned short)56)) ? (0ULL) : (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */int) (unsigned short)65535)) : (arr_1 [i_0]))))))))));
                        var_25 += ((/* implicit */int) min((((/* implicit */unsigned int) ((signed char) (-2147483647 - 1)))), (var_16)));
                        arr_25 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_6]);
                        arr_26 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0 - 2] [i_0 + 1] [i_2] [i_2 - 3])) ? (((/* implicit */int) arr_19 [i_0 - 2] [i_0 - 2] [i_2] [i_2 - 2])) : (arr_1 [i_0 - 2]))))));
                        /* LoopSeq 3 */
                        for (signed char i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            arr_29 [i_0] [i_1] [i_0] [i_6] [i_2] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((long long int) var_3))) ? (((/* implicit */unsigned long long int) (~(arr_1 [i_0])))) : (arr_3 [i_0 - 3]))));
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 546327614)) ? ((-((-(6920103745103679931ULL))))) : (((/* implicit */unsigned long long int) (+(arr_1 [i_0 - 1]))))));
                            var_26 -= ((/* implicit */unsigned long long int) (~(max((arr_24 [i_0] [i_0] [i_0] [i_6] [i_1] [i_6]), (((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_6] [i_7] [i_7]))))));
                            var_27 = ((/* implicit */long long int) (~(min((max((var_13), (arr_3 [i_0]))), (((/* implicit */unsigned long long int) max(((unsigned short)20739), ((unsigned short)6696))))))));
                        }
                        for (long long int i_8 = 2; i_8 < 19; i_8 += 2) 
                        {
                            arr_34 [i_0] [i_0] [i_2] [i_2] [i_8] = (~(((unsigned long long int) arr_1 [i_8 - 1])));
                            var_28 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_11 [i_1] [i_0 - 2] [i_2 - 2])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_24 [i_0] [i_0] [i_0] [i_6] [i_6] [i_8])) - (3615055936U)))) ? (((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)76)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551605ULL)))))))) : ((~(arr_32 [i_8] [i_8 + 1] [i_2 - 3] [i_8] [i_8])))));
                        }
                        for (unsigned short i_9 = 2; i_9 < 19; i_9 += 3) 
                        {
                            arr_37 [i_2] [i_1] [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_2] [i_2]);
                            arr_38 [i_2] [i_2] [i_1] [i_2] [i_2] [i_6] [i_2] = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) (+(arr_0 [i_1] [i_1])))), (((unsigned long long int) var_10)))), (max((((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-18)), (var_9)))), (var_18)))));
                            var_29 = ((/* implicit */unsigned long long int) ((int) ((arr_2 [i_0] [i_0] [i_6]) - (1535900610189860322LL))));
                        }
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        arr_42 [i_2] [i_1] [i_2] = ((/* implicit */int) (unsigned short)36031);
                        arr_43 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [i_0])) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (signed char)-93))))) ? (max((((/* implicit */unsigned long long int) var_4)), (var_7))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) (unsigned short)6144))))), (((((/* implicit */_Bool) 1794709808)) ? (5792735027549571795ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_1])))))))));
                        var_30 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) >> (((((((/* implicit */_Bool) max((arr_27 [i_2] [i_2] [i_2] [i_0] [i_1] [i_0] [i_0]), (((/* implicit */long long int) var_16))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_19 [i_0] [i_0] [i_1] [i_0])), (arr_14 [i_2] [i_1] [i_10] [i_10] [i_2] [i_10]))))) : ((-(6238685375571188703ULL))))) - (52619ULL)))));
                    }
                }
            } 
        } 
    } 
    var_31 |= ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (signed char i_11 = 0; i_11 < 21; i_11 += 4) 
    {
        for (int i_12 = 2; i_12 < 18; i_12 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_13 = 1; i_13 < 18; i_13 += 4) 
                {
                    arr_51 [i_11] [i_12] [i_11] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_45 [i_11] [i_12])) ? (min((arr_50 [i_11] [i_11] [i_13] [i_13]), (((/* implicit */unsigned long long int) arr_44 [i_11])))) : (min((((/* implicit */unsigned long long int) (unsigned short)65527)), (10851472343208204911ULL))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_46 [i_13])) ? (arr_49 [i_11] [i_11] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)33))))) - (((/* implicit */long long int) (+(((/* implicit */int) arr_48 [i_11]))))))))));
                    var_32 -= ((/* implicit */unsigned short) (+((+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) + (1903064563167169678ULL)))))));
                }
                for (unsigned int i_14 = 1; i_14 < 19; i_14 += 1) /* same iter space */
                {
                    arr_54 [i_11] [i_14] [i_12] [i_12] = ((/* implicit */unsigned int) ((int) (+(arr_49 [i_14 + 2] [i_12] [i_12 + 3]))));
                    arr_55 [i_14] = min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_52 [i_12 + 2] [i_14 + 2]))))), (arr_50 [i_11] [i_12] [i_14] [i_12]));
                }
                for (unsigned int i_15 = 1; i_15 < 19; i_15 += 1) /* same iter space */
                {
                    var_33 += ((/* implicit */signed char) 9964444021829170030ULL);
                    arr_58 [i_11] = ((/* implicit */long long int) ((signed char) ((arr_45 [i_12 + 1] [i_12 + 1]) ^ (var_8))));
                    arr_59 [i_11] [i_11] [i_11] = -953291004;
                }
                /* LoopNest 3 */
                for (unsigned int i_16 = 3; i_16 < 20; i_16 += 2) 
                {
                    for (signed char i_17 = 0; i_17 < 21; i_17 += 1) 
                    {
                        for (int i_18 = 3; i_18 < 20; i_18 += 4) 
                        {
                            {
                                arr_67 [i_11] [i_11] [i_11] [i_11] [i_16] [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)25481)) << (((((/* implicit */int) (unsigned short)16233)) - (16223))))))) >> (((max((((/* implicit */int) var_1)), (((((/* implicit */int) var_1)) ^ (((/* implicit */int) (signed char)95)))))) - (5804)))));
                                arr_68 [i_11] [i_11] [i_11] [i_11] [i_16] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40055)) ? (692300091873734254LL) : (var_14)))) ? (((unsigned long long int) arr_45 [i_12] [i_17])) : (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) -5672517462845423475LL))));
                                arr_69 [i_11] [i_11] [i_11] [i_16] [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (12208058698138362896ULL) : (12208058698138362911ULL)))) ? (arr_50 [i_11] [i_12] [i_16] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1877890059))))))))));
                            }
                        } 
                    } 
                } 
                var_34 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_52 [i_11] [i_11])) ? (var_14) : (((/* implicit */long long int) 3895317615U)))))))) ? (min((min((6238685375571188735ULL), (((/* implicit */unsigned long long int) 0U)))), (((/* implicit */unsigned long long int) arr_62 [i_11] [i_11] [i_12])))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_63 [i_12 - 2] [i_12 + 1] [i_12 + 3] [i_11])), (((((/* implicit */_Bool) var_16)) ? (arr_61 [i_11] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_11])))))))));
                var_35 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (-(1183084766)))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_4)), (arr_66 [i_11] [i_12] [i_11] [i_11] [i_11])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) -2147483644)) : (arr_63 [i_11] [i_11] [i_11] [i_11]))))));
            }
        } 
    } 
}
