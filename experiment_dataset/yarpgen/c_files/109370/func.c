/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109370
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
    var_11 = ((/* implicit */short) min((var_11), (var_8)));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_12 = min((max((arr_1 [i_0]), (var_4))), (arr_2 [i_0] [i_0]));
        var_13 = ((/* implicit */short) ((max((((/* implicit */int) (!(((/* implicit */_Bool) (short)-17985))))), ((+(((/* implicit */int) var_2)))))) * (min(((~(((/* implicit */int) var_6)))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)24397)) : (((/* implicit */int) var_0))))))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */int) min(((short)15637), (arr_0 [i_0])))) <= (((/* implicit */int) ((short) arr_2 [i_0] [i_0]))))))));
        var_15 += ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) (short)24401)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-18869))))))) ? (((/* implicit */int) max(((short)-24414), (arr_1 [i_0])))) : (((/* implicit */int) var_6))));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 19; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (short)16))))) : (((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_2])))) / (((/* implicit */int) max((max((var_8), ((short)-24401))), (var_2)))))))));
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        for (short i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */short) (+(((/* implicit */int) var_9))));
                                arr_17 [i_1] [i_2 - 1] [(short)3] [i_4] [(short)10] [(short)3] [i_3] = ((short) (!(((/* implicit */_Bool) (short)32767))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */short) max((((((/* implicit */int) arr_12 [i_2 + 1] [i_3] [i_3])) - (((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 1] [i_2])))), (((/* implicit */int) min(((short)-24383), ((short)14575))))));
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16383)) ? (((/* implicit */int) arr_4 [i_2 + 1])) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((short) var_8))) : (((/* implicit */int) (short)32767)))) > (((/* implicit */int) var_3)))))));
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        arr_22 [i_3] [i_2 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_4 [i_6])))) ? (((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) arr_12 [i_2] [i_3] [i_2]))))) : (((((/* implicit */int) var_4)) - (((/* implicit */int) (short)-647))))))) ? (((/* implicit */int) ((((/* implicit */int) max((var_7), (var_9)))) < ((~(((/* implicit */int) (short)0))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11825)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) arr_9 [i_1] [i_1] [(short)1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))) : (((((/* implicit */int) (short)(-32767 - 1))) % (((/* implicit */int) (short)-9531))))))));
                        /* LoopSeq 4 */
                        for (short i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            arr_25 [(short)4] [(short)4] [i_1] |= arr_6 [i_7] [(short)6] [(short)6];
                            arr_26 [i_1] [i_3] [i_1] [i_1] [i_1] [i_1] [(short)18] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) max((arr_10 [i_1] [i_3]), (var_7)))) < (((/* implicit */int) arr_24 [(short)5] [(short)5] [(short)12] [i_3] [i_6] [i_7] [i_7]))))) ^ (((/* implicit */int) var_8))));
                            arr_27 [i_7] [i_3] [(short)6] [i_3] [(short)12] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? ((-((~(((/* implicit */int) var_8)))))) : (((/* implicit */int) (short)9531))));
                        }
                        for (short i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            var_20 &= ((/* implicit */short) ((((/* implicit */int) max((arr_4 [i_1]), (((/* implicit */short) ((((/* implicit */int) arr_20 [i_8] [i_6] [i_2] [i_2] [i_2] [i_1])) >= (((/* implicit */int) var_2)))))))) >> (((((((/* implicit */int) (short)-19)) ^ (((/* implicit */int) (short)24)))) + (26)))));
                            var_21 -= ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_29 [i_2 + 1] [i_1])) : (((/* implicit */int) arr_29 [i_2 + 1] [i_1])))) ^ ((+(((/* implicit */int) ((short) arr_15 [i_1] [i_1] [i_2] [i_2] [i_3] [i_2] [i_8])))))));
                            arr_30 [(short)14] [(short)0] [i_3] [i_3] [i_1] [i_1] = ((short) arr_4 [i_2]);
                            arr_31 [i_2] [i_2] [i_6] [(short)8] |= min((((short) ((((/* implicit */int) arr_21 [i_8] [i_6] [(short)14] [i_1] [i_1])) > (((/* implicit */int) (short)-31052))))), ((short)4357));
                        }
                        for (short i_9 = 1; i_9 < 18; i_9 += 4) 
                        {
                            var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) min((var_2), (var_5)))) / (((((/* implicit */int) (short)20989)) * (((/* implicit */int) (short)28226)))))))));
                            arr_34 [i_9] [i_3] [i_3] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_9 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_2 - 2] [i_2 + 1] [i_2 + 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17526)) ? (((/* implicit */int) (short)-423)) : (((/* implicit */int) (short)(-32767 - 1))))))))) : (((((/* implicit */_Bool) (short)-29141)) ? (((/* implicit */int) (short)21866)) : (((/* implicit */int) (short)-14835))))));
                        }
                        for (short i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            arr_37 [i_10] [(short)16] [i_3] [i_3] [i_2 + 1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) ((short) var_10))) <= (((/* implicit */int) var_5)))))));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_36 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 1]))))) ? (((((/* implicit */_Bool) arr_36 [i_2 + 1] [i_2 + 1] [(short)13] [i_2 - 1] [(short)15])) ? (((/* implicit */int) arr_36 [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1] [i_3])) : (((/* implicit */int) arr_21 [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1] [i_2])))) : (((((/* implicit */int) var_5)) / (((/* implicit */int) arr_21 [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1] [i_2 - 1]))))));
                        }
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_11 [i_6] [i_2 - 1] [(short)8])) : (((/* implicit */int) arr_32 [i_6] [i_6] [i_3] [i_6] [i_2 + 1])))))));
                        var_25 = arr_16 [(short)18] [i_3] [i_3] [i_2 + 1] [i_3] [i_1] [i_1];
                    }
                }
            } 
        } 
        arr_38 [i_1] = ((/* implicit */short) min((((((((/* implicit */int) (short)-29927)) < (((/* implicit */int) (short)-20351)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-15888)) : (((/* implicit */int) (short)-13096)))) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_1])))), (((/* implicit */int) (short)-12100))));
    }
    /* vectorizable */
    for (short i_11 = 0; i_11 < 16; i_11 += 1) 
    {
        var_26 = ((/* implicit */short) max((var_26), (var_6)));
        /* LoopNest 3 */
        for (short i_12 = 0; i_12 < 16; i_12 += 4) 
        {
            for (short i_13 = 0; i_13 < 16; i_13 += 3) 
            {
                for (short i_14 = 0; i_14 < 16; i_14 += 3) 
                {
                    {
                        var_27 = ((short) (~(((/* implicit */int) var_6))));
                        arr_48 [i_12] = ((/* implicit */short) ((((/* implicit */int) arr_42 [i_11])) ^ (((/* implicit */int) var_8))));
                        /* LoopSeq 1 */
                        for (short i_15 = 0; i_15 < 16; i_15 += 4) 
                        {
                            var_28 = arr_16 [i_11] [i_12] [i_13] [i_14] [i_12] [i_12] [i_13];
                            var_29 += ((/* implicit */short) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)10452))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_30 = var_5;
}
