/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187878
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
    var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (_Bool)1)), (1749007479U)));
    var_15 = ((/* implicit */unsigned short) var_4);
    var_16 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        var_17 = ((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) max((((/* implicit */int) var_9)), ((+(((/* implicit */int) var_3)))))))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            arr_4 [i_0] = ((/* implicit */_Bool) max((max((((/* implicit */long long int) var_3)), (var_6))), (var_0)));
            var_18 = ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) -819367449)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))))));
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) min((min(((+(var_0))), (((/* implicit */long long int) min(((_Bool)1), ((_Bool)1)))))), (((/* implicit */long long int) min((((/* implicit */int) var_3)), ((~(((/* implicit */int) var_5)))))))));
        }
        for (int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            var_19 = ((/* implicit */_Bool) (~(max((arr_7 [i_0 - 1] [i_0 + 1]), (var_7)))));
            arr_10 [i_0] [i_2] [i_2] = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)239))))), (696832224U))), (((/* implicit */unsigned int) -819367433))));
            var_20 = ((/* implicit */_Bool) min((min((((/* implicit */int) var_9)), (819367449))), (((/* implicit */int) var_3))));
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                var_21 = ((/* implicit */long long int) min((8861680599068069836ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                var_22 |= ((((/* implicit */_Bool) 18033251067856455628ULL)) ? (min((-819367444), ((~(((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) max((var_13), (var_3)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))));
            }
            for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min(((unsigned short)10608), (((/* implicit */unsigned short) var_4))))), (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */int) var_4))))) : (max((var_11), (((/* implicit */unsigned long long int) var_13))))))));
                /* LoopSeq 3 */
                for (int i_5 = 1; i_5 < 19; i_5 += 4) 
                {
                    arr_19 [i_2] = ((/* implicit */short) max((((/* implicit */unsigned short) (signed char)64)), ((unsigned short)18318)));
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_18 [i_5] [i_5 - 1] [i_4] [i_5 + 1] [i_5 + 1] [i_5]), (var_5))))) : (max((var_7), (((/* implicit */long long int) var_12)))))))));
                    var_25 &= ((/* implicit */_Bool) min((3598135072U), (((/* implicit */unsigned int) (+(819367453))))));
                }
                for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    arr_23 [i_0] [i_0] [i_2] [i_0] [i_0 - 2] = ((/* implicit */long long int) var_3);
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (arr_13 [i_0] [i_4] [i_0]) : (((/* implicit */int) (unsigned short)10623)))), ((-(((/* implicit */int) arr_9 [i_4] [i_4])))))))));
                }
                /* vectorizable */
                for (signed char i_7 = 1; i_7 < 18; i_7 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 2) /* same iter space */
                    {
                        var_27 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_2] [i_0 + 1]))));
                        var_28 = -819367437;
                    }
                    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 2) /* same iter space */
                    {
                        var_29 = ((/* implicit */signed char) var_0);
                        var_30 &= ((/* implicit */long long int) (~(((/* implicit */int) (signed char)123))));
                        var_31 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)5001))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 21; i_10 += 2) /* same iter space */
                    {
                        var_32 = ((/* implicit */short) (-(((/* implicit */int) var_1))));
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5))));
                        var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) (+(819367449))))));
                        arr_33 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_24 [i_0 + 2] [i_2] [i_4] [i_0 - 3] [i_10] [i_2])) : (((/* implicit */int) arr_25 [i_2]))));
                        var_35 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((var_5) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 21; i_11 += 2) /* same iter space */
                    {
                        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) arr_13 [i_0] [i_11] [i_0]))));
                        arr_36 [i_0] [i_2] [i_0] [i_0] [i_0 - 2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_2] [i_7 + 3]))));
                        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_7)));
                    }
                    arr_37 [i_2] [i_4] [i_7 + 1] = ((/* implicit */long long int) (~(((/* implicit */int) var_10))));
                }
            }
            var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5283026062527030557ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-18))));
        }
        /* vectorizable */
        for (unsigned int i_12 = 0; i_12 < 21; i_12 += 4) 
        {
            var_39 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -819367436)) ? (var_6) : (((/* implicit */long long int) arr_35 [i_0] [i_12] [i_12] [i_0 - 2] [(short)4] [i_12]))))) ? (arr_3 [i_0] [i_12]) : (((/* implicit */int) var_10)));
            var_40 = ((/* implicit */unsigned long long int) var_9);
            arr_41 [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)242))));
        }
        /* LoopNest 2 */
        for (short i_13 = 0; i_13 < 21; i_13 += 4) 
        {
            for (signed char i_14 = 0; i_14 < 21; i_14 += 4) 
            {
                {
                    var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)85)), ((unsigned short)10))))))) ? (max(((+(var_6))), (((/* implicit */long long int) max((var_1), (((/* implicit */unsigned char) arr_18 [i_13] [i_13] [i_14] [i_13] [i_13] [i_13]))))))) : (var_7)));
                    var_42 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_6), (var_0)))) ? (min((var_0), (((/* implicit */long long int) arr_15 [i_0 - 3] [i_0 + 3])))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    var_43 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_45 [i_13] [i_14]), (((/* implicit */int) var_5))))) ? (max((((/* implicit */long long int) arr_12 [i_0 - 2] [i_0 - 2])), (((((/* implicit */_Bool) -819367449)) ? (arr_2 [(short)20] [5ULL]) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_0 - 1] [i_0] [i_13] [i_13] [i_14]))))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_13))))), (4294967295U))))));
                    var_44 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (max((1147820775U), (((/* implicit */unsigned int) 1223308559)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (min((var_6), (((/* implicit */long long int) arr_24 [i_14] [(signed char)12] [i_14] [i_14] [i_0 + 1] [i_14]))))));
                }
            } 
        } 
        arr_47 [(signed char)2] [(signed char)2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (max((var_7), (((/* implicit */long long int) arr_9 [4ULL] [i_0])))) : (min((var_2), (((/* implicit */long long int) (~(((/* implicit */int) var_13)))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 2) 
        {
            var_45 |= ((/* implicit */unsigned char) min((max((min((((/* implicit */unsigned long long int) -4122891867255108991LL)), (8444249301319680ULL))), (((/* implicit */unsigned long long int) (~(arr_7 [i_0] [i_15])))))), (((/* implicit */unsigned long long int) (+(var_7))))));
            arr_50 [i_0] = ((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) min((var_8), (((/* implicit */int) var_1)))))))) ? (min((var_2), (((/* implicit */long long int) var_9)))) : (var_0));
        }
    }
    /* vectorizable */
    for (unsigned int i_16 = 0; i_16 < 12; i_16 += 3) 
    {
        var_46 = ((((/* implicit */_Bool) 1204558185767080540ULL)) ? (-1394918135) : ((-(((/* implicit */int) (unsigned short)16531)))));
        arr_54 [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_16] [16] [i_16] [i_16])) ? (arr_26 [i_16] [4] [i_16] [i_16]) : (((/* implicit */long long int) var_8))));
        var_47 = ((/* implicit */unsigned int) var_7);
    }
    for (signed char i_17 = 3; i_17 < 9; i_17 += 4) 
    {
        var_48 = ((((/* implicit */_Bool) min((((/* implicit */int) var_10)), (arr_35 [i_17 + 2] [i_17 - 2] [i_17 + 1] [i_17] [i_17 - 2] [i_17])))) ? (max((((/* implicit */unsigned int) var_12)), (arr_55 [i_17 - 1]))) : ((+(arr_55 [i_17 - 2]))));
        var_49 = ((/* implicit */long long int) max((var_49), (min((var_2), (((/* implicit */long long int) max((min((-117892909), (((/* implicit */int) var_10)))), ((+(((/* implicit */int) var_12)))))))))));
        arr_58 [i_17] = ((/* implicit */short) min((var_8), (((/* implicit */int) arr_44 [i_17 - 3]))));
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_19 = 2; i_19 < 10; i_19 += 4) 
        {
            arr_66 [i_18] [i_19 + 1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_34 [i_19])) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) min((var_4), (var_13)))) ? (((/* implicit */int) arr_22 [i_19 - 1] [i_19 + 2] [i_19 + 2])) : ((~(((/* implicit */int) var_10))))))));
            var_50 = ((/* implicit */_Bool) min((max((min((-9033268509568306495LL), (((/* implicit */long long int) (signed char)-122)))), (min((arr_26 [i_18] [i_19] [i_19 - 1] [i_19 + 2]), (var_0))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max(((signed char)104), (var_13)))) ? (arr_43 [i_19 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
            var_51 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (arr_30 [i_19] [i_19 + 3] [i_19] [i_19] [i_19 + 2]))))));
            /* LoopNest 3 */
            for (long long int i_20 = 3; i_20 < 11; i_20 += 3) 
            {
                for (long long int i_21 = 0; i_21 < 13; i_21 += 2) 
                {
                    for (unsigned char i_22 = 0; i_22 < 13; i_22 += 1) 
                    {
                        {
                            arr_75 [i_18] [i_18] [i_18] [i_18] [i_18] = max((((/* implicit */unsigned long long int) (unsigned char)255)), (281474976710656ULL));
                            var_52 = ((/* implicit */_Bool) (~(-1LL)));
                            var_53 = ((/* implicit */short) min(((~(5842591279404226098LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))))));
                            arr_76 [i_18] [i_19 + 3] [i_21] [(_Bool)1] [i_22] = (+(((/* implicit */int) var_12)));
                        }
                    } 
                } 
            } 
        }
        var_54 = ((/* implicit */unsigned int) min((((/* implicit */int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)16)))), (min((((/* implicit */int) min(((short)127), (((/* implicit */short) (_Bool)1))))), (max((((/* implicit */int) var_1)), (var_8)))))));
    }
}
