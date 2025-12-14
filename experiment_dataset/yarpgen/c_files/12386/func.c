/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12386
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
    var_13 ^= ((/* implicit */_Bool) var_3);
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned short) var_6))))))))) != (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (3550258991038663391LL)))));
    var_15 = min((var_2), (((/* implicit */unsigned long long int) var_3)));
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max((var_4), (((((/* implicit */_Bool) max((((/* implicit */long long int) var_12)), (var_10)))) ? ((-(4076808183U))) : (((4076808185U) & (var_7))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_8))));
        var_18 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [3ULL] [i_1] [i_1] [i_3])) ? (((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_2] [7])) : (var_7))))));
                        arr_12 [i_0] [i_0] [4U] [i_0] [i_1] [i_0] |= ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_3])) ? (((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3])));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0])))))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0])) & (((/* implicit */int) arr_4 [i_0]))));
    }
    for (int i_4 = 0; i_4 < 16; i_4 += 1) 
    {
        arr_16 [i_4] [4LL] = ((/* implicit */signed char) (!((!(var_11)))));
        arr_17 [i_4] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (11429162381752716789ULL))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned long long int) 4076808160U))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_12)), (var_7)))) : (((17220377543577570667ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4] [i_4]))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */signed char) arr_15 [i_4] [i_4])), (var_8)))))))));
    }
    /* vectorizable */
    for (long long int i_5 = 1; i_5 < 14; i_5 += 3) 
    {
        arr_20 [i_5] = ((unsigned long long int) var_8);
        arr_21 [i_5] [i_5] = ((/* implicit */unsigned long long int) var_5);
    }
}
