/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185251
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
    var_19 = ((/* implicit */unsigned int) -610291250542312323LL);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_0]);
                    var_20 = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((((((/* implicit */int) (short)7196)) <= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)34)))))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)78)) | (((((((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))))))))) : (((/* implicit */unsigned char) ((((((/* implicit */int) (short)7196)) <= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)34)))))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)78)) | (((((((((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) - (2147483647))) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))))))));
                    arr_10 [i_1] [i_2] [i_0] [4U] = arr_5 [i_0] [i_1] [i_0];
                    arr_11 [(short)10] [i_0] = ((/* implicit */unsigned int) (signed char)-18);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) 5846510888695594710ULL);
    var_22 = ((/* implicit */short) ((signed char) var_16));
}
