/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12363
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
    var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!((_Bool)1)))), (min((((unsigned int) (signed char)38)), (var_11)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_2])) ^ (((/* implicit */int) arr_5 [i_2]))))), ((~(((2892477121U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2])))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) min((arr_7 [i_0] [i_1]), (((/* implicit */long long int) arr_10 [i_0] [i_1] [i_2] [3LL])))))))));
                        var_18 = ((/* implicit */unsigned short) ((((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3 - 1] [i_3] [i_3]))))) == (((/* implicit */long long int) min((((/* implicit */unsigned int) var_8)), (12582912U))))));
                    }
                    var_19 = ((/* implicit */unsigned short) var_13);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (unsigned char)134))))), (var_10)));
}
