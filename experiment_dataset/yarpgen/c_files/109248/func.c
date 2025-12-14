/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109248
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_12 = min(((-(arr_3 [i_2] [i_2]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [16LL] [i_1] [16LL])))))))));
                            var_13 = ((/* implicit */unsigned long long int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) (-(3448208822565507020LL))))));
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                            {
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3448208822565507020LL)) ? (((((/* implicit */_Bool) min((var_3), (arr_0 [14LL] [i_1])))) ? (min((arr_2 [i_3]), (((/* implicit */long long int) arr_8 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_3 [i_0] [i_0])))))) : (var_2)));
                                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (!(((((((/* implicit */_Bool) 3815039784888612458ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_10 [i_0] [i_3]))) > (((((/* implicit */_Bool) 3448208822565507020LL)) ? (9223372036854775789LL) : (-3448208822565507021LL))))))))));
                                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_8 [i_0])))))))));
                            }
                        }
                    } 
                } 
                var_17 = ((signed char) max((((/* implicit */long long int) arr_5 [i_1] [i_1] [i_1])), (1497305303305435951LL)));
                var_18 *= ((/* implicit */signed char) (~(((((/* implicit */long long int) ((/* implicit */int) (signed char)-32))) & (-3448208822565507020LL)))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_10))));
}
