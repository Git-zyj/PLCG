/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164998
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */int) max(((!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), (arr_1 [i_0])))))), (arr_6 [i_0] [i_0] [i_0])));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 16; i_3 += 4) 
                    {
                        for (short i_4 = 3; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_4] [i_2] [i_3 - 2] [i_0] [i_1] [i_2] = var_5;
                                arr_17 [i_0] [i_2] [i_2] [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_0 [i_0])))) || (((/* implicit */_Bool) var_9))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) arr_5 [i_0] [(unsigned short)17]);
                                var_15 = ((/* implicit */short) arr_18 [i_0] [5] [(short)16] [(short)1] [i_6] [5]);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_2 [i_2] [i_1]))))));
                }
                /* vectorizable */
                for (short i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    arr_27 [i_0] [i_0] [i_7] = ((/* implicit */short) var_3);
                    arr_28 [i_7] [i_0] [i_0] = ((((/* implicit */_Bool) (short)16150)) || (((/* implicit */_Bool) (short)-2357)));
                    var_17 = ((unsigned short) arr_5 [i_0] [i_1]);
                }
                for (int i_8 = 4; i_8 < 15; i_8 += 1) 
                {
                    var_18 = ((/* implicit */_Bool) arr_14 [i_1] [i_1] [(_Bool)1] [i_1] [i_0]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        var_19 = arr_15 [i_8 - 1] [i_8 + 1] [i_8] [(_Bool)1] [i_8] [i_8 - 1] [i_8];
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-2367)) + (arr_3 [i_0] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_1] [i_0] [(_Bool)1]))))) : (((/* implicit */int) arr_33 [i_8] [i_8 + 1] [i_8] [i_8]))));
                        arr_34 [i_0] [i_8] [9] [i_0] = (+(var_2));
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_11))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        for (short i_11 = 0; i_11 < 18; i_11 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */short) min((((/* implicit */int) var_5)), (-128562162)));
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_25 [i_0]))))))) + (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((short) var_2))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_8 - 1] [i_0])) ? (var_3) : (((/* implicit */int) var_6))))))));
                                var_24 = ((/* implicit */short) ((((/* implicit */int) arr_31 [i_8 - 1] [i_8 - 3] [i_8] [i_8 + 3])) + ((-(((/* implicit */int) arr_31 [i_8 - 1] [i_8 - 3] [i_8 - 1] [i_8 + 3]))))));
                            }
                        } 
                    } 
                    var_25 = ((unsigned short) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_6))));
                }
                /* LoopSeq 1 */
                for (int i_12 = 0; i_12 < 18; i_12 += 1) 
                {
                    var_26 = ((/* implicit */short) ((((/* implicit */int) ((short) arr_11 [i_0] [(short)0] [(short)4] [i_12] [i_12] [i_0]))) + (((/* implicit */int) arr_40 [(short)16] [(short)16] [(short)14] [i_12]))));
                    /* LoopNest 2 */
                    for (short i_13 = 2; i_13 < 16; i_13 += 2) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                arr_50 [(short)5] [i_1] [i_12] [i_13] [i_14] [(short)6] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) > ((+(-561136955))))) || (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (short)-2367)) || (((/* implicit */_Bool) var_12))))))));
                                arr_51 [i_0] = ((short) arr_46 [i_13]);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_15 = 2; i_15 < 17; i_15 += 1) 
    {
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_17 = 1; i_17 < 16; i_17 += 2) 
                {
                    for (short i_18 = 1; i_18 < 16; i_18 += 1) 
                    {
                        for (short i_19 = 0; i_19 < 18; i_19 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_5 [i_15] [i_15])) || (((/* implicit */_Bool) var_2)))));
                                var_28 = ((((/* implicit */_Bool) ((unsigned short) var_0))) || (((/* implicit */_Bool) (short)-7198)));
                                var_29 = ((/* implicit */_Bool) var_7);
                                var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((_Bool) max((var_3), (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))))));
                                var_31 = ((/* implicit */unsigned short) (+(min((((int) var_9)), ((+(((/* implicit */int) var_8))))))));
                            }
                        } 
                    } 
                } 
                arr_64 [i_15] [i_16] = ((/* implicit */_Bool) min((var_3), (((/* implicit */int) max((max((var_0), (((/* implicit */unsigned short) (short)-2337)))), (((/* implicit */unsigned short) (short)18093)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_20 = 4; i_20 < 11; i_20 += 4) 
    {
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            {
                var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [i_20] [i_20 - 3] [i_20] [i_20 - 3] [i_20 - 3])) ? (((/* implicit */int) (short)2367)) : (((/* implicit */int) var_10)))) + ((+(((/* implicit */int) arr_59 [i_20] [i_20] [(_Bool)1]))))))) || (((/* implicit */_Bool) var_10))));
                var_33 = ((((((/* implicit */_Bool) arr_3 [i_20 - 3] [i_21])) || (((/* implicit */_Bool) arr_25 [i_21])))) || ((!(((/* implicit */_Bool) arr_45 [i_20] [i_21] [i_20] [i_20] [i_21] [(short)8])))));
                arr_72 [i_21] [i_21] = ((/* implicit */short) var_3);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_22 = 0; i_22 < 11; i_22 += 2) 
    {
        for (short i_23 = 0; i_23 < 11; i_23 += 3) 
        {
            {
                arr_81 [i_23] = ((/* implicit */_Bool) (unsigned short)5);
                /* LoopNest 2 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    for (int i_25 = 0; i_25 < 11; i_25 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */int) ((unsigned short) max((arr_45 [i_22] [i_22] [i_23] [i_24] [(_Bool)1] [(_Bool)1]), (var_3))));
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) || (((_Bool) var_2))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */_Bool) ((((/* implicit */int) max((((((/* implicit */_Bool) arr_8 [(short)3] [(short)12] [6] [i_23])) || (((/* implicit */_Bool) arr_23 [2] [i_23] [(_Bool)1] [i_23] [i_23])))), (((((/* implicit */_Bool) var_5)) || ((_Bool)1)))))) + (((/* implicit */int) arr_57 [i_22]))));
            }
        } 
    } 
}
