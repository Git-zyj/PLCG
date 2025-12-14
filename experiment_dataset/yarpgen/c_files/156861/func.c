/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156861
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
    var_17 = ((/* implicit */long long int) ((unsigned short) var_9));
    var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))));
    var_19 = ((/* implicit */int) var_0);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)7805)) || (((/* implicit */_Bool) -908982669)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7805)) ? (-908982669) : (((/* implicit */int) (_Bool)1))))) ? (((unsigned int) arr_0 [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))));
        arr_2 [21LL] = ((/* implicit */unsigned short) ((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))) >= (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) arr_4 [i_1]))));
        var_23 = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_4 [i_1])))) & (((/* implicit */int) ((unsigned short) var_3)))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
        {
            arr_8 [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_5 [i_2]) : (arr_5 [i_1])));
            var_24 |= ((/* implicit */signed char) ((arr_3 [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
        }
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */int) var_4);
            arr_12 [i_3] = ((/* implicit */short) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)16998))) | (var_16))));
        }
        var_26 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_1] [i_1] [i_1]))));
    }
}
