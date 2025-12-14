/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117499
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
    var_19 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) ((12423430402411985414ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_1 [i_0]))))), (min((2356296509U), (((/* implicit */unsigned int) arr_0 [i_0])))))))));
        var_21 = ((/* implicit */long long int) (_Bool)1);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) arr_0 [i_0]))));
            var_23 = ((/* implicit */_Bool) max((6145122091713889720ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
        }
        arr_5 [i_0] = ((/* implicit */int) (_Bool)1);
        arr_6 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32741)) ? (((/* implicit */int) (unsigned short)52452)) : (((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (2746841318U)))));
    }
}
