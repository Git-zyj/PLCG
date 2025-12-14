/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104546
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
    var_14 |= ((/* implicit */unsigned char) var_2);
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) max(((+((+(((/* implicit */int) arr_4 [i_2])))))), (((/* implicit */int) arr_4 [i_3])))))));
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? ((+((+(((/* implicit */int) arr_1 [17U] [i_0])))))) : (max((((/* implicit */int) arr_2 [i_0])), ((+(((/* implicit */int) (unsigned char)142))))))));
                    }
                    arr_10 [(unsigned short)4] [i_0] [(unsigned short)4] &= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) var_7))))) || (((/* implicit */_Bool) arr_4 [i_0 - 2])))));
                }
            } 
        } 
    } 
}
