/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130601
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
    for (long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) var_11)) : (var_10)))))));
                    var_19 = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))))), (5703658887880140149LL)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) var_14);
}
