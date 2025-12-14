/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157592
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) var_14)) % (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((((/* implicit */int) var_11)) + (-1647338786))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) var_14))))))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) * (((((/* implicit */int) (unsigned char)13)) / ((+(((/* implicit */int) var_11))))))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) 91307883U)) < (14021642331134231820ULL))) ? (((var_16) ? (2074798703U) : (4294967291U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (var_13) : (((((/* implicit */unsigned long long int) var_0)) * (((var_7) << (((((/* implicit */int) var_8)) - (160)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_1 - 2])) + (2147483647))) << (((((((/* implicit */int) arr_0 [i_1 - 1])) + (88))) - (11)))))) < (var_1)));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54769)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 2532055337U)) > (var_17))))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)-11404)) : (((/* implicit */int) var_3)))))))))))));
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) arr_0 [i_1])) / (((/* implicit */int) arr_3 [i_0] [i_0])))) : (((((/* implicit */int) var_6)) * (((/* implicit */int) (short)-18046))))))) < (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) * (var_17))) << (((((((/* implicit */_Bool) -9223372036854775800LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)896))) : (18ULL))) - (857ULL)))))));
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-8315))) < (1158547387U)))) / (((/* implicit */int) arr_3 [i_1] [i_0])))) / (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1 - 3] [i_1 + 1])) && (((/* implicit */_Bool) arr_2 [i_1 - 4] [i_1 - 3]))))))))));
            }
        } 
    } 
}
