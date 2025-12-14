/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135153
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
    var_10 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)15925)) : (((/* implicit */int) var_8))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */signed char) var_6);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned int) ((((max((((/* implicit */long long int) arr_6 [i_0] [i_1])), (arr_7 [i_0] [i_1] [i_2] [i_0]))) != (((/* implicit */long long int) ((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned short) var_2)))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 0U)) % (34359738360LL)))), (min((((/* implicit */unsigned long long int) var_0)), (arr_0 [i_0]))))) : ((-(max((var_4), (((/* implicit */unsigned long long int) var_8))))))));
                            arr_9 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */signed char) (-(((arr_7 [i_0 + 1] [i_0 - 2] [i_0] [i_0]) & (((/* implicit */long long int) (-(4098766226U))))))));
                            arr_10 [i_0] [15LL] = ((/* implicit */unsigned short) var_6);
                        }
                    } 
                } 
                var_13 = ((/* implicit */signed char) ((unsigned short) max((((arr_3 [i_0] [1LL] [i_0]) >> (((var_4) - (6395011398675473813ULL))))), (((/* implicit */unsigned long long int) ((unsigned char) var_1))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_5);
    var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_0) + (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)27))))))))));
}
