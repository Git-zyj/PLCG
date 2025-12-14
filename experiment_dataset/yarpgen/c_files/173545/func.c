/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173545
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((((/* implicit */_Bool) (short)15092)) ? ((-(arr_0 [(short)11] [i_1]))) : (((/* implicit */long long int) (+(((/* implicit */int) var_19))))));
                var_20 &= ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_1)) ? (arr_1 [i_0]) : (arr_1 [(unsigned short)18])))));
                var_21 = ((/* implicit */int) arr_3 [i_0] [i_0]);
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (short)15104))));
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((signed char) (-((+(((/* implicit */int) var_14))))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((long long int) min((((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (5808313424473928653LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_18)))))));
        arr_10 [i_2] [i_2] = (-(max((553522588989112436LL), (-347913185548851427LL))));
    }
    for (int i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_6 = 1; i_6 < 21; i_6 += 1) 
                    {
                        var_24 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_2)) ? (arr_15 [i_6]) : (((/* implicit */unsigned long long int) arr_20 [i_6] [i_6 - 1] [i_6 + 1] [i_6] [i_6] [i_6]))))));
                        var_25 = ((/* implicit */long long int) var_13);
                        var_26 += ((/* implicit */short) var_6);
                    }
                    for (long long int i_7 = 2; i_7 < 18; i_7 += 1) 
                    {
                        var_27 = ((/* implicit */short) min((1241102524571732892ULL), (((/* implicit */unsigned long long int) 8954567193793509978LL))));
                        arr_28 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned short)21718)) : (((/* implicit */int) var_9))))) ? ((~(((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_10))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-15093)) ? (((/* implicit */int) arr_13 [i_7 + 2])) : (((/* implicit */int) arr_13 [i_4])))))));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_7 + 1] [i_7 + 1])) ? ((~(((/* implicit */int) min((((/* implicit */short) arr_24 [i_3] [i_4] [i_5] [i_7])), (var_1)))))) : (((/* implicit */int) var_8))));
                    }
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        arr_31 [8] [i_3] [i_3] [i_3] = ((long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (short)9427)) : (((/* implicit */int) var_15))));
                        arr_32 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) ((long long int) arr_13 [i_4]));
                        arr_33 [i_3] [i_3] [i_3] [i_3] [i_8] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)2225))));
                    }
                    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_5] [i_5] [i_5]))));
                    arr_34 [i_4] [i_4] [i_3] [i_3] = ((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-15093))))));
                }
            } 
        } 
        var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 736771676)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (2706614022397594753LL))))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 1) 
    {
        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) arr_14 [i_9] [i_9]))));
        var_32 = ((((/* implicit */_Bool) (~(arr_15 [i_9])))) ? (((((/* implicit */_Bool) var_10)) ? (arr_30 [i_9] [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) arr_7 [2U])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_30 [i_9] [i_9] [i_9] [i_9] [i_9]))));
        arr_38 [15] = ((/* implicit */int) ((short) (+(738612761048608422ULL))));
        /* LoopNest 2 */
        for (unsigned int i_10 = 1; i_10 < 18; i_10 += 1) 
        {
            for (long long int i_11 = 3; i_11 < 19; i_11 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_12 = 1; i_12 < 19; i_12 += 1) 
                    {
                        for (short i_13 = 4; i_13 < 19; i_13 += 4) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned long long int) var_4);
                                var_34 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_37 [i_11 - 3])) : (((/* implicit */int) arr_37 [i_13 - 2]))))));
                                var_35 = ((/* implicit */long long int) ((unsigned long long int) (+(((/* implicit */int) var_3)))));
                                var_36 = ((/* implicit */unsigned short) var_19);
                            }
                        } 
                    } 
                    var_37 = ((/* implicit */short) ((var_6) ? (((((((/* implicit */_Bool) 2270820015902234023ULL)) ? (3299769332U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)110))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-21006)) <= (var_4))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                }
            } 
        } 
    }
}
