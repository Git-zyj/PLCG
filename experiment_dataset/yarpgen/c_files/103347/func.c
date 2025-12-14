/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103347
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
    var_11 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) var_3))));
                var_13 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_0])) ? (arr_5 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0])))))) ? (arr_1 [i_0] [i_1]) : (((((/* implicit */_Bool) 551640156)) ? (-3116192247719173057LL) : (((/* implicit */long long int) 551640156))))))), (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_7) : (var_3)))) : (min((((/* implicit */unsigned long long int) var_6)), (arr_5 [i_0] [i_1])))))));
                arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_5 [10U] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_5 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */long long int) arr_2 [i_1])))))))) ? (((((/* implicit */_Bool) var_7)) ? (arr_1 [i_1 + 1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 1] [6] [i_1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_5 [i_0] [i_1]) | (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0]))))) ? (min((((/* implicit */int) var_0)), (var_9))) : (arr_3 [i_0] [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1443750309)) ? (2501332864961237234ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11351)))));
                            var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1 + 1] [(_Bool)1] [i_2 + 2]))))) ? (((((/* implicit */_Bool) arr_5 [i_3] [i_3])) ? (var_10) : (var_7))) : (arr_0 [i_0])));
                            arr_11 [i_0] [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)128)) ? (-551640156) : (arr_2 [i_1])))), (((((/* implicit */long long int) ((/* implicit */int) var_1))) | (arr_9 [i_0] [i_0] [i_0] [i_0])))))) ? (max((((((/* implicit */_Bool) arr_1 [i_0] [(unsigned char)0])) ? (arr_9 [i_0] [i_1] [i_2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (var_2))) : (min((((/* implicit */long long int) min((((/* implicit */unsigned short) (unsigned char)130)), ((unsigned short)25)))), (((((/* implicit */_Bool) arr_3 [i_1] [i_2] [i_3])) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
                            var_16 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [i_3])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))) : (var_2)))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_3]))))) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_2 + 4] [i_1 - 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
