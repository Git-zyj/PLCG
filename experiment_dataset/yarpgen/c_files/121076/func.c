/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121076
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
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        arr_3 [i_0] = arr_2 [i_0 - 2];
        var_12 = min((((((/* implicit */long long int) ((/* implicit */int) (short)-18741))) == ((~(var_2))))), ((!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)127))))))));
        arr_4 [i_0] [19LL] = ((/* implicit */unsigned int) 2146435072);
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (signed char i_3 = 3; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
                        arr_14 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */short) var_10);
                        var_14 = ((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) arr_8 [i_1 - 1] [13LL])))));
                    }
                } 
            } 
        } 
    }
    var_15 = ((/* implicit */_Bool) var_8);
    var_16 |= ((/* implicit */unsigned char) -1LL);
}
