/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144722
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
    for (int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_6 [i_0 - 2] [i_0 + 1] [i_0 - 1]))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65525)))))));
                    var_11 -= ((/* implicit */int) (_Bool)1);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */int) min((var_12), (max((((/* implicit */int) var_8)), ((~(((var_6) / (((/* implicit */int) (unsigned short)5))))))))));
}
