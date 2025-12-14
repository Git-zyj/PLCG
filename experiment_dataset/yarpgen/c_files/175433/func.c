/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175433
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)28)) != (((/* implicit */int) (signed char)28))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_1 [i_0] [i_0 + 1]))));
        arr_2 [8U] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) (signed char)28))));
    }
    for (unsigned int i_1 = 2; i_1 < 18; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            var_22 = ((/* implicit */signed char) max((var_22), ((signed char)-28)));
            var_23 = ((((/* implicit */_Bool) var_10)) ? (var_15) : (max((((((/* implicit */_Bool) var_2)) ? (var_16) : (arr_3 [(signed char)12]))), ((-(var_13))))));
        }
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            /* LoopSeq 3 */
            for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                arr_16 [i_4] [i_1] [i_4] = arr_14 [(signed char)11] [i_3] [i_4] [i_4];
                var_24 -= (((-(arr_6 [i_1] [16U]))) / (3202777606U));
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)73))) != (204258719U))))));
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */unsigned int) arr_14 [5U] [i_3] [i_4] [i_5])), (var_13))) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-29))))))) | (max((((/* implicit */unsigned int) (signed char)42)), (arr_3 [i_1 - 2])))))));
                }
            }
            for (signed char i_6 = 0; i_6 < 19; i_6 += 4) 
            {
                var_27 = ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-29)) * (((/* implicit */int) (signed char)-49))))) | (((((/* implicit */_Bool) var_15)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [15U] [i_3]))))))), (((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1] [i_1] [i_1 - 2] [i_1]))) : (var_15)))));
                arr_23 [i_3] [i_3] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) max((3602766340U), (((/* implicit */unsigned int) (signed char)-30)))))) && (((/* implicit */_Bool) min((((/* implicit */int) var_17)), (((((/* implicit */int) arr_14 [i_1] [i_3] [14U] [i_1])) | (((/* implicit */int) var_11)))))))));
                arr_24 [0U] [0U] [i_1] = ((((/* implicit */_Bool) ((arr_3 [i_1 - 2]) * (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) ? (((unsigned int) arr_3 [i_1 - 2])) : (((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-57))) : (arr_3 [i_1 - 2]))));
                var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)7))));
                arr_25 [16U] [18U] [i_6] [18U] &= ((764435673U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-60))));
            }
            /* vectorizable */
            for (signed char i_7 = 0; i_7 < 19; i_7 += 3) 
            {
                /* LoopSeq 3 */
                for (signed char i_8 = 2; i_8 < 17; i_8 += 1) 
                {
                    var_29 = var_9;
                    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_32 [i_1 + 1] [i_3] [i_1 - 1] [i_8] [i_8 - 1])))))));
                }
                for (unsigned int i_9 = 2; i_9 < 18; i_9 += 3) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) 
                    {
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_1 - 1] [15U])) ? (((/* implicit */int) (signed char)44)) : (((/* implicit */int) (signed char)-14))))) ? (var_10) : (((unsigned int) (signed char)27))));
                        arr_37 [i_1] [i_1] [(signed char)14] [(signed char)14] [i_10] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)33))) <= (4278190080U)));
                        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) (signed char)44))))) ? (((((/* implicit */_Bool) arr_18 [i_1] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_3]))) : (var_16))) : (arr_7 [i_1])));
                        var_33 &= ((/* implicit */unsigned int) var_17);
                        var_34 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-14))));
                    }
                    for (signed char i_11 = 0; i_11 < 19; i_11 += 1) 
                    {
                        var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [(signed char)18])) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) (signed char)-105))))) : (arr_15 [i_9 + 1] [i_11] [i_9 + 1] [i_1 - 2]))))));
                        var_36 *= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_32 [i_1] [i_1] [i_7] [i_7] [i_7])))));
                        arr_40 [18U] [18U] [(signed char)7] [i_1] [i_7] [(signed char)7] [(signed char)7] = ((/* implicit */signed char) ((unsigned int) (signed char)51));
                        var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (!(((/* implicit */_Bool) 4140935157U)))))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 19; i_12 += 3) 
                    {
                        var_38 = ((/* implicit */unsigned int) min((var_38), (((((/* implicit */_Bool) (signed char)-107)) ? (4278190080U) : (3103930569U)))));
                        arr_44 [(signed char)16] [i_3] [i_1] [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-60)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)46)))))) ? (((((/* implicit */_Bool) (signed char)100)) ? (698031260U) : (2667689759U))) : ((+(0U))));
                        var_39 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_9 - 2] [i_1 + 1])) ? (((((/* implicit */_Bool) var_3)) ? (var_4) : (arr_39 [8U] [6U] [4U] [4U] [i_12]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)125)))));
                    }
                    for (signed char i_13 = 0; i_13 < 19; i_13 += 1) 
                    {
                        var_40 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_1 - 1] [i_1 - 2] [i_9 - 1])) ? (((((/* implicit */_Bool) (signed char)-34)) ? (var_15) : (195732379U))) : (((unsigned int) (signed char)104))));
                        arr_49 [i_13] [i_9] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_42 [i_1] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) arr_14 [i_1] [(signed char)17] [i_7] [i_9 - 2])) : (((/* implicit */int) var_3))));
                        var_41 = ((/* implicit */signed char) arr_18 [i_1] [i_1]);
                        var_42 = ((/* implicit */unsigned int) (signed char)34);
                    }
                    var_43 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_1 - 2] [i_9 + 1]))));
                    var_44 = ((/* implicit */unsigned int) max((var_44), (((/* implicit */unsigned int) (signed char)104))));
                }
                for (unsigned int i_14 = 2; i_14 < 18; i_14 += 3) /* same iter space */
                {
                    var_45 = ((/* implicit */unsigned int) arr_9 [i_7] [i_1]);
                    var_46 = ((/* implicit */signed char) ((arr_30 [(signed char)8] [i_1] [i_7] [i_14 - 2]) <= (((unsigned int) (signed char)93))));
                }
                arr_52 [i_1] [i_1] = ((((/* implicit */_Bool) var_12)) ? (var_15) : (var_0));
                var_47 = ((((/* implicit */_Bool) arr_29 [i_1 + 1] [i_1])) ? (arr_29 [i_1 - 2] [i_1]) : (arr_29 [i_1 - 2] [i_1]));
            }
            var_48 = var_14;
            var_49 -= ((unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (((/* implicit */int) (signed char)104))))) - (max((((/* implicit */unsigned int) var_7)), (arr_3 [i_3])))));
            var_50 = ((/* implicit */unsigned int) max((var_50), (((((/* implicit */_Bool) max((arr_48 [i_1] [0U] [0U] [0U] [(signed char)10] [(signed char)12]), (max(((signed char)-37), ((signed char)-3)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_12)))) : (0U)))));
        }
        /* vectorizable */
        for (signed char i_15 = 0; i_15 < 19; i_15 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_16 = 2; i_16 < 17; i_16 += 1) 
            {
                for (signed char i_17 = 0; i_17 < 19; i_17 += 4) 
                {
                    {
                        var_51 = ((/* implicit */unsigned int) max((var_51), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_1] [i_1])) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) arr_51 [i_1 - 2] [(signed char)2] [(signed char)2] [i_1 + 1] [i_16 + 2])))))));
                        var_52 *= ((/* implicit */unsigned int) (signed char)-51);
                    }
                } 
            } 
            var_53 = ((/* implicit */unsigned int) ((signed char) arr_48 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 1] [i_1]));
        }
        for (signed char i_18 = 0; i_18 < 19; i_18 += 3) /* same iter space */
        {
            var_54 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_50 [i_1 - 2] [i_18] [i_1] [11U])) || (((/* implicit */_Bool) (signed char)93)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_1] [i_1] [i_1] [i_18] [1U]))) : (1687739008U))))));
            var_55 = ((/* implicit */unsigned int) ((signed char) max((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_10 [18U] [i_18])))), (((/* implicit */int) (signed char)-105)))));
            var_56 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)77)) && (((((/* implicit */_Bool) arr_17 [i_1] [i_1] [5U] [i_1 - 1] [i_1 - 2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-77)) ? (4294967295U) : (2042422092U))))))));
            var_57 &= max((((/* implicit */unsigned int) (signed char)-94)), (var_10));
        }
        var_58 -= ((unsigned int) ((max((((/* implicit */unsigned int) arr_5 [(signed char)14] [(signed char)14])), (var_18))) + (((((/* implicit */_Bool) 3U)) ? (2252545203U) : (698031248U)))));
    }
}
