/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113694
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
    var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 2888723770427462744LL)) ? (((((((/* implicit */_Bool) -2888723770427462725LL)) && (((/* implicit */_Bool) (unsigned char)4)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))) : (var_19))) : (((((((/* implicit */_Bool) -4236971501509599030LL)) && (((/* implicit */_Bool) 992951695371592036ULL)))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)16)))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (_Bool)1)))))) : (((/* implicit */int) var_15))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_0 - 1])) : (((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    {
                        arr_12 [i_3] [i_0 + 3] [i_0 + 3] = ((/* implicit */short) (_Bool)1);
                        var_22 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_10 [i_0] [i_0 + 1] [i_0 + 3] [i_0 - 1] [13LL] [i_0])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_2] [i_2] [(short)20])))) - (((/* implicit */int) arr_5 [i_1 - 1]))));
                        arr_13 [i_0 - 1] [i_1 - 1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_1] [i_1] [i_2] [i_1] [i_0] [i_3])) * (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [(_Bool)1]))));
                        var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(9223372036854775776LL)))) ? (((unsigned long long int) arr_2 [i_2] [i_1 + 1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
                    }
                } 
            } 
            arr_14 [i_0] [i_0] [i_0] = arr_8 [(unsigned char)2] [i_0 + 3] [i_0] [i_0];
        }
        /* LoopNest 2 */
        for (long long int i_4 = 3; i_4 < 22; i_4 += 1) 
        {
            for (signed char i_5 = 1; i_5 < 21; i_5 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        var_24 = ((/* implicit */signed char) (short)-29392);
                        var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0])), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)-31813)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (10059755944211860440ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1690)))));
                        arr_21 [i_6] [i_4] [i_5] [i_4] [i_0] = ((/* implicit */signed char) arr_17 [i_4] [i_0] [i_4]);
                        var_26 = ((/* implicit */signed char) -2888723770427462744LL);
                    }
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        var_27 &= ((/* implicit */short) ((signed char) ((unsigned long long int) arr_18 [i_4 - 1] [i_4 - 1])));
                        var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-1701))));
                        arr_25 [i_0] [i_4] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? ((((!(arr_5 [i_5]))) ? (max((((/* implicit */long long int) var_4)), (var_19))) : (((/* implicit */long long int) (-(((/* implicit */int) var_4))))))) : (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_4] [i_5 + 2]))))), ((+(((/* implicit */int) var_10)))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_8 = 3; i_8 < 20; i_8 += 4) 
                        {
                            arr_28 [16ULL] [i_4] [(_Bool)1] [i_4] [(signed char)10] = ((/* implicit */signed char) ((((/* implicit */_Bool) 10059755944211860467ULL)) || (((/* implicit */_Bool) var_18))));
                            var_29 = ((/* implicit */signed char) arr_4 [i_0]);
                            var_30 = ((signed char) arr_15 [i_5 + 2] [i_5 - 1] [i_5]);
                            var_31 += ((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0 + 3] [i_0 - 1] [i_0 + 2]);
                        }
                        arr_29 [i_0] [i_4] [i_4] [i_7] = ((/* implicit */short) (_Bool)1);
                    }
                    var_32 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_17)))) && (((/* implicit */_Bool) min((arr_18 [i_4 - 2] [i_0 + 2]), (((/* implicit */signed char) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        for (unsigned char i_10 = 2; i_10 < 22; i_10 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */_Bool) max(((-(((((/* implicit */int) (short)25657)) - (((/* implicit */int) var_0)))))), ((-(((/* implicit */int) ((signed char) var_0)))))));
                                arr_34 [i_5] [i_5 - 1] [i_5 - 1] [i_5] [i_4] [(signed char)18] = ((/* implicit */signed char) ((long long int) (~(((/* implicit */int) ((signed char) var_11))))));
                                arr_35 [i_4 - 1] [i_4] [i_9] [i_4 - 1] = ((/* implicit */_Bool) ((signed char) (_Bool)1));
                                var_34 ^= ((/* implicit */signed char) ((((/* implicit */int) var_12)) + ((((-(((/* implicit */int) (_Bool)1)))) - (((((/* implicit */_Bool) arr_30 [(signed char)1] [i_0] [i_0] [i_0 + 3])) ? (((/* implicit */int) arr_27 [i_10] [i_10] [i_5] [i_5] [i_4] [i_10])) : (((/* implicit */int) (short)-18132))))))));
                                var_35 *= ((/* implicit */unsigned long long int) (signed char)100);
                            }
                        } 
                    } 
                    arr_36 [i_5] [i_5] [i_4] = ((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) arr_8 [i_0] [i_5 + 1] [i_5] [i_0])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 2; i_11 < 22; i_11 += 4) 
        {
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                {
                    var_36 = ((/* implicit */signed char) (((-(((((/* implicit */_Bool) -2888723770427462741LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (17460749268999703816ULL))))) & (((unsigned long long int) arr_9 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0] [i_0 - 1]))));
                    arr_43 [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16719)) ? (((/* implicit */int) arr_31 [i_0 - 1] [i_11 - 2] [i_11 - 1] [i_11 - 1] [(signed char)19] [i_12])) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) min((((/* implicit */short) (signed char)29)), (arr_20 [i_11 + 1] [(signed char)18] [i_11]))))));
                }
            } 
        } 
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        arr_46 [i_13] [i_13] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) ((((/* implicit */int) (short)10487)) > (((/* implicit */int) (_Bool)1))))))) <= (((/* implicit */int) (!(((((/* implicit */_Bool) var_14)) || ((_Bool)1))))))));
        var_37 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((~(arr_42 [i_13] [i_13] [i_13]))))))));
    }
}
