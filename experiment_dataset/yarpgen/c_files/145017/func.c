/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145017
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] [i_1 + 2] = ((/* implicit */unsigned short) (+((+(arr_0 [i_1])))));
                var_10 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_5 [(_Bool)1]), (arr_5 [(_Bool)1])))) ? (((int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)-117)) : (var_3)))) : (((/* implicit */int) min((((/* implicit */short) arr_6 [i_1] [i_1 - 1] [i_0])), ((short)28324))))));
                var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1])) ? (2147483647) : (arr_4 [i_0] [i_1 + 2]))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-121)), (11704208147672434007ULL)))) ? (((/* implicit */long long int) 2147483630)) : (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((short) var_7))))) : (((var_4) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9)))))))));
}
