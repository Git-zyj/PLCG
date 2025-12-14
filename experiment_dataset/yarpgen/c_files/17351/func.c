/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17351
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) var_2);
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) -1438037206);
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_11 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? ((+(((/* implicit */int) (signed char)33)))) : (((/* implicit */int) arr_2 [i_1]))));
                    arr_12 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (((/* implicit */int) (signed char)84)) : (((/* implicit */int) arr_9 [i_2] [i_2]))));
                    arr_13 [i_0] [4ULL] [i_0] [i_0] = ((/* implicit */unsigned long long int) -6020930907493610368LL);
                    arr_14 [(unsigned char)12] [i_1] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)42)) && (((/* implicit */_Bool) arr_9 [i_1] [i_0]))));
                }
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned short) (signed char)39);
    var_11 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((max((((/* implicit */unsigned char) (signed char)42)), (var_4))), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)42)) != (((/* implicit */int) var_2))))))))) & (((1152921504539738112LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
    var_12 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))));
}
