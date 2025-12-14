/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188527
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
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_14 &= ((/* implicit */unsigned long long int) max((847793653), ((-2147483647 - 1))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                            {
                                var_15 = ((/* implicit */int) max((var_15), ((~(((/* implicit */int) arr_1 [i_2] [i_0 + 2]))))));
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)62175)) ? ((-(((/* implicit */int) arr_5 [i_0] [i_1] [i_3] [i_0])))) : ((~(arr_9 [i_0] [i_1] [i_0] [i_0] [i_4] [i_0] [i_0 + 2])))));
                                var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0] [i_0]))));
                                var_18 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
                            }
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))))) ? (min((arr_4 [i_2 + 3] [(signed char)4] [i_0 + 2] [i_0]), (arr_4 [i_2 - 1] [i_1] [i_0 - 1] [i_0]))) : (min((arr_6 [i_0] [i_2 + 3] [i_3] [i_3]), (((/* implicit */unsigned int) arr_5 [i_0] [(unsigned short)4] [i_2] [i_0]))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) 970023761721804490ULL))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_11);
}
