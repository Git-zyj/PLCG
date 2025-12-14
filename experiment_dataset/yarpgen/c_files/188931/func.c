/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188931
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
    for (long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-49)))))));
        var_15 += ((/* implicit */unsigned short) var_7);
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_1 [i_0])))) ? (((((/* implicit */_Bool) (unsigned short)46869)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (276503617U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)48)) : (arr_1 [i_0]))))))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_17 = ((((/* implicit */_Bool) ((-1660803227615919094LL) ^ (((/* implicit */long long int) arr_3 [i_1]))))) ? (0U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)56047))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (~((+(((/* implicit */int) (unsigned short)16080)))))))));
            var_19 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)56039)) > (((/* implicit */int) (unsigned short)9483)))) ? (((/* implicit */int) arr_5 [i_1] [i_2] [i_2])) : (((/* implicit */int) ((((/* implicit */_Bool) 8420617346734888485LL)) || (((/* implicit */_Bool) -4941193278308485158LL)))))));
            var_20 -= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)56052)) || (((/* implicit */_Bool) arr_2 [i_2])))))));
            var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4294967295U))));
        }
    }
    var_22 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)0)))) ? (min((min((1U), (((/* implicit */unsigned int) (signed char)-54)))), (((/* implicit */unsigned int) max(((unsigned short)56050), (((/* implicit */unsigned short) (short)-13592))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
    var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) var_0)) < (var_1))))));
}
