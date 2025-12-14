/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104025
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
    var_11 += ((/* implicit */unsigned char) var_4);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) -1065123493))));
        arr_2 [i_0] = (((_Bool)1) ? (((/* implicit */int) ((unsigned char) var_9))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-14778))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        for (int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    for (short i_4 = 4; i_4 < 24; i_4 += 1) 
                    {
                        {
                            arr_13 [i_2] [i_4] [i_2] = ((/* implicit */unsigned char) -1391926357);
                            arr_14 [i_1] [i_2] [i_3] [i_4 + 1] = ((/* implicit */signed char) (-(((/* implicit */int) min(((unsigned char)131), (((/* implicit */unsigned char) (_Bool)1)))))));
                            var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))));
                        }
                    } 
                } 
                var_14 ^= (-(((/* implicit */int) max(((unsigned char)250), ((unsigned char)107)))));
                var_15 = ((/* implicit */signed char) min((((15465916812521685498ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24373))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)14777)), (2601009285U))))));
                arr_15 [i_1] [i_2] [i_1] = ((/* implicit */signed char) max((((((/* implicit */int) (short)-32766)) * (((/* implicit */int) (signed char)-33)))), (((/* implicit */int) (unsigned char)219))));
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    for (signed char i_6 = 1; i_6 < 23; i_6 += 1) 
                    {
                        {
                            arr_21 [i_1] [i_1] [(unsigned char)19] [i_2] [i_5] [i_6 + 1] = ((/* implicit */unsigned short) var_3);
                            var_16 += ((/* implicit */unsigned int) (unsigned short)3259);
                        }
                    } 
                } 
            }
        } 
    } 
}
