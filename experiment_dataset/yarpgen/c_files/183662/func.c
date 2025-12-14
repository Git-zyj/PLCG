/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183662
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
    for (short i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (~((+(((/* implicit */int) (short)-25877))))))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)25894)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)25881)))))));
                var_15 = var_2;
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 22; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */short) ((((/* implicit */int) (short)25862)) % (((/* implicit */int) (short)-18137))));
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                            {
                                var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_1] [i_4] [i_1] [20LL] [20LL] [i_4] [24ULL])) ^ (((/* implicit */int) arr_0 [i_4]))))) ? (arr_1 [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_10 [i_4] [i_0 + 1] [(signed char)8] [i_2 + 3] [i_3 + 2]))))));
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (short)25877))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((((var_2) + (2147483647))) >> (((var_3) + (1447395667)))));
}
