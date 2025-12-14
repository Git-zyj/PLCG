/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124970
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
    var_14 |= ((/* implicit */unsigned int) ((_Bool) ((var_3) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 8; i_0 += 2) /* same iter space */
    {
        var_15 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])) * (((/* implicit */int) (unsigned char)0))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((short) var_13));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 8; i_1 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) var_0);
        arr_5 [i_1] = ((/* implicit */long long int) var_4);
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) ((-4673022376926839832LL) | (((/* implicit */long long int) ((((/* implicit */_Bool) 1171256743129149146ULL)) ? (arr_7 [i_2]) : (((/* implicit */int) (unsigned short)16)))))));
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [2U] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (78977082U))))));
    }
    var_19 &= ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_11)))));
}
