/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104489
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) max((((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0]))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)19558))))) : (max((8668482586811465767LL), (((/* implicit */long long int) (-2147483647 - 1))))))), (((/* implicit */long long int) ((signed char) arr_1 [i_0]))))))));
        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) arr_0 [i_0]))));
        arr_2 [i_0] [i_0] = (~(((long long int) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_0 [i_0]))))));
        var_12 += ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) / (3462164508U))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_0 [i_0])))) : (((((/* implicit */_Bool) 274877874176ULL)) ? (max((1115368079657744588LL), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) (~(2147483647))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        arr_8 [(signed char)18] |= ((/* implicit */short) (unsigned char)15);
        var_13 |= ((unsigned int) arr_7 [i_1]);
    }
    var_14 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((short) (-(var_2))))));
    var_15 = ((/* implicit */unsigned char) var_0);
    var_16 += ((/* implicit */short) var_2);
}
