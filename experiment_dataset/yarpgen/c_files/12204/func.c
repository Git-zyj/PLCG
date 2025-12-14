/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12204
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
    var_18 = ((var_1) % (var_17));
    var_19 = ((int) ((((((/* implicit */_Bool) var_10)) ? (var_5) : (var_7))) != (((int) var_8))));
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 20; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_20 = ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) min((arr_2 [i_1]), (arr_0 [9] [9])))) ? (((arr_0 [i_1] [i_2]) - (arr_3 [i_1] [i_2]))) : (((((/* implicit */_Bool) var_14)) ? (var_11) : (917055102))))) : (max((arr_2 [i_1]), (arr_3 [i_0 - 2] [i_0 - 1]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        var_21 = (~(var_13));
                        var_22 = -1;
                    }
                    arr_10 [i_0] [i_1] [i_1] = ((int) var_11);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (int i_4 = 2; i_4 < 19; i_4 += 1) 
        {
            var_23 = ((int) var_15);
            var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((-1562541677) & (arr_12 [i_0 - 4] [i_4]))))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                for (int i_6 = 2; i_6 < 19; i_6 += 1) 
                {
                    for (int i_7 = 3; i_7 < 19; i_7 += 2) 
                    {
                        {
                            arr_24 [i_0 - 4] [i_0 + 1] [i_7] [i_5] [i_0 - 4] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (var_6)))) ? (min((arr_15 [i_0 - 3] [i_6] [i_7 - 3]), (var_1))) : (((/* implicit */int) ((0) >= (arr_13 [i_0] [i_5] [i_7]))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) -917055102))))))) : (((int) min((var_13), (var_14)))));
                            var_25 = ((int) (+(((int) var_6))));
                            var_26 = (~(((((/* implicit */_Bool) min((var_4), (arr_7 [i_0] [i_4] [i_0] [i_7])))) ? (min((var_10), (arr_17 [i_0 - 2] [i_0 - 2] [i_5] [i_7]))) : (((((/* implicit */_Bool) arr_20 [i_0] [i_4 + 1] [i_5] [i_6 + 2] [i_4 + 1])) ? (arr_4 [9]) : (arr_0 [14] [i_6 + 1]))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 19; i_8 += 1) 
            {
                for (int i_9 = 1; i_9 < 20; i_9 += 2) 
                {
                    {
                        var_27 = ((/* implicit */int) min((var_27), (arr_3 [i_0] [i_4])));
                        var_28 = ((int) ((((/* implicit */_Bool) min((arr_27 [i_4 - 1]), (var_12)))) ? ((-(var_14))) : (((int) arr_15 [1] [11] [11]))));
                        /* LoopSeq 1 */
                        for (int i_10 = 3; i_10 < 20; i_10 += 1) 
                        {
                            arr_34 [i_0 + 1] [i_0 + 1] [i_8] [i_9 + 1] [i_8] = (-(arr_22 [i_0 - 1] [i_8]));
                            var_29 = min((-11), (((((/* implicit */_Bool) var_0)) ? ((+(arr_6 [i_8]))) : (arr_13 [i_8 + 2] [i_9] [i_9]))));
                            var_30 = ((((/* implicit */_Bool) 1854998405)) ? (((((/* implicit */_Bool) 1854998405)) ? ((-2147483647 - 1)) : (1101056411))) : (-1897713820));
                            var_31 = var_17;
                            var_32 = max(((+(-421752012))), (-1101056411));
                        }
                    }
                } 
            } 
        }
        for (int i_11 = 0; i_11 < 21; i_11 += 1) 
        {
            arr_37 [i_0] [i_11] [i_11] = ((((/* implicit */_Bool) max((-1101056408), (2124933385)))) ? ((+(max((var_15), (arr_0 [8] [i_11]))))) : ((+(min((arr_19 [5] [i_0 + 1] [i_0 - 3] [i_11] [i_11]), (arr_16 [i_0] [3]))))));
            arr_38 [i_0 - 1] = var_15;
            arr_39 [i_0] [i_11] [i_11] = ((int) (((-2147483647 - 1)) - (((((/* implicit */_Bool) arr_13 [i_0] [i_11] [i_11])) ? (arr_29 [i_0] [i_11] [i_11]) : (arr_23 [i_0] [i_0] [i_0] [20] [i_11])))));
            var_33 = ((((/* implicit */_Bool) 1562541676)) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (var_6) : (arr_6 [13]))) == (((/* implicit */int) ((arr_3 [i_0] [i_11]) == (var_12))))))) : (((int) var_15)));
        }
        for (int i_12 = 3; i_12 < 20; i_12 += 3) 
        {
            arr_43 [i_12] = var_0;
            arr_44 [i_12] = (-(((/* implicit */int) (!(((/* implicit */_Bool) 0))))));
            arr_45 [i_0] [i_12] [i_12] = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_22 [i_0] [i_12])))));
            /* LoopNest 3 */
            for (int i_13 = 4; i_13 < 20; i_13 += 3) 
            {
                for (int i_14 = 2; i_14 < 19; i_14 += 4) 
                {
                    for (int i_15 = 0; i_15 < 21; i_15 += 1) 
                    {
                        {
                            var_34 = min((((((/* implicit */_Bool) (~(arr_18 [i_0] [i_0 - 3] [i_12 - 2] [i_12 - 2] [i_12 - 2] [i_15])))) ? (max((0), (var_16))) : (((var_13) + (var_13))))), (((int) var_2)));
                            var_35 = max((((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0 - 4] [0] [i_14 - 1])) ? (arr_19 [i_0] [i_0] [i_13] [i_13 - 4] [i_14 - 1]) : (arr_19 [i_13] [i_13 - 3] [i_13] [10] [i_14 + 1]))), (((int) ((((/* implicit */_Bool) -650742283)) ? (arr_41 [i_12]) : (var_4)))));
                        }
                    } 
                } 
            } 
        }
        var_36 = ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) -825291720)) ? (-1098143480) : (-859349512))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1832555202)) ? (var_14) : (var_6)))) ? (((((/* implicit */_Bool) arr_11 [i_0])) ? (var_10) : (var_6))) : ((-(var_1))))) : (max((arr_16 [i_0 - 1] [i_0]), (min((1422186421), (var_8))))));
        /* LoopNest 3 */
        for (int i_16 = 3; i_16 < 19; i_16 += 3) 
        {
            for (int i_17 = 0; i_17 < 21; i_17 += 3) 
            {
                for (int i_18 = 1; i_18 < 18; i_18 += 3) 
                {
                    {
                        arr_60 [i_0] [i_16] [1] [12] = ((/* implicit */int) ((min((((((/* implicit */_Bool) var_3)) ? (var_9) : (arr_12 [0] [i_18 + 1]))), (((((/* implicit */_Bool) arr_32 [i_0 - 2] [i_17] [i_16])) ? (var_2) : (arr_29 [i_0] [i_16] [i_18 - 1]))))) != (((var_4) - (max(((-2147483647 - 1)), (0)))))));
                        var_37 *= ((int) 0);
                        var_38 = (+(((var_7) << (((((375039797) << (((((-281344592) + (281344618))) - (25))))) - (750079594))))));
                        var_39 ^= ((((int) ((2147483638) < (2147483644)))) ^ (((((/* implicit */_Bool) arr_33 [i_0 - 1] [i_0 - 3] [i_16 - 1] [i_16 - 1] [i_18 + 2] [i_18 + 3] [i_18 - 1])) ? (((((/* implicit */_Bool) -198792798)) ? (var_12) : (arr_18 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_16 - 2] [i_17] [i_18 + 1]))) : (arr_0 [i_0 + 1] [i_18 + 2]))));
                    }
                } 
            } 
        } 
    }
    for (int i_19 = 4; i_19 < 20; i_19 += 3) /* same iter space */
    {
        var_40 = ((/* implicit */int) max((var_40), (((int) ((int) arr_58 [14] [i_19 - 2] [10] [i_19] [i_19] [i_19])))));
        var_41 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -281344595)) ? (-2) : (var_13)))) ? ((((-2147483647 - 1)) + (var_15))) : ((-(var_1))))) + (var_9));
    }
}
