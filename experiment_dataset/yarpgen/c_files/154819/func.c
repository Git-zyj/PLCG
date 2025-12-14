/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154819
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_20 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((var_19), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */int) var_11)) + (((/* implicit */int) arr_0 [i_0])))))) / ((~(((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned char) arr_1 [i_0])))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_7)) % (((/* implicit */int) arr_0 [i_0])))) <= (((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) var_17)) - (10701))))))) ? ((~(((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) & (var_2))))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (_Bool)1)))))));
        var_21 *= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) ? (((((/* implicit */int) (!(arr_1 [i_0])))) / (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_0])), (arr_0 [i_0]))))));
        var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_1 [i_0])) >> (((/* implicit */int) arr_1 [i_0]))))))) ? (((((/* implicit */_Bool) 685748850U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (-3059032000777044827LL))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1)))), (var_13))))));
    }
    var_23 &= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((var_14), (((/* implicit */long long int) var_13))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((var_6) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_15))))))));
    var_24 = ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        for (int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            {
                var_25 = ((/* implicit */unsigned long long int) arr_4 [i_1]);
                var_26 *= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_2])) ? (arr_8 [i_1] [i_1] [(_Bool)1]) : (arr_8 [i_2] [i_1] [i_1])))));
            }
        } 
    } 
}
