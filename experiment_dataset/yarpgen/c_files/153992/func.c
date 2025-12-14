/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153992
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)255))))))) ? (max((max((var_6), (((/* implicit */long long int) (_Bool)0)))), (max((((/* implicit */long long int) var_2)), (7002175768449864583LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        var_12 -= ((/* implicit */_Bool) ((signed char) var_3));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 + 4] [i_0 + 4])) ? (((/* implicit */int) arr_0 [i_0 - 3] [i_0 + 4])) : (((/* implicit */int) arr_0 [i_0 - 3] [i_0 + 4]))));
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) var_7)) : (var_5)))) ? (((/* implicit */long long int) ((var_7) - (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((((/* implicit */_Bool) (unsigned char)212)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_6)))));
        arr_3 [i_0] &= ((/* implicit */unsigned short) ((short) ((((/* implicit */long long int) ((/* implicit */int) (short)0))) % (7002175768449864583LL))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((long long int) arr_5 [i_1]));
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (var_6) : (((/* implicit */long long int) arr_4 [i_1]))))) ? (min((((/* implicit */int) ((arr_4 [i_1]) > (((/* implicit */int) (unsigned char)17))))), (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_5 [i_1])))))) : (((/* implicit */int) arr_5 [i_1]))));
        var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)231)))))))))));
    }
    var_15 = ((/* implicit */unsigned char) var_10);
    var_16 = ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 3354477321803421686ULL)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) / ((~(((((/* implicit */int) var_2)) << (((var_3) - (15758279801670761888ULL))))))));
    var_17 &= ((/* implicit */unsigned short) var_8);
}
