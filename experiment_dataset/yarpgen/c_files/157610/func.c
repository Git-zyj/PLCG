/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157610
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_18 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_15)))));
        var_19 = ((/* implicit */short) arr_0 [i_0]);
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1)))))));
        var_21 = ((/* implicit */unsigned long long int) ((arr_3 [i_0]) && (((/* implicit */_Bool) var_10))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((min((((/* implicit */unsigned int) var_4)), ((+(868314367U))))) << (((/* implicit */int) (!(((/* implicit */_Bool) 868314368U))))))))));
        var_23 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_5 [i_1])))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_4 [i_1]))))));
        var_24 = ((/* implicit */short) ((max((((/* implicit */unsigned int) var_12)), (((868314371U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))))) + (2094180638U)));
        var_25 = ((/* implicit */short) arr_4 [i_1]);
        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_1])) > (((/* implicit */int) ((((/* implicit */long long int) 3426652926U)) >= (799605167474157194LL)))))))));
    }
    var_27 = ((/* implicit */_Bool) var_4);
    var_28 = ((/* implicit */unsigned short) max((130214189U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) (signed char)76))))) || (((/* implicit */_Bool) var_10)))))));
}
