/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119643
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
    var_17 = (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) arr_2 [i_0] [i_0]);
        /* LoopSeq 1 */
        for (long long int i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((-(((/* implicit */int) arr_1 [(unsigned char)4])))) >= (((/* implicit */int) (!(var_11)))))))) % (max((((/* implicit */unsigned long long int) ((var_12) / (((/* implicit */long long int) ((/* implicit */int) var_1)))))), (arr_2 [i_1 + 1] [i_1])))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (((((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) (_Bool)1)))))));
                var_20 ^= ((/* implicit */_Bool) (+(arr_0 [i_1 - 2])));
            }
        }
    }
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~(max((((var_3) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) var_13)))))))));
}
