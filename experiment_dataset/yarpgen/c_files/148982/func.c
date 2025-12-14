/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148982
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) (+(max((var_9), (((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (var_7))), (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned char) var_4))))) ? (var_5) : (((/* implicit */unsigned long long int) var_3))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_11 += ((/* implicit */unsigned char) max((((/* implicit */short) arr_3 [i_0] [i_0])), (arr_6 [i_1])));
                    var_12 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) / (((/* implicit */long long int) arr_2 [i_1]))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_1] [i_2])) >= (var_7)))))))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_0]) : (arr_1 [i_2]))) : (min((((/* implicit */unsigned int) ((signed char) var_5))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (arr_1 [i_0])))))));
                    var_13 -= ((/* implicit */int) arr_6 [i_1]);
                    arr_7 [(_Bool)1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0])) > (((/* implicit */int) (unsigned char)217)))))) >= (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) << (((var_5) - (17931309900938603256ULL)))));
                }
            } 
        } 
    } 
}
