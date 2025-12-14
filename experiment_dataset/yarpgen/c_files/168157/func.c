/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168157
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_2 + 3] [i_2 + 3] [8U])) ? (arr_4 [i_0] [i_2 + 3] [(_Bool)1] [(_Bool)1]) : (arr_4 [i_0] [i_2 + 3] [i_2] [i_1])))) ? (((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [(unsigned char)18] [i_2 + 1])) || (((/* implicit */_Bool) (unsigned short)0)))) ? (var_6) : (((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_2 + 1])) : (((/* implicit */int) var_12)))) * (((/* implicit */int) ((4486624195600924249ULL) > (13960119878108627367ULL))))))))))));
                    var_15 = ((((/* implicit */int) ((unsigned short) arr_5 [i_0]))) << (((((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2 + 1]))) : (arr_3 [i_2 + 3] [i_2 + 1]))) - (19U))));
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) min((4486624195600924249ULL), (13960119878108627360ULL))))));
                    arr_6 [i_2] [i_1] [i_1] [i_0] &= ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 13960119878108627367ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [6LL]))) : (arr_3 [i_0] [i_2]))), (((((/* implicit */unsigned int) 1257955413)) ^ (1216326993U)))))) ? (((((/* implicit */unsigned int) -150472297)) % (1216326993U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)128)) && (((/* implicit */_Bool) (unsigned char)4)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((unsigned int) (((~(var_10))) << (((((unsigned long long int) (unsigned char)231)) - (224ULL))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3078640302U)) && (((/* implicit */_Bool) 4573839068783660402ULL))));
    var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_11)) ? (4486624195600924249ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) ? ((~(11))) : (min((((/* implicit */int) var_2)), (((((/* implicit */int) var_12)) >> (((((/* implicit */int) var_8)) - (86)))))))))));
}
