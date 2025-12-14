/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125424
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) (signed char)-93);
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_11 [i_3] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]);
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_3 - 2] [i_4] [(unsigned char)3] = ((/* implicit */_Bool) arr_7 [i_3 + 1] [i_0]);
                                arr_13 [14LL] [i_1 - 1] [1] [(unsigned short)10] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_3] [i_0])) || (((/* implicit */_Bool) 1558698652))))), ((+(((/* implicit */int) (_Bool)1))))));
                                var_13 *= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_3 [i_4] [i_1]) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_4] [i_4]))))) : (((int) ((unsigned int) (signed char)96)))));
                                var_14 += ((/* implicit */unsigned short) max((((short) (_Bool)0)), (((/* implicit */short) arr_6 [i_0] [i_0] [i_0] [i_0]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)108))) > (var_11)))) : ((-(((/* implicit */int) (_Bool)1))))))));
}
