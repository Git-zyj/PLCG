/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177616
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 7; i_2 += 4) 
                {
                    var_20 *= ((/* implicit */unsigned char) arr_5 [i_0] [(_Bool)1] [i_0] [i_0]);
                    var_21 *= (((((~(arr_2 [i_0] [i_1] [i_2]))) > (max((var_1), (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_0]))) : (((unsigned int) ((unsigned int) arr_1 [i_1] [(_Bool)1]))));
                }
                var_22 = ((var_19) ? ((+(max((var_1), (arr_3 [(unsigned char)9] [i_0] [i_0]))))) : (((/* implicit */int) arr_0 [i_0])));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_8 [i_3] [i_3] = ((/* implicit */_Bool) arr_6 [i_3] [i_3]);
        arr_9 [i_3] &= ((/* implicit */unsigned char) (((((+(((/* implicit */int) var_14)))) >> (((((/* implicit */int) arr_7 [i_3])) - (116))))) < ((-(((/* implicit */int) var_8))))));
    }
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    {
                        arr_20 [i_4] [i_5] [i_4] &= ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_11 [i_5])))) * (((((/* implicit */_Bool) ((4294967295U) + (2851255606U)))) ? (((var_5) ? (((/* implicit */int) var_2)) : (var_1))) : (arr_19 [i_4] [(_Bool)0] [(unsigned char)17] [i_4] [i_4] [i_4])))));
                        arr_21 [i_7] [i_5] [i_5] [i_4] &= ((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [(_Bool)1]))));
                    }
                } 
            } 
        } 
        var_23 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_4])) ? (((((/* implicit */_Bool) arr_14 [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), (var_19))))) : ((((_Bool)1) ? (13U) : (((/* implicit */unsigned int) arr_10 [i_4] [i_4])))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_4] [i_4])) ? (((/* implicit */int) arr_14 [i_4] [i_4])) : (((var_1) + (((/* implicit */int) arr_14 [14] [13])))))))));
        var_24 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) (unsigned char)172)))))))) | (max(((-(arr_16 [i_4] [i_4] [(_Bool)0] [i_4] [i_4] [i_4]))), (arr_13 [i_4]))));
    }
    for (unsigned int i_8 = 0; i_8 < 14; i_8 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_9 = 1; i_9 < 11; i_9 += 4) 
        {
            var_25 = var_8;
            arr_27 [i_9] [i_8] [i_9] = ((/* implicit */_Bool) var_6);
            var_26 = ((/* implicit */unsigned char) min((((/* implicit */int) var_14)), ((+(min((((/* implicit */int) var_3)), (2097151)))))));
            arr_28 [i_9] = ((/* implicit */_Bool) (-((-(arr_16 [i_8] [i_8] [i_9] [i_8] [i_9 + 3] [i_9 + 1])))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_27 = ((/* implicit */_Bool) max((var_27), ((!(((/* implicit */_Bool) (-((((_Bool)1) ? (var_15) : (((/* implicit */int) (unsigned char)63)))))))))));
            arr_31 [i_8] [i_10] = (_Bool)0;
            arr_32 [i_10] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_12 [i_8] [i_10])) & (((/* implicit */int) arr_12 [i_8] [i_8])))) | ((-(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_6)))))))));
            /* LoopNest 3 */
            for (int i_11 = 1; i_11 < 12; i_11 += 2) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned int i_13 = 0; i_13 < 14; i_13 += 3) 
                    {
                        {
                            arr_40 [i_8] [i_11] [i_11] [i_12] [i_13] [i_12] [i_10] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_34 [i_11])) - ((+(((/* implicit */int) (_Bool)1)))))) == ((+(((/* implicit */int) (_Bool)1))))));
                            var_28 = ((/* implicit */unsigned int) (((((-(((/* implicit */int) var_10)))) != (var_1))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)164)), (649491747U)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_14 [i_10] [i_10])))) : (arr_19 [i_11 + 1] [i_11 + 2] [(_Bool)1] [i_11 - 1] [i_11] [i_11 + 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_38 [i_8] [i_10] [i_11] [i_12] [i_11]))))))))));
                        }
                    } 
                } 
            } 
            arr_41 [i_10] = min((((/* implicit */unsigned char) ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) < (((/* implicit */int) (!(var_5))))))), (max((((/* implicit */unsigned char) var_10)), ((unsigned char)96))));
        }
        for (unsigned int i_14 = 1; i_14 < 11; i_14 += 3) /* same iter space */
        {
            var_29 = (-(((/* implicit */int) max((((arr_26 [i_8]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_14] [i_14] [i_8] [i_8] [i_8] [18U]))))), (min((var_10), (var_16)))))));
            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_26 [i_8]), (((/* implicit */unsigned int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_14 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) ((_Bool) var_10)))))) ? (((((1598120996) > (((/* implicit */int) var_16)))) ? ((~(((/* implicit */int) arr_14 [i_8] [i_14])))) : (var_11))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_14 + 1])))))));
            var_31 *= arr_38 [i_8] [i_8] [i_8] [i_8] [i_8];
        }
        for (unsigned int i_15 = 1; i_15 < 11; i_15 += 3) /* same iter space */
        {
            var_32 = ((/* implicit */_Bool) min((((((/* implicit */int) var_19)) | (-1))), (((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (2094799226)))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) != (var_0)))) : (min((arr_10 [i_8] [i_15]), (arr_13 [i_8])))))));
            arr_48 [i_15] [i_8] [i_15] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((2147483647), (((/* implicit */int) arr_12 [i_15] [i_8]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 660741946)) || (((/* implicit */_Bool) 2147483632)))))) : (arr_26 [i_15 + 1])))) ? (((((/* implicit */_Bool) -317168359)) ? (((/* implicit */int) ((-24) > (arr_19 [i_8] [i_15] [4U] [i_8] [i_15 + 3] [i_15 + 2])))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 0U))))))) : (((arr_24 [i_15] [i_15 + 3]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_24 [i_8] [i_15 + 3])))));
            var_33 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) > (1751986949U)))), (((int) arr_43 [i_8]))))) ? (((/* implicit */int) ((2147483648U) <= (((/* implicit */unsigned int) arr_16 [i_15 + 3] [i_15 + 3] [i_8] [i_8] [i_15 + 3] [i_15 + 3]))))) : ((-(((/* implicit */int) min((var_19), (var_19))))))));
            /* LoopNest 3 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                {
                    for (unsigned int i_18 = 0; i_18 < 14; i_18 += 4) 
                    {
                        {
                            var_34 = (!(var_4));
                            var_35 *= min(((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_8] [i_15] [i_8] [i_17] [i_15] [i_16]))))))), (((int) 60550204)));
                            var_36 *= ((((/* implicit */_Bool) max((max((((/* implicit */int) (_Bool)0)), (1222296987))), (((/* implicit */int) arr_55 [i_8]))))) ? (((((((/* implicit */int) var_2)) * (((/* implicit */int) var_5)))) / (((arr_13 [11]) * (((/* implicit */int) (_Bool)1)))))) : (min(((-(var_11))), (((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
            } 
        }
        arr_56 [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_29 [i_8] [i_8] [i_8]) * (arr_29 [i_8] [i_8] [i_8])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) 0U)) ? (arr_29 [i_8] [(_Bool)1] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
        var_37 = ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_46 [i_8])))))) >= (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) arr_43 [i_8]))))) ? (((((/* implicit */int) arr_55 [i_8])) / (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_52 [i_8] [i_8] [i_8])), (arr_43 [i_8])))))));
    }
    /* vectorizable */
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        arr_60 [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((((/* implicit */int) arr_12 [i_19] [i_19])) - (((/* implicit */int) arr_12 [i_19] [i_19])))) : (var_15)));
        arr_61 [i_19] = ((/* implicit */_Bool) (-((~(((/* implicit */int) (_Bool)1))))));
        arr_62 [i_19] = ((/* implicit */_Bool) (~(-729135492)));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        var_38 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) ? (((((/* implicit */_Bool) var_9)) ? (var_15) : ((-2147483647 - 1)))) : (var_12)));
        arr_65 [i_20] = ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 1069650982)) ? (((/* implicit */int) (_Bool)0)) : (var_6))) : (var_1));
        arr_66 [i_20] = ((arr_64 [i_20]) ? (((/* implicit */int) arr_64 [i_20])) : (arr_63 [i_20]));
        var_39 = ((/* implicit */int) max((var_39), (((((/* implicit */_Bool) arr_63 [(_Bool)1])) ? (-1967580732) : (arr_63 [(_Bool)1])))));
        arr_67 [i_20] = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_20]))) : (2382561071U));
    }
    /* vectorizable */
    for (unsigned char i_21 = 1; i_21 < 22; i_21 += 4) 
    {
        var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)136)) ? (var_0) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))))))));
        var_41 = ((/* implicit */_Bool) (+(((/* implicit */int) var_8))));
    }
    /* vectorizable */
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        arr_74 [i_22] [i_22] = ((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) arr_44 [i_22] [i_22] [i_22])) : (arr_13 [i_22])));
        arr_75 [(_Bool)0] &= ((/* implicit */_Bool) ((((/* implicit */int) arr_34 [(_Bool)1])) * (((/* implicit */int) arr_34 [(_Bool)1]))));
    }
}
