/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138943
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) / ((-(((/* implicit */int) var_6))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 24; i_2 += 2) 
                {
                    for (long long int i_3 = 4; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 1622767352642076642LL)) && (((/* implicit */_Bool) (signed char)-31)))) ? (max((((/* implicit */int) var_15)), ((-(((/* implicit */int) (signed char)6)))))) : (((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */int) min((arr_4 [i_0] [i_1] [i_2]), (arr_9 [i_3 - 1] [i_0] [i_1] [i_0] [i_0])))) : (((/* implicit */int) (unsigned short)14152))))));
                            var_20 = ((/* implicit */unsigned short) max((((0LL) * (((/* implicit */long long int) ((/* implicit */int) (signed char)30))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [16LL] [i_3 + 2])))))));
                            var_21 = ((/* implicit */short) arr_10 [i_0] [(unsigned char)1]);
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((_Bool) ((long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) (_Bool)1))))));
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (((~(((/* implicit */int) arr_6 [(signed char)4] [i_1 - 3] [(signed char)4])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                        var_23 = ((/* implicit */signed char) max((7530893191676595906LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-62)))))));
                    }
                    arr_21 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) (-(((int) max((arr_2 [i_0]), (((/* implicit */unsigned int) (signed char)112)))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) < (2516391257U))))) - (min((var_11), (var_16))))) == (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_2)))))))));
    var_25 = ((/* implicit */long long int) min((var_3), (((/* implicit */short) var_0))));
}
