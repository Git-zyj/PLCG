/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119333
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
    var_17 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (+(var_12)))) ? (((unsigned int) 644280316643274965ULL)) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned short i_3 = 4; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_18 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0 + 4] [i_0 + 4] [i_3 - 2]))))), ((-(arr_4 [i_0 + 1])))));
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [6ULL] [i_0])) ? (((((/* implicit */_Bool) var_12)) ? (arr_0 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [(short)4]))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_3 + 1])))))))) ? (((((/* implicit */_Bool) arr_0 [i_3 - 3] [i_2 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_1 [i_2])))) : (min((((/* implicit */long long int) var_3)), (arr_8 [i_0] [i_2 + 2] [i_3 + 1] [i_0]))))) : (var_5))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 - 2])) ? (((((/* implicit */_Bool) arr_5 [6ULL] [i_0 + 2] [i_0 + 2] [i_1 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [i_0] [i_0 + 3] [(unsigned char)0] [i_1 + 1])))) : (((/* implicit */int) min((arr_5 [i_0] [i_0 + 3] [i_0] [i_1 + 1]), (arr_5 [i_0] [i_0 - 2] [i_0] [i_1 + 1]))))));
                var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) 4684751677477908897ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-72))) : (17802463757066276651ULL)));
            }
        } 
    } 
}
