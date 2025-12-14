/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14176
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
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (((/* implicit */int) arr_6 [i_0 - 3] [i_0 - 2] [i_0 + 3])) : (((/* implicit */int) arr_0 [i_0])))) * (((((/* implicit */int) arr_6 [i_0 - 3] [i_0 - 2] [i_0 + 2])) * (((/* implicit */int) arr_0 [i_0])))))))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    arr_9 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)96)))))))) ? ((+(arr_1 [i_0 - 1]))) : (max((((/* implicit */int) (_Bool)1)), (var_0)))));
                    arr_10 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_0 - 3]))));
                    arr_11 [i_1] [i_1] = ((/* implicit */unsigned short) ((_Bool) (~(((/* implicit */int) ((_Bool) var_3))))));
                    var_15 -= ((/* implicit */unsigned char) ((min((0ULL), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_2])))) * (((/* implicit */unsigned long long int) (-(arr_4 [i_2]))))));
                }
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    arr_14 [i_1] [i_1] [i_1] = ((/* implicit */short) (~(((unsigned long long int) arr_6 [i_0 + 2] [i_0 + 3] [i_3]))));
                    var_16 += ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) (_Bool)1)), (((unsigned int) (unsigned char)115)))));
                }
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 - 3])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)100))) ^ (var_9)))));
                    var_18 = ((/* implicit */signed char) (unsigned char)141);
                }
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_0);
}
