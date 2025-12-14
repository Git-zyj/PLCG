/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167373
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
    var_11 = ((/* implicit */unsigned char) max((var_11), (var_6)));
    var_12 &= ((/* implicit */unsigned short) var_0);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */int) var_0);
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)18257))) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (arr_2 [i_1]) : (((/* implicit */int) arr_1 [i_1] [i_1])))) : ((~(((/* implicit */int) arr_4 [i_1]))))));
        arr_7 [i_1] = ((/* implicit */signed char) max((max((max((((/* implicit */unsigned int) arr_3 [i_1])), (var_9))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1] [i_1])) ^ (((/* implicit */int) (unsigned char)255))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_1)))))));
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (unsigned char)0))));
        arr_8 [i_1] [i_1] |= ((/* implicit */int) (((~(((((/* implicit */_Bool) 2063806971)) ? (var_8) : (((/* implicit */unsigned long long int) 8441546065323406463LL)))))) << (((max(((~(1513022303181972505LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1])) << (((((/* implicit */int) arr_1 [i_1] [i_1])) - (134)))))))) - (1140850687LL)))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 8441546065323406463LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)53724)))), (((/* implicit */int) arr_0 [i_1] [i_1]))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2]))) : (((((/* implicit */_Bool) max(((unsigned short)38381), (((/* implicit */unsigned short) (unsigned char)28))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2] [i_2]))) : ((~(159231734U)))))));
        var_18 = ((/* implicit */int) (((((!(((/* implicit */_Bool) arr_10 [i_2] [i_2])))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_7), ((unsigned short)32227))))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) arr_5 [i_2])))))));
        var_19 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_0 [i_2] [i_2]))));
        var_20 |= ((/* implicit */unsigned short) arr_0 [i_2] [i_2]);
    }
    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)187)))))) : (((((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (var_3)))) + (((((/* implicit */int) var_1)) - (((/* implicit */int) var_5)))))));
}
