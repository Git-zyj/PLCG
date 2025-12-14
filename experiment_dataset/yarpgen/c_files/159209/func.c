/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159209
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1])) < (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) min((var_0), (arr_5 [i_1])))))))));
            /* LoopNest 3 */
            for (signed char i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [(unsigned char)13] [i_2] [i_2 + 2]))) : (arr_13 [i_1] [i_4] [i_4] [i_4] [i_3] [i_1])))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) ? (min((((/* implicit */unsigned long long int) (short)32764)), (9191479992213630480ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32767)) + (((/* implicit */int) var_4)))))))));
                            arr_15 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */short) arr_13 [i_1 - 1] [i_1 - 1] [i_3] [i_1 - 1] [i_3] [i_1]);
                            arr_16 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */short) max(((+((-2147483647 - 1)))), (((/* implicit */int) (signed char)-86))));
                            arr_17 [i_0] [i_1] [i_1] [i_3] [i_1] = arr_3 [i_1];
                            var_20 = ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_8 [i_2] [i_1] [i_2 - 3])), (var_11)))) ? (((((/* implicit */_Bool) arr_12 [i_1] [i_0])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [(signed char)14]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))) ^ (((/* implicit */unsigned int) (-((+(((/* implicit */int) var_16))))))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_12 [i_1 - 2] [i_1 - 2]))) ? (((((/* implicit */_Bool) arr_12 [i_1 - 3] [(signed char)3])) ? (((/* implicit */int) arr_12 [i_1 - 3] [i_1 + 1])) : (((/* implicit */int) arr_12 [i_1 - 1] [i_1])))) : ((-(((/* implicit */int) arr_12 [i_1 - 2] [i_1 - 1])))))))));
            var_22 += ((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_1])))));
        }
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_5 [(signed char)8])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-25))) : (arr_1 [i_0]))), (((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */long long int) 4000833646U)) : (-7951979301259999585LL)))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_12 [i_0] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_0])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [1ULL] [i_0] [i_0]))) : (var_7)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [(short)12] [i_0] [i_0])) : (((/* implicit */int) (short)7976)))) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_4 [(signed char)0] [0] [0])) : (((/* implicit */int) (signed char)105))))))));
        var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (short i_5 = 2; i_5 < 19; i_5 += 4) 
    {
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((arr_19 [i_5 - 2] [i_5 - 1]) & (arr_19 [i_5 - 2] [i_5 - 1]))))));
        var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (arr_18 [i_5]))) * (((/* implicit */int) var_2))));
    }
    var_27 = ((/* implicit */signed char) (+((((+(4294967286U))) - (((/* implicit */unsigned int) ((((/* implicit */int) (short)127)) + (((/* implicit */int) (signed char)-24)))))))));
    var_28 = var_9;
    var_29 ^= ((/* implicit */signed char) var_7);
}
