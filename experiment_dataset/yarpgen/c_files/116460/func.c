/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116460
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
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_3))));
    var_17 = ((/* implicit */short) var_7);
    var_18 = ((/* implicit */short) var_11);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_2 [i_0] [i_1] [i_0]), (arr_3 [i_0] [i_0] [i_1]))))));
            arr_6 [i_0] [i_0] [i_1] = (~(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_3))))));
        }
        for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0]))));
            arr_10 [i_0] [i_2] = ((/* implicit */int) arr_0 [i_0]);
            arr_11 [i_0] [i_0] = ((/* implicit */_Bool) arr_4 [i_0]);
            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0] [i_0]);
        }
        /* LoopNest 2 */
        for (short i_3 = 2; i_3 < 18; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_7 [i_0] [i_0] [i_0]), (arr_7 [(short)8] [i_0] [i_4]))))) % (((unsigned long long int) ((((/* implicit */int) arr_13 [(_Bool)1])) != (((/* implicit */int) (unsigned char)4)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_5 = 4; i_5 < 19; i_5 += 2) 
                    {
                        arr_20 [i_0] = ((unsigned short) (unsigned char)0);
                        /* LoopSeq 3 */
                        for (short i_6 = 1; i_6 < 18; i_6 += 3) 
                        {
                            var_21 = ((/* implicit */short) (+(((((/* implicit */int) arr_13 [i_0])) / (((/* implicit */int) arr_3 [i_6] [i_0] [i_0]))))));
                            var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_4] [i_5]))));
                        }
                        for (short i_7 = 1; i_7 < 19; i_7 += 4) 
                        {
                            arr_27 [i_0] [i_0] [7ULL] [i_3 + 3] [i_0] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_23 [i_0] [i_3 - 1] [i_0] [i_5 + 1] [i_7 + 3])))));
                            arr_28 [i_0] [i_0] [i_0] [i_3 + 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(arr_4 [i_0])));
                        }
                        for (unsigned long long int i_8 = 2; i_8 < 20; i_8 += 1) 
                        {
                            arr_31 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4202594989891293770LL)) ? (((((/* implicit */int) (unsigned short)46801)) << (((16728535662221625704ULL) - (16728535662221625689ULL))))) : (((/* implicit */int) (short)-29938))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_8] [i_3 + 3])) ? (arr_19 [i_3 + 4] [i_5 + 3]) : (((/* implicit */unsigned long long int) var_2))));
                        }
                    }
                    for (long long int i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        arr_34 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_2);
                        arr_35 [i_0] [i_4] [7LL] [i_0] = ((/* implicit */unsigned short) max((((int) (!(((/* implicit */_Bool) (unsigned short)5223))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0] [i_3] [i_0] [i_0] [i_9] [i_9] [i_9])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_4] [i_0]))))) ? (((int) var_11)) : (((/* implicit */int) ((unsigned char) arr_23 [i_0] [i_3 + 4] [i_4] [(unsigned short)12] [i_9])))))));
                        arr_36 [i_0] [i_3] [i_0] [i_9] [i_4] [i_3] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_9] [i_0] [i_9])) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_9])) : (((/* implicit */int) var_11)))), (((/* implicit */int) var_15))));
                        arr_37 [i_0] [i_0] [i_3 + 1] [i_4] [(unsigned short)16] [i_9] &= var_10;
                    }
                    /* LoopNest 2 */
                    for (signed char i_10 = 3; i_10 < 18; i_10 += 2) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 22; i_11 += 2) 
                        {
                            {
                                var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_25 [i_10 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 4] [i_3 + 4] [i_3 + 4]) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)215)))) : (var_2)))) ? (((((/* implicit */_Bool) ((unsigned short) (unsigned char)208))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_10)) : (var_7))) : (((/* implicit */long long int) (+(((/* implicit */int) var_6))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 376652642)) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) (_Bool)1)))))));
                                arr_42 [i_0] [i_3] [i_4] [i_10 + 3] [i_11] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))))), ((+(arr_19 [i_3 - 2] [i_10 - 3])))));
                                var_25 = ((/* implicit */int) max((arr_0 [i_11]), (((/* implicit */unsigned long long int) arr_9 [i_11] [1ULL] [i_0]))));
                            }
                        } 
                    } 
                    arr_43 [i_4] [i_0] [i_0] [i_4] = ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)52819)))));
                }
            } 
        } 
        arr_44 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) ((long long int) ((short) (unsigned char)120))));
    }
    for (short i_12 = 1; i_12 < 10; i_12 += 3) 
    {
        arr_48 [i_12] = ((/* implicit */short) min((15U), (((/* implicit */unsigned int) (unsigned char)203))));
        var_26 = ((/* implicit */short) arr_23 [(unsigned short)0] [i_12 + 1] [20] [i_12 - 1] [i_12]);
        /* LoopSeq 2 */
        for (unsigned int i_13 = 0; i_13 < 11; i_13 += 1) 
        {
            var_27 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (unsigned char)19)), (2718806511949360378ULL)));
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_47 [i_13] [i_13])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_24 [(_Bool)1])) && (((/* implicit */_Bool) arr_22 [i_12 + 1]))))) : (((((/* implicit */_Bool) (~(-1624779181519876883LL)))) ? (((/* implicit */int) (short)-1115)) : (((/* implicit */int) (short)-29938))))));
            arr_51 [i_12] [i_13] [i_13] = ((/* implicit */short) (-(((/* implicit */int) arr_41 [i_12] [i_13] [i_13] [i_12]))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_14 = 0; i_14 < 11; i_14 += 2) 
            {
                arr_56 [i_12] [i_12] [i_13] [i_14] = ((/* implicit */unsigned short) arr_0 [i_12 + 1]);
                var_29 = arr_0 [i_12 + 1];
            }
            for (unsigned int i_15 = 0; i_15 < 11; i_15 += 4) 
            {
                arr_59 [i_12] [i_12] [i_12] [i_15] = ((/* implicit */short) (+(max((((/* implicit */int) (short)27374)), (((int) arr_33 [i_12]))))));
                var_30 &= ((/* implicit */unsigned int) (((!(((((/* implicit */int) (short)27374)) <= (((/* implicit */int) (unsigned char)56)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [1U]))) : (var_0)));
            }
            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (~((-(((((/* implicit */_Bool) arr_26 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12] [(short)0] [i_12] [i_12])) ? (var_0) : (var_3))))))))));
        }
        for (unsigned char i_16 = 0; i_16 < 11; i_16 += 1) 
        {
            var_32 = ((/* implicit */short) ((min((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)21021))))), (-6918468659438833687LL))) <= (((/* implicit */long long int) ((/* implicit */int) (short)-29938)))));
            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_12 + 1] [i_12 - 1] [i_12 + 1] [i_12 - 1])) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)-27375)) : (((/* implicit */int) (unsigned char)227)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-15316))))))))));
            arr_62 [i_12] [i_16] [i_16] = ((/* implicit */_Bool) ((unsigned long long int) (unsigned short)17));
            arr_63 [i_12 - 1] [i_12 - 1] [i_12 - 1] = ((/* implicit */short) ((long long int) (-(1718208411487925897ULL))));
        }
        /* LoopSeq 1 */
        for (long long int i_17 = 0; i_17 < 11; i_17 += 3) 
        {
            arr_68 [i_17] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_12 + 1] [i_12 + 1] [i_12 - 1]))));
            arr_69 [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) arr_3 [i_17] [(short)14] [(short)14]);
        }
    }
    for (int i_18 = 2; i_18 < 22; i_18 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_19 = 0; i_19 < 23; i_19 += 4) 
        {
            for (short i_20 = 0; i_20 < 23; i_20 += 4) 
            {
                {
                    arr_79 [(unsigned short)21] [(unsigned short)21] [(unsigned short)21] [i_20] = ((/* implicit */long long int) max(((~(((/* implicit */int) arr_77 [i_18] [i_18 + 1] [i_20] [i_20])))), (((/* implicit */int) max((((/* implicit */short) (unsigned char)19)), ((short)-27373))))));
                    arr_80 [i_18] [i_19] [i_19] [i_19] = ((/* implicit */long long int) arr_75 [i_20] [i_19] [i_19] [i_18 + 1]);
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_70 [i_18])) ? (var_10) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)224)))))))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3780873473U))))))));
                }
            } 
        } 
        var_35 = ((/* implicit */short) max((var_35), (arr_75 [i_18] [i_18 - 1] [i_18] [i_18])));
    }
}
