/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168306
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                arr_12 [i_3] [i_3] [i_3] [i_3] [(_Bool)1] [i_3] [i_0] = ((/* implicit */_Bool) (~(arr_10 [i_0] [i_2] [i_0])));
                                var_20 += ((/* implicit */signed char) ((unsigned char) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (arr_6 [i_0] [i_2])))), ((~(((/* implicit */int) (_Bool)1)))))));
                                arr_13 [i_4] [i_1] [i_1] [i_3] [i_0] = ((/* implicit */short) (-(arr_0 [i_3] [i_0])));
                                var_21 *= ((/* implicit */signed char) arr_5 [i_2] [i_2]);
                                var_22 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_11 [(unsigned short)15] [(unsigned short)15] [(unsigned short)15] [i_3] [i_3] [i_3] [i_3])))), (((/* implicit */int) arr_5 [i_0] [i_3]))));
                            }
                        } 
                    } 
                } 
                var_23 &= ((/* implicit */unsigned long long int) var_11);
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) (+((~(var_11)))));
    var_25 |= 4278190080U;
}
