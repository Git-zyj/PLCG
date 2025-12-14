/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131693
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
    var_18 = ((/* implicit */unsigned short) ((unsigned char) max((((int) (signed char)83)), (((/* implicit */int) var_17)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 3; i_2 < 17; i_2 += 4) 
                {
                    var_19 = -220091629;
                    var_20 ^= ((/* implicit */_Bool) ((-1679455558) * (((/* implicit */int) ((-220091641) >= (1679455559))))));
                    arr_8 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) 1679455557)))) || (((/* implicit */_Bool) ((unsigned long long int) (_Bool)1)))));
                    var_21 = ((((16285889539924890312ULL) ^ (((/* implicit */unsigned long long int) 3032515840U)))) < (((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)33))))));
                }
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-1)) / (((/* implicit */int) (unsigned char)16)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((var_23), (((var_2) > (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned int) var_13)))))))));
}
