/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166284
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
    var_18 ^= ((/* implicit */short) ((((/* implicit */int) var_11)) & (((((/* implicit */_Bool) (short)-26274)) ? (((/* implicit */int) (short)27753)) : (((/* implicit */int) (short)27743))))));
    var_19 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */int) (short)10025)) | (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? ((~(((/* implicit */int) (short)27753)))) : ((~((+(((/* implicit */int) arr_1 [i_0]))))))));
        var_21 = ((/* implicit */short) ((((/* implicit */int) max(((short)0), (arr_1 [(short)16])))) / (((/* implicit */int) max((arr_0 [i_0]), ((short)-4))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_22 = var_3;
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    {
                        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)31)))))));
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_7)))))));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (-(((/* implicit */int) var_4)))))));
                            var_26 = ((/* implicit */short) (+(((/* implicit */int) arr_12 [i_3] [i_1]))));
                            arr_16 [(short)13] [(short)20] [i_3] [i_3] [i_3] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) arr_11 [(short)17] [(short)14] [(short)14] [i_5])) == (((/* implicit */int) var_5)))))));
                            var_27 = ((/* implicit */short) (~(((/* implicit */int) arr_8 [i_1] [i_1]))));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                for (short i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    {
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_13 [i_1] [i_1] [i_1])) : (((/* implicit */int) var_3)))))));
                        arr_22 [i_7] [(short)5] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)10019)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-29))));
                        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */_Bool) arr_9 [(short)14] [i_2] [(short)10] [i_7])) ? (((/* implicit */int) arr_11 [i_1] [i_2] [i_6] [i_6])) : (((/* implicit */int) var_12)))))));
                        arr_23 [i_1] = ((/* implicit */short) (~(((/* implicit */int) var_5))));
                        arr_24 [i_7] [i_6] [i_6] [i_2] [i_2] [i_1] = ((/* implicit */short) (+(((/* implicit */int) var_7))));
                    }
                } 
            } 
        }
        for (short i_8 = 2; i_8 < 23; i_8 += 3) 
        {
            /* LoopSeq 3 */
            for (short i_9 = 0; i_9 < 25; i_9 += 2) 
            {
                arr_29 [i_1] [i_8] = ((/* implicit */short) (~(((/* implicit */int) arr_18 [(short)17] [i_8] [(short)17] [i_8]))));
                var_30 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_11 [(short)15] [i_9] [(short)24] [i_1])) ? (((/* implicit */int) arr_18 [i_1] [i_8] [i_9] [i_1])) : (((/* implicit */int) (short)-27753))))));
                var_31 = ((/* implicit */short) (+(((/* implicit */int) arr_10 [i_8 + 1] [i_8] [i_8 + 1]))));
            }
            for (short i_10 = 0; i_10 < 25; i_10 += 3) 
            {
                arr_33 [i_8] = (short)-27743;
                var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-6158))))) == (((/* implicit */int) ((((/* implicit */int) arr_28 [i_1] [i_1] [(short)2])) <= (((/* implicit */int) (short)26309))))))))));
                var_33 = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_8 - 1] [i_8 + 1])) ? (((/* implicit */int) (short)-26438)) : (((/* implicit */int) arr_21 [i_8 + 2] [i_8 + 1]))));
            }
            for (short i_11 = 0; i_11 < 25; i_11 += 3) 
            {
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 25; i_12 += 3) 
                {
                    for (short i_13 = 0; i_13 < 25; i_13 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */short) (-(((/* implicit */int) arr_7 [i_1] [i_1]))));
                            var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4032)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_14 = 3; i_14 < 24; i_14 += 1) 
                {
                    for (short i_15 = 0; i_15 < 25; i_15 += 3) 
                    {
                        {
                            var_36 = (short)-53;
                            var_37 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)72)) ? (((/* implicit */int) (short)-16386)) : (((/* implicit */int) (short)-32094)))) * (((/* implicit */int) (short)-4))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_16 = 0; i_16 < 25; i_16 += 4) 
                {
                    for (short i_17 = 0; i_17 < 25; i_17 += 3) 
                    {
                        {
                            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) (short)24597)) ? (((((/* implicit */int) var_9)) * (((/* implicit */int) (short)4310)))) : (((/* implicit */int) arr_12 [i_8 - 2] [i_11]))));
                            var_39 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_17 [i_1] [i_11] [i_11]))));
                            var_40 = var_0;
                        }
                    } 
                } 
                var_41 = var_0;
                var_42 = (short)14553;
            }
            /* LoopSeq 1 */
            for (short i_18 = 0; i_18 < 25; i_18 += 1) 
            {
                var_43 = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_8 - 2] [i_8 - 1] [i_8 - 1])) ? (((/* implicit */int) (short)-15109)) : (((/* implicit */int) arr_13 [i_8 - 1] [i_8 + 1] [i_8 - 2]))));
                arr_52 [i_1] [i_8] [i_18] [i_8] = ((/* implicit */short) (~(((/* implicit */int) (short)26119))));
                arr_53 [i_8] = (short)14123;
            }
            var_44 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10032)) ? (((/* implicit */int) (short)-1312)) : (((/* implicit */int) var_0)))))));
            arr_54 [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)3458))));
            var_45 = (short)32756;
        }
        var_46 |= arr_40 [i_1] [i_1] [i_1] [i_1] [i_1];
        var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) (+(((/* implicit */int) (short)10001)))))));
    }
}
