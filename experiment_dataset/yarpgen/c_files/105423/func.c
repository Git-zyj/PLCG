/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105423
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 12; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] = ((/* implicit */unsigned char) min((max((1152921504602652672LL), (((/* implicit */long long int) arr_9 [i_3 + 1] [i_3] [10LL] [i_3 + 1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (var_7)))) ? (((var_11) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [1ULL] [i_3]))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_3]))) : (var_15))))))));
                            arr_11 [i_0] [5ULL] [i_0] = ((/* implicit */unsigned short) ((((unsigned int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_3]))))) - (((/* implicit */int) ((signed char) (unsigned short)65535))))))));
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) var_18)) - ((+(((/* implicit */int) arr_2 [i_2 - 1])))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_4 = 3; i_4 < 12; i_4 += 1) 
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)31239))))) ? (3032267719U) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)13379))) ^ (1386077857U)))))) ? (max((((/* implicit */long long int) var_18)), (4180930585998332576LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1152921504602652678LL)) ? (max((((/* implicit */unsigned int) arr_2 [i_1])), (11U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))))))));
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) var_10))))), (min((1152921504602652660LL), (((/* implicit */long long int) var_12)))))))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) min((var_13), (min((var_7), (((/* implicit */unsigned long long int) ((2047U) - (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
    var_23 += ((/* implicit */long long int) var_10);
}
