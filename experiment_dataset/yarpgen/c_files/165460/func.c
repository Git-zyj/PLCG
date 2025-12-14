/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165460
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
    var_20 = ((/* implicit */unsigned char) ((unsigned long long int) (((+(var_14))) + (((/* implicit */unsigned long long int) (~(var_1)))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_21 = ((/* implicit */signed char) (-(((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (signed char)127)) : (arr_1 [i_0] [i_0]))))));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((min((arr_1 [i_0] [i_0]), (((((/* implicit */int) var_10)) | (((/* implicit */int) (signed char)127)))))), (((((/* implicit */int) arr_2 [i_0] [i_0])) ^ (((/* implicit */int) arr_2 [i_0] [i_0])))))))));
        var_23 ^= ((/* implicit */long long int) ((unsigned int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))), (16573166833845593441ULL))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) var_5);
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 + 1])) && (((/* implicit */_Bool) arr_5 [i_1 + 1] [i_2 + 1]))));
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_1 - 1])) ? (16573166833845593442ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_2] [i_1])))))));
        }
        var_26 = 10921932360451046083ULL;
    }
}
