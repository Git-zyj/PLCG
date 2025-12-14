/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126633
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
    var_19 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 827523787)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_8))))))))));
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max((var_8), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)7)) > (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))))))));
    var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (max((((/* implicit */long long int) var_11)), (8589934591LL))) : (((/* implicit */long long int) (-(((/* implicit */int) var_3)))))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) max((((/* implicit */int) var_18)), (-827523787)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_5)))))) : (((max((-7116792261149996510LL), (((/* implicit */long long int) var_0)))) << (((((/* implicit */int) max(((short)7936), (((/* implicit */short) (signed char)(-127 - 1)))))) - (7882)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_4))));
        arr_2 [(signed char)13] = ((/* implicit */signed char) 827523787);
        var_23 = -7116792261149996527LL;
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (arr_0 [i_0])))) ? (((((/* implicit */int) (unsigned char)146)) & (((/* implicit */int) (signed char)116)))) : (((/* implicit */int) var_13))));
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) -7116792261149996510LL)) ? (-8703825475509269590LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)4))))))));
    }
}
