/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102359
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
    var_17 |= ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_18 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) arr_0 [(unsigned char)12])) - (200)))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned char)0])))))) : ((+(var_11)))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_19 += ((/* implicit */unsigned char) arr_3 [i_0] [6U]);
            var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0])) ? (min((((/* implicit */unsigned int) arr_2 [i_0 + 3])), (((unsigned int) var_14)))) : (((((/* implicit */_Bool) ((var_5) + (var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [2U] [2U]))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30))) : (var_7)))))));
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)187)) <= (((/* implicit */int) (unsigned char)232)))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        var_22 = ((/* implicit */unsigned char) min((var_22), (var_4)));
        arr_9 [i_2] |= ((/* implicit */unsigned int) arr_7 [i_2] [i_2]);
    }
    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 3) 
    {
        var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((unsigned int) var_12)), (((/* implicit */unsigned int) (unsigned char)68))))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) max((var_10), (min((arr_0 [12U]), (var_0))))))));
        var_24 -= ((/* implicit */unsigned int) (((-(((/* implicit */int) var_12)))) != (((/* implicit */int) var_10))));
    }
    var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_0)) == (((/* implicit */int) var_14)))) ? (((var_13) ^ (var_5))) : (min((1379333933U), (((/* implicit */unsigned int) var_14))))))) || (((/* implicit */_Bool) (~(var_5))))));
}
