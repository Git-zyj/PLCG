/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126901
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
    var_14 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] |= ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (short)-32758))));
        var_15 = ((/* implicit */short) ((min((arr_1 [i_0]), (((/* implicit */int) ((unsigned short) (signed char)12))))) != ((((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_1 [8U])))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            arr_7 [i_0] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) var_9)) ? (((unsigned int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))), (((arr_4 [i_1] [i_0]) - (arr_4 [i_0] [i_1])))));
            arr_8 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) ((var_0) >> (((var_7) - (1181960137))))))) != (var_7)));
        }
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) (~(arr_5 [(unsigned char)4])));
        var_16 = ((/* implicit */short) (+(min((((/* implicit */long long int) ((arr_0 [i_0] [i_0]) << (((((/* implicit */int) arr_6 [16LL] [i_0] [i_0])) - (1227)))))), (min((var_2), (((/* implicit */long long int) arr_3 [i_0] [(signed char)8]))))))));
    }
}
