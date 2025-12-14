/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136836
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))) || (((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (-1710078656)))) <= (arr_1 [i_0])))));
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            arr_7 [i_1 + 1] [i_0] = ((/* implicit */long long int) min(((-(((arr_6 [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))))))), (min((((/* implicit */unsigned long long int) var_4)), (arr_6 [i_1 + 3] [i_1 + 3])))));
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            var_17 *= ((/* implicit */short) (+(var_11)));
            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) 138139524U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)))))));
        }
        for (short i_3 = 2; i_3 < 17; i_3 += 2) 
        {
            var_19 |= (~(max((((/* implicit */unsigned long long int) -1710078643)), (17752591338145702432ULL))));
            var_20 = ((/* implicit */signed char) max((((_Bool) (unsigned short)6)), (((_Bool) arr_0 [7] [i_3 - 2]))));
        }
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    {
                        arr_22 [i_0] [i_4] [i_5] [i_6] [i_6] = var_6;
                        var_21 = ((/* implicit */short) arr_15 [i_0]);
                    }
                } 
            } 
        } 
        var_22 ^= ((/* implicit */signed char) arr_13 [i_0] [i_0]);
    }
    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_1))));
    var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
}
