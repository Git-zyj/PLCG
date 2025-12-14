/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102340
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
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_20 |= ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) (unsigned char)0)), (9223372036854775807LL))) * (((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) var_13))) < (-7633614743291608163LL))), (((var_0) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64860)))))))))));
                        var_21 += ((/* implicit */unsigned long long int) ((long long int) ((long long int) max((((/* implicit */unsigned long long int) var_8)), (arr_2 [i_1] [(unsigned short)6])))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned char) ((unsigned short) var_11));
    }
    var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)64860)))))));
    var_23 = ((/* implicit */unsigned int) ((long long int) 941658138544556536LL));
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > (var_7)));
}
