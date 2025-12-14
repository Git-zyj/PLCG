/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108484
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
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_15 -= ((/* implicit */unsigned int) min((max((arr_0 [19U]), (arr_0 [i_0 - 2]))), (((((/* implicit */_Bool) arr_5 [14] [i_0 + 1] [i_4] [i_4])) && (((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0]))))));
                                var_16 = ((/* implicit */signed char) ((unsigned long long int) ((var_6) & (((/* implicit */long long int) ((/* implicit */int) var_8))))));
                            }
                        } 
                    } 
                    var_17 = min((max((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_2 [i_0] [i_1] [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) >= (var_4)))))), (((/* implicit */unsigned long long int) var_3)));
                    arr_14 [i_2] [17U] [i_2] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_2] [i_2] [9ULL] [i_2]))))) ? (-7223316325255281037LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                    var_18 = ((/* implicit */long long int) ((max((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) min(((_Bool)0), ((_Bool)1)))))) == (((/* implicit */int) ((var_11) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min((((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_6))) << (max((var_12), (((/* implicit */int) (_Bool)1)))))), (((/* implicit */long long int) var_14))));
}
