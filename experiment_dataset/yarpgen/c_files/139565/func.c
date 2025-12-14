/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139565
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 4; i_2 < 11; i_2 += 2) 
                {
                    for (long long int i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_2] [i_0] = ((/* implicit */long long int) (_Bool)1);
                            arr_11 [i_0] [(unsigned char)6] = ((/* implicit */unsigned char) (((-2147483647 - 1)) + (((/* implicit */int) (unsigned char)239))));
                            arr_12 [i_2] [i_2] [i_0] = ((/* implicit */_Bool) (-((+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101))) - (513972003U)))))));
                            arr_13 [i_3] [i_2] [i_2] = ((/* implicit */unsigned int) min(((((~(-2147483647))) ^ (((/* implicit */int) (signed char)90)))), (((((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)32)))) - (((/* implicit */int) (unsigned char)0))))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) arr_0 [i_0] [(unsigned char)0])))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_4) >> (((((((((/* implicit */_Bool) var_6)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) - (-9223372036854775792LL))) + (23LL))))))));
}
