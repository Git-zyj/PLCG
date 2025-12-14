/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187836
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            arr_4 [i_1] = ((/* implicit */unsigned short) arr_2 [i_1]);
            var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 + 4] [i_0])))))) : (min((((/* implicit */unsigned int) (_Bool)1)), ((+(arr_2 [i_0]))))))))));
            arr_5 [i_0] [i_0] = ((unsigned char) max((((/* implicit */unsigned char) var_7)), (arr_0 [i_0] [i_1 + 1])));
        }
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) 6881191501615388835LL));
    }
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((int) var_6))) + (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-6881191501615388840LL)))))) ? (((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((var_0) + (((/* implicit */unsigned int) var_1)))))) : (max((((/* implicit */unsigned int) var_1)), (((unsigned int) var_5))))));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_4))));
}
