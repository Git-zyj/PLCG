/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134409
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
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned int) (unsigned short)27910))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)15814), (((/* implicit */unsigned short) (short)-19716)))))) : (-2746597982763127158LL))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 7; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 8; i_4 += 2) 
                        {
                            {
                                arr_12 [i_1] [i_1] = (unsigned short)29895;
                                var_20 = ((/* implicit */unsigned short) var_1);
                                var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_18))))), (((-6521186943819411606LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27910)))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */long long int) max((max((arr_11 [i_1 + 1]), (((/* implicit */unsigned short) arr_8 [i_1 + 1] [i_1 - 1] [i_1] [i_0] [i_0])))), (((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_0])) >= (((/* implicit */int) arr_8 [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_0])))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        var_23 = ((/* implicit */_Bool) 5118015286919280891ULL);
        var_24 ^= ((/* implicit */int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((unsigned short)62430), (((/* implicit */unsigned short) (short)19716)))))))), (arr_14 [i_5] [i_5])));
    }
}
