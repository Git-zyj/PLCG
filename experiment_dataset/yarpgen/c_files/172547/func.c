/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172547
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
    for (short i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) max((var_18), (((((/* implicit */_Bool) arr_9 [(_Bool)1] [i_1])) || (((/* implicit */_Bool) var_10))))));
                    arr_10 [i_0] [(_Bool)1] [i_1] [i_2] = max((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) * ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_17))))))), (min((524224U), (((unsigned int) arr_4 [i_0] [i_1])))));
                    var_19 = (!(((/* implicit */_Bool) (((+(((/* implicit */int) arr_1 [i_0])))) & (((((((/* implicit */int) var_9)) + (2147483647))) << (((((/* implicit */int) (short)25743)) - (25743)))))))));
                    var_20 *= (!(((/* implicit */_Bool) arr_2 [i_0 - 1])));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (short i_5 = 4; i_5 < 21; i_5 += 4) 
            {
                for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    {
                        var_22 = ((unsigned int) ((_Bool) var_8));
                        var_23 = ((/* implicit */short) ((arr_18 [i_3] [i_3] [i_3] [i_3]) == ((+(arr_17 [i_4] [i_4] [i_4])))));
                    }
                } 
            } 
        } 
        arr_23 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0)))))));
        var_24 *= arr_21 [i_3] [i_3] [i_3] [i_3] [i_3];
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) 
    {
        var_25 = ((/* implicit */short) var_8);
        var_26 = (!(((/* implicit */_Bool) var_5)));
        var_27 += ((/* implicit */short) (-(((/* implicit */int) ((var_13) || (((/* implicit */_Bool) arr_21 [i_7] [i_7] [i_7] [i_7] [i_7])))))));
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 21; i_8 += 4) 
        {
            for (unsigned int i_9 = 0; i_9 < 21; i_9 += 4) 
            {
                {
                    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (-(((((/* implicit */int) var_2)) * (((/* implicit */int) arr_15 [i_8])))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_10]))));
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_38 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_10] [i_9] [i_8] [i_7])) ? (4294443072U) : (arr_17 [i_10] [i_8] [i_7])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_11]))))) : (((/* implicit */int) var_5))));
                            var_30 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294443072U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_8] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [(_Bool)1] [i_9]))));
                            var_32 = ((/* implicit */unsigned int) ((short) arr_27 [i_11] [i_10]));
                        }
                        /* LoopSeq 4 */
                        for (short i_12 = 0; i_12 < 21; i_12 += 2) /* same iter space */
                        {
                            arr_41 [i_7] [i_7] [(short)4] [i_10] |= ((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [(_Bool)1] [i_8] [i_9] [i_10] [i_12]))));
                            var_33 = (~(((((/* implicit */_Bool) 741956964U)) ? (4294443071U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-15633))))));
                            var_34 = ((/* implicit */short) max((var_34), (var_2)));
                            var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) var_7))));
                            var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_15 [i_9])) ? (4294967295U) : (arr_0 [i_7])))))));
                        }
                        for (short i_13 = 0; i_13 < 21; i_13 += 2) /* same iter space */
                        {
                            var_37 = ((/* implicit */short) ((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294443071U))) < (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
                            var_38 = ((/* implicit */_Bool) arr_2 [i_9]);
                        }
                        for (short i_14 = 0; i_14 < 21; i_14 += 2) /* same iter space */
                        {
                            arr_48 [i_14] [i_8] [i_7] = ((/* implicit */_Bool) var_0);
                            arr_49 [i_14] [i_10] [i_9] [i_8] [(short)15] = ((/* implicit */_Bool) arr_42 [i_7] [(short)6] [i_9] [i_10] [i_10] [i_10]);
                        }
                        for (unsigned int i_15 = 2; i_15 < 18; i_15 += 1) 
                        {
                            var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) arr_37 [(_Bool)1] [i_15] [i_15 + 2] [i_15 - 1] [i_15 + 1]))));
                            arr_53 [i_9] [i_15] [i_9] [i_10] [i_15] [i_9] = ((/* implicit */_Bool) (-(var_15)));
                            var_40 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        }
                        var_41 *= (_Bool)0;
                    }
                }
            } 
        } 
    }
    for (unsigned int i_16 = 0; i_16 < 13; i_16 += 2) 
    {
        var_42 = ((/* implicit */_Bool) min((arr_1 [i_16]), (((/* implicit */short) (_Bool)1))));
        var_43 = ((/* implicit */short) var_12);
    }
    var_44 ^= min((((var_13) ? (((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_2))))) : ((-(var_8))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(2360934985U)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) max((var_6), (var_1))))))));
}
