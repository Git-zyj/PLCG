/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179662
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
    var_15 = ((/* implicit */short) (+(((/* implicit */int) min(((unsigned char)189), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-25502))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_12 [i_4] [i_1] [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_13);
                                var_16 &= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_0] [i_3] [i_4])), (max((arr_3 [i_1] [i_2] [i_3]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_4] [i_1] [i_4])) % (((/* implicit */int) (short)24815)))))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((94876271U), (2818803856U)))) ? (((/* implicit */int) min(((short)8688), (((/* implicit */short) var_7))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_0] [i_0] [i_0])))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [(unsigned char)10] [i_1] [i_1] [i_1])) < ((+(((/* implicit */int) var_2))))))) : (((/* implicit */int) var_10))));
            }
        } 
    } 
}
