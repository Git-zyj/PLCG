/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103024
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
    var_19 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) ? (((var_14) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) var_15)))) : (((((/* implicit */int) var_15)) * (((/* implicit */int) var_3)))))) + (((((/* implicit */int) var_1)) * (((/* implicit */int) var_9))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */unsigned char) var_4);
        var_20 = ((/* implicit */unsigned char) max((var_20), (arr_1 [i_0] [i_0])));
    }
    var_21 = ((/* implicit */_Bool) var_3);
    /* LoopNest 2 */
    for (unsigned int i_1 = 3; i_1 < 19; i_1 += 3) 
    {
        for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            {
                arr_9 [i_1 + 1] [(signed char)6] |= ((/* implicit */unsigned short) ((_Bool) (~(((((/* implicit */unsigned long long int) var_10)) | (1963878626925892363ULL))))));
                arr_10 [i_1] = ((/* implicit */unsigned char) ((arr_6 [i_2]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 - 1])))));
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_6))));
            }
        } 
    } 
}
