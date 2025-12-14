/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106523
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
    for (short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */short) 25U);
                var_14 = ((/* implicit */short) max((max((((unsigned int) arr_3 [i_0] [i_0] [i_1])), (((/* implicit */unsigned int) ((unsigned short) arr_3 [i_0] [i_0 + 1] [i_0]))))), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)22)))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 7; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                            arr_8 [i_3] [i_1] [(unsigned char)1] [i_1] [i_0] = (~(((/* implicit */int) ((unsigned char) arr_2 [i_2]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 2; i_4 < 9; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_2 [i_4 - 2])))))))));
                            var_17 = ((/* implicit */short) ((max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (4296743175624444945LL))) > (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 2])))));
                            var_18 *= arr_1 [i_0 - 1] [i_0 - 1];
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) (~(min((((/* implicit */int) (unsigned char)208)), (1411645655)))));
    var_20 = ((/* implicit */short) min(((-(var_7))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)233)))))));
    var_21 = ((/* implicit */short) ((unsigned int) var_0));
}
