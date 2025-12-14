/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166686
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
    var_10 += ((/* implicit */unsigned short) var_7);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [(signed char)9] = ((/* implicit */signed char) min((max((max((-1424612367), (((/* implicit */int) var_2)))), (((/* implicit */int) arr_2 [i_0])))), (max((max((((/* implicit */int) arr_4 [i_0] [i_0] [(signed char)9] [0])), (1424612368))), (((/* implicit */int) max((var_0), (arr_1 [i_0]))))))));
                    var_11 -= ((/* implicit */_Bool) (signed char)104);
                    arr_9 [(_Bool)1] |= ((/* implicit */unsigned char) ((signed char) max((((((/* implicit */int) arr_7 [i_0] [i_1 - 2] [i_2])) >> (((/* implicit */int) arr_4 [i_0] [6U] [i_1 - 1] [i_2])))), (1424612375))));
                    arr_10 [i_0] [i_1 - 1] = ((/* implicit */unsigned short) (~(15451449065066525880ULL)));
                }
            } 
        } 
    } 
}
