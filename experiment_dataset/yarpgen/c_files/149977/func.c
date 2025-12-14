/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149977
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
    var_10 = ((/* implicit */unsigned short) max((max((var_8), (((/* implicit */unsigned long long int) ((unsigned int) (short)32767))))), (((/* implicit */unsigned long long int) var_2))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) min((min((var_7), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_3)), (var_4)))))), (((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_0 [i_1] [i_1])), (var_9)))) % (var_6)))));
                arr_5 [i_1] = ((/* implicit */short) var_8);
                var_11 = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((4169029682998250900LL), (4169029682998250900LL)))) ? (-4169029682998250918LL) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)35689), (((/* implicit */unsigned short) arr_0 [i_0] [i_0])))))))), (((/* implicit */long long int) ((int) var_7)))));
                var_12 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) 4169029682998250890LL)), (min((3ULL), (((/* implicit */unsigned long long int) var_1)))))), (var_5)));
            }
        } 
    } 
    var_13 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) / (((unsigned int) min((((/* implicit */unsigned long long int) var_1)), (var_8))))));
    var_14 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_3)), (max((((/* implicit */unsigned long long int) (-(var_9)))), (min((((/* implicit */unsigned long long int) -4169029682998250918LL)), (var_8)))))));
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (~(((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned long long int) var_3)), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))))))));
}
