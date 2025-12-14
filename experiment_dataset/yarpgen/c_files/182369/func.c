/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182369
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    var_17 = arr_8 [(short)2] [i_1] [i_0];
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((short) (unsigned char)240)))));
                }
            } 
        } 
    } 
    var_19 *= ((short) (short)-11453);
    /* LoopSeq 1 */
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (short)-2931)))) ? ((-(((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) arr_11 [(unsigned char)10])))))) : (((/* implicit */int) min((max((((/* implicit */short) var_6)), ((short)-2931))), (arr_10 [i_3] [i_3]))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-2947)) || (((/* implicit */_Bool) (unsigned char)131))));
            var_22 = arr_9 [i_3];
            var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)255))));
            var_24 = ((/* implicit */unsigned char) ((short) ((unsigned int) var_7)));
        }
        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            arr_16 [i_3] [i_3] [i_5] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (short)-17933))))), (((((/* implicit */_Bool) arr_9 [i_5])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_9 [i_3]))))));
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (short)-2940))));
        }
        for (short i_6 = 2; i_6 < 15; i_6 += 4) 
        {
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (-(max((((/* implicit */unsigned int) var_9)), (var_7))))))));
            arr_19 [i_3] = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) (short)-2940)))), ((!(((/* implicit */_Bool) (unsigned char)127))))));
            var_27 = ((/* implicit */short) ((signed char) (unsigned char)0));
        }
        var_28 -= ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)-112)), (((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */int) (short)30527)) : (((/* implicit */int) (unsigned char)19))))));
        var_29 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((short) min((((/* implicit */unsigned int) arr_12 [i_3] [(signed char)12] [i_3])), (var_7))))), (var_15)));
    }
    /* LoopNest 3 */
    for (unsigned char i_7 = 1; i_7 < 12; i_7 += 2) 
    {
        for (unsigned char i_8 = 2; i_8 < 11; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 15; i_9 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned char) (-(((((/* implicit */int) (short)27395)) * (((/* implicit */int) arr_29 [i_8 + 3] [i_8] [i_7 + 3] [i_10]))))));
                        arr_32 [4U] [(unsigned char)10] [i_9] [i_7] = max((((unsigned char) (signed char)2)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_31 [i_7] [(signed char)5] [i_8] [i_8 + 3]))))));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)12702)) ? (min(((-(((/* implicit */int) arr_26 [i_8])))), ((+(((/* implicit */int) var_14)))))) : (((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) 1709386251U))))), ((signed char)-74))))));
                        var_32 = ((/* implicit */unsigned char) min((arr_13 [i_9]), (arr_13 [i_8 - 2])));
                        arr_33 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) (unsigned char)131);
                    }
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (short i_12 = 0; i_12 < 15; i_12 += 2) 
                        {
                            arr_38 [i_7] [i_7] [(short)4] [i_11] [i_12] [i_12] = ((/* implicit */unsigned char) (+(var_3)));
                            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((/* implicit */int) arr_37 [(short)14] [i_8 + 2] [i_8 + 2] [i_9] [i_7 - 1])) - (((/* implicit */int) (short)2309)))))));
                        }
                        for (unsigned char i_13 = 4; i_13 < 13; i_13 += 4) 
                        {
                            arr_41 [i_7] [i_7] [i_7] [i_7] [i_7] = var_2;
                            arr_42 [i_7] [i_7] [i_11] [i_11] [i_7] = ((/* implicit */short) ((signed char) arr_37 [i_13] [i_13] [i_13 - 1] [i_7] [i_13 + 2]));
                        }
                        for (unsigned char i_14 = 0; i_14 < 15; i_14 += 4) 
                        {
                            var_34 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3885650824U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_15 [i_7 + 3] [i_8] [i_9]))));
                            arr_45 [i_7] [i_8] [i_7] [i_11] [i_7] = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_21 [(unsigned char)12])))) * (((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */int) (short)-17302)) : (((/* implicit */int) (unsigned char)222))))));
                            var_35 = ((/* implicit */short) ((((/* implicit */int) var_0)) >> (((((/* implicit */int) arr_34 [i_7 - 1] [i_8 - 1] [i_8 + 1] [i_9])) - (7541)))));
                            arr_46 [i_14] [i_7] [i_7] [i_7] = ((/* implicit */short) var_2);
                            arr_47 [i_9] [i_9] [i_7] [i_9] [i_9] [i_9] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) (short)2320)) : (((/* implicit */int) var_13))))) ? (var_15) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [(unsigned char)15] [i_11] [(unsigned char)15])) ? (((/* implicit */int) arr_9 [i_7])) : (((/* implicit */int) arr_39 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))));
                        }
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3885650824U)) ? (((/* implicit */int) arr_27 [i_7] [i_7 + 3] [i_8 + 2])) : (((/* implicit */int) ((short) (short)-16394)))));
                    }
                    for (signed char i_15 = 0; i_15 < 15; i_15 += 2) /* same iter space */
                    {
                        var_37 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)200))) : (2598884224U))) * (((/* implicit */unsigned int) ((/* implicit */int) max((arr_35 [i_7] [i_8 + 4]), (arr_35 [i_7] [i_8 + 4])))))));
                        var_38 += ((/* implicit */signed char) min((max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_7] [i_8 - 2] [i_8] [i_15]))) != (4082649448U)))), (var_2))), (min((((/* implicit */unsigned int) ((signed char) var_11))), (max((((/* implicit */unsigned int) var_6)), (4294967286U)))))));
                        var_39 += ((/* implicit */unsigned char) ((signed char) max((((/* implicit */int) arr_22 [i_7 - 1] [i_9] [i_8 + 1])), ((+(((/* implicit */int) (short)(-32767 - 1))))))));
                        var_40 = ((/* implicit */unsigned char) var_15);
                    }
                    for (signed char i_16 = 0; i_16 < 15; i_16 += 2) /* same iter space */
                    {
                        arr_53 [i_7] [i_9] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-18))) : (var_2))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */int) (short)-4253)) : (((/* implicit */int) arr_28 [i_7] [i_7 + 2] [i_7 + 2] [i_8] [i_7])))))))) ? ((+(var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)127), (var_0)))))));
                        arr_54 [i_7] [i_8] [i_9] [i_7] [i_7] = (unsigned char)35;
                    }
                    arr_55 [(short)5] [i_8] [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)16)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)60)))));
                }
            } 
        } 
    } 
}
