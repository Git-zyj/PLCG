/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164842
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
    var_15 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_4 [(signed char)8] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [(signed char)2] [i_1])) % (((/* implicit */int) arr_3 [(signed char)12] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) : (((((/* implicit */_Bool) 2811332838932003390LL)) ? (arr_0 [i_0]) : (((/* implicit */long long int) 419573208U))))))) ? (((((/* implicit */_Bool) min((arr_2 [i_0]), (arr_2 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_2 [(unsigned short)5]), (arr_1 [i_0]))))) : (3875394087U))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((!((_Bool)0))), ((!(((/* implicit */_Bool) arr_3 [i_0] [i_1]))))))))));
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]))))) ? (max((arr_0 [i_0]), (((/* implicit */long long int) arr_1 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)203)) || (((/* implicit */_Bool) arr_3 [(unsigned char)8] [i_1]))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_0 [(unsigned short)11]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [5])))))) : (1267039989U)))));
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-80)) ? (3027927307U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))) - (-2811332838932003390LL))) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_5)) : (1267039989U))) & (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_12))))))), (((/* implicit */unsigned int) var_9))));
}
