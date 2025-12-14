/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124625
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_19 -= var_8;
                        arr_10 [i_0] [(unsigned char)1] [i_2 + 3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_2 + 1] [i_0])) ? (((((/* implicit */int) max(((unsigned char)235), (arr_6 [i_1] [i_0] [i_1] [i_0])))) >> (((((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */int) (unsigned char)194)) : (((/* implicit */int) arr_5 [i_1] [i_2 + 1] [i_2 + 1])))) - (193))))) : (((((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned char)0)))) >> (((((/* implicit */int) (unsigned char)92)) - (62)))))));
                    }
                } 
            } 
            arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_8 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1]))) / (((/* implicit */int) arr_2 [i_0]))));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                for (unsigned char i_5 = 3; i_5 < 14; i_5 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (~((-(((/* implicit */int) var_0)))))))));
                        arr_19 [i_0] [(unsigned char)13] [i_0] [i_4] [i_4] = max((((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_4), (var_10)))) || (((/* implicit */_Bool) (unsigned char)134))))), (arr_8 [i_5 + 1] [i_5 + 1] [i_5 - 2] [i_5 + 1] [i_5 - 1] [i_5 - 2]));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned char) max((var_21), (var_16)));
        }
        var_22 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_15)) % ((-(((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0])))))) / (((/* implicit */int) min((arr_9 [(unsigned char)7] [i_0] [(unsigned char)14] [i_0]), (var_5))))));
    }
    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
    {
        var_23 = max((((unsigned char) (+(((/* implicit */int) arr_20 [i_6]))))), (((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned char)226)))) <= (((((/* implicit */int) arr_22 [i_6] [i_6])) / (((/* implicit */int) (unsigned char)240))))))));
        var_24 = (unsigned char)32;
    }
    /* LoopSeq 1 */
    for (unsigned char i_7 = 4; i_7 < 22; i_7 += 2) 
    {
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_25 [i_7 - 1] [i_7 - 1])) < (((/* implicit */int) (unsigned char)21))))), (max((var_9), (var_12)))))) - (((((/* implicit */_Bool) arr_24 [i_7 + 2])) ? (((((/* implicit */int) (unsigned char)0)) % (((/* implicit */int) arr_25 [i_7] [i_7])))) : (((/* implicit */int) arr_25 [i_7 - 3] [i_7 - 1]))))));
        /* LoopSeq 3 */
        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            var_26 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))) != (((/* implicit */int) arr_26 [i_7 - 1]))));
            var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)17)) <= (((/* implicit */int) (unsigned char)14))))) ^ (((/* implicit */int) arr_28 [i_8]))));
        }
        /* vectorizable */
        for (unsigned char i_9 = 4; i_9 < 21; i_9 += 4) 
        {
            arr_32 [i_7 - 1] = (unsigned char)224;
            var_28 += ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)224))));
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_28 [i_7])) - (((((/* implicit */int) (unsigned char)7)) / (((/* implicit */int) arr_27 [i_7] [i_9]))))));
            arr_33 [i_7] [i_7] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_26 [i_9])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_4)))) <= (((/* implicit */int) (unsigned char)168))));
        }
        for (unsigned char i_10 = 1; i_10 < 24; i_10 += 2) 
        {
            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_29 [i_7 - 4] [i_7 - 4] [i_7])) <= (((/* implicit */int) arr_25 [i_10] [i_10]))))) & (((/* implicit */int) var_16))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */int) var_15)) <= (((/* implicit */int) arr_25 [i_7 + 1] [i_10 - 1]))))), ((unsigned char)56)))))))));
            /* LoopSeq 2 */
            for (unsigned char i_11 = 0; i_11 < 25; i_11 += 1) 
            {
                arr_39 [i_11] [i_10] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_7 - 2] [i_7 + 1])) || (((/* implicit */_Bool) arr_27 [i_10 + 1] [i_7 - 2]))))) <= (((((/* implicit */int) arr_37 [i_7 + 3] [i_7 + 2] [i_10 + 1] [i_10 - 1])) - (((/* implicit */int) arr_27 [i_7] [i_7 - 2]))))));
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 25; i_12 += 4) 
                {
                    for (unsigned char i_13 = 0; i_13 < 25; i_13 += 3) 
                    {
                        {
                            arr_46 [i_7] [i_10] [i_11] [i_12] [i_13] = (unsigned char)92;
                            var_31 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_38 [i_7 + 3] [(unsigned char)6] [i_12])))) % ((~(((/* implicit */int) var_2))))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)249))))) || (((((/* implicit */int) var_11)) < (((/* implicit */int) var_8))))))) | (((((/* implicit */int) ((unsigned char) var_14))) / (((((/* implicit */int) var_16)) ^ (((/* implicit */int) var_7)))))))))));
            }
            for (unsigned char i_14 = 3; i_14 < 24; i_14 += 1) 
            {
                arr_49 [i_14] [i_10] [(unsigned char)6] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_24 [i_14 - 3]))) == (((/* implicit */int) arr_24 [i_14 - 2]))));
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 25; i_15 += 1) 
                {
                    for (unsigned char i_16 = 0; i_16 < 25; i_16 += 1) 
                    {
                        {
                            arr_56 [i_14] [i_14] [i_14 + 1] [i_7] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_30 [(unsigned char)13] [(unsigned char)1])) < (((/* implicit */int) (unsigned char)62))));
                            arr_57 [i_7] [i_10 - 1] [i_14 - 1] [i_15] [i_14] = max((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_51 [i_14] [i_15] [i_16])) && ((!(((/* implicit */_Bool) (unsigned char)19))))))), (max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_7))))), (max((var_2), (var_12))))));
                        }
                    } 
                } 
                var_33 = arr_24 [i_7 - 1];
                /* LoopNest 2 */
                for (unsigned char i_17 = 1; i_17 < 23; i_17 += 4) 
                {
                    for (unsigned char i_18 = 3; i_18 < 24; i_18 += 1) 
                    {
                        {
                            var_34 = arr_44 [i_7] [i_10] [i_17 - 1] [i_17 + 1] [i_18] [i_18] [(unsigned char)20];
                            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) max((((/* implicit */int) arr_58 [i_14] [i_17 + 1])), ((((~(((/* implicit */int) arr_28 [i_17])))) / (((/* implicit */int) max((arr_41 [i_7] [i_10 + 1] [i_10 + 1]), (arr_61 [i_7] [i_7])))))))))));
                        }
                    } 
                } 
            }
            /* LoopSeq 3 */
            for (unsigned char i_19 = 1; i_19 < 21; i_19 += 4) /* same iter space */
            {
                arr_67 [i_7] [i_7] [i_10] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */int) max((var_8), (var_1)))) <= ((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (unsigned char)64))))))));
                arr_68 [i_7] [i_10] [i_7] [i_19] = max((arr_60 [i_10] [i_10 + 1] [i_7] [i_10] [i_7]), (max((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)214)) == (((/* implicit */int) (unsigned char)128))))), (arr_44 [i_7] [i_10] [i_19 + 4] [i_7] [i_19] [i_10 - 1] [i_19]))));
                var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((((/* implicit */int) var_3)) | (((/* implicit */int) (unsigned char)245)))))));
                var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_37 [i_7] [i_7] [i_10 + 1] [i_19 + 1]), (arr_37 [i_7] [i_10 + 1] [(unsigned char)2] [i_19 + 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_48 [i_7] [i_7])) : (((/* implicit */int) arr_47 [i_7] [i_10] [i_19 + 3]))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)114))) : (((/* implicit */int) arr_27 [i_7 + 3] [i_19 - 1])))) : ((+(((((/* implicit */int) arr_58 [i_10 - 1] [i_7])) * (((/* implicit */int) arr_55 [i_7] [i_7] [i_19 - 1] [i_7 - 4] [i_7 + 2] [i_19] [i_19 - 1])))))))))));
            }
            for (unsigned char i_20 = 1; i_20 < 21; i_20 += 4) /* same iter space */
            {
                var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */int) ((unsigned char) (unsigned char)255))) * (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) max((max((arr_24 [(unsigned char)22]), (var_8))), (max(((unsigned char)0), (arr_69 [i_7] [i_10 + 1] [(unsigned char)8]))))))));
                var_39 = arr_72 [i_7] [i_10 + 1] [i_20];
                var_40 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_40 [i_7 - 4] [i_7 + 1] [i_10 - 1])) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) arr_40 [i_7 + 1] [i_7 + 2] [i_10 + 1])))) - (((/* implicit */int) ((((/* implicit */int) (unsigned char)196)) < (((/* implicit */int) arr_40 [i_7 + 2] [i_7 - 2] [i_10 - 1])))))));
            }
            /* vectorizable */
            for (unsigned char i_21 = 0; i_21 < 25; i_21 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_22 = 0; i_22 < 25; i_22 += 2) 
                {
                    var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) (+(((/* implicit */int) var_9)))))));
                    var_42 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)136)) << (((((/* implicit */int) (unsigned char)87)) - (67)))));
                    var_43 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) var_18)) <= (((/* implicit */int) var_2)))))));
                    var_44 = ((unsigned char) var_8);
                }
                arr_79 [i_7] [i_10] [(unsigned char)3] [i_7] = arr_36 [i_10] [i_21];
                var_45 = ((/* implicit */unsigned char) min((var_45), (var_1)));
                var_46 = arr_36 [i_7] [i_7];
            }
        }
        /* LoopSeq 1 */
        for (unsigned char i_23 = 1; i_23 < 24; i_23 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_24 = 1; i_24 < 23; i_24 += 4) 
            {
                for (unsigned char i_25 = 0; i_25 < 25; i_25 += 4) 
                {
                    {
                        var_47 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_40 [i_7 - 3] [i_23 - 1] [i_24 - 1])) & (((/* implicit */int) max((arr_72 [i_7] [i_7] [i_7]), (arr_60 [i_7] [i_7] [i_7] [i_24] [(unsigned char)6])))))) > (((((/* implicit */_Bool) arr_48 [i_23] [i_24])) ? (((/* implicit */int) arr_66 [i_7 - 3] [i_7 - 2])) : (((/* implicit */int) min((var_11), (var_6))))))));
                        arr_88 [i_25] [i_7] = max(((unsigned char)4), ((unsigned char)29));
                        var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_73 [i_25] [i_23 - 1] [i_7 - 4])) / (((/* implicit */int) arr_73 [i_25] [i_23 + 1] [i_7 - 2])))) - (((/* implicit */int) max((arr_73 [i_23] [i_23 + 1] [i_7 + 3]), (arr_73 [i_23 + 1] [i_23 + 1] [i_7 + 1])))))))));
                        var_49 = ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_38 [i_7] [i_24] [i_25])) : (((/* implicit */int) var_13)))), (((((/* implicit */_Bool) arr_77 [i_7] [i_23] [i_24] [i_25])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_58 [i_7 - 3] [i_23])))))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)229)) > (((/* implicit */int) (unsigned char)231)))))));
                    }
                } 
            } 
            var_50 = arr_45 [i_7] [(unsigned char)24] [i_23 - 1] [i_23] [i_23 - 1] [i_23 - 1];
        }
    }
}
