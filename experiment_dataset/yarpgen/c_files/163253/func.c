/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163253
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) (-(((/* implicit */int) (short)-7))));
        var_18 += ((/* implicit */short) ((((/* implicit */int) (short)32744)) / (((((((/* implicit */int) (short)-11145)) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) (short)-11149)))))))));
    }
    for (short i_1 = 3; i_1 < 9; i_1 += 1) 
    {
        var_19 *= (short)-11149;
        var_20 -= ((/* implicit */short) (!(((/* implicit */_Bool) (short)11149))));
        arr_5 [i_1] = ((/* implicit */short) (~(((((/* implicit */int) (short)-11158)) & (((/* implicit */int) (short)32767))))));
    }
    for (short i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        /* LoopSeq 3 */
        for (short i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            arr_11 [i_3] = (short)25262;
            var_21 += ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-9963))))) & (((/* implicit */int) ((((/* implicit */int) (short)0)) == ((-(((/* implicit */int) (short)-12488)))))))));
            /* LoopSeq 4 */
            for (short i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-1))));
                var_23 = ((/* implicit */short) (-(((/* implicit */int) (short)-9963))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    var_24 += ((/* implicit */short) (((~(((/* implicit */int) (short)1340)))) + (((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) (short)1340)))))));
                    arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] = (short)-27377;
                }
                arr_17 [i_2] [i_3] [i_4] = (short)12491;
            }
            for (short i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
            {
                var_25 = (short)0;
                var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)9968))));
                arr_21 [i_2] [i_3] [i_6] [i_6] = (short)-32767;
                /* LoopSeq 1 */
                for (short i_7 = 2; i_7 < 9; i_7 += 4) 
                {
                    var_27 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (short)11128))))));
                    arr_25 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-25262))));
                }
                var_28 += ((/* implicit */short) ((((/* implicit */int) (short)-9968)) >= (((/* implicit */int) (short)-21618))));
            }
            for (short i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
            {
                var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (~(((((/* implicit */int) (short)25272)) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)-9968))))))))))));
                arr_28 [i_3] [i_3] [i_3] [i_3] = (short)32767;
            }
            for (short i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (short i_10 = 0; i_10 < 10; i_10 += 4) 
                {
                    var_30 = ((/* implicit */short) (!(((((/* implicit */_Bool) (short)-11146)) || (((((/* implicit */_Bool) (short)32752)) || (((/* implicit */_Bool) (short)-27318))))))));
                    arr_35 [i_2] [i_3] [i_9] &= ((/* implicit */short) (!((((!(((/* implicit */_Bool) (short)11142)))) || (((/* implicit */_Bool) (short)-11128))))));
                    arr_36 [i_2] [i_3] [i_9] [i_10] |= ((/* implicit */short) ((((/* implicit */int) (short)11153)) ^ (((/* implicit */int) (short)23600))));
                }
                for (short i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    /* LoopSeq 4 */
                    for (short i_12 = 3; i_12 < 8; i_12 += 4) /* same iter space */
                    {
                        arr_42 [i_2] [i_3] [i_9] [i_11] [i_9] [i_12] = (short)12252;
                        var_31 = ((/* implicit */short) (((((+(((/* implicit */int) (short)-11149)))) / ((+(((/* implicit */int) (short)7)))))) * (((((((/* implicit */int) (short)-11133)) * (((/* implicit */int) (short)3)))) * ((+(((/* implicit */int) (short)31))))))));
                        arr_43 [i_12] [i_2] [i_3] [i_9] [i_9] [i_11] [i_12] = ((/* implicit */short) ((((/* implicit */int) (short)11142)) <= (((/* implicit */int) (short)32767))));
                    }
                    for (short i_13 = 3; i_13 < 8; i_13 += 4) /* same iter space */
                    {
                        arr_46 [i_11] [i_3] [i_9] [i_9] &= (short)-1;
                        arr_47 [i_2] [i_3] [i_9] = (short)-11125;
                    }
                    for (short i_14 = 3; i_14 < 8; i_14 += 4) /* same iter space */
                    {
                        var_32 -= (short)32767;
                        var_33 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)0))));
                    }
                    for (short i_15 = 1; i_15 < 9; i_15 += 3) 
                    {
                        var_34 += ((/* implicit */short) (~((((~(((/* implicit */int) (short)-1)))) + (((/* implicit */int) (!(((/* implicit */_Bool) (short)-30269)))))))));
                        var_35 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */int) (short)11138)) / (((/* implicit */int) (short)32758)))))))));
                    }
                    arr_52 [i_2] [i_3] [i_3] [i_11] [i_11] = ((/* implicit */short) (-((~(((/* implicit */int) ((((/* implicit */int) (short)1)) > (((/* implicit */int) (short)-11147)))))))));
                    var_36 = ((/* implicit */short) ((((/* implicit */int) (short)13)) != ((~(((/* implicit */int) (short)11133))))));
                    var_37 = (short)-14323;
                }
                /* LoopNest 2 */
                for (short i_16 = 0; i_16 < 10; i_16 += 2) 
                {
                    for (short i_17 = 0; i_17 < 10; i_17 += 3) 
                    {
                        {
                            arr_59 [i_17] [i_3] [i_9] [i_16] [i_17] = (short)30269;
                            arr_60 [i_9] [i_17] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((((/* implicit */int) (short)-11)) + (2147483647))) >> (((((/* implicit */int) (short)32744)) - (32741))))) | (((/* implicit */int) (short)11109)))))));
                            arr_61 [i_2] [i_3] [i_17] [i_16] = ((/* implicit */short) ((((/* implicit */int) (short)(-32767 - 1))) - ((-(((/* implicit */int) (short)12244))))));
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (short i_18 = 0; i_18 < 10; i_18 += 2) 
        {
            var_38 = ((/* implicit */short) ((((((/* implicit */int) (short)12244)) < (((/* implicit */int) (short)11107)))) && ((!(((/* implicit */_Bool) (short)-1))))));
            var_39 = ((/* implicit */short) ((((/* implicit */int) (short)-241)) | ((+(((/* implicit */int) (short)(-32767 - 1)))))));
            /* LoopNest 3 */
            for (short i_19 = 2; i_19 < 8; i_19 += 1) 
            {
                for (short i_20 = 3; i_20 < 8; i_20 += 4) 
                {
                    for (short i_21 = 3; i_21 < 8; i_21 += 2) 
                    {
                        {
                            var_40 = (short)1016;
                            arr_73 [i_20] [i_20] [i_19] [i_18] [i_20] = (short)12281;
                            arr_74 [i_20] [i_20] = (short)-30270;
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (short i_22 = 0; i_22 < 10; i_22 += 3) 
        {
            arr_77 [i_2] [i_2] [i_22] = ((/* implicit */short) ((((((/* implicit */int) (short)-12264)) / (((/* implicit */int) (short)255)))) < (((((/* implicit */int) (short)2044)) * (((/* implicit */int) (short)-256))))));
            var_41 = (short)-32751;
            var_42 = ((/* implicit */short) (((+(((/* implicit */int) (short)11122)))) > (((/* implicit */int) (short)-1008))));
            var_43 = ((/* implicit */short) (~((~(((/* implicit */int) (short)32767))))));
        }
        arr_78 [i_2] = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((((/* implicit */int) (short)-11109)) / (((/* implicit */int) (short)-3210)))))))));
    }
    /* LoopNest 2 */
    for (short i_23 = 0; i_23 < 25; i_23 += 4) 
    {
        for (short i_24 = 0; i_24 < 25; i_24 += 4) 
        {
            {
                var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) (!(((/* implicit */_Bool) (short)-1)))))));
                arr_83 [i_23] = ((/* implicit */short) ((((/* implicit */int) (short)11121)) & (((((/* implicit */int) (!(((/* implicit */_Bool) (short)3790))))) + ((-(((/* implicit */int) (short)32744))))))));
            }
        } 
    } 
}
