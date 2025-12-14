/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108776
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
    var_12 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)101))))) ? (((/* implicit */unsigned long long int) 2368325881U)) : (var_9)))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
                {
                    var_13 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) -6400088128575571975LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2368325894U)))))) : (2368325894U)))));
                    arr_7 [i_0] [i_0] [i_1 - 1] [7ULL] = ((/* implicit */_Bool) max(((-(((/* implicit */int) var_11)))), (((/* implicit */int) var_0))));
                    var_14 = ((/* implicit */long long int) (+(((/* implicit */int) arr_4 [(short)9]))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)32768)) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (max((arr_0 [i_0]), (((/* implicit */unsigned int) (unsigned short)43360)))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-10))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101)))));
                }
                for (long long int i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
                {
                    var_15 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((2368325881U), (((/* implicit */unsigned int) (signed char)-117))))) ? (((/* implicit */long long int) (-(var_4)))) : (arr_3 [i_0]))), (((/* implicit */long long int) (-(arr_2 [(unsigned char)8]))))));
                    var_16 &= ((/* implicit */unsigned short) arr_4 [i_0]);
                }
                var_17 ^= ((/* implicit */short) arr_2 [i_1 - 2]);
            }
        } 
    } 
}
