/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165071
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_7 [i_1] = arr_3 [i_1];
                arr_8 [i_0] [i_1] = ((/* implicit */long long int) (+(min((arr_6 [i_0] [i_0] [i_1]), (arr_2 [i_0] [i_1])))));
                arr_9 [(unsigned short)7] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~((+(((/* implicit */int) var_2)))))))));
                var_10 |= ((/* implicit */_Bool) ((((((/* implicit */int) (!(((/* implicit */_Bool) 2821431848U))))) - (((/* implicit */int) ((arr_0 [i_0]) != (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0]))))))) * (((/* implicit */int) ((signed char) (unsigned short)448)))));
            }
        } 
    } 
    var_11 = ((/* implicit */short) var_6);
}
