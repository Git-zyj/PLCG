/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169205
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) & (arr_3 [i_0])));
                    var_11 = (unsigned char)221;
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((min((((/* implicit */unsigned int) var_1)), (822895220U))), (((/* implicit */unsigned int) ((signed char) (unsigned char)118))))))));
    }
    var_12 = ((/* implicit */unsigned int) min((var_0), (var_10)));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_9) + (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (max((((/* implicit */unsigned int) var_1)), (var_9))) : (((((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))) * (min((((/* implicit */unsigned int) var_7)), (var_9)))))));
    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(min((((/* implicit */long long int) var_5)), (7923564686510133742LL))))))));
}
