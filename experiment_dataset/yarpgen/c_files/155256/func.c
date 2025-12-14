/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155256
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_4 [0LL] |= ((/* implicit */short) (!(((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [8])))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned int) (+((((_Bool)1) ? (((/* implicit */int) (unsigned short)48343)) : (((/* implicit */int) (unsigned char)201)))))));
            var_17 = ((/* implicit */unsigned short) ((max((((/* implicit */int) (signed char)-64)), (arr_6 [(_Bool)1] [i_1 + 3] [i_0]))) * (((((/* implicit */_Bool) arr_6 [i_1] [i_1 + 3] [i_1 + 3])) ? (((/* implicit */int) arr_5 [i_0] [i_1 + 3])) : (((/* implicit */int) var_12))))));
        }
        arr_8 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)85)) ? (var_3) : (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0])))), (((/* implicit */long long int) max((arr_5 [i_0] [i_0]), (((/* implicit */short) (unsigned char)224)))))))) ? (((((/* implicit */_Bool) -407527837)) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) var_10)))))) : (((/* implicit */int) ((_Bool) var_9)))));
        arr_9 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)201))));
    }
    var_18 = ((/* implicit */_Bool) var_11);
}
