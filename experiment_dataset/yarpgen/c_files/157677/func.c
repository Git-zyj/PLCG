/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157677
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((/* implicit */int) (short)17759)), ((~(((/* implicit */int) var_1))))))) == (var_12)));
    var_14 = ((/* implicit */unsigned long long int) var_10);
    var_15 = ((/* implicit */unsigned int) var_7);
    var_16 = ((/* implicit */short) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_17 ^= ((/* implicit */unsigned int) arr_1 [i_1]);
                arr_4 [14U] = ((/* implicit */unsigned int) var_3);
                /* LoopSeq 1 */
                for (long long int i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((arr_5 [i_0] [i_0] [i_1] [i_2 + 1]), (arr_5 [i_2 - 1] [i_0] [i_0] [i_0])))) * (((unsigned long long int) arr_5 [i_0] [i_0] [i_1] [i_2])))))));
                    var_19 |= ((/* implicit */long long int) ((((((/* implicit */int) (short)-17737)) + (2147483647))) >> (((((/* implicit */int) arr_3 [i_2])) + (22769)))));
                    var_20 = ((/* implicit */short) var_5);
                    arr_7 [(short)6] [i_0] [i_0] &= ((/* implicit */int) ((((((/* implicit */int) arr_3 [i_2 + 2])) * (((/* implicit */int) arr_3 [i_2 + 1])))) <= (((/* implicit */int) arr_3 [i_2 - 2]))));
                    var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_0)))) && (((/* implicit */_Bool) var_0))));
                }
                var_22 = ((/* implicit */short) ((4837350814197105375ULL) - (((((/* implicit */unsigned long long int) arr_2 [i_1] [i_1] [i_1])) - (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17737))) : (8987839484916743468ULL)))))));
                var_23 = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) | (var_11))), (((unsigned long long int) arr_2 [10ULL] [10ULL] [i_1]))));
            }
        } 
    } 
}
