/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115560
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
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        arr_11 [(unsigned short)7] [i_1] [i_1] [i_3] = ((/* implicit */short) (unsigned short)2177);
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            arr_14 [i_1] [i_1] [i_1] = ((/* implicit */signed char) arr_7 [i_0 + 1] [i_1] [i_2 + 1] [i_3 + 1]);
                            arr_15 [i_0] [i_2 - 1] [i_1] = ((/* implicit */short) arr_2 [i_0]);
                            var_14 = ((/* implicit */_Bool) var_1);
                        }
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) arr_5 [(unsigned short)6]))));
                            arr_18 [i_3 - 1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (short)-14148)), ((unsigned short)2179)));
                        }
                    }
                    arr_19 [i_0] [i_0] [i_1] [i_2 - 1] = ((/* implicit */unsigned char) (short)-9518);
                    var_16 += ((/* implicit */_Bool) max(((unsigned char)243), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_2 + 1] [i_2 - 1])) && (((/* implicit */_Bool) var_5)))))));
                }
            } 
        } 
    } 
    var_17 = ((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))));
    var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_3))));
    var_19 += (unsigned short)10591;
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min((((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) var_0)), (var_10))))), (min((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (short)9524)) : (((/* implicit */int) var_3)))), (((/* implicit */int) var_1)))))))));
}
