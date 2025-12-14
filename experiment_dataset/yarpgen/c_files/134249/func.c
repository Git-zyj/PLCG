/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134249
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
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 3; i_4 < 20; i_4 += 3) 
                            {
                                arr_14 [i_0] [i_1] [i_4 - 3] [i_3] [i_4] [7LL] [i_3] = ((/* implicit */unsigned char) var_15);
                                var_20 = ((/* implicit */int) (short)-9113);
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                            {
                                var_21 = ((/* implicit */short) (-((~(((/* implicit */int) (short)-10558))))));
                                var_22 = ((/* implicit */unsigned char) arr_12 [i_1] [i_1]);
                                var_23 = ((/* implicit */int) (((~(((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_0 - 1] [i_0 - 2])))) == (((/* implicit */int) ((var_4) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))))));
                                arr_17 [i_1] [i_1] [i_1] [i_0 + 1] [i_5] [i_3] [i_5] = ((/* implicit */unsigned char) 2281870515U);
                            }
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) var_4))) ? ((-(((/* implicit */int) arr_8 [i_0 - 3] [i_0 - 2])))) : ((-(((/* implicit */int) (_Bool)0))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)0))));
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    for (int i_7 = 1; i_7 < 19; i_7 += 3) 
                    {
                        {
                            var_26 += ((/* implicit */long long int) (unsigned char)51);
                            arr_23 [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)245))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */short) (~((-(var_0)))));
}
