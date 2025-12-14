/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163074
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
    var_10 = ((/* implicit */signed char) var_7);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) 550608228);
        arr_4 [i_0] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_2 [i_0]))))));
        var_11 = ((/* implicit */int) arr_0 [i_0] [i_0]);
        var_12 = (-(((/* implicit */int) (unsigned short)25631)));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) 550608219);
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_5 = 4; i_5 < 10; i_5 += 4) 
                        {
                            var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 550608216))));
                            var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1]))));
                        }
                        for (signed char i_6 = 1; i_6 < 9; i_6 += 3) 
                        {
                            var_15 = ((/* implicit */_Bool) (-(arr_19 [i_1] [i_2] [i_3] [i_4] [i_6])));
                            arr_20 [i_6] [i_4] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) arr_1 [i_1]);
                        }
                        for (unsigned char i_7 = 3; i_7 < 9; i_7 += 2) 
                        {
                            arr_24 [i_1] [i_1] = ((/* implicit */short) (+(0ULL)));
                            var_16 = ((/* implicit */short) arr_22 [i_1]);
                            var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_2]))));
                            arr_25 [i_1] [i_4] [i_3] [i_2] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_22 [i_1]))));
                        }
                        var_18 = ((/* implicit */short) (~(((/* implicit */int) (signed char)89))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 3; i_8 < 9; i_8 += 1) 
                        {
                            arr_28 [i_1] [i_2] [i_1] [i_4] [i_8] = ((/* implicit */_Bool) (-(arr_14 [i_8 + 1] [i_8 - 3] [i_8 - 2] [i_8] [i_8 - 2] [i_8 - 1])));
                            arr_29 [i_1] [i_1] [i_3] [i_4] [i_4] [i_8] = (signed char)-39;
                            var_19 = ((/* implicit */int) (+(5736756181165574133ULL)));
                        }
                        for (signed char i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            arr_32 [i_9] [i_2] [i_4] [i_1] [i_9] [i_2] [i_1] = (!(arr_17 [i_1] [i_2] [i_3] [i_4] [i_9] [i_9]));
                            var_20 = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_9]))))));
                            var_21 = ((/* implicit */long long int) arr_22 [i_1]);
                        }
                    }
                } 
            } 
        } 
    }
}
