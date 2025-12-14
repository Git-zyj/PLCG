/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149311
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
    var_16 = ((/* implicit */unsigned int) (((((((_Bool)1) ? (var_12) : (((/* implicit */long long int) 1181768899)))) + (((/* implicit */long long int) min((((/* implicit */unsigned int) var_13)), (var_7)))))) < (((/* implicit */long long int) (~(min((-1822199266), (((/* implicit */int) (_Bool)0)))))))));
    var_17 = ((/* implicit */unsigned long long int) max((var_8), (min((min((((/* implicit */long long int) (short)-3868)), (var_10))), (((/* implicit */long long int) max((var_2), (((/* implicit */signed char) (_Bool)1)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (((_Bool)0) ? (arr_0 [(unsigned short)22] [i_0 + 3]) : (((/* implicit */int) (unsigned short)18507)))))));
        var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1]))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((signed char) arr_2 [i_0 - 2] [i_0]));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_8 [(_Bool)1] = ((/* implicit */short) 761828545);
        var_20 = ((/* implicit */int) (-((((_Bool)1) ? (((/* implicit */long long int) arr_7 [i_1] [i_1])) : (arr_4 [i_1])))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        var_21 += ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
        arr_11 [(unsigned short)5] = ((/* implicit */int) max(((((_Bool)1) ? (-8274670007479166050LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21184))))), (((/* implicit */long long int) (unsigned short)21184))));
    }
}
