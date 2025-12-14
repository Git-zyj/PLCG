/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113590
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
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_3))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -9223372036854775796LL)) ? (-416619789390608844LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */long long int) max((var_4), (((/* implicit */unsigned int) arr_0 [i_1])))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) var_9)) ? (var_10) : (((((/* implicit */_Bool) -9223372036854775799LL)) ? (((/* implicit */long long int) 2294982309U)) : (4340006832825267438LL)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(min((3320312387U), (((/* implicit */unsigned int) (signed char)0))))))) ? (((((/* implicit */_Bool) arr_8 [i_2])) ? (3320312387U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))))) : ((~(((((/* implicit */_Bool) arr_9 [i_0] [i_2])) ? (4151906184U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)231)))))))));
                        var_17 = ((/* implicit */short) (((((~(-4340006832825267434LL))) < (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_2 [i_1])), (arr_9 [i_2] [i_2]))))))) ? (min((4284742349535131062ULL), (arr_11 [i_0 - 1] [i_2] [i_3] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_3 [i_3])))) ? (((((/* implicit */_Bool) arr_8 [(short)3])) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || ((_Bool)1)))))))));
                        var_18 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */int) ((arr_11 [i_0 - 1] [i_0 - 1] [i_2] [i_2]) == (arr_11 [(unsigned char)6] [i_1] [i_2] [i_3])))) : (((/* implicit */int) arr_2 [(short)11]))));
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)39)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) -4340006832825267439LL)) : (4228436017085948496ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3])))))) ? (((/* implicit */long long int) var_1)) : (var_12)));
                    }
                } 
            } 
            var_20 -= ((/* implicit */unsigned char) max((max((arr_3 [i_0 - 1]), (arr_4 [i_0 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)87))) <= (((((/* implicit */_Bool) 2294982319U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 - 1] [5LL]))) : (4151906177U))))))));
        }
        var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(arr_7 [i_0] [i_0 + 1] [i_0 + 1])))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (5ULL)))) ? ((+(4503049871556608ULL))) : ((-(10560150805724854073ULL)))))));
        var_22 = ((/* implicit */unsigned long long int) arr_5 [i_0]);
    }
    var_23 = ((/* implicit */unsigned int) var_13);
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (max(((+(2269814212194729984ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3)))))))));
}
