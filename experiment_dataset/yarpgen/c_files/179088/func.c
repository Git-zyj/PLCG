/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179088
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
    var_18 = ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            {
                var_19 += var_3;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                            {
                                arr_11 [i_3] [i_3] [i_0] [i_0] [i_0] [i_0] = (signed char)120;
                                var_20 -= ((/* implicit */unsigned short) var_15);
                            }
                            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                            {
                                var_21 -= var_5;
                                var_22 -= min((((/* implicit */signed char) var_2)), (min((var_11), (((/* implicit */signed char) (_Bool)1)))));
                            }
                            for (unsigned short i_6 = 1; i_6 < 9; i_6 += 1) 
                            {
                                arr_18 [i_0] [i_0] [i_1] [i_0] [i_3] [i_6 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) (signed char)2))))))));
                                var_23 = ((/* implicit */signed char) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_15)))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)6)), ((unsigned short)20867))))));
                            }
                            arr_19 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) var_13))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)6))))) ? (((/* implicit */int) ((signed char) (~(var_7))))) : (((/* implicit */int) var_1))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
    {
        for (signed char i_8 = 1; i_8 < 11; i_8 += 4) 
        {
            for (int i_9 = 3; i_9 < 11; i_9 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */short) var_11)), (arr_29 [i_7]))))) ? (((/* implicit */int) ((_Bool) (signed char)15))) : (((/* implicit */int) ((((/* implicit */int) ((signed char) (_Bool)1))) != (2074980467))))));
                        var_26 = var_5;
                    }
                    for (signed char i_11 = 4; i_11 < 9; i_11 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_12 = 4; i_12 < 8; i_12 += 4) 
                        {
                            arr_36 [i_9] [i_7] = ((/* implicit */int) (_Bool)1);
                            var_27 = ((/* implicit */short) arr_32 [i_8 + 1] [i_12 - 4] [i_8 + 1] [i_8 + 1]);
                            arr_37 [i_7] [i_9 - 2] [i_9 - 2] [i_9] [i_9] = ((/* implicit */short) (_Bool)1);
                            var_28 = ((/* implicit */signed char) max(((~(max((var_7), (((/* implicit */long long int) (unsigned short)17214)))))), (((long long int) var_15))));
                            var_29 = ((/* implicit */int) (signed char)8);
                        }
                        for (short i_13 = 0; i_13 < 12; i_13 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (+(((((((/* implicit */int) (signed char)-106)) ^ (((/* implicit */int) (unsigned short)11814)))) | (arr_34 [i_7] [i_8 - 1] [i_11] [i_11 - 4] [i_11]))))))));
                            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) var_12))));
                            arr_41 [i_7] [i_7] [i_9] [i_11] [i_13] [i_7] = ((/* implicit */short) max((((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) var_16)), (arr_25 [i_8] [(signed char)8]))))), ((-(((/* implicit */int) ((6586742444627509880LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))));
                            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) arr_23 [i_7] [i_8]))));
                        }
                        /* vectorizable */
                        for (unsigned short i_14 = 0; i_14 < 12; i_14 += 1) 
                        {
                            arr_45 [i_11 - 3] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_2))) << (((((long long int) var_3)) - (38LL)))));
                            var_33 = ((/* implicit */signed char) min((var_33), ((signed char)-26)));
                        }
                        arr_46 [i_7] [i_9] [i_7] = arr_31 [i_8];
                    }
                    for (int i_15 = 0; i_15 < 12; i_15 += 2) 
                    {
                        var_34 -= ((/* implicit */int) min((((signed char) (_Bool)0)), (min((arr_28 [i_8 + 1] [i_15] [i_8 + 1] [i_8 + 1] [i_15] [i_8 + 1]), ((signed char)-56)))));
                        /* LoopSeq 1 */
                        for (int i_16 = 1; i_16 < 11; i_16 += 4) 
                        {
                            var_35 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_29 [i_7])) ? (((/* implicit */int) arr_21 [i_7] [i_8])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_7] [i_8 + 1] [i_7] [i_7] [i_16]))))))), (((/* implicit */int) ((0LL) <= (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))))))));
                            arr_52 [i_7] [i_7] [i_7] [i_7] [i_16] = ((((/* implicit */_Bool) (signed char)59)) ? (136902082560LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))));
                            var_36 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9508)))))));
                        }
                        arr_53 [i_7] [(signed char)3] [i_7] [i_15] = ((/* implicit */short) ((((/* implicit */int) var_2)) * (((((/* implicit */int) (unsigned short)17216)) * (((/* implicit */int) var_12))))));
                        var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)53721))))))))));
                    }
                    /* LoopNest 2 */
                    for (short i_17 = 0; i_17 < 12; i_17 += 2) 
                    {
                        for (signed char i_18 = 1; i_18 < 8; i_18 += 2) 
                        {
                            {
                                arr_58 [i_7] [i_7] [i_7] [i_7] = min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-85)) > (((/* implicit */int) arr_20 [i_7] [i_8 - 1]))))) <= (((/* implicit */int) (short)-2408))))), (1919596840));
                                arr_59 [i_18] [i_8] [i_7] [i_8] [0] = ((signed char) (signed char)70);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
