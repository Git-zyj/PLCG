/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188015
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
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_0 + 1] [i_0 + 1] [i_2] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) -7816472094463290234LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                    var_13 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_12)), (((unsigned int) (+(((/* implicit */int) arr_2 [i_0] [(unsigned char)1] [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_11 [(_Bool)1] [i_1] [(unsigned char)5] [(unsigned char)5] [i_0] = ((/* implicit */_Bool) min((((min((var_10), (var_10))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))), (((/* implicit */unsigned long long int) min((arr_8 [i_3 + 1] [i_3 + 1] [i_0] [i_1 + 1]), (arr_8 [i_3 + 1] [i_2] [i_0] [i_3 + 1]))))));
                                arr_12 [i_0] = ((/* implicit */_Bool) -5266102454334841493LL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (-(var_9)));
}
