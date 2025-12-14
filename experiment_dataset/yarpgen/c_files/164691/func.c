/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164691
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
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    var_19 -= ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) var_14)), (max((var_11), (((/* implicit */unsigned long long int) var_9)))))), (((unsigned long long int) 8575095258283667801ULL))));
                    var_20 = ((/* implicit */unsigned long long int) (unsigned char)254);
                    var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_17))) ? (max((284917479U), (((/* implicit */unsigned int) var_15)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) > (((((/* implicit */_Bool) (-(var_2)))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 3U))))))));
                }
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) arr_5 [i_0] [(unsigned char)2] [i_0]))));
                var_23 = ((/* implicit */unsigned short) var_3);
            }
        } 
    } 
    var_24 += ((/* implicit */unsigned char) (+(var_8)));
}
