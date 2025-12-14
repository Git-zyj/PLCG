/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142664
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
    var_19 = ((/* implicit */long long int) var_16);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        var_20 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28273))) : (4116031786U)))) ? (min((4116031786U), (((/* implicit */unsigned int) (unsigned short)28273)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 178935509U)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) (unsigned char)66))))))), (((/* implicit */unsigned int) (+((+(((/* implicit */int) (unsigned char)247)))))))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)42579)) == (((/* implicit */int) var_13)))))) & ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (var_4)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) arr_0 [i_0 - 2])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)121)) ? (4090830610U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((var_9) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) arr_0 [i_0])))) : (-1426531226)))));
        arr_3 [i_0] [i_0] |= ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned short) var_7)))))));
    }
    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)4))));
}
