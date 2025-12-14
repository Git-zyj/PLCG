/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171411
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
    var_17 -= ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1] [i_0 + 1])) ? (((int) -2639591121214445137LL)) : (((arr_2 [i_0 + 2]) | (((/* implicit */int) (unsigned char)62))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
                {
                    arr_8 [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((/* implicit */int) ((unsigned char) arr_0 [6LL] [5]))) : (((/* implicit */int) min(((_Bool)1), (var_4)))))))));
                    arr_9 [8] [i_1 - 1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((max((28ULL), (((/* implicit */unsigned long long int) (signed char)-51)))) / (((/* implicit */unsigned long long int) arr_1 [i_1 - 1] [i_0 - 3]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_1 + 1] [i_0]) + (arr_5 [i_0 - 1] [(_Bool)1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : ((+(1521418134938008972LL))))))));
                    arr_10 [i_0 - 2] [i_0 - 2] [i_2] [i_2] = ((((((/* implicit */_Bool) ((long long int) (short)21671))) && (((/* implicit */_Bool) 2434122912202273134ULL)))) ? (((((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0 - 2] [i_1 + 1]))))) % (((var_6) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_1 + 2] [i_1 + 2]))) : (5602669911988863479LL))))) : (((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) var_1)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (short)-21650))))))))));
                }
                for (signed char i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
                {
                    var_19 -= ((/* implicit */long long int) (~(((/* implicit */int) max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) arr_2 [10LL])))), ((!(((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0 - 2] [i_0 - 3])))))))));
                    arr_13 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((long long int) arr_7 [i_0] [(signed char)11] [i_1])) : (((/* implicit */long long int) ((((((/* implicit */int) var_9)) >> (((((/* implicit */int) arr_11 [i_1] [i_1 - 1] [(unsigned char)10])) - (246))))) | (((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (arr_2 [8U]))))))));
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 3]))));
                }
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)11525))))) ? ((~(((/* implicit */int) (short)-7056)))) : (min((-1056430996), (arr_2 [10U])))))) ? (((((((/* implicit */_Bool) arr_6 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_1 + 1] [i_0])) : (((/* implicit */int) arr_3 [6LL] [i_1] [i_1])))) & (((/* implicit */int) (short)-21697)))) : (((/* implicit */int) var_16)))))));
            }
        } 
    } 
}
