/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102809
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
    var_12 = (-(max((max((((/* implicit */long long int) var_5)), (139637976727552LL))), (((/* implicit */long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_9))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_1 - 2] [i_0]))))) % (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 3]))) % (4231091566535353306LL)))));
                arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_0] [i_1 - 3]))))) && (((var_9) || (((/* implicit */_Bool) 139637976727571LL))))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((var_3) || (var_9)))) != (((((/* implicit */int) (signed char)4)) + (((/* implicit */int) var_7))))));
                arr_9 [i_1] [i_1] = ((/* implicit */_Bool) (~(((max((-139637976727567LL), (((/* implicit */long long int) arr_2 [(signed char)11])))) | (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) var_9)), (arr_1 [i_0])))))))));
            }
        } 
    } 
}
