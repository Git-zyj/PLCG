/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170127
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
    var_19 += ((/* implicit */unsigned char) ((var_8) >> (((/* implicit */int) min((((/* implicit */unsigned char) var_12)), (var_17))))));
    var_20 = ((/* implicit */signed char) ((max((((/* implicit */long long int) (+(((/* implicit */int) var_11))))), (var_6))) >> (((/* implicit */int) (!(((/* implicit */_Bool) min((var_5), (var_14)))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_8)) ? (arr_11 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) + (9223372036854775807LL))) >> (((((/* implicit */int) ((short) arr_11 [i_3] [i_1]))) + (1300)))));
                                var_22 = ((/* implicit */long long int) (signed char)122);
                                arr_13 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1780391206188710321LL)) || (((/* implicit */_Bool) 880742398))));
                                arr_14 [i_4] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-((~(((int) var_2))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned char)128)))) ? ((~(((/* implicit */int) ((unsigned char) arr_6 [7U] [i_1]))))) : (((((/* implicit */int) arr_10 [i_0] [i_1])) ^ (((/* implicit */int) arr_10 [i_2] [i_1])))))))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned int) arr_0 [(signed char)2] [(signed char)2]);
    }
    for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        arr_18 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_12), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_13)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_5])) ? (arr_8 [(_Bool)1] [(_Bool)1] [(_Bool)1]) : (var_7)))) ? (var_8) : (1780391206188710296LL))))));
        var_25 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_5])) ^ (arr_3 [i_5] [i_5] [i_5])))))))));
        var_26 *= ((/* implicit */unsigned char) ((max((var_9), (var_18))) >= (((/* implicit */long long int) (-(((/* implicit */int) var_13)))))));
    }
    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 4) 
    {
        arr_22 [4ULL] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (952506340U))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_6] [i_6] [i_6]))))))))), (((((/* implicit */_Bool) arr_0 [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_4)))) : ((~(arr_2 [6LL])))))));
        arr_23 [i_6] = ((/* implicit */short) arr_10 [i_6] [i_6]);
    }
}
