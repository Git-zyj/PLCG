/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138716
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 3; i_2 < 12; i_2 += 1) 
                {
                    var_14 = ((/* implicit */short) (~((-(((/* implicit */int) arr_0 [i_0 + 3] [i_1]))))));
                    var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_4 [i_0 - 1] [i_1] [i_2 - 1]))))))), (max(((+(var_6))), (((arr_3 [i_2] [i_1]) - (((/* implicit */unsigned long long int) 1111505961U))))))));
                    var_16 ^= ((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_2]);
                    var_17 = ((/* implicit */unsigned int) ((_Bool) (+(max((arr_5 [i_0] [i_0 + 2] [i_2] [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_2] [i_2] [i_2])))))));
                    var_18 = ((/* implicit */unsigned int) (+(arr_1 [i_2])));
                }
                var_19 = arr_0 [i_0] [i_1];
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) min((min(((+(arr_6 [i_0] [(unsigned char)7] [i_0]))), (arr_5 [i_0 + 2] [i_0 - 1] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_0 + 1] [i_0 + 1])) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])))))))))))));
                var_21 = (((((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((3183461348U) - (1111505948U)))) : (((((/* implicit */unsigned long long int) 3183461334U)) - (var_5))))) - (max((var_5), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_0 - 1])))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) max(((+(((((/* implicit */long long int) ((/* implicit */int) var_7))) - (var_1))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_2), (((/* implicit */short) var_12)))))))))))));
}
