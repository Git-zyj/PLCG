/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107660
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
    var_19 += ((/* implicit */unsigned long long int) -1104335812);
    var_20 = ((/* implicit */int) ((var_17) >> (((((/* implicit */int) var_9)) + (29952)))));
    var_21 &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) > (6266809253194183369ULL)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (((((~(arr_3 [i_0]))) << (((/* implicit */int) ((((/* implicit */unsigned int) -1883301848)) >= (arr_1 [i_0] [i_1])))))) * (((/* implicit */unsigned long long int) max((((arr_2 [i_0 + 1] [i_1 + 2]) | (((/* implicit */int) (unsigned char)72)))), (((/* implicit */int) (signed char)(-127 - 1)))))))))));
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */int) ((min((arr_0 [i_0 - 1] [i_1]), (arr_0 [i_1 + 2] [i_0 - 1]))) & (((/* implicit */unsigned long long int) (~(-1883301848))))));
            }
        } 
    } 
}
