/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139335
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)0))))))) : (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */int) (unsigned short)7029)) : (((/* implicit */int) (unsigned short)7030)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)7030)) == (((/* implicit */int) (unsigned short)7029)))))))));
    var_14 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-1)), ((unsigned char)127)))) ? (var_0) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (_Bool)1))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) (signed char)63)), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)7030)) : (((/* implicit */int) (signed char)119))))));
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)1993)) : (((/* implicit */int) arr_1 [i_0] [i_0])))) ^ (((/* implicit */int) ((signed char) arr_1 [i_0] [i_0]))))))));
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        arr_5 [i_1] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)7035)) ? (((((/* implicit */_Bool) var_11)) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) (unsigned char)240)))) : (((/* implicit */int) (!(((/* implicit */_Bool) min(((signed char)31), (var_5)))))))));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((int) max((((/* implicit */long long int) max((((/* implicit */int) arr_0 [8] [8])), (67108863)))), (max((((/* implicit */long long int) (unsigned short)7028)), (arr_4 [i_1])))))))));
    }
}
