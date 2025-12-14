/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168155
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 9708929669277188579ULL)) ? (((/* implicit */int) (short)-17700)) : (((/* implicit */int) (unsigned short)65532))))), (min((((/* implicit */unsigned int) (_Bool)0)), (arr_2 [i_0]))))) : (((/* implicit */unsigned int) (+((+(arr_0 [i_0]))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0]))));
        var_20 |= ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0]) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : ((((((_Bool)1) && (((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : ((((_Bool)0) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
        var_21 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)192))))) ? (((/* implicit */unsigned int) arr_0 [i_0])) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_2 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 20; i_1 += 4) 
    {
        var_22 |= ((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_1 + 1]))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 20; i_2 += 4) 
        {
            for (int i_3 = 2; i_3 < 21; i_3 += 2) 
            {
                {
                    arr_12 [i_1] = ((/* implicit */unsigned short) arr_9 [i_1 + 1]);
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) arr_14 [i_1 + 1] [i_2] [i_2] [i_4] [i_5] [i_5])) : (((/* implicit */int) arr_7 [i_1]))))) ? (((unsigned int) (signed char)48)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_4])) ? (arr_0 [i_1]) : (((/* implicit */int) arr_14 [i_1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_5] [i_5])))))));
                                arr_19 [i_1] [i_1] [i_4] = ((/* implicit */short) ((((arr_1 [i_1] [i_1 + 1]) >> (((((/* implicit */int) arr_7 [i_2 - 3])) + (10138))))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4] [i_5] [i_1] [i_2] [i_2] [i_4])))));
                            }
                        } 
                    } 
                    arr_20 [i_1] = ((((((/* implicit */int) ((short) arr_17 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_3]))) + (2147483647))) >> (((arr_1 [i_1] [i_1]) - (934728243U))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 20; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 4; i_7 < 19; i_7 += 1) 
                        {
                            {
                                arr_26 [i_1] [i_3 + 1] [i_3 + 1] [i_7] [i_7] [i_7 - 4] = ((/* implicit */unsigned int) ((signed char) arr_17 [i_3] [i_3] [i_3 - 2] [i_3 - 2] [i_3] [i_7]));
                                var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) <= (var_17)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 = ((/* implicit */signed char) arr_11 [i_1] [i_1]);
    }
    var_26 = ((/* implicit */unsigned short) min((var_26), ((unsigned short)43010)));
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)82)), (600801854)))) <= (var_17)));
}
