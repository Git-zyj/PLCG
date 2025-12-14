/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189460
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
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1 - 1] = (+(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)17669)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    arr_8 [10] [i_1] [i_0] [i_0] = ((/* implicit */short) arr_4 [i_1] [i_1]);
                    arr_9 [i_2 - 2] [i_2] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [11U])) & (var_1))))));
                    var_15 = ((/* implicit */long long int) (+(arr_0 [i_1 - 1])));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4106948069U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12))))) : (arr_3 [i_1] [i_2] [i_2])));
                }
                arr_10 [i_1] [i_1] [i_0] = ((/* implicit */long long int) var_9);
                var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 - 1])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1 + 1] [i_1 - 1])))))) ? (((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1])))) : (((/* implicit */int) min((arr_7 [i_1 + 1] [i_1 + 1]), (arr_7 [i_1 + 1] [i_1 - 1])))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (+(var_0)));
}
