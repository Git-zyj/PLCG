/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163092
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_3 [i_1 - 1] [i_1 + 1]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))))))) ? (((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) : (max((((/* implicit */int) arr_4 [i_0] [i_1] [i_0])), (arr_5 [i_0]))))) : (((((/* implicit */_Bool) ((int) -7100557132456404207LL))) ? (((/* implicit */int) arr_3 [i_1 - 1] [i_1])) : (arr_0 [i_0] [i_1 - 1])))));
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) -7100557132456404207LL)))) ? (((((/* implicit */_Bool) 7100557132456404207LL)) ? (7100557132456404219LL) : (((/* implicit */long long int) arr_5 [i_0])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)244)) ? (var_16) : (((/* implicit */int) arr_1 [i_0] [i_1]))))))) - (((long long int) ((((/* implicit */_Bool) (unsigned short)9482)) ? (((/* implicit */int) arr_3 [9] [(_Bool)1])) : (((/* implicit */int) arr_2 [i_1 - 1]))))))))));
                arr_6 [i_1] = ((/* implicit */signed char) var_13);
            }
        } 
    } 
    var_21 = var_3;
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            {
                arr_13 [i_3] [i_3] [i_3] = ((/* implicit */int) max((((/* implicit */long long int) ((unsigned short) arr_10 [i_2] [i_2]))), ((~(((((/* implicit */long long int) var_4)) ^ (-7100557132456404210LL)))))));
                var_22 = ((/* implicit */unsigned char) (~(min(((~(((/* implicit */int) var_12)))), (((/* implicit */int) (unsigned short)45390))))));
            }
        } 
    } 
}
