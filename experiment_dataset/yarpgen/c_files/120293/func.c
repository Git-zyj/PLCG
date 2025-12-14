/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120293
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
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_1] [i_2] = ((/* implicit */short) (~((((!(((/* implicit */_Bool) var_6)))) ? (min((15382520761151071117ULL), (15382520761151071117ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 2])))))));
                    var_11 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) -209236140)) ? (-209236119) : (((/* implicit */int) (short)3))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(var_1))))))) : (var_1));
                    var_12 = ((/* implicit */unsigned int) ((_Bool) ((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (var_8) : (((/* implicit */unsigned int) var_4)))) - (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(short)14] [i_1] [i_2]))))))))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) - (((unsigned long long int) arr_3 [i_0] [i_1 + 2]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_8 [14U] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_3])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_8 [i_0] [i_2]) : (arr_8 [i_0] [12ULL])))))))));
                                var_13 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~(var_1)))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1 - 1] [i_3])) ? (var_4) : (((/* implicit */int) var_2)))) : ((~(((/* implicit */int) arr_12 [i_0] [i_1 - 2] [i_1 - 2] [i_3]))))));
                                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_0] [i_0] [i_3] [i_3]))));
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((unsigned int) var_0)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 &= var_5;
    var_17 = ((/* implicit */short) (~((~(min((var_1), (var_4)))))));
}
