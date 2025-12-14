/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11218
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
    var_19 = ((/* implicit */unsigned short) var_15);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)62865)) : (((/* implicit */int) (unsigned short)56438))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (arr_3 [i_0] [5])))))) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) var_1))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (-1) : (((/* implicit */int) arr_1 [i_0] [i_0])))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) == (-6371700676955547628LL))))));
            }
        } 
    } 
}
