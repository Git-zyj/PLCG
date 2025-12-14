/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159972
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (unsigned short)44805);
        var_12 = ((/* implicit */_Bool) (-(min((((((/* implicit */int) var_2)) % (((/* implicit */int) var_8)))), (((/* implicit */int) var_1))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 1) 
    {
        var_13 = ((((/* implicit */_Bool) arr_5 [i_1])) ? ((-(18446744073709551611ULL))) : (((/* implicit */unsigned long long int) (+(arr_4 [i_1 + 2])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            var_14 = ((/* implicit */unsigned long long int) arr_4 [i_2]);
            var_15 = ((/* implicit */unsigned long long int) ((short) 11943387771123578297ULL));
            var_16 = ((/* implicit */int) min((var_16), (((((/* implicit */_Bool) var_4)) ? (arr_4 [i_1 + 2]) : (var_11)))));
        }
        arr_9 [i_1 + 1] = ((/* implicit */unsigned long long int) var_0);
        /* LoopSeq 2 */
        for (short i_3 = 2; i_3 < 13; i_3 += 3) 
        {
            var_17 = ((unsigned int) (signed char)-118);
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (arr_6 [i_1 + 1] [i_3 - 1])))) <= (max((max((var_9), (((/* implicit */unsigned long long int) 4294967289U)))), (17212465899090669076ULL)))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 2; i_5 < 15; i_5 += 3) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_19 = ((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_1 + 2])) || (((/* implicit */_Bool) arr_10 [i_1]))))) - (-134217728));
                            var_20 = ((/* implicit */unsigned int) (!(max(((_Bool)1), ((_Bool)1)))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(18367573849477758006ULL)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((18367573849477758033ULL) >= (((/* implicit */unsigned long long int) arr_17 [i_1] [i_3 + 3] [i_4] [i_5] [i_5] [i_4] [i_1 - 1])))))))) ? (((((/* implicit */int) arr_12 [i_5 + 1] [i_1 + 2] [i_6 - 1])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))) : (((/* implicit */int) arr_11 [i_1 - 1] [i_3] [i_1 - 1]))));
                            var_22 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)11)) < (((/* implicit */int) var_0))))) == (((/* implicit */int) min((((/* implicit */unsigned char) var_7)), (arr_16 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_5] [i_6])))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_7 = 3; i_7 < 13; i_7 += 2) 
                {
                    for (signed char i_8 = 4; i_8 < 14; i_8 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */int) min((var_23), (851182562)));
                            var_24 = (((+(10452202264305115982ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) -531582420)))))));
                            arr_23 [i_1 + 1] [i_1] [i_3] [i_3] [i_4] [i_7] [i_8] = min((((var_9) & (max((var_9), (8348628127684908916ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(var_5)))), (((((/* implicit */_Bool) arr_5 [i_7])) ? (arr_4 [i_7]) : (((/* implicit */int) (unsigned char)223))))))));
                        }
                    } 
                } 
            }
            arr_24 [i_3] [i_3] = ((/* implicit */short) max((max((((/* implicit */int) var_8)), (127))), (((((/* implicit */int) arr_22 [i_1 - 1] [i_1 - 1] [i_3 + 3] [i_1 - 1] [i_3 + 1])) ^ (((/* implicit */int) arr_22 [i_1 - 1] [i_1 - 1] [i_3 + 3] [i_1 - 1] [i_3 + 3]))))));
        }
        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            arr_28 [5U] [5U] [i_9] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) 486743442)) : (8882006848226894796ULL)))) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) arr_12 [i_1] [i_1 - 1] [i_9]))))), (var_9)));
            arr_29 [i_1] [i_9] = ((/* implicit */int) var_8);
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_10 = 0; i_10 < 16; i_10 += 2) 
            {
                var_25 = ((/* implicit */unsigned long long int) (_Bool)0);
                var_26 = ((/* implicit */unsigned int) (!(var_1)));
            }
            for (unsigned long long int i_11 = 1; i_11 < 15; i_11 += 3) 
            {
                arr_36 [12ULL] [i_9] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)48))))), (var_11)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (arr_30 [i_9] [i_1 + 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (-531582400)))))))));
                var_27 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
            }
        }
        arr_37 [i_1] = ((/* implicit */signed char) var_5);
    }
    var_28 = ((/* implicit */unsigned short) var_11);
    var_29 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))))), (var_9)));
}
