/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125537
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((16777215U), (16777215U)))) ? (var_11) : (((/* implicit */int) var_10))))) | (var_6)));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4278190081U))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)197))))));
        var_14 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)127)), (4278190076U)))) ? (((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) : (((/* implicit */int) ((unsigned short) 7741510527133057772LL)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((16777219U) & (4278190080U))) * (((/* implicit */unsigned int) ((/* implicit */int) min((((((/* implicit */int) (unsigned short)38032)) >= (((/* implicit */int) (signed char)116)))), ((!(((/* implicit */_Bool) 4278190071U))))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */long long int) 16777215U)) : (-3271346626844647985LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) arr_5 [i_1]);
        var_15 = ((((/* implicit */int) arr_7 [i_1])) != (((/* implicit */int) (signed char)-117)));
    }
    var_16 = ((/* implicit */signed char) min(((unsigned short)23708), ((unsigned short)18)));
}
