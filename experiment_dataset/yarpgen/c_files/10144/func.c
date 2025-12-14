/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10144
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (signed char)-60))));
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) (+(6034917458075408593ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -822691561694258409LL)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (unsigned char)6)) ? (12411826615634142995ULL) : (6034917458075408580ULL))))))));
                var_18 = ((/* implicit */unsigned char) (_Bool)1);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_12))));
}
