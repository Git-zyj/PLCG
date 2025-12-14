/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187854
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
    var_11 = ((/* implicit */_Bool) var_1);
    var_12 = ((/* implicit */unsigned char) max((var_4), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */int) var_6)))) != (max((var_0), (((/* implicit */int) var_9)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_0]))) : (((unsigned long long int) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) % (var_10))))))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_4 [(_Bool)0] [i_1] [i_1])) : (((/* implicit */int) max((arr_2 [i_1] [i_0]), (arr_2 [i_1] [i_0]))))))));
                var_13 |= (+((+(((/* implicit */int) var_9)))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            arr_11 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) (signed char)-93));
                            var_14 = ((/* implicit */_Bool) max((((/* implicit */int) (signed char)91)), ((~(var_10)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
