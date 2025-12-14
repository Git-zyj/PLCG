/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147329
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
    var_10 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_8)), (var_7)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_0))))), (var_0)));
    var_11 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))))), (var_2)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned short) min((var_12), (min((min((arr_4 [i_1] [i_1]), (arr_4 [i_0] [i_0]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0])))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_11 [i_3] [i_0] [5] = var_1;
                            var_13 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_1] [i_0] [i_3]))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_5 [i_0]), (var_4)))))))));
                        }
                    } 
                } 
                var_14 += ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) min((arr_4 [i_1] [i_0]), (((/* implicit */unsigned short) var_8))))))));
            }
        } 
    } 
}
