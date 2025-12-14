/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127912
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
    var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((2147483647), (((/* implicit */int) (unsigned short)17772))))) ? (var_2) : (512520872U)));
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_11))));
    var_20 = var_2;
    var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) -5)) ? (((/* implicit */int) (unsigned short)65534)) : (-679395937)));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0 - 2]))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_1 [i_0] [i_0]))))))) ? (((/* implicit */unsigned int) 1971487514)) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) / (arr_0 [i_0])))));
        arr_2 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1]))))) <= ((~(((/* implicit */int) arr_5 [i_1]))))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-5) ^ (4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 5)))) : (18U)));
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) min((14), (((/* implicit */int) (unsigned char)14)))))));
        var_26 = (+(((arr_6 [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
    }
}
