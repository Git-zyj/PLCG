/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117460
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
    var_16 = ((/* implicit */short) var_0);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_17 = min((min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)42276)), (arr_0 [i_0])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) * (3719502368320800564ULL))))), (((/* implicit */unsigned long long int) min(((unsigned short)65535), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_1 [i_1 + 3])))))))));
                arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)100)) ? (min((((/* implicit */unsigned long long int) (signed char)-38)), (14636768602559457900ULL))) : (((/* implicit */unsigned long long int) 63488U))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_2 = 1; i_2 < 20; i_2 += 4) 
    {
        arr_8 [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-4441)), (arr_6 [i_2]))))) : (((((/* implicit */unsigned long long int) arr_7 [i_2])) ^ (var_13))))) & (((((/* implicit */_Bool) ((4116188410092215951ULL) >> (((((/* implicit */int) var_12)) - (113)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 + 2]))) : (((((/* implicit */_Bool) arr_6 [i_2 + 2])) ? (((/* implicit */unsigned long long int) arr_7 [i_2])) : (4116188410092215940ULL)))))));
        var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
        var_19 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) arr_6 [i_2 + 1])), (max((var_13), (10555076772681934612ULL))))) <= (((/* implicit */unsigned long long int) arr_7 [i_2]))));
    }
    for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 1) 
    {
        var_20 = ((/* implicit */signed char) arr_9 [i_3]);
        var_21 = ((/* implicit */unsigned short) (~(((arr_10 [i_3 + 4] [i_3 - 2]) % (((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned int) var_4)))))))));
        var_22 -= ((/* implicit */_Bool) var_0);
        var_23 = ((/* implicit */_Bool) 65534U);
    }
}
