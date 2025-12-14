/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181792
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)65510)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_4 [8LL] [i_1 + 1] [i_1 + 2] [i_1 - 1])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_2])))))));
                    arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (~(((/* implicit */int) (unsigned short)52018)))));
                }
            } 
        } 
    } 
    var_14 = (unsigned short)0;
}
