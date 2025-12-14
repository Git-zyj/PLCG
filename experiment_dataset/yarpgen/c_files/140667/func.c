/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140667
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
    var_12 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_13 &= ((/* implicit */unsigned int) (short)32767);
                        var_14 = (!(((/* implicit */_Bool) min(((-(((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) (signed char)127))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */unsigned int) ((8070450532247928832LL) + (((/* implicit */long long int) ((/* implicit */int) (short)32737)))));
    }
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        arr_13 [i_4] [i_4] = (unsigned char)159;
        var_16 |= ((/* implicit */unsigned short) min(((+(arr_2 [i_4]))), (((/* implicit */unsigned int) min((((/* implicit */int) (short)32760)), (780218109))))));
    }
    var_17 = ((/* implicit */unsigned char) 780218097);
}
