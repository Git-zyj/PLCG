/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165522
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
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((int) ((((_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)3] [i_1])))))))));
                var_20 -= ((/* implicit */unsigned long long int) -9223372036854775796LL);
                arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_0 [i_0]))) ^ ((((+(((/* implicit */int) arr_4 [i_1] [i_1] [(unsigned char)11])))) | (((((/* implicit */int) var_8)) >> (((357841289) - (357841281)))))))));
                var_21 = ((/* implicit */unsigned char) arr_2 [(short)6] [i_0]);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 4; i_3 < 10; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (-(-9223372036854775807LL))))));
                                var_23 = ((/* implicit */long long int) ((((_Bool) (_Bool)1)) ? (min((((/* implicit */unsigned int) max((var_2), (arr_12 [(_Bool)1] [i_3 - 1] [5ULL] [i_1] [5ULL])))), (arr_7 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((arr_9 [i_0] [i_3 - 2] [i_3 + 1] [i_1]) << (((arr_9 [i_3] [i_3 - 2] [i_3 - 2] [i_1]) - (217553694))))))));
                                var_24 = ((/* implicit */int) (-(max((min((((/* implicit */unsigned long long int) 3734678200224857950LL)), (var_13))), (((/* implicit */unsigned long long int) (+(arr_0 [i_1]))))))));
                                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_3 - 3] [i_0])) ^ (((/* implicit */int) arr_4 [i_3] [i_3 + 1] [i_3]))))) ? (((/* implicit */int) arr_4 [i_0] [i_3 - 1] [i_0])) : (((/* implicit */int) ((signed char) var_10))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 -= ((/* implicit */int) (unsigned short)64463);
}
