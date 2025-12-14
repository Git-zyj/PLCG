/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175949
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (_Bool)1)), (11838386138215461169ULL)));
                    var_14 += ((/* implicit */long long int) (((~(((/* implicit */int) arr_5 [i_2 + 1] [i_1] [i_2 - 2])))) < (((/* implicit */int) arr_3 [i_0] [i_0]))));
                    var_15 |= max((min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_2 + 2])), (15ULL))), (((/* implicit */unsigned long long int) 4294967278U)));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) var_10);
    var_17 *= var_13;
}
