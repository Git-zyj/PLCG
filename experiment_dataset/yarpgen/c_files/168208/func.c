/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168208
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
    var_12 = ((/* implicit */long long int) max((var_12), (max((((/* implicit */long long int) ((((/* implicit */_Bool) 3793060038U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((unsigned char) -1LL)))))), (((((/* implicit */_Bool) (unsigned char)249)) ? (((long long int) -165655863506496459LL)) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((unsigned int) 165655863506496458LL);
        arr_3 [i_0] [i_0] = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_0 [i_0])) : (-165655863506496459LL)))) ? (((/* implicit */long long int) arr_0 [i_0])) : (((long long int) var_5)))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_13 = ((/* implicit */long long int) ((unsigned int) 501907250U));
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) -4686314535710414746LL)) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)97)), (3793060038U))))))));
            arr_7 [i_1] [i_1] = ((unsigned short) ((_Bool) var_3));
            var_14 = ((/* implicit */unsigned short) (+((-(((3793060059U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5469)))))))));
        }
    }
    var_15 = ((/* implicit */long long int) (short)30892);
    var_16 = max((((/* implicit */long long int) ((unsigned char) min((0U), (((/* implicit */unsigned int) var_6)))))), (((long long int) max((var_0), (((/* implicit */long long int) (unsigned char)156))))));
    var_17 &= ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)142))) + (-165655863506496474LL))), (((/* implicit */long long int) 3793060045U))))) ? (((((long long int) var_11)) + (var_9))) : (((long long int) (-9223372036854775807LL - 1LL))));
}
