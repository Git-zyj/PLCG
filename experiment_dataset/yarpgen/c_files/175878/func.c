/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175878
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
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_14)), (var_5)))) ? (var_9) : (((/* implicit */unsigned long long int) var_11))))) ? (var_10) : (4602678819172646912LL))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [(unsigned short)10] = ((/* implicit */unsigned long long int) ((unsigned char) ((min((3555403089U), (((/* implicit */unsigned int) (unsigned char)173)))) > (((/* implicit */unsigned int) ((((/* implicit */int) (short)6695)) >> (((((/* implicit */int) arr_1 [i_0])) - (22101)))))))));
        var_16 = ((/* implicit */int) min((((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (2470090457U))))), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 23U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_0])))))))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((/* implicit */_Bool) (-(-3)))) ? (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_5))))) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)32))) / (-4602678819172646924LL)))) ? (((var_12) & (((/* implicit */unsigned long long int) arr_0 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) > (arr_0 [i_0])))))))));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned short) arr_1 [i_1]))), (var_1)));
        arr_6 [i_1] = ((/* implicit */long long int) ((short) ((unsigned char) ((arr_0 [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65534)))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 2; i_2 < 17; i_2 += 3) 
    {
        var_19 *= ((((/* implicit */_Bool) arr_7 [i_2 + 2])) ? (arr_7 [i_2]) : (arr_7 [i_2 - 2]));
        arr_9 [i_2] = ((/* implicit */unsigned char) arr_7 [i_2]);
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_8 [i_2 + 2]);
    }
    var_20 += ((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) 0U))));
}
