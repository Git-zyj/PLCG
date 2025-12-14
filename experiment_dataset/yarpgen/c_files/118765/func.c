/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118765
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((8775049511403911041LL) / (((/* implicit */long long int) ((int) var_2)))))) || (((/* implicit */_Bool) var_1))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [0U] [i_0] [i_2] &= ((/* implicit */long long int) ((unsigned int) max(((_Bool)1), (arr_2 [i_0] [(short)4] [i_2]))));
                    arr_9 [i_0 + 1] [i_1] [i_2] [(unsigned short)10] = ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */int) ((((/* implicit */_Bool) 4294967279U)) || (((/* implicit */_Bool) (unsigned short)19640))))) | ((-(((/* implicit */int) (signed char)78)))))) : (((/* implicit */int) arr_6 [i_0 - 1] [i_1] [i_2]))));
                }
            } 
        } 
        var_11 *= ((/* implicit */long long int) ((min((((/* implicit */long long int) 99122063)), (((((/* implicit */_Bool) (unsigned short)19651)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)123))) : (7932358177355272440LL))))) <= (((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) arr_2 [i_0] [(unsigned short)8] [(_Bool)1])) : (((/* implicit */int) (_Bool)0)))))))));
        var_12 = ((/* implicit */unsigned char) arr_2 [2LL] [(_Bool)1] [2LL]);
        arr_10 [2] [(unsigned short)4] = ((/* implicit */long long int) max((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)45895)))), (((/* implicit */int) (unsigned char)194))));
        arr_11 [4LL] [4LL] = ((/* implicit */long long int) arr_3 [i_0] [6LL]);
    }
    for (signed char i_3 = 1; i_3 < 16; i_3 += 4) 
    {
        var_13 = arr_14 [0LL] [14LL];
        var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_12 [i_3] [i_3])), ((+(var_7)))));
    }
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (var_2)));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) ((unsigned char) (_Bool)1)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((var_9) <= (((/* implicit */long long int) ((/* implicit */int) var_1)))))) : (var_5)))) : (max((((/* implicit */long long int) ((signed char) var_2))), (min((((/* implicit */long long int) (_Bool)0)), (var_9)))))));
}
