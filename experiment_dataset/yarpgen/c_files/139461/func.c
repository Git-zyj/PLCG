/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139461
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
    var_14 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    arr_8 [i_0] [i_1] [i_0] = (+(((/* implicit */int) ((((/* implicit */int) arr_2 [5U] [9LL])) != (((/* implicit */int) arr_7 [i_0] [6ULL] [i_0]))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        arr_12 [(_Bool)0] [(short)5] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_1] [(unsigned short)4] [i_3])) >> (((var_2) - (3561615401114619053ULL)))));
                        arr_13 [i_0] [i_0] [(unsigned short)7] [i_0] = ((/* implicit */long long int) var_7);
                        arr_14 [i_0] [(unsigned short)6] = ((/* implicit */unsigned char) (~((-(arr_10 [i_0] [i_0] [(short)2] [(short)2] [(short)2])))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_1 [i_1])) % (var_13)))) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0])) : ((~(var_12)))));
                        var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_4]))) - (var_11)));
                        arr_18 [i_4] = ((/* implicit */unsigned char) ((arr_3 [i_0]) ^ (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) % (((/* implicit */int) arr_7 [i_0] [1U] [i_0])))))));
                        arr_19 [i_4] [11LL] = ((/* implicit */int) (unsigned short)48142);
                    }
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        arr_22 [7ULL] [7ULL] [7ULL] [i_5] [i_5] [i_5] = ((/* implicit */long long int) (unsigned short)44930);
                        var_17 += ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_0]));
                    }
                }
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) <= (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_0])), ((unsigned short)9514)))) && (((/* implicit */_Bool) var_8)))))));
                arr_23 [4ULL] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((arr_17 [i_1]) & (((/* implicit */long long int) ((/* implicit */int) (short)2860)))))) ? (((/* implicit */unsigned long long int) max((arr_16 [i_1] [i_1] [10LL] [(signed char)4] [(signed char)4]), (((/* implicit */long long int) arr_11 [i_0] [i_0] [7LL] [7LL]))))) : (arr_9 [i_1]))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_21 [i_0] [8] [i_0] [i_1] [1LL])))))));
            }
        } 
    } 
}
