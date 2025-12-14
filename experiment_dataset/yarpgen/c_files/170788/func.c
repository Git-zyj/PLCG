/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170788
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_15 &= (unsigned short)52610;
                        arr_10 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (unsigned short)26932))) >= (((((/* implicit */int) (unsigned short)57344)) * (((/* implicit */int) var_10))))));
                    }
                    for (unsigned short i_4 = 2; i_4 < 12; i_4 += 1) 
                    {
                        var_16 |= ((/* implicit */long long int) min((((unsigned short) max((var_2), (((/* implicit */long long int) (unsigned short)10589))))), (((unsigned short) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_7)))))));
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((min((arr_6 [(unsigned short)4] [i_1 - 1] [i_2] [5LL]), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)48581))))))) * (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))))));
                    }
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        arr_15 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (min((((/* implicit */long long int) (unsigned short)38545)), (-9223372036854775783LL))))), ((~(var_2)))));
                        arr_16 [i_0] [(unsigned short)6] [i_2] [i_2] [i_1] [i_0] = (~(max((((/* implicit */long long int) (unsigned short)4030)), (3073220350936806350LL))));
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 1; i_6 < 13; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned short) arr_5 [i_0] [i_2] [i_2]);
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (8586227149611297844LL)))) ? ((+(arr_14 [i_6] [(unsigned short)2] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_5] [(unsigned short)2])) && (((/* implicit */_Bool) var_14))))) * (((/* implicit */int) ((var_2) >= (arr_5 [i_0] [i_0] [i_0])))))))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) min((var_7), ((unsigned short)14))))) != (((/* implicit */int) var_10))));
                            arr_21 [i_0] [i_1 + 2] [i_0] [i_5] [(unsigned short)14] = ((/* implicit */unsigned short) min((var_12), (((((/* implicit */_Bool) max((var_14), ((unsigned short)57373)))) ? (max((-7223186605406937689LL), (((/* implicit */long long int) arr_1 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                            arr_22 [i_0] [i_1 + 1] [i_2] [i_5] [i_7] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)31123)) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)48580)), (-547019539232092238LL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_0] [i_0] [i_2]))))) : (min((5212209329264956181LL), (var_1))))) : (min((max((arr_14 [i_0] [i_2] [i_7]), (((/* implicit */long long int) var_14)))), (((((/* implicit */_Bool) var_7)) ? (arr_20 [i_0] [i_1] [(unsigned short)0] [i_7] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8192)))))))));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned short)33905)), (0LL))))));
                        }
                    }
                    for (unsigned short i_8 = 4; i_8 < 12; i_8 += 1) 
                    {
                        arr_26 [i_0] [i_2] [(unsigned short)0] [i_0] = arr_18 [i_0] [i_1] [i_1 + 3] [i_2] [(unsigned short)14];
                        var_22 = var_5;
                        arr_27 [i_0] [i_0] [i_0] = min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_0] [(unsigned short)7] [i_0] [(unsigned short)7] [i_0])))))))), (max((arr_7 [i_0] [i_2] [i_8] [i_8 - 3]), (arr_17 [i_1 + 2] [i_2] [i_8 + 2] [i_8 - 3] [(unsigned short)14]))));
                        arr_28 [i_0] [(unsigned short)0] [i_0] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_1 + 1] [i_8 + 3] [i_8 - 2])))) - (((long long int) arr_12 [1LL] [i_1 + 3] [i_2] [i_8 + 1]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        for (unsigned short i_10 = 1; i_10 < 14; i_10 += 1) 
                        {
                            {
                                arr_36 [14LL] [i_0] [i_2] [i_9] [i_10] [i_9] = arr_33 [12LL] [4LL] [i_2] [i_1] [(unsigned short)0] [i_0];
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_1 + 1] [i_1 + 1] [i_10 - 1] [(unsigned short)13] [i_10 - 1])) * (((/* implicit */int) arr_19 [i_1] [i_1 + 2] [i_10 - 1] [i_10] [i_10 - 1]))))) >= (min((7223186605406937688LL), (((/* implicit */long long int) arr_19 [i_1] [i_1 + 2] [i_10 - 1] [i_10 + 1] [13LL]))))));
                                var_24 = ((/* implicit */long long int) max((var_24), (((((/* implicit */_Bool) ((((long long int) -793074392857898815LL)) / (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)34167))) - (-16LL)))))) ? (((((/* implicit */_Bool) var_6)) ? (arr_6 [i_10] [i_10] [i_10 + 1] [i_10 + 1]) : (arr_6 [i_10] [(unsigned short)0] [i_10 - 1] [i_10]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)54958))) / (var_4))))))))))));
                            }
                        } 
                    } 
                    arr_37 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)29)) / (((/* implicit */int) (unsigned short)57322))));
                }
                for (unsigned short i_11 = 0; i_11 < 15; i_11 += 2) 
                {
                    arr_40 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((min(((+(((/* implicit */int) var_6)))), (((/* implicit */int) ((unsigned short) arr_1 [i_0]))))), (((((((/* implicit */int) (unsigned short)20352)) * (((/* implicit */int) (unsigned short)49511)))) * (((((/* implicit */int) (unsigned short)6455)) / (((/* implicit */int) arr_8 [i_0] [(unsigned short)0] [(unsigned short)0]))))))));
                    arr_41 [(unsigned short)2] [i_0] [5LL] = ((/* implicit */unsigned short) min(((+(arr_6 [i_1 + 2] [i_1] [i_0] [i_11]))), (((/* implicit */long long int) (unsigned short)0))));
                    arr_42 [i_0] [(unsigned short)1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (((var_12) / (((/* implicit */long long int) ((/* implicit */int) arr_31 [8LL] [5LL] [i_0] [i_0])))))))) && (((/* implicit */_Bool) (~(arr_20 [i_0] [i_0] [i_0] [i_11] [i_11]))))));
                }
                arr_43 [i_0] [i_1 + 3] [5LL] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (-(-4679652405142514087LL))))) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)59071)) : ((-(((/* implicit */int) var_5))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) min((var_25), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2435))) / (var_2)))));
    /* LoopNest 3 */
    for (long long int i_12 = 1; i_12 < 12; i_12 += 2) 
    {
        for (long long int i_13 = 0; i_13 < 15; i_13 += 1) 
        {
            for (long long int i_14 = 0; i_14 < 15; i_14 += 4) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))), (((arr_24 [i_12] [i_12] [i_12 - 1] [5LL] [(unsigned short)2] [i_12 - 1]) / (var_12)))));
                    arr_51 [i_12] [0LL] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_44 [i_12] [i_14])) ? (var_9) : (var_2))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((((/* implicit */int) var_14)) | (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_11)))))))));
                }
            } 
        } 
    } 
}
