/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133831
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
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (-(max((var_1), (((/* implicit */int) var_13)))))))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) var_17)), ((~(130048U))))), ((~(((((/* implicit */unsigned int) var_1)) ^ (var_16)))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (-(((int) max((var_15), (((/* implicit */unsigned int) var_14)))))));
                    arr_10 [i_0] [i_0] [i_1] = max((((/* implicit */unsigned int) var_8)), (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) ^ (var_12))));
                    arr_11 [i_1] = ((/* implicit */int) var_14);
                    var_19 += ((/* implicit */unsigned char) (-(((/* implicit */int) ((min((var_12), (((/* implicit */unsigned int) (-2147483647 - 1))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) == (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */int) ((unsigned char) max((var_15), (var_0))));
                                var_21 = ((/* implicit */int) ((unsigned char) (((+((-2147483647 - 1)))) ^ (((int) var_12)))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_5 = 1; i_5 < 16; i_5 += 2) 
                {
                    arr_18 [i_1] [i_1] [i_5] = min((((/* implicit */unsigned int) var_8)), (min((max((var_11), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) ((var_17) % (((/* implicit */int) var_14))))))));
                    arr_19 [i_5] [i_1] [i_0] = ((/* implicit */unsigned int) ((var_0) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (var_12)))) || (((/* implicit */_Bool) ((int) var_6)))))))));
                }
            }
        } 
    } 
    var_22 &= ((/* implicit */int) (+(((unsigned int) (-(var_8))))));
}
