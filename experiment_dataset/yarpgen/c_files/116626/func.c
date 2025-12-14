/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116626
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_17 = ((/* implicit */short) (~(((/* implicit */int) ((_Bool) arr_1 [i_0] [i_0])))));
        arr_2 [(unsigned char)15] &= ((/* implicit */signed char) ((unsigned int) ((short) (!(((/* implicit */_Bool) (unsigned char)138))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483647)) ? (2079923976131668108LL) : (-18LL)));
        arr_4 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned char) -1620564026))), ((((_Bool)1) ? (7ULL) : (11ULL)))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) var_16))), (min((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-1606)))), ((~(((/* implicit */int) (short)-32360))))))));
        arr_8 [i_1] = var_7;
    }
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((var_3), (((((/* implicit */int) ((_Bool) 2ULL))) | (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-26832)) : (((/* implicit */int) (short)-32360)))))))))));
    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_16), (var_13)))) ? (min((var_15), (((/* implicit */long long int) (short)-6913)))) : (((/* implicit */long long int) ((/* implicit */int) max((var_4), (var_4))))))) != (((/* implicit */long long int) ((((/* implicit */int) var_11)) - (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)0))))))))));
    var_20 = ((((/* implicit */int) ((unsigned char) (_Bool)1))) < (min((((/* implicit */int) (_Bool)1)), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (unsigned short)65535)))))));
}
