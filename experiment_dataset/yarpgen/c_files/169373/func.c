/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169373
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
    var_14 = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) ((unsigned int) var_1))), (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) -8211374102094641420LL))));
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (-((-(var_6))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 21; i_2 += 1) 
                {
                    var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [(signed char)16])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)29412))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = (unsigned short)17763;
                                arr_12 [i_0] [i_1] [i_2 + 1] [i_3] [i_3] [i_4] [(unsigned short)10] |= ((/* implicit */unsigned int) ((((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_11 [(signed char)6] [i_1] [i_3] [i_1])))) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((unsigned char) var_4)))))) | (var_8)));
                                var_18 ^= ((/* implicit */unsigned long long int) min((((unsigned short) (short)29418)), (((/* implicit */unsigned short) (short)-29419))));
                            }
                        } 
                    } 
                }
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) -7685981850560287307LL))) ? (((/* implicit */int) (short)-29412)) : (986714866)))) ? ((~(((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (signed char)109)))))))));
            }
        } 
    } 
}
