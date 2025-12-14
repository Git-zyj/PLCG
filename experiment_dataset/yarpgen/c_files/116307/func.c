/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116307
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-7604))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_12)))))) ? (((/* implicit */unsigned long long int) (~(((int) var_8))))) : (((((16745303366559184623ULL) ^ (((/* implicit */unsigned long long int) var_12)))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_6)))))))));
    var_14 = ((/* implicit */long long int) var_0);
    var_15 |= ((/* implicit */short) var_1);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 3])) ? ((-(var_10))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_1] [i_0])))))));
            var_16 = ((/* implicit */signed char) (+(((/* implicit */int) arr_3 [i_1 + 2]))));
            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((long long int) var_6)))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_18 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_2] [i_2])) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(_Bool)1] [(_Bool)1])) || (((/* implicit */_Bool) var_10)))))));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                for (int i_4 = 2; i_4 < 23; i_4 += 2) 
                {
                    {
                        arr_15 [i_2] [15LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_12 [i_4 - 1] [i_4 - 1] [i_3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4 + 1])))));
                        var_19 = ((/* implicit */int) var_1);
                    }
                } 
            } 
        }
        var_20 = (signed char)-75;
    }
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
    {
        var_21 += ((/* implicit */unsigned long long int) arr_8 [i_5] [i_5] [i_5]);
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned int) ((long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_6 [i_5] [i_5] [i_5])) : (var_2))) < (((/* implicit */int) arr_3 [i_5])))));
        var_22 *= ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) arr_1 [i_5] [i_5])))));
        arr_19 [i_5] = (((~(((/* implicit */int) var_1)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))));
        var_23 = (-(10284684497005339888ULL));
    }
}
