/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174234
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
    var_10 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0 + 1] [i_1] [13U] = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned long long int) arr_2 [i_0 + 1])));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_1] [i_4] [10] [i_2] = ((/* implicit */short) ((unsigned char) var_6));
                                arr_14 [i_0 + 1] [i_0 + 1] [i_0] [i_1] [(short)15] [i_3 + 1] [(short)15] = ((/* implicit */_Bool) var_3);
                                arr_15 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((3679149460U) << (((var_7) + (1632110595465015278LL))))) == (((/* implicit */unsigned int) ((int) arr_10 [i_4] [i_3] [i_2] [i_0])))))) == (((/* implicit */int) arr_2 [i_2]))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_1] [i_1] = ((/* implicit */int) var_5);
                arr_17 [i_0] [i_0] [1U] = ((/* implicit */long long int) (short)9606);
                var_11 = ((/* implicit */signed char) var_8);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) min((var_1), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)28360)) < (((/* implicit */int) ((-954268124561734630LL) != (((/* implicit */long long int) ((/* implicit */int) (short)-8192)))))))))));
}
