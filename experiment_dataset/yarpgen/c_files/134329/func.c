/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134329
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] [i_1] |= ((/* implicit */unsigned char) var_1);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */_Bool) max((arr_0 [i_2] [i_1]), (((/* implicit */long long int) -154935141))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))))));
                                var_12 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) arr_4 [(unsigned short)8] [i_2] [i_1] [(_Bool)0])) >> (((((/* implicit */int) arr_4 [i_0] [i_0] [(signed char)11] [i_3])) - (71))))));
                                var_13 = arr_7 [i_3] [i_3] [i_3];
                                arr_11 [i_3] [i_1] [i_2] [i_3 + 2] [i_4] = ((/* implicit */long long int) var_2);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */signed char) (-(((/* implicit */int) max(((unsigned char)147), (min((var_6), (((/* implicit */unsigned char) (_Bool)1)))))))));
                }
            } 
        } 
    } 
    var_15 -= ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (unsigned char i_5 = 1; i_5 < 17; i_5 += 3) 
    {
        for (short i_6 = 1; i_6 < 17; i_6 += 2) 
        {
            {
                var_16 = ((/* implicit */signed char) ((((((/* implicit */int) ((signed char) (-(((/* implicit */int) var_0)))))) + (2147483647))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (var_10))) - (3637826075U)))));
                arr_17 [i_6] &= ((/* implicit */short) ((((/* implicit */int) arr_16 [i_5] [i_5] [i_6])) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_5] [i_5])) ? (16ULL) : (((/* implicit */unsigned long long int) arr_0 [i_5 + 1] [i_5 + 1]))))) ? (((/* implicit */int) arr_2 [i_5] [i_5] [i_6])) : (((((/* implicit */int) var_0)) - (((/* implicit */int) (short)9610))))))));
                var_17 -= ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) arr_16 [i_5 - 1] [i_5 - 1] [(signed char)5])) ? (arr_9 [i_6] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_6] [i_6] [(short)9] [i_5]))))), (((/* implicit */unsigned long long int) var_7)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                var_18 = ((/* implicit */_Bool) var_8);
            }
        } 
    } 
}
