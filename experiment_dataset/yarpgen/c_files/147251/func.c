/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147251
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
    var_16 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((max((arr_4 [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_0] [i_1]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) min((arr_2 [i_0] [i_0]), (arr_3 [i_0] [i_1] [i_0])))) > (-8933043573966479426LL)))))));
                arr_6 [i_1] |= ((/* implicit */signed char) ((((/* implicit */long long int) max((arr_2 [i_0] [i_1]), (arr_2 [i_1] [i_1])))) > (min((((/* implicit */long long int) max((1643014617), (((/* implicit */int) (signed char)0))))), (((((/* implicit */_Bool) (unsigned char)234)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21)))))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_1] [i_0]) : (arr_2 [i_1] [i_0])))), (arr_4 [i_0] [i_0] [i_1])))) ? (((/* implicit */int) max((((/* implicit */short) (signed char)(-127 - 1))), ((short)-4632)))) : (((((/* implicit */int) (signed char)0)) + (((/* implicit */int) (short)-13952))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (var_3)))) ? (((/* implicit */int) ((short) var_12))) : ((((((~(((/* implicit */int) (short)4632)))) + (2147483647))) >> (((((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4)))) - (8391)))))));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            {
                arr_12 [(short)8] = ((/* implicit */unsigned char) arr_10 [(signed char)8] [i_3] [i_3]);
                arr_13 [(signed char)2] [i_3] |= ((/* implicit */unsigned char) -17LL);
            }
        } 
    } 
}
