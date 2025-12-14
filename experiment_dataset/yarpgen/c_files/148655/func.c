/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148655
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_1)) : (var_9)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_2 [i_0]))) : (max((arr_2 [i_0]), (9895260524259609965ULL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) : (((/* implicit */int) ((unsigned char) var_0)))));
        var_18 = ((/* implicit */signed char) ((short) ((long long int) var_2)));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_7 [i_2] [i_2] = ((/* implicit */signed char) ((long long int) 6987930454306513330LL));
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) & (((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))))) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))) : (arr_3 [i_1] [i_1])))))))));
        }
        var_20 = var_16;
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_16))) && (((/* implicit */_Bool) (~(var_16)))))))));
        var_22 = ((/* implicit */unsigned int) arr_8 [i_3]);
        var_23 -= ((/* implicit */short) (-(((/* implicit */int) arr_9 [i_3]))));
    }
    var_24 = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) (-(((/* implicit */int) var_2))))))) - (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (short)-25864)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_6))) : (((/* implicit */long long int) max((var_16), (((/* implicit */int) var_5)))))))));
    var_25 *= ((/* implicit */unsigned char) var_6);
}
