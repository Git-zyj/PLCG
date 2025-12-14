/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168831
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
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) 1008806316530991104LL)) ? (3709346019131686074LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((unsigned char) 9068131391669333986LL));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            arr_9 [i_1] [4] [i_0] = (!(((/* implicit */_Bool) var_7)));
            var_21 = ((/* implicit */unsigned char) arr_6 [(unsigned char)17] [i_1]);
            arr_10 [i_1] = ((/* implicit */_Bool) arr_1 [6ULL]);
            var_22 &= ((/* implicit */unsigned short) ((arr_6 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((arr_8 [(short)22] [(short)22] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1])))))));
            var_23 -= ((/* implicit */int) ((_Bool) arr_3 [i_0]));
        }
        for (short i_2 = 2; i_2 < 21; i_2 += 1) 
        {
            var_24 -= ((/* implicit */short) (~(((/* implicit */int) arr_11 [i_0] [i_0]))));
            var_25 = ((((/* implicit */_Bool) (~(3771407815U)))) ? (1890187805) : (((/* implicit */int) var_10)));
        }
    }
}
