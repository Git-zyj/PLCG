/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158873
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
    var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_3))) || (((/* implicit */_Bool) var_3)))))));
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_4))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned long long int) 1600605619)))))));
        arr_3 [9LL] = ((((/* implicit */_Bool) -1600605620)) ? (((/* implicit */unsigned int) 16383)) : (394433283U));
        var_19 |= 1600605620;
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((((/* implicit */int) arr_0 [i_1])) % (1600605620))) : (((/* implicit */int) arr_0 [i_1]))));
        arr_6 [i_1] = (~(min((var_1), (((/* implicit */unsigned int) ((arr_4 [19]) | (var_9)))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((2791721487U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20339)))))) ? (((/* implicit */long long int) (+(var_1)))) : ((-9223372036854775807LL - 1LL)))))));
        var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) (signed char)-78)))));
        arr_11 [i_2] = ((/* implicit */unsigned char) var_7);
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
        var_23 *= ((((/* implicit */_Bool) (-(-8422435741935853570LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_2] [i_2])) == (((/* implicit */int) arr_8 [i_2] [i_2])))))) : (((unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)45197))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_24 = ((((/* implicit */int) (unsigned short)7134)) << (((1503245808U) - (1503245791U))));
        var_25 *= ((/* implicit */_Bool) var_8);
    }
}
