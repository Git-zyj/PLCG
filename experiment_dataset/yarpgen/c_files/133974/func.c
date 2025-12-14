/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133974
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
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)199))));
                var_14 = (-(((/* implicit */int) (short)2047)));
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1729322959791429695ULL)) ? ((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) >= (var_6)))))) : (((/* implicit */int) (unsigned short)9514))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_16 = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_9 [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((max((var_4), (((/* implicit */unsigned int) (unsigned char)168)))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_10)), (var_1))))))), (max((((/* implicit */long long int) (!((_Bool)1)))), (min((((/* implicit */long long int) var_4)), (5448834626390037781LL)))))));
                    var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_1)), ((-(((((/* implicit */int) (unsigned char)88)) * (((/* implicit */int) (_Bool)0))))))));
                }
            }
        } 
    } 
    var_18 -= ((/* implicit */_Bool) max((((((((/* implicit */int) var_13)) + (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))), ((~((-(1559588555)))))));
    var_19 = ((/* implicit */_Bool) (((+((+(18446744073709551591ULL))))) - (((/* implicit */unsigned long long int) 2147483644))));
}
