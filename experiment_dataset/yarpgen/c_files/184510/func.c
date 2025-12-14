/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184510
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
    var_19 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) var_4)))), (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    arr_8 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) -1837612650)), (((((/* implicit */_Bool) (signed char)0)) ? (9223372036854775807LL) : (((/* implicit */long long int) -1899106787)))))))));
                    arr_9 [i_0] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */signed char) (!(((/* implicit */_Bool) 2147483647))))), ((signed char)22)));
                    arr_10 [i_2] [i_2] = (+(max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)51408)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-39))) : (771710760U)))), ((-(0LL))))));
                    arr_11 [i_0] [i_2] = ((/* implicit */_Bool) 2009973549);
                }
                for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    var_20 *= ((/* implicit */_Bool) max((((unsigned int) 3768057265U)), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1837612649))))))))));
                    arr_14 [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) ((((long long int) 0U)) != (((/* implicit */long long int) min((((/* implicit */int) (_Bool)0)), (-1899106787))))));
                }
                var_21 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((unsigned long long int) (-9223372036854775807LL - 1LL))))))));
                var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)-13)), (max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) 832256231)) >= (2657871581U)))), (4294967282U)))));
            }
        } 
    } 
}
