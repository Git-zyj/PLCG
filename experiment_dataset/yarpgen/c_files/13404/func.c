/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13404
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
    var_11 = ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) var_2))), (min((var_0), (((/* implicit */int) var_9))))))) || ((!(((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (short)12559)))))));
    var_12 = ((/* implicit */_Bool) var_8);
    var_13 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 4 */
    for (signed char i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        var_14 *= ((/* implicit */short) -10);
        var_15 *= ((short) min((arr_1 [i_0 - 3]), (((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), ((short)24797))))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_1 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) && (((/* implicit */_Bool) (+(((15536305677980399552ULL) + (((/* implicit */unsigned long long int) -701620713770831143LL)))))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 12; i_1 += 2) 
    {
        var_17 -= ((/* implicit */unsigned char) (_Bool)1);
        arr_5 [0] |= ((/* implicit */signed char) ((long long int) (+(((/* implicit */int) arr_3 [i_1])))));
        var_18 -= ((/* implicit */signed char) 1339610848);
    }
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) /* same iter space */
    {
        arr_10 [i_2] = ((((((var_0) < (((/* implicit */int) arr_7 [i_2])))) || (arr_9 [i_2]))) ? (((/* implicit */int) ((unsigned short) (_Bool)0))) : (((/* implicit */int) arr_7 [i_2])));
        arr_11 [i_2] &= ((unsigned short) ((arr_1 [i_2]) + (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_7 [i_2]))))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (-(((unsigned long long int) (_Bool)1)))))));
        arr_16 [i_3] [i_3] = ((/* implicit */short) ((var_4) - (((/* implicit */int) arr_13 [i_3] [i_3]))));
        arr_17 [17LL] = ((/* implicit */_Bool) var_3);
        var_20 = ((/* implicit */int) (unsigned short)54216);
    }
}
