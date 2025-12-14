/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142956
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
    var_16 = var_11;
    var_17 = ((/* implicit */_Bool) var_7);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */short) (+(((unsigned long long int) ((_Bool) (unsigned short)65526)))));
                var_19 |= ((/* implicit */unsigned short) (~(var_0)));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_2 [5ULL] [i_1])), (((arr_6 [i_3]) + (arr_6 [i_3])))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))))) ? (((/* implicit */int) max((arr_0 [i_0]), (arr_5 [i_0] [i_0] [i_3])))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) < (1771713623))))));
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 1; i_4 < 15; i_4 += 2) 
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_3] [i_4] [i_3] [(signed char)15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_4 - 1] [i_4] [i_4 + 3] [i_4] [i_4 + 3] [i_4 + 1])) ? (((/* implicit */long long int) (-(arr_16 [(short)15] [i_4 + 3] [i_4] [i_4 + 3] [i_4 + 3] [i_4] [i_4])))) : (var_4)));
                                arr_18 [i_1] [i_0] [i_3] = var_5;
                            }
                            var_21 += ((/* implicit */unsigned char) (~(((/* implicit */int) max((arr_0 [i_1]), (arr_0 [i_2]))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_1))))))) ? (((/* implicit */int) arr_5 [(unsigned char)1] [i_0] [i_0])) : (max((-212623173), (((/* implicit */int) (unsigned short)33))))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((min((((/* implicit */int) (unsigned short)65485)), (max((var_13), (((/* implicit */int) var_8)))))) - (min((((212623172) / (((/* implicit */int) var_3)))), (((/* implicit */int) var_12)))))))));
}
