/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175701
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((max((var_6), (((/* implicit */long long int) arr_0 [i_0])))) != (((/* implicit */long long int) (~(((/* implicit */int) var_0)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max(((~(16777215ULL))), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) max((((/* implicit */long long int) var_14)), (8897437969513421940LL))))))) : (max((((/* implicit */int) (signed char)30)), (-4)))));
    }
    /* LoopNest 3 */
    for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        for (int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_3), (arr_6 [i_1]))))));
                    arr_12 [i_1] = ((/* implicit */unsigned char) (signed char)25);
                }
            } 
        } 
    } 
}
