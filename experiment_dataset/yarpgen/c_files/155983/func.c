/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155983
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned long long int) max((((long long int) arr_1 [i_0])), (((/* implicit */long long int) (+(366539010U)))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 - 1])) ? (-287052814173030836LL) : (((/* implicit */long long int) 3928428270U))))) ? (((((3928428276U) << (((((/* implicit */int) (unsigned short)30580)) - (30566))))) << (((((/* implicit */int) arr_1 [i_2])) - (174))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34956)))));
                    arr_10 [i_2] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (~(max((((/* implicit */long long int) (_Bool)1)), (arr_6 [i_0] [i_2 + 3])))));
                }
            } 
        } 
        arr_11 [i_0] [i_0] = ((unsigned long long int) (short)32761);
    }
    var_11 = ((/* implicit */unsigned int) var_3);
}
