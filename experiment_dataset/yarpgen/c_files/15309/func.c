/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15309
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
    var_17 = ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) var_15)) ? (7568891502329417313LL) : (7568891502329417303LL))))), (((/* implicit */long long int) max((((unsigned char) 380880838)), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_9))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_0] [(short)7] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) min((((36020000925941760ULL) << (((7568891502329417313LL) - (7568891502329417296LL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_0] [6U])) | (arr_3 [i_0] [i_1] [i_1])))))));
                arr_6 [i_0] [i_0] = max((((/* implicit */unsigned int) ((unsigned short) arr_1 [i_0]))), ((~(arr_0 [i_0] [(short)10]))));
                var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */short) arr_4 [i_0] [i_1] [i_0])), (((short) (_Bool)1))));
                var_19 = ((/* implicit */_Bool) ((short) max((arr_2 [(short)13]), (arr_2 [i_0]))));
            }
        } 
    } 
}
