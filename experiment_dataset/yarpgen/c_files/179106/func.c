/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179106
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
    var_13 = ((/* implicit */int) (+(max((((/* implicit */unsigned long long int) var_5)), ((-(var_12)))))));
    var_14 = ((/* implicit */unsigned int) max((((/* implicit */int) var_9)), (max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) 12716059992625258323ULL)) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) (short)-2843))))))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-67)) ? (4ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)144)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_12 [i_4] [i_4] [i_1] [i_1] [i_1] [(signed char)10] = ((/* implicit */signed char) var_11);
                                var_16 += ((/* implicit */_Bool) var_9);
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)63618)) ? (((/* implicit */long long int) ((/* implicit */int) (short)2842))) : (-4234732730529425549LL)));
                }
            } 
        } 
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) 740923382)) ? (16ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)124))))))));
    }
}
