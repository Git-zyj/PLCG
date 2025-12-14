/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110426
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
    for (int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [11] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 6180268299188875186LL)) && (((/* implicit */_Bool) (unsigned short)43373)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_2)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_13 [i_4] [i_1] [i_1 - 2] [i_1] [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)43377)) - (((/* implicit */int) (short)13307))));
                                var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)127)) | (((/* implicit */int) ((signed char) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_9))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_0);
}
