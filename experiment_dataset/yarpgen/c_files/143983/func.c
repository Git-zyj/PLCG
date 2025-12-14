/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143983
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_7 [(unsigned char)15] = ((/* implicit */signed char) max((((/* implicit */long long int) arr_2 [i_1])), (((((/* implicit */_Bool) 4453961407577743919LL)) ? (min((var_8), (((/* implicit */long long int) var_14)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_11))))))))));
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_5))));
                arr_8 [i_0] = ((/* implicit */unsigned long long int) min(((((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((((17119765203172063591ULL) >> (((/* implicit */int) (_Bool)1)))) - (8559882601586031781ULL))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-1)), (4294967295U)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_14))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                {
                    arr_15 [i_4] [i_3] [7LL] = ((/* implicit */unsigned long long int) var_11);
                    arr_16 [(_Bool)1] [i_3] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4]))) > (((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)14)))))) : (4U)))));
                    arr_17 [(_Bool)1] [i_4] [i_4] = ((/* implicit */unsigned char) arr_14 [2ULL] [i_4] [i_4]);
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((max((((/* implicit */long long int) (~(((/* implicit */int) (signed char)101))))), (var_10))) | (((/* implicit */long long int) var_1)))))));
                    arr_18 [i_2] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) var_9);
                }
            } 
        } 
    } 
    var_17 -= ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 9U)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_2)))) ? ((+(var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((4712072602589316536ULL) < (((/* implicit */unsigned long long int) var_13)))))))), (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (var_10)))), (max((((/* implicit */unsigned long long int) 268304384U)), (2514545868279097691ULL)))))));
}
