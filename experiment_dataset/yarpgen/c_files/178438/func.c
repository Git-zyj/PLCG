/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178438
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
    var_13 = ((min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))), (((((/* implicit */int) var_2)) >> (((/* implicit */int) var_10)))))) >> ((((~(var_12))) - (16976817226124168471ULL))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(min((var_9), (11U)))))) ? (((/* implicit */unsigned long long int) (+(var_5)))) : (((((/* implicit */_Bool) min((13303571186079084852ULL), (((/* implicit */unsigned long long int) var_0))))) ? (var_12) : (((/* implicit */unsigned long long int) ((long long int) var_8)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_1] [i_1] [i_0])))))));
            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) var_11)) < (9U))))));
            var_17 -= ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) arr_0 [i_1]))));
        }
        for (short i_2 = 0; i_2 < 20; i_2 += 2) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(var_7))))));
            var_19 ^= ((/* implicit */unsigned short) ((((min((var_12), (((/* implicit */unsigned long long int) var_6)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))) + (((/* implicit */unsigned long long int) arr_5 [i_0]))));
            arr_8 [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) min((arr_7 [i_0] [i_0] [i_2]), (((/* implicit */long long int) var_5))))) || (((/* implicit */_Bool) min((arr_5 [i_0]), (1748619329U)))))));
        }
        for (short i_3 = 0; i_3 < 20; i_3 += 2) /* same iter space */
        {
            var_20 -= ((/* implicit */unsigned long long int) (_Bool)1);
            arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_3] [i_3]);
        }
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5)))))));
    }
    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
    {
        arr_15 [i_4] [i_4] = ((/* implicit */short) arr_3 [i_4]);
        var_22 = ((/* implicit */unsigned short) arr_9 [i_4] [i_4] [i_4]);
    }
    var_23 = ((/* implicit */short) min((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))))) | (var_7))), (((/* implicit */unsigned int) ((((/* implicit */int) (!(var_3)))) / ((((_Bool)1) ? (((/* implicit */int) var_0)) : (var_11))))))));
}
