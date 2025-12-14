/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126180
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
    for (short i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        var_20 ^= ((/* implicit */short) arr_10 [i_3]);
                        var_21 &= ((/* implicit */unsigned char) arr_4 [(short)0] [(short)6]);
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        var_22 = ((/* implicit */short) ((unsigned char) (-(((/* implicit */int) (short)32744)))));
                        arr_14 [(short)6] [5] [i_1] [(short)10] = ((/* implicit */short) arr_0 [9U]);
                        var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) arr_1 [i_1] [(unsigned char)8])) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) arr_8 [i_1]))))));
                    }
                    var_24 = ((/* implicit */short) max((((unsigned char) (short)32765)), (min((arr_2 [2]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)32760)))))))));
                    arr_15 [i_0] [i_1] [i_2] = ((/* implicit */int) (short)16261);
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned char) arr_12 [i_0] [(short)4] [i_0] [(short)4]);
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            arr_19 [i_0] [i_0] [i_0] = ((short) ((((((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_0])) < (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) (short)-32744)) == (((/* implicit */int) (unsigned char)124))))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0])) < (((/* implicit */int) (short)-13633)))))));
            var_26 = (short)(-32767 - 1);
        }
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 15; i_6 += 4) /* same iter space */
    {
        arr_23 [i_6] = ((/* implicit */int) (((-(((/* implicit */int) (short)32756)))) >= (((/* implicit */int) (short)-32742))));
        var_27 = 8372224U;
        arr_24 [i_6] = ((/* implicit */int) ((unsigned int) arr_3 [i_6] [i_6] [7U]));
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_6] [i_6])))))));
    }
    for (short i_7 = 0; i_7 < 21; i_7 += 3) 
    {
        arr_27 [16] [16] = ((/* implicit */short) ((unsigned int) (short)-9199));
        /* LoopSeq 3 */
        for (unsigned int i_8 = 3; i_8 < 18; i_8 += 3) 
        {
            arr_30 [i_7] [i_8 + 3] = ((unsigned int) 361140973U);
            arr_31 [i_7] [i_8] = ((/* implicit */short) max((min((((/* implicit */unsigned int) ((short) arr_26 [i_7]))), (((((/* implicit */_Bool) -1073741824)) ? (arr_26 [i_7]) : (((/* implicit */unsigned int) arr_28 [i_7])))))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((short) arr_25 [i_7]))))))));
        }
        for (int i_9 = 1; i_9 < 19; i_9 += 2) 
        {
            var_29 = ((/* implicit */unsigned char) min((((/* implicit */short) ((((/* implicit */int) arr_25 [i_7])) > (((/* implicit */int) (unsigned char)86))))), ((short)-32717)));
            arr_34 [i_9 + 2] [i_7] [i_7] = ((/* implicit */unsigned int) ((short) (unsigned char)63));
            var_30 -= ((/* implicit */unsigned int) ((((/* implicit */int) (short)-23964)) < (((/* implicit */int) arr_25 [(short)20]))));
            var_31 = ((/* implicit */unsigned char) arr_29 [11U] [i_9]);
            var_32 = ((/* implicit */short) min((((/* implicit */int) arr_25 [i_7])), (((int) (short)32719))));
        }
        for (short i_10 = 0; i_10 < 21; i_10 += 2) 
        {
            var_33 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((int) (short)(-32767 - 1))))));
            var_34 = ((/* implicit */unsigned char) ((int) arr_33 [i_7]));
        }
    }
    /* LoopNest 2 */
    for (unsigned char i_11 = 3; i_11 < 13; i_11 += 2) 
    {
        for (int i_12 = 3; i_12 < 16; i_12 += 2) 
        {
            {
                var_35 = ((/* implicit */short) ((min((((int) (short)-17463)), (((/* implicit */int) arr_35 [(short)18] [i_11 + 1])))) < (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_11] [i_11]))) > ((~(arr_36 [i_12 - 2] [i_11]))))))));
                var_36 = (unsigned char)103;
            }
        } 
    } 
}
