/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142290
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
    var_12 = ((/* implicit */signed char) (~((~(((/* implicit */int) max((((/* implicit */unsigned short) (short)-30414)), ((unsigned short)6144))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_6 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_1 [i_0])))) | (((/* implicit */int) arr_4 [i_2] [i_2 + 1] [i_2 + 2] [i_2 - 1]))))) ? (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-10))))), (arr_2 [i_2] [i_0]))) : (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) & (var_8)))) ^ (var_1)))));
                    arr_7 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned long long int) var_9)) / (arr_2 [i_1] [i_1]))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_2] [i_1] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (var_7) : (((/* implicit */int) arr_1 [i_0]))))) : (7397982603914849595LL)))));
                    arr_8 [i_0] [(unsigned char)14] [i_2] [i_2] = ((/* implicit */_Bool) (~(var_7)));
                    var_13 = ((/* implicit */int) arr_0 [i_0]);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((var_5) < (((/* implicit */long long int) var_0)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */_Bool) -7397982603914849597LL)) || (((/* implicit */_Bool) -7397982603914849596LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) : (-7397982603914849596LL))))));
}
