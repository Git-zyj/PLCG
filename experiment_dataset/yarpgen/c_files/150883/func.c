/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150883
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
    var_13 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_14 = (unsigned short)0;
                                var_15 = ((/* implicit */unsigned int) (~(((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_4 - 3])))))));
                                var_16 = ((/* implicit */long long int) (signed char)106);
                                arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_10 [i_1 - 2] [i_1] [i_4 - 2] [i_4 - 2])) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 2])) : (((/* implicit */int) arr_1 [i_1 - 1] [i_3]))))));
                                var_17 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_6 [5ULL] [5ULL] [i_3])) : (((/* implicit */int) arr_3 [i_4 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_0 [i_2] [i_4 + 1]), (((/* implicit */unsigned short) arr_11 [i_2] [i_3] [i_3])))))) : (-989343501705871597LL))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) ((989343501705871597LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
                }
            } 
        } 
    } 
    var_19 = ((unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (min((((/* implicit */long long int) var_9)), (989343501705871597LL)))));
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((((unsigned long long int) var_2)) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) var_1)))))))) / (((/* implicit */unsigned long long int) 989343501705871597LL)))))));
}
