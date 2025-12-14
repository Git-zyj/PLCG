/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153631
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
    var_16 = (+(((((((/* implicit */_Bool) 3843976231U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)109)))) % (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_5))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 21; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 3; i_1 < 24; i_1 += 1) 
        {
            arr_5 [i_1] = ((/* implicit */long long int) ((unsigned long long int) 3780600234U));
            arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) (signed char)49)) : (((/* implicit */int) (short)0))))) ? (((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_0 [i_0]))));
        }
        for (unsigned char i_2 = 3; i_2 < 24; i_2 += 2) 
        {
            var_17 = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) <= (arr_1 [i_0]))))));
            var_18 ^= ((/* implicit */short) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)61249))) ^ (-3832522871856178914LL))));
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_7))))) && (arr_2 [i_2])));
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0 + 2] [i_2 + 1] [i_2 + 1] [i_2 + 1])) ? (arr_12 [i_0 - 1] [i_2 - 2] [i_2 - 2] [i_2 - 2]) : (arr_12 [i_0 + 3] [i_2 - 3] [i_0 + 3] [i_2 - 3]))))));
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0 - 1] [i_0] [i_2 - 3])) ? (((/* implicit */int) arr_10 [i_0] [i_0 + 2] [i_0] [i_2 - 3])) : (((/* implicit */int) arr_2 [i_0 + 3])))))));
            }
            for (unsigned short i_4 = 3; i_4 < 23; i_4 += 2) 
            {
                var_22 -= ((/* implicit */short) (+(((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_4 - 1]))));
                arr_16 [i_4] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-107)))))));
            }
        }
        var_23 &= ((/* implicit */unsigned char) ((int) (~(arr_14 [i_0] [i_0]))));
    }
    for (short i_5 = 1; i_5 < 21; i_5 += 1) /* same iter space */
    {
        var_24 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-49))) & (18446744073709551596ULL)));
        arr_19 [i_5] = ((/* implicit */_Bool) (((+(((/* implicit */int) (!(((/* implicit */_Bool) 552469252U))))))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_10 [i_5] [i_5] [i_5] [i_5])))) < (178407313928926192ULL))))));
        var_25 = ((/* implicit */unsigned short) (+(((((/* implicit */long long int) ((/* implicit */int) var_10))) / (((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5])) ? (-1132357995602994795LL) : (arr_1 [i_5])))))));
    }
}
