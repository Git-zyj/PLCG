/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106016
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (((-(arr_2 [i_0]))) / ((-(arr_2 [i_0])))));
        var_11 *= ((/* implicit */unsigned int) var_5);
        var_12 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [i_0]) << (((((arr_2 [i_0]) + (1405418344))) - (25)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0])))))) : (((((arr_1 [i_0]) & (((/* implicit */unsigned long long int) arr_2 [7ULL])))) ^ (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
        arr_4 [i_0] = (~(((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)187)) ? (734176671U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166)))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_1]))));
        var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_1]))));
        arr_7 [i_1] = ((/* implicit */short) arr_1 [i_1]);
    }
    var_15 = ((/* implicit */long long int) var_1);
    var_16 = ((/* implicit */short) ((signed char) (-(((/* implicit */int) (_Bool)1)))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 3; i_2 < 23; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_4 = 1; i_4 < 22; i_4 += 3) 
                {
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) 4503599627370495LL))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 3; i_6 < 23; i_6 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) ((unsigned long long int) (unsigned char)166)))))))));
                                arr_24 [i_5] [i_5] [i_2] [i_3] [i_6] = ((/* implicit */int) arr_11 [i_2]);
                            }
                        } 
                    } 
                }
                for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 23; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) (+(min((arr_19 [i_2 - 2] [i_2 + 1] [i_2] [i_8 - 1]), (arr_19 [i_2 - 1] [i_2 - 1] [i_2] [i_8 + 1])))));
                                arr_34 [(unsigned char)14] [i_7] [i_8] [i_2] = ((/* implicit */unsigned int) var_0);
                                var_20 |= ((/* implicit */short) arr_13 [i_7] [i_7] [i_2]);
                            }
                        } 
                    } 
                    arr_35 [i_2] [i_7] = ((/* implicit */unsigned long long int) var_0);
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) arr_28 [i_3] [i_2])) : (arr_33 [i_2] [i_3] [i_7])))) ? (((((/* implicit */_Bool) var_3)) ? (var_2) : (1423228065))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_7] [i_7] [i_7] [(_Bool)1])) && (((/* implicit */_Bool) 2LL)))))))) ? (arr_9 [i_7]) : ((-(1217784891U))))))));
                }
                arr_36 [(signed char)16] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_23 [0U]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? ((+(arr_23 [(signed char)20]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [10U])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */int) var_6)) == (var_2)))) : (min(((~(((/* implicit */int) var_6)))), (((/* implicit */int) var_4))))));
}
