/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127677
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4522330391164806517ULL)) ? (3759111602398038852ULL) : (((/* implicit */unsigned long long int) var_1))))) ? (arr_3 [i_0]) : (arr_6 [i_0]))) - (((/* implicit */long long int) ((unsigned int) var_11)))));
                    var_15 *= ((/* implicit */short) 7430252561892587597LL);
                }
            } 
        } 
    } 
    var_16 |= min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 10132829085429582LL)) || ((_Bool)1))) ? (((/* implicit */long long int) var_2)) : (-7430252561892587598LL)))), ((+(min((((/* implicit */unsigned long long int) var_2)), (5245751988963538935ULL))))));
}
