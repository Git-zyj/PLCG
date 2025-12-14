/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140201
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    var_14 *= ((/* implicit */unsigned int) (-((~(((/* implicit */int) var_7))))));
                    var_15 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [i_2 - 2])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_1] [5U] [i_1]))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_8 [i_0] [i_2 + 1] [i_2 + 2])), (arr_1 [(short)0])))) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [(unsigned char)0])))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_7 [i_0] [(unsigned short)5] [i_0] [i_0]))))))))));
                    var_16 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2]))) / (arr_5 [(unsigned char)5] [i_1])))) ? (max((((/* implicit */unsigned int) arr_1 [i_1])), (var_11))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_9)))))))) ? (((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (279223176896970752ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) arr_7 [3ULL] [(_Bool)1] [i_2] [4U]))))))));
                }
            } 
        } 
    } 
    var_17 = max((var_13), (((/* implicit */unsigned char) var_5)));
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((var_2) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (var_0) : (max((var_0), (((/* implicit */unsigned int) var_13)))))))));
}
