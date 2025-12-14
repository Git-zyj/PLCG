/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17939
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
    var_12 += ((/* implicit */unsigned char) ((max((min((((/* implicit */unsigned long long int) 4277370002574458245LL)), (var_11))), (max((((/* implicit */unsigned long long int) var_5)), (var_0))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_9)))) - (min((var_8), (var_6)))))));
    var_13 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4277370002574458244LL)) || (((/* implicit */_Bool) 16228685880497160243ULL))));
                /* LoopSeq 3 */
                for (long long int i_2 = 1; i_2 < 8; i_2 += 1) 
                {
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_7))) && (((/* implicit */_Bool) (+(arr_1 [i_0] [i_1]))))));
                    var_16 = ((unsigned char) arr_0 [i_0]);
                    var_17 = ((unsigned long long int) ((unsigned long long int) max((2218058193212391354ULL), (arr_0 [i_0]))));
                }
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    var_18 = max((16228685880497160236ULL), (((/* implicit */unsigned long long int) (+(4277370002574458243LL)))));
                    var_19 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_5 [4ULL] [i_0] [i_0] [i_0 + 1]) | (var_2)))) || (((/* implicit */_Bool) ((unsigned long long int) var_9)))));
                    var_20 = ((/* implicit */int) var_9);
                }
                /* vectorizable */
                for (long long int i_4 = 1; i_4 < 8; i_4 += 1) 
                {
                    var_21 = (+(((unsigned long long int) arr_4 [i_0])));
                    var_22 = ((/* implicit */unsigned long long int) ((int) arr_7 [i_0 + 1] [i_4 - 1] [i_4] [i_4]));
                    var_23 = ((/* implicit */unsigned char) (+(16605206909225115030ULL)));
                }
            }
        } 
    } 
}
