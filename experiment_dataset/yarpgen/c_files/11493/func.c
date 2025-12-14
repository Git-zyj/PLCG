/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11493
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
    var_17 = -2147483632;
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_0] [i_1 + 1] [8] &= (unsigned char)41;
                    var_18 ^= ((/* implicit */long long int) max(((+(((/* implicit */int) arr_3 [i_2 + 1])))), (((/* implicit */int) (unsigned short)65525))));
                    arr_7 [i_0] [i_1 - 1] [i_0] = ((/* implicit */short) -1808180443);
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) arr_0 [i_0 - 1])), (min((((/* implicit */unsigned long long int) (unsigned short)25288)), (10420119570712910463ULL)))))));
                }
            } 
        } 
    } 
}
