/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173694
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_2 + 2]), (var_17))))) != (((((((/* implicit */int) arr_5 [i_0])) >= (((/* implicit */int) (_Bool)1)))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))))));
                    var_18 += ((/* implicit */signed char) max(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-1502354172))), (((/* implicit */int) ((unsigned char) 11052947707635223705ULL)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)18366)) & (((/* implicit */int) (unsigned char)11))));
    var_20 = ((/* implicit */short) var_10);
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((unsigned char) (~((~(0LL)))))))));
}
