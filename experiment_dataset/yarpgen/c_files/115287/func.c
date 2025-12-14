/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115287
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
    var_17 = ((((((/* implicit */_Bool) 3542142926U)) || ((_Bool)1))) ? (var_8) : (var_11));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_18 += ((/* implicit */unsigned int) var_5);
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (-(min((((/* implicit */int) (short)12637)), (1513261082))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) (_Bool)1))));
        var_20 = arr_3 [(unsigned short)5] [i_0];
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) ((((arr_0 [i_1]) > (arr_0 [i_1]))) || (((/* implicit */_Bool) arr_0 [i_1]))));
        var_22 &= ((/* implicit */short) ((((/* implicit */int) var_3)) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)15)))))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) var_11)) : (arr_0 [i_1])))) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12623))) : (var_16)))) || (((/* implicit */_Bool) arr_6 [i_1]))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned long long int) ((var_16) <= (((/* implicit */unsigned long long int) ((int) 8948132761314380820ULL)))));
        var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_2]))));
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((unsigned char) arr_0 [(short)0])))));
    }
    for (int i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
    {
        arr_17 [i_3] = ((/* implicit */_Bool) ((short) ((-2111169913) - (25165824))));
        var_26 = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3] [i_3]))) : (arr_0 [i_3]))), (var_4)))), (max((61440LL), (((/* implicit */long long int) -1513261083))))));
    }
}
