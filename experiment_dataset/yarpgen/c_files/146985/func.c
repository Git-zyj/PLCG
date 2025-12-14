/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146985
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
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) 6501647318242697585ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))) : (9518574034025532120ULL)))))))));
    var_18 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)37169)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 16497284252908308409ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 8928170039684019498ULL))))))))));
                    arr_6 [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1ULL)) ? ((+(17654020250213964829ULL))) : ((~(8928170039684019495ULL)))));
                }
            } 
        } 
    } 
    var_20 = 9518574034025532120ULL;
}
