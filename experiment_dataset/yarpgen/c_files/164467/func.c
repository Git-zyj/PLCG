/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164467
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        var_12 = (~((~(((/* implicit */int) arr_1 [i_1])))));
                        var_13 ^= ((/* implicit */int) max((((/* implicit */long long int) max((((/* implicit */unsigned char) var_9)), (var_5)))), (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)-82))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_14 = ((/* implicit */signed char) ((unsigned long long int) max((((/* implicit */unsigned int) arr_5 [i_1] [i_2 + 2] [i_2 - 3] [i_1])), (((unsigned int) var_0)))));
                        var_15 = (((!(((/* implicit */_Bool) arr_0 [i_2 + 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_4 [i_1]))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        arr_15 [i_1] [i_1] [i_2 - 2] [13ULL] = ((/* implicit */_Bool) ((unsigned char) max((((/* implicit */long long int) arr_11 [i_0] [i_2 + 1])), (((long long int) var_4)))));
                        arr_16 [i_1] [i_2] [i_2 - 1] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_12 [i_1])) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))));
                        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((unsigned int) max((arr_0 [i_0]), (((/* implicit */long long int) var_10))))))));
                    }
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_3))));
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_7))));
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_4 [4LL]))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_1);
    /* LoopSeq 2 */
    for (unsigned char i_6 = 2; i_6 < 22; i_6 += 2) /* same iter space */
    {
        var_21 ^= ((/* implicit */long long int) (~(var_10)));
        var_22 = ((/* implicit */int) ((signed char) ((short) var_1)));
        var_23 = ((/* implicit */int) arr_19 [21U] [(short)16]);
    }
    for (unsigned char i_7 = 2; i_7 < 22; i_7 += 2) /* same iter space */
    {
        var_24 ^= ((int) arr_19 [i_7 + 1] [i_7 + 1]);
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (unsigned char)255))));
    }
}
