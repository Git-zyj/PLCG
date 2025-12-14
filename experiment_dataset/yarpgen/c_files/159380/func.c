/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159380
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
    var_12 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) var_4)))))) < (min((((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */int) var_7)))), (var_0)))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_13 = ((/* implicit */long long int) ((signed char) (+(((/* implicit */int) arr_0 [i_0])))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (max(((~(((/* implicit */int) var_1)))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))) : (((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0]))) ? (max((var_5), (2147483647))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_0 [i_0])))))))));
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_0))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_16 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((short) var_2))) : (arr_1 [i_1]))) / ((~(((/* implicit */int) (_Bool)1))))));
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 1; i_4 < 20; i_4 += 4) 
                {
                    {
                        var_17 = (-(((/* implicit */int) arr_3 [i_1])));
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_4 + 1] [20LL] [20LL] [i_1]))))) ? (-295970754) : (((((/* implicit */_Bool) 1635769469334540083LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))))))));
                        arr_11 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_9) ? (var_5) : (((/* implicit */int) arr_2 [i_4 + 1])))))));
                        arr_12 [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */int) arr_3 [i_1])), ((~(((/* implicit */int) arr_9 [i_1] [i_3] [i_3] [i_4 + 2] [i_4 - 1] [i_4]))))));
                    }
                } 
            } 
        } 
        var_19 ^= (-(((/* implicit */int) ((_Bool) var_6))));
        var_20 -= min(((short)3895), ((short)-29124));
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 14; i_5 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) var_10);
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_5 + 1])) : (((/* implicit */int) arr_0 [i_5 - 2]))));
    }
    var_23 += ((/* implicit */long long int) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (var_0) : (var_10))), (var_5)));
    var_24 = ((/* implicit */short) var_5);
}
