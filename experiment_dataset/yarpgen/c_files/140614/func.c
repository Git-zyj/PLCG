/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140614
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
    for (int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) 1155356571)), (arr_1 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-1155356572) >= (((/* implicit */int) var_13)))))) : (arr_0 [i_0]))))));
        var_17 ^= ((/* implicit */unsigned short) ((unsigned long long int) ((((var_2) == (((/* implicit */long long int) arr_1 [i_0])))) ? (((unsigned long long int) var_10)) : (((arr_2 [(_Bool)0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_7))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((short) var_8))) : (((((/* implicit */int) var_10)) >> (((/* implicit */int) (_Bool)1))))))));
        var_18 = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned int) var_3)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            arr_8 [i_0] [(signed char)9] [i_0] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) 5102095268040968830ULL)) && (((/* implicit */_Bool) 2301339409586323456LL))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (long long int i_3 = 3; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1])))))));
                        var_20 *= ((/* implicit */short) ((var_5) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3 - 2] [i_3 + 1])))));
                    }
                } 
            } 
        }
    }
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((short) 3969912809U)))));
    var_22 = ((/* implicit */signed char) var_10);
}
