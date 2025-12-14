/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184412
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
    var_19 = (signed char)-1;
    var_20 = (+(((/* implicit */int) (unsigned short)38571)));
    var_21 -= ((/* implicit */unsigned char) min((((/* implicit */short) ((unsigned char) (unsigned char)214))), ((short)29798)));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */int) (unsigned char)201)), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? ((+(((/* implicit */int) (unsigned char)117)))) : (((/* implicit */int) (short)-756))))));
        var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */int) var_12)) << (((var_18) - (3389259478348838882ULL)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_5 [i_1]) | (arr_5 [i_1]))))));
        arr_8 [(unsigned short)17] = ((/* implicit */signed char) var_13);
    }
}
