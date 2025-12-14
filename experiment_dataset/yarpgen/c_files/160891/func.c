/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160891
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
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        arr_9 [i_1] = ((/* implicit */unsigned char) 0ULL);
                        var_20 ^= min((((int) 0)), (((/* implicit */int) (unsigned short)2001)));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */int) ((unsigned long long int) var_1));
        arr_10 [i_0] = var_5;
        arr_11 [i_0] = ((/* implicit */int) min(((!(((/* implicit */_Bool) arr_3 [i_0])))), (((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 0U))))));
    }
    var_22 = ((/* implicit */long long int) var_5);
}
