/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162111
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
    var_20 = max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)511)), (((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */long long int) var_11))))))), (min((((var_15) << (((/* implicit */int) (_Bool)1)))), (((var_18) % (((/* implicit */unsigned long long int) var_5)))))));
    var_21 = 14339163348016591883ULL;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 2; i_2 < 15; i_2 += 1) 
                {
                    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) % (var_15))))));
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)1)))), (var_11)))) ? ((-(var_10))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) >> (((1742970591U) - (1742970590U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (4294967295U))))));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1])) ? (arr_4 [i_0] [i_1 + 1] [i_0]) : (arr_4 [i_0 - 1] [i_1 - 1] [i_0 - 1]))));
                    arr_8 [i_1] [i_1 - 1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_10)))) ? (arr_4 [i_1] [i_1] [i_2 + 4]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18))))))))) % (max((((/* implicit */unsigned long long int) (-(arr_2 [i_2] [(unsigned short)6])))), (max((var_15), (((/* implicit */unsigned long long int) arr_2 [i_0 + 3] [i_0 + 2]))))))));
                    var_24 = max(((+(((var_6) * (((/* implicit */unsigned long long int) var_10)))))), (max((((14339163348016591883ULL) + (((/* implicit */unsigned long long int) 1742970583U)))), (((/* implicit */unsigned long long int) arr_3 [i_1])))));
                }
                var_25 -= ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((var_12), (((/* implicit */unsigned int) arr_6 [10ULL]))))), (min((arr_2 [3ULL] [3ULL]), (((/* implicit */long long int) (unsigned char)155))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [14ULL]))) < (var_6)))), (((549755813887ULL) ^ (((/* implicit */unsigned long long int) 1988433282U)))))));
                var_26 = ((/* implicit */long long int) max((max((((unsigned long long int) arr_1 [i_0])), (((/* implicit */unsigned long long int) min((arr_1 [i_0]), (arr_4 [i_0] [i_0] [17LL])))))), (var_0)));
                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (var_6))) & (((/* implicit */unsigned long long int) (~(arr_1 [i_0 + 2])))))))));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) var_9))));
}
