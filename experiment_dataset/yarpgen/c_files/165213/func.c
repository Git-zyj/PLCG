/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165213
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
    var_11 = ((/* implicit */signed char) var_3);
    var_12 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned int) (((~(arr_5 [i_0 - 1] [i_0] [i_0 + 2]))) ^ ((~(((((/* implicit */int) (unsigned short)16383)) ^ (1376694911)))))));
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_0])) | (((/* implicit */int) var_3)))) ^ (((/* implicit */int) arr_0 [i_0 + 3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)129)) | ((~(((/* implicit */int) (unsigned short)65519))))))) : (max((((unsigned long long int) (unsigned short)24722)), (((/* implicit */unsigned long long int) (~(3402934023U))))))));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_5 [(unsigned char)5] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)40814)) : (((/* implicit */int) arr_1 [i_0])))))) == (((((/* implicit */_Bool) arr_5 [i_0 - 2] [12U] [1ULL])) ? (((int) var_7)) : (((arr_5 [i_1] [i_1] [i_1]) - (var_5)))))));
                var_16 = ((/* implicit */signed char) (+(var_8)));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)27618);
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) (~((((!(((/* implicit */_Bool) var_8)))) ? (var_7) : (((/* implicit */long long int) ((var_0) - (((/* implicit */int) (unsigned short)65535)))))))));
}
