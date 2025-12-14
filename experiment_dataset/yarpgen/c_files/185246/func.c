/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185246
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
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_1))));
    var_19 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) ((signed char) var_16))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_20 = ((((((/* implicit */int) ((((/* implicit */int) (short)19428)) <= (((/* implicit */int) arr_2 [i_0]))))) - ((~(((/* implicit */int) (signed char)-113)))))) + ((~(((/* implicit */int) (signed char)(-127 - 1))))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_3 = 2; i_3 < 22; i_3 += 4) 
                {
                    for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        {
                            var_21 *= ((/* implicit */signed char) (~((((+(((/* implicit */int) (signed char)124)))) | (((((((/* implicit */int) arr_2 [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_4])) + (34)))))))));
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (-((~(((/* implicit */int) (signed char)118)))))))));
                            var_23 -= ((/* implicit */signed char) (((-(((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((/* implicit */int) (signed char)15)))))) > (((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_3)) - (32611)))))));
                            var_24 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)93)) | (((/* implicit */int) arr_12 [i_2 + 3] [i_2 - 3] [i_3 - 2] [i_4] [i_4])))) > (((/* implicit */int) ((((/* implicit */int) (signed char)-3)) <= (-1736325554))))));
                            arr_14 [i_3] [i_3] [(signed char)18] [(signed char)15] [(signed char)15] [(signed char)2] [i_4] = ((/* implicit */short) (+((-(((/* implicit */int) var_14))))));
                        }
                    } 
                } 
                arr_15 [i_0] [i_2] = ((/* implicit */signed char) ((int) (-(((/* implicit */int) var_6)))));
            }
            for (short i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                var_25 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-127)))))));
                arr_18 [(signed char)19] [(signed char)19] |= ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (signed char)-13))) >= ((+(((/* implicit */int) arr_6 [(signed char)6] [i_1] [i_5]))))));
            }
            var_26 *= ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [i_1] [(signed char)7])))))));
            /* LoopNest 3 */
            for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    for (int i_8 = 1; i_8 < 22; i_8 += 4) 
                    {
                        {
                            arr_26 [i_0] [i_0] [i_6] [(signed char)11] [i_0] = ((/* implicit */signed char) (~((~(((/* implicit */int) ((signed char) var_13)))))));
                            var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (((((/* implicit */int) (signed char)-113)) + (127))))))))));
                            var_28 = ((/* implicit */short) (((~(((/* implicit */int) (signed char)53)))) | (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-126)))))));
                            arr_27 [i_0] [(signed char)8] [i_6] [i_7] [i_8] = ((/* implicit */short) (~((((-(var_2))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [(signed char)15] [i_1] [i_1] [i_1] [i_1] [i_1])))))))));
                            arr_28 [i_0] [i_1] [i_6] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((short) (~(((/* implicit */int) (short)15676)))));
                        }
                    } 
                } 
            } 
        }
        for (short i_9 = 1; i_9 < 21; i_9 += 4) 
        {
            arr_31 [i_0] |= ((/* implicit */signed char) (+((+(((/* implicit */int) arr_20 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_10 = 0; i_10 < 23; i_10 += 4) 
            {
                arr_34 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_9 [i_9 + 1] [i_9 + 2]))));
                arr_35 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_6)) ^ (-2147483645)));
            }
            arr_36 [i_9] [(signed char)12] [i_0] = ((/* implicit */short) (~(((((/* implicit */int) arr_3 [i_0] [i_9 + 1])) ^ (((/* implicit */int) var_4))))));
            arr_37 [i_0] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (signed char)72))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)112)) ^ (((/* implicit */int) (signed char)82)))))));
        }
        for (int i_11 = 0; i_11 < 23; i_11 += 4) 
        {
            var_29 -= ((/* implicit */signed char) (((+(((/* implicit */int) (signed char)116)))) % ((~((-(((/* implicit */int) var_3))))))));
            /* LoopSeq 2 */
            for (signed char i_12 = 0; i_12 < 23; i_12 += 4) 
            {
                arr_44 [i_0] [i_11] [i_12] [i_12] = ((/* implicit */signed char) ((short) ((int) arr_6 [i_0] [i_0] [i_0])));
                arr_45 [i_0] [i_11] [12] [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)82))));
                var_30 = ((/* implicit */signed char) ((short) ((short) arr_3 [i_12] [i_12])));
                var_31 -= ((/* implicit */signed char) (((+(((/* implicit */int) arr_19 [i_11] [i_11] [i_11])))) > ((((+(var_9))) ^ (((/* implicit */int) var_6))))));
            }
            /* vectorizable */
            for (signed char i_13 = 0; i_13 < 23; i_13 += 4) 
            {
                /* LoopSeq 2 */
                for (int i_14 = 0; i_14 < 23; i_14 += 4) 
                {
                    arr_51 [(signed char)7] [i_13] [i_13] [i_13] = (+(((/* implicit */int) (signed char)-127)));
                    /* LoopSeq 3 */
                    for (signed char i_15 = 0; i_15 < 23; i_15 += 4) /* same iter space */
                    {
                        arr_54 [i_0] [(short)3] [i_11] [i_13] [i_13] [i_14] [i_13] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_14])))))));
                        var_32 -= ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_3)))))));
                        var_33 = ((/* implicit */short) (~(((/* implicit */int) var_15))));
                    }
                    for (signed char i_16 = 0; i_16 < 23; i_16 += 4) /* same iter space */
                    {
                        arr_57 [(signed char)18] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_5)) > (var_9)))) > ((-(arr_10 [(short)14] [i_11] [(short)14] [i_16])))));
                        arr_58 [12] [(short)10] [i_11] [20] [i_14] [(signed char)9] = ((/* implicit */short) (~(((/* implicit */int) (signed char)126))));
                    }
                    for (signed char i_17 = 0; i_17 < 23; i_17 += 4) /* same iter space */
                    {
                        var_34 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)6310))));
                        arr_62 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_6))));
                        arr_63 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_13] [i_14])) ^ (((/* implicit */int) arr_9 [i_0] [i_17]))));
                    }
                    arr_64 [i_0] [i_0] [i_0] [i_0] = ((((((/* implicit */int) var_10)) + (((/* implicit */int) var_7)))) - (((/* implicit */int) arr_17 [i_0] [i_11] [i_11] [i_11])));
                }
                for (short i_18 = 3; i_18 < 22; i_18 += 4) 
                {
                    var_35 = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
                    var_36 -= ((/* implicit */signed char) (-(((/* implicit */int) var_12))));
                    arr_67 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
                    arr_68 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_0] [i_0] [i_0])) - (((/* implicit */int) var_5)))))));
                }
                var_37 = (~(1964981602));
                arr_69 [i_11] [i_11] = ((/* implicit */short) (-(((/* implicit */int) (signed char)67))));
                var_38 = ((/* implicit */signed char) ((((/* implicit */int) var_15)) + (((/* implicit */int) (signed char)-113))));
            }
            /* LoopNest 3 */
            for (signed char i_19 = 0; i_19 < 23; i_19 += 4) 
            {
                for (signed char i_20 = 0; i_20 < 23; i_20 += 4) 
                {
                    for (signed char i_21 = 0; i_21 < 23; i_21 += 4) 
                    {
                        {
                            arr_78 [i_0] [i_11] [i_19] [i_20] [i_21] [i_11] = ((/* implicit */short) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [(signed char)18])))))))));
                            var_39 = (-(((/* implicit */int) ((short) (+(((/* implicit */int) var_10)))))));
                        }
                    } 
                } 
            } 
        }
    }
}
