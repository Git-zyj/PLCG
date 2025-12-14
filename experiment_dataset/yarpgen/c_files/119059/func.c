/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119059
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
    var_17 = ((/* implicit */_Bool) min((((/* implicit */int) var_4)), ((+(((/* implicit */int) (short)-32757))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] |= ((/* implicit */short) ((int) (-(((/* implicit */int) arr_1 [i_0])))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (short)32472)) ? (((/* implicit */int) (short)-26864)) : (((/* implicit */int) (short)-32455))));
                    var_19 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_14)))), (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) (short)32472)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            arr_13 [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32455)) << (((/* implicit */int) ((_Bool) (short)-32485)))))) ? (arr_8 [i_0]) : (((/* implicit */long long int) min(((~(((/* implicit */int) var_14)))), ((~(((/* implicit */int) var_13)))))))));
            var_20 &= ((/* implicit */short) ((int) var_8));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            var_21 = ((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_4]);
            /* LoopSeq 4 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                arr_20 [i_0] [i_4] [i_5 - 1] &= ((/* implicit */short) ((((/* implicit */int) arr_5 [i_0])) << ((((((~(((/* implicit */int) var_2)))) + (43))) - (15)))));
                arr_21 [i_0] [i_0] [i_5] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)223)) ? (7340032) : (((/* implicit */int) (short)-32453))))) ? (((/* implicit */int) arr_9 [i_0] [i_5 - 1] [i_5 - 1] [i_5 - 1])) : (((/* implicit */int) var_5))));
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_5] [i_5 - 1] [i_5 - 1] [i_5] [i_5] [i_5 - 1])) ? (arr_23 [i_4] [i_5 - 1] [i_5] [i_5] [i_5] [i_5 - 1]) : (arr_23 [i_0] [i_5 - 1] [i_0] [i_0] [i_5] [i_5 - 1])));
                    arr_25 [i_0] [i_0] [i_4] [i_0] |= ((/* implicit */short) (~(((((/* implicit */int) (short)32465)) & (((/* implicit */int) (short)-32469))))));
                }
            }
            for (short i_7 = 3; i_7 < 9; i_7 += 4) 
            {
                var_23 = (-(((/* implicit */int) (short)32473)));
                arr_30 [i_0] [i_4] [i_7] = ((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned char)128)))) >> ((((+(((/* implicit */int) arr_5 [(unsigned char)9])))) - (56)))));
                arr_31 [i_0] [i_7] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)33)) ? (var_12) : (var_16)))) ? (((/* implicit */long long int) var_9)) : ((~(5488769594526336741LL))));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_34 [i_0] [i_8] [i_8] = ((/* implicit */_Bool) ((short) var_9));
                arr_35 [i_0] [i_8] = ((/* implicit */short) var_16);
                arr_36 [i_0] [i_4] [i_8] &= ((/* implicit */long long int) (+(((/* implicit */int) (short)-32455))));
                arr_37 [i_8] [i_4] [i_0] [i_0] = var_6;
            }
            for (short i_9 = 0; i_9 < 12; i_9 += 3) 
            {
                var_24 = ((/* implicit */_Bool) (-(4044559786769882761LL)));
                /* LoopSeq 2 */
                for (long long int i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    var_25 = ((/* implicit */short) (+((+(((/* implicit */int) var_15))))));
                    var_26 = var_10;
                    var_27 = ((/* implicit */_Bool) ((arr_24 [i_10] [i_9] [i_4] [i_0]) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_10] [i_9] [i_4] [i_0])))));
                }
                for (int i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    var_28 = ((/* implicit */int) max((var_28), (((((/* implicit */int) arr_38 [i_0])) / (((/* implicit */int) (short)-32441))))));
                    arr_47 [9LL] [0LL] [i_11] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-32468))));
                }
                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_0] [i_4] [i_0] [i_9])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_11))));
            }
            /* LoopNest 2 */
            for (unsigned char i_12 = 0; i_12 < 12; i_12 += 2) 
            {
                for (short i_13 = 2; i_13 < 9; i_13 += 4) 
                {
                    {
                        arr_54 [11] [11] [i_4] [i_12] [i_12] [i_13 - 2] = ((/* implicit */_Bool) ((((/* implicit */long long int) var_9)) + (((((/* implicit */_Bool) var_4)) ? (arr_8 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_12] [i_4] [i_0])))))));
                        /* LoopSeq 2 */
                        for (short i_14 = 2; i_14 < 8; i_14 += 3) 
                        {
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-7340017)))) ? (arr_33 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) arr_50 [i_12] [i_12] [i_13 + 3] [i_13 - 1] [i_14 + 3]))));
                            arr_58 [i_13 + 3] [i_13 + 3] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) (_Bool)1);
                            arr_59 [11] [i_14 + 4] [i_13] [i_12] [i_0] [i_0] [i_0] = (+(arr_33 [i_0] [(unsigned char)5] [i_13 + 2] [i_14]));
                            arr_60 [i_0] [(short)6] [i_12] [i_4] [i_14 - 2] [i_14] [i_12] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned char i_15 = 0; i_15 < 12; i_15 += 2) 
                        {
                            var_31 = ((/* implicit */int) ((short) (+(var_6))));
                            arr_64 [i_0] [i_0] [i_0] = (-(((/* implicit */int) (_Bool)1)));
                            var_32 |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)128)) && (((/* implicit */_Bool) (short)-18555))));
                            var_33 = ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_1 [i_13 - 1])));
                        }
                        var_34 *= ((/* implicit */short) ((((var_7) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_14 [i_0])))) + (((/* implicit */int) ((short) arr_46 [i_13] [i_12] [i_4])))));
                        var_35 *= ((/* implicit */int) ((((/* implicit */int) ((short) arr_24 [i_13 + 2] [i_12] [i_4] [i_0]))) < (((((/* implicit */int) (short)-18555)) - (((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (short)18528))));
            var_37 = ((/* implicit */_Bool) (+(((((/* implicit */int) var_0)) * (((/* implicit */int) (short)-18550))))));
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            var_38 = (+(min(((+(((/* implicit */int) arr_56 [i_17] [i_17] [i_17] [i_0])))), (((/* implicit */int) (_Bool)1)))));
            arr_70 [i_17] [i_17] [i_17] = ((/* implicit */_Bool) var_15);
            /* LoopNest 3 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (int i_19 = 0; i_19 < 12; i_19 += 2) 
                {
                    for (short i_20 = 3; i_20 < 8; i_20 += 3) 
                    {
                        {
                            var_39 = ((/* implicit */short) (~((+(((/* implicit */int) var_14))))));
                            var_40 = ((/* implicit */_Bool) (~((-(max((-805244424), (((/* implicit */int) (short)32467))))))));
                            var_41 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)-8191)) ? (((/* implicit */int) (unsigned char)219)) : (-1993460706)));
                            var_42 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_20 + 3])) + (((/* implicit */int) arr_77 [i_20 + 3] [i_20 + 1] [i_20] [i_20] [i_20] [i_20 + 2]))))), (((((/* implicit */_Bool) arr_77 [i_20 - 1] [i_20 + 3] [i_20] [0] [i_20] [i_20])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_20 + 2]))) : (arr_23 [i_19] [i_19] [i_20 - 3] [i_20 + 3] [i_20] [i_20 + 1])))));
                        }
                    } 
                } 
            } 
        }
    }
    for (int i_21 = 0; i_21 < 18; i_21 += 4) 
    {
        var_43 &= ((/* implicit */long long int) ((short) ((((/* implicit */int) (short)32467)) + (((/* implicit */int) (short)2047)))));
        var_44 = ((/* implicit */int) var_14);
        var_45 &= ((/* implicit */long long int) min((var_4), ((short)-4840)));
    }
}
