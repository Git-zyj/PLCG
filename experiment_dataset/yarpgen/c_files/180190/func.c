/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180190
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
    var_18 = min(((~(var_0))), (var_17));
    var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_15))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                var_21 = ((((((/* implicit */int) (unsigned char)194)) / (arr_5 [(signed char)5] [(unsigned char)15] [(unsigned char)1]))) % (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 - 2])));
                var_22 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_3 [i_0]))))));
            }
            var_23 = arr_4 [i_0] [i_0];
            var_24 ^= ((unsigned char) ((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) (unsigned char)57))));
        }
        for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_4 = 3; i_4 < 17; i_4 += 2) 
            {
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) var_16)) / (((/* implicit */int) (signed char)-42))));
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) (signed char)-47)))));
                            var_27 = (~(((((/* implicit */_Bool) var_1)) ? (var_17) : (((/* implicit */int) arr_3 [i_5])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    for (unsigned char i_8 = 3; i_8 < 18; i_8 += 2) 
                    {
                        {
                            var_28 |= ((/* implicit */unsigned char) ((((((/* implicit */int) var_3)) >= (((/* implicit */int) var_1)))) ? (((/* implicit */int) ((((/* implicit */int) arr_22 [i_3] [i_7] [i_8 - 1])) == (((/* implicit */int) (unsigned char)152))))) : (arr_17 [i_0 + 2] [i_0 + 2] [i_4 + 2])));
                            var_29 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */int) (unsigned char)183)) : (1774758794)));
                            var_30 += ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_8))) || (((/* implicit */_Bool) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_14)))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */signed char) (-(((/* implicit */int) arr_23 [i_4 + 3]))));
            }
            for (signed char i_9 = 4; i_9 < 20; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 21; i_10 += 1) 
                {
                    for (unsigned char i_11 = 2; i_11 < 19; i_11 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */int) (unsigned char)194)) : (((/* implicit */int) (unsigned char)219))));
                            var_33 = (unsigned char)230;
                        }
                    } 
                } 
                var_34 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((signed char) arr_21 [i_0 - 2] [(unsigned char)0] [(unsigned char)4]))) + (2147483647))) << (((((((/* implicit */_Bool) arr_13 [18] [8])) ? (((/* implicit */int) arr_7 [i_0] [i_3] [i_3] [(unsigned char)19])) : (-1774758795))) - (169)))));
            }
            var_35 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_24 [i_0 - 1] [i_0 - 1] [i_3] [i_3])))) ^ (((((/* implicit */_Bool) arr_0 [i_0] [i_3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))));
            var_36 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_23 [i_0])) ? (((/* implicit */int) arr_11 [11] [i_3])) : (((/* implicit */int) var_10))))));
        }
    }
    for (unsigned char i_12 = 2; i_12 < 8; i_12 += 4) 
    {
        var_37 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_20 [i_12 - 2] [i_12 - 1] [i_12] [i_12 + 4] [i_12 + 4] [i_12 + 1])) : (((/* implicit */int) arr_20 [i_12 + 4] [i_12 + 4] [i_12 + 4] [0] [i_12] [i_12 + 1]))))));
        /* LoopNest 3 */
        for (signed char i_13 = 1; i_13 < 9; i_13 += 1) 
        {
            for (int i_14 = 0; i_14 < 12; i_14 += 1) 
            {
                for (signed char i_15 = 0; i_15 < 12; i_15 += 2) 
                {
                    {
                        var_38 = (unsigned char)104;
                        var_39 = ((/* implicit */signed char) -868045165);
                        var_40 = ((/* implicit */signed char) (-((+((-(((/* implicit */int) (signed char)40))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 12; i_16 += 4) 
        {
            for (unsigned char i_17 = 4; i_17 < 9; i_17 += 4) 
            {
                for (unsigned char i_18 = 0; i_18 < 12; i_18 += 4) 
                {
                    {
                        var_41 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) arr_38 [i_12] [i_16] [i_16] [i_17] [i_17 + 3] [i_18]))))), (((((/* implicit */_Bool) var_7)) ? (-1774758798) : (((/* implicit */int) arr_3 [i_12 + 4])))))))));
                        var_42 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) arr_18 [i_12] [(signed char)9] [(unsigned char)6] [i_18])) <= (((/* implicit */int) arr_18 [i_12] [i_12] [i_12 + 2] [i_12])))))));
                        var_43 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (signed char)57))))));
                        var_44 = ((/* implicit */unsigned char) arr_17 [i_16] [(signed char)2] [i_17 - 1]);
                    }
                } 
            } 
        } 
        var_45 &= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) arr_10 [i_12] [(signed char)4] [(unsigned char)16])) : (((/* implicit */int) min(((unsigned char)183), (((/* implicit */unsigned char) (signed char)60))))))), (max((((((/* implicit */_Bool) arr_7 [(unsigned char)9] [9] [i_12 + 4] [i_12])) ? (var_13) : (((/* implicit */int) var_11)))), (((((/* implicit */int) (unsigned char)246)) >> (((((/* implicit */int) arr_4 [i_12] [i_12])) - (33)))))))));
    }
    /* vectorizable */
    for (unsigned char i_19 = 2; i_19 < 19; i_19 += 3) 
    {
        var_46 = ((/* implicit */signed char) (-(((int) var_0))));
        var_47 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)38))));
        /* LoopNest 2 */
        for (unsigned char i_20 = 0; i_20 < 20; i_20 += 4) 
        {
            for (unsigned char i_21 = 0; i_21 < 20; i_21 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 20; i_22 += 3) 
                    {
                        for (signed char i_23 = 0; i_23 < 20; i_23 += 1) 
                        {
                            {
                                var_48 &= ((/* implicit */signed char) var_12);
                                var_49 = ((/* implicit */signed char) (~(((/* implicit */int) arr_50 [i_19]))));
                                var_50 = ((unsigned char) (+(((/* implicit */int) arr_8 [i_21] [i_20] [i_19]))));
                            }
                        } 
                    } 
                    var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)18))))) ? ((+(-1783401163))) : (((((/* implicit */int) (signed char)57)) / (((/* implicit */int) (signed char)6))))));
                    var_52 = ((/* implicit */unsigned char) ((arr_56 [i_21] [i_20] [i_19 - 2]) >> (((arr_17 [i_19] [i_20] [18]) + (1984749955)))));
                    var_53 = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_19] [i_20] [i_20] [i_21])) || (((/* implicit */_Bool) arr_52 [i_19 - 1] [(signed char)6]))));
                }
            } 
        } 
    }
}
