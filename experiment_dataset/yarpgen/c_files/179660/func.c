/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179660
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
    var_11 -= ((/* implicit */int) var_3);
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */short) min((arr_4 [i_0 - 2] [i_1] [i_1]), (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                    var_13 *= ((/* implicit */unsigned short) (-((+(arr_6 [i_0] [i_0] [i_0 + 2] [i_0 + 2])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) arr_1 [i_0 + 1]);
                                var_15 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((arr_5 [i_0] [i_0] [4U]) | (((/* implicit */unsigned int) arr_9 [(unsigned char)16] [i_3] [i_2] [i_2] [i_1] [(unsigned char)16])))) > (((/* implicit */unsigned int) min((((/* implicit */int) arr_10 [i_4] [16] [i_2] [i_1] [i_0])), (arr_9 [i_1] [i_1] [i_0] [i_3] [i_3] [i_0 - 3]))))))), (((((((/* implicit */_Bool) arr_10 [i_1] [i_4] [i_2] [i_3] [i_4])) ? (var_7) : (((/* implicit */unsigned long long int) var_5)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_4))))))));
                                var_16 ^= arr_10 [i_3] [i_2] [(signed char)15] [i_0 + 2] [i_0];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 15; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 16; i_6 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) ((int) arr_1 [i_0]));
                                var_18 -= ((/* implicit */unsigned char) ((_Bool) max((((/* implicit */unsigned int) min((arr_11 [i_5] [i_5] [(unsigned short)15] [(signed char)9]), (((/* implicit */unsigned short) arr_2 [i_0] [i_0] [i_0]))))), (3574151242U))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
