/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14648
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
    for (short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        arr_10 [8ULL] [i_2] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [(short)14] = ((/* implicit */unsigned short) arr_4 [i_0] [i_0 - 1] [i_0]);
                        arr_12 [i_0] [i_0 - 1] [i_2] [i_3] = ((/* implicit */short) var_10);
                        arr_13 [(short)6] [(unsigned short)10] [(short)8] [(signed char)13] = ((/* implicit */short) ((unsigned short) (!(((/* implicit */_Bool) (signed char)-65)))));
                    }
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (~(((((/* implicit */int) arr_1 [i_0 + 1])) & (((/* implicit */int) (signed char)0)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        for (signed char i_5 = 3; i_5 < 12; i_5 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0] [13LL] [i_0] = ((/* implicit */short) (signed char)91);
                                arr_20 [(unsigned char)13] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) var_0)) << (((((/* implicit */int) arr_18 [i_5 - 3] [i_5] [i_5 - 3] [i_5] [i_5 + 3])) - (40344))))) * (((/* implicit */int) ((((/* implicit */int) arr_18 [i_5 - 1] [i_5 + 2] [i_5 + 2] [i_5] [i_5 + 2])) > (((/* implicit */int) arr_18 [i_5 + 1] [i_5] [i_5 + 2] [i_5] [i_5 + 4])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) (+(min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))), (((-17) | (((/* implicit */int) var_4))))))));
}
