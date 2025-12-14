/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138848
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
    for (unsigned char i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((min((((var_3) < (((/* implicit */long long int) var_7)))), (((var_10) && (((/* implicit */_Bool) var_2)))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -847934724)), (5955798340170056871ULL))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        arr_12 [i_3] = ((/* implicit */_Bool) ((signed char) (((_Bool)0) ? (((/* implicit */unsigned int) ((847934724) + (((/* implicit */int) var_8))))) : (((unsigned int) -847934725)))));
                        arr_13 [i_0] [i_3] = min((847934716), (((/* implicit */int) (_Bool)1)));
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((((((/* implicit */int) var_0)) - (((/* implicit */int) var_9)))) % (((/* implicit */int) ((((var_4) + (var_6))) > (((/* implicit */int) var_5))))));
    }
    var_11 = ((/* implicit */int) var_3);
}
