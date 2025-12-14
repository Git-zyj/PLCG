/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178608
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
    var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) (~(var_7))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((68719345664LL) << (((25165824U) - (25165815U))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_2] [i_2] = ((/* implicit */int) (~(arr_6 [(signed char)14] [i_1])));
                        arr_12 [i_2] = (i_2 % 2 == 0) ? (((/* implicit */unsigned short) ((min((((/* implicit */long long int) 3596979079U)), (68719345664LL))) << (((((((min((var_5), (((/* implicit */int) var_0)))) & (arr_9 [i_2 - 1] [i_1] [i_2 - 1] [i_2]))) + (2074068029))) - (32)))))) : (((/* implicit */unsigned short) ((min((((/* implicit */long long int) 3596979079U)), (68719345664LL))) << (((((((((min((var_5), (((/* implicit */int) var_0)))) & (arr_9 [i_2 - 1] [i_1] [i_2 - 1] [i_2]))) + (2074068029))) - (32))) - (2143803237))))));
                    }
                } 
            } 
        } 
        var_11 = ((/* implicit */_Bool) 3596979079U);
    }
    var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
}
