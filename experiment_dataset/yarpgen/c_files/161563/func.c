/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161563
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_0] [(_Bool)1] [i_1] [i_3] = ((/* implicit */unsigned short) 4972732555152502527ULL);
                        var_13 |= ((/* implicit */unsigned int) (short)25584);
                    }
                    arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned short)65524);
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 4; i_5 < 12; i_5 += 4) 
                        {
                            {
                                arr_16 [i_1] [i_1] = ((/* implicit */unsigned short) (short)63);
                                arr_17 [1U] [i_1] [i_1] [i_1] [(_Bool)1] [(short)11] [i_1] = ((/* implicit */short) max((((/* implicit */int) var_3)), (min((min((1048448), (((/* implicit */int) var_10)))), (((/* implicit */int) var_10))))));
                                var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_9)))), ((-((+(((/* implicit */int) var_9))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = (_Bool)0;
}
