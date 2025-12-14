/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180108
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((unsigned int) ((21ULL) % (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))))));
                arr_4 [i_1] [i_0] [i_0] = (~(((unsigned long long int) max((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_1])))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        arr_8 [i_2] [i_2] = var_1;
        arr_9 [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2] [i_2])) * (((/* implicit */int) arr_5 [i_2]))))) ? (min((72057594033733632ULL), (((/* implicit */unsigned long long int) (_Bool)0)))) : (min((0ULL), (14ULL))));
    }
}
