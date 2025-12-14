/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184374
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) var_8);
                    var_14 = max((((/* implicit */long long int) arr_6 [i_2])), (((((/* implicit */_Bool) 17787379894561744524ULL)) ? (1977488227803896364LL) : (((/* implicit */long long int) ((/* implicit */int) max((var_5), (arr_3 [i_0]))))))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) 2731252015U)) ^ (-1977488227803896347LL)));
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) >= (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])))))) : (((((659364179147807091ULL) ^ (((/* implicit */unsigned long long int) var_7)))) & (17787379894561744544ULL)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_11)) != (((((/* implicit */long long int) ((/* implicit */int) (signed char)-115))) % (((((var_0) + (9223372036854775807LL))) << (((((var_0) + (5749919966409792133LL))) - (47LL)))))))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)24)))) * (var_9)));
}
