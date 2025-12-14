/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116753
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
    var_19 = var_18;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) (short)-1);
                    arr_8 [i_0] [i_1 + 1] [i_0] [i_2] |= min((var_16), ((_Bool)1));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 18446744073709551595ULL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_13)))), (((((/* implicit */int) (unsigned short)15943)) | (((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)138)) && (((/* implicit */_Bool) var_8)))))) <= (max((((/* implicit */unsigned int) (_Bool)1)), (4294967295U)))))) : (((/* implicit */int) (_Bool)1))));
                    var_21 -= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_6 [i_1] [i_1])) & (((/* implicit */int) var_10)))), (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))))), (var_0)));
                }
            } 
        } 
    } 
}
