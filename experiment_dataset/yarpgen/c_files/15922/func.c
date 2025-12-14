/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15922
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
    var_17 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)48259)) ? (((/* implicit */long long int) 185909456U)) : (((-2067190145421115701LL) / (2067190145421115686LL))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 24; i_2 += 3) 
            {
                for (int i_3 = 3; i_3 < 23; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned int) var_10)));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) <= (((((-2067190145421115701LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)231)) - (196)))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_0] [i_0 + 2] [i_0 - 1] [24ULL]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 16383U)) ? (((/* implicit */int) arr_5 [i_0] [i_0 + 2] [i_0 + 1] [(_Bool)1])) : (((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_0 + 2] [(signed char)14]))))))))));
        var_22 = ((/* implicit */signed char) max((13498033579659825218ULL), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) (signed char)-94)) ? (115666871) : (115666871))) : (((/* implicit */int) var_5)))))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) 3600109298U))) ? (min((arr_6 [i_0] [i_0 - 1] [i_0] [i_0 + 2] [i_0] [i_0 + 2]), (562947805937664ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))));
    }
    var_24 = ((/* implicit */unsigned int) ((var_11) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 115666871)))) : (max((((long long int) var_7)), (((/* implicit */long long int) var_13))))));
    var_25 = ((/* implicit */short) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_11))));
}
