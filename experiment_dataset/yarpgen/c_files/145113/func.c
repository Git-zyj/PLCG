/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145113
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) var_5))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned char) min((((((/* implicit */int) ((1869730436U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [6] [12ULL])))))) - (((/* implicit */int) (signed char)37)))), (((((/* implicit */int) arr_3 [i_0 + 1])) & (((/* implicit */int) arr_3 [i_0 - 1]))))));
                arr_5 [i_0 + 1] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((1243309600U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))))))))) != ((+(((/* implicit */int) arr_1 [i_1] [i_0]))))));
                var_14 = ((/* implicit */unsigned long long int) ((unsigned char) var_5));
                arr_6 [4LL] [4LL] = ((/* implicit */int) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_3 + 1])) ? (2527673697U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_11)))) : (max((((/* implicit */unsigned int) (signed char)20)), (3051657679U)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
