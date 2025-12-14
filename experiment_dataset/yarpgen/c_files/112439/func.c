/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112439
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
    var_15 = ((/* implicit */short) var_7);
    var_16 = ((/* implicit */int) min((max(((~(var_10))), (((/* implicit */unsigned long long int) var_9)))), (var_10)));
    var_17 = ((/* implicit */int) var_14);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((arr_4 [i_0] [i_0]) ? (((((((/* implicit */long long int) var_11)) == (var_9))) ? (((/* implicit */int) min(((unsigned short)65523), ((unsigned short)5)))) : (min((arr_0 [i_0]), (1745263804))))) : (((/* implicit */int) max((((((/* implicit */int) arr_2 [i_2])) != (((/* implicit */int) arr_4 [i_1] [i_0])))), ((!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])))))))));
                    var_19 ^= ((/* implicit */int) (((+(var_12))) == (((/* implicit */unsigned long long int) arr_3 [i_1]))));
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */int) var_2);
}
