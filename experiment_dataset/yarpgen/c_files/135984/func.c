/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135984
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
            {
                arr_8 [(short)14] [i_1] [(short)14] |= min(((+(((/* implicit */int) (short)-6354)))), (1091603045));
                var_17 = ((int) (-(((var_14) - (arr_6 [i_0] [(short)13] [i_2] [i_2])))));
                arr_9 [i_2] [i_0] [i_0] = ((((/* implicit */_Bool) -1684038810)) ? (((/* implicit */int) (short)4918)) : (1306507913));
                arr_10 [(short)8] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (short)12602)) || (((/* implicit */_Bool) arr_0 [0]))));
            }
            for (int i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
            {
                arr_14 [i_0] [i_0] [i_3] [13] = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */int) ((short) (~(((/* implicit */int) var_7)))))) : (max((-1603777748), (-1)))));
                arr_15 [i_0] [i_0] = min((min((1698710824), (((int) var_14)))), ((~(var_5))));
            }
            var_18 = ((max((arr_5 [i_0] [i_0]), (arr_12 [i_1 + 1] [i_0] [i_0] [i_1 + 1]))) ^ (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [(short)1])));
        }
        var_19 = min((max((arr_0 [i_0]), (((/* implicit */int) var_15)))), (((/* implicit */int) arr_3 [i_0])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_6 = 3; i_6 < 13; i_6 += 4) 
                    {
                        for (int i_7 = 2; i_7 < 13; i_7 += 4) 
                        {
                            {
                                arr_27 [10] [i_4] [i_4] [i_4] [i_6] [i_4] &= ((short) max((((/* implicit */int) ((((/* implicit */int) var_12)) < (-881918749)))), (((((/* implicit */_Bool) arr_21 [i_5])) ? (((/* implicit */int) var_1)) : (var_5)))));
                                var_20 -= ((/* implicit */short) max(((-(((/* implicit */int) ((short) arr_12 [0] [i_4] [i_7] [i_4]))))), (var_8)));
                                var_21 &= ((/* implicit */int) var_1);
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 353575164)) ? (((/* implicit */int) (short)-1)) : (((int) -1))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) min((var_23), ((+(((max((1716311882), (-892690290))) + (var_5)))))));
                }
            } 
        } 
    }
    for (int i_8 = 1; i_8 < 21; i_8 += 4) 
    {
        var_24 -= ((/* implicit */int) ((short) min((var_8), ((~(((/* implicit */int) var_13)))))));
        var_25 = (-(min((((int) arr_28 [i_8])), (((/* implicit */int) arr_28 [i_8])))));
        /* LoopSeq 1 */
        for (int i_9 = 2; i_9 < 21; i_9 += 1) 
        {
            var_26 = min((((int) 2147483618)), (((((/* implicit */_Bool) 2147483647)) ? (-872554465) : (((/* implicit */int) (short)12280)))));
            var_27 &= ((/* implicit */short) ((int) ((((((/* implicit */int) var_1)) >> (((var_2) + (620718968))))) < (((int) arr_31 [(short)6])))));
        }
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 12; i_10 += 4) 
    {
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_17 [i_10] [(short)7])) : (((/* implicit */int) arr_3 [i_10 + 3]))));
        var_29 -= (+(((/* implicit */int) var_1)));
        var_30 = ((int) var_13);
    }
    /* vectorizable */
    for (short i_11 = 0; i_11 < 23; i_11 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_12 = 2; i_12 < 20; i_12 += 1) 
        {
            var_31 = ((/* implicit */short) var_5);
            /* LoopSeq 1 */
            for (short i_13 = 2; i_13 < 21; i_13 += 1) 
            {
                var_32 -= ((short) 2147483647);
                arr_42 [i_13] [i_13] = ((/* implicit */short) (~(((/* implicit */int) (short)-11242))));
            }
            var_33 = ((/* implicit */int) max((var_33), (((int) arr_41 [i_11] [i_11] [i_12] [i_12 - 2]))));
            var_34 = ((arr_39 [i_12 + 3] [i_12] [i_12 - 2]) >> (((((/* implicit */int) var_12)) + (25131))));
        }
        var_35 = ((/* implicit */int) max((var_35), ((~(arr_39 [i_11] [i_11] [i_11])))));
        var_36 = ((((/* implicit */_Bool) arr_39 [(short)14] [16] [i_11])) ? (arr_41 [i_11] [i_11] [i_11] [i_11]) : (arr_41 [i_11] [i_11] [i_11] [(short)22]));
        arr_43 [i_11] = ((/* implicit */short) ((arr_37 [i_11] [i_11]) + (arr_37 [10] [i_11])));
    }
    var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) var_11))));
}
