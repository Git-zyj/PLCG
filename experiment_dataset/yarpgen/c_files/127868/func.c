/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127868
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
    var_15 = ((/* implicit */short) max((((/* implicit */unsigned short) ((_Bool) var_9))), ((unsigned short)22788)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_7 [i_2] [i_1 - 3] [i_1 + 2])) > (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 3]))))) < (((/* implicit */int) min((arr_7 [i_2] [i_1 - 3] [i_1 + 2]), (arr_7 [i_2] [i_1 - 3] [i_1 + 2]))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 3; i_3 < 18; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned short) arr_2 [i_0]);
                        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_2]))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) arr_10 [i_2] [i_1 - 3] [i_2]);
                            arr_16 [i_0] [i_1 + 1] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */short) max((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_4 [i_3 - 1])), (var_6)))), (((long long int) var_5))));
                            var_19 = ((/* implicit */long long int) min((min((((/* implicit */int) arr_8 [i_1 + 2] [i_1 + 2] [i_2] [i_3 + 1])), (var_2))), (((/* implicit */int) max((arr_5 [i_1 + 1] [i_3 - 2]), (arr_5 [i_1 - 2] [i_3 - 2]))))));
                        }
                        var_20 *= ((/* implicit */long long int) ((((arr_7 [i_1] [i_1 + 1] [i_3 + 1]) && (arr_7 [i_1] [i_1] [i_1]))) && ((!(arr_7 [i_1] [i_1] [i_1])))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 3; i_5 < 16; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_4 [i_2])) ? (7139703017534374951LL) : (((/* implicit */long long int) ((int) arr_18 [i_0] [i_1 - 1] [i_2] [i_5 - 1])))))));
                        var_22 = ((/* implicit */short) min((max((arr_12 [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1 + 2] [i_2]), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_7 [i_2] [i_5 - 1] [i_5 - 3])), (var_2)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (7598871738490731846ULL)))))))));
                    }
                }
            } 
        } 
    } 
}
