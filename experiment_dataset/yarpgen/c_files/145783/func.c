/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145783
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [(unsigned short)0] |= ((max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)24)))), (((((/* implicit */_Bool) var_12)) ? (var_14) : (((/* implicit */int) arr_1 [i_0])))))) + ((~(((/* implicit */int) (short)-22906)))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (+((-(max((arr_0 [i_0]), (((/* implicit */unsigned int) arr_1 [i_0]))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((short) (short)2048));
        var_15 = ((/* implicit */short) ((((long long int) arr_6 [i_1])) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (unsigned short)32203)) : (((/* implicit */int) (short)22908)))))));
    }
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)33334)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)15527))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            {
                arr_13 [i_3] = ((short) ((((/* implicit */_Bool) (short)22905)) ? (((((/* implicit */_Bool) 534773760LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) (short)14))));
                arr_14 [i_3] [i_2] [i_2] = ((/* implicit */short) ((unsigned int) (short)2026));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) max((((((var_2) || ((_Bool)1))) ? (max((var_4), (((/* implicit */int) var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))), ((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-22906))))))));
}
