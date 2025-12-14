/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184750
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((140737488355327LL), (((/* implicit */long long int) max((4294967295U), (var_1))))))) ? (13858478270979148691ULL) : (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_5)) : (0ULL))) * (10794067998813222869ULL)))));
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_9))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    var_19 |= ((/* implicit */unsigned char) ((unsigned short) 13858478270979148711ULL));
                    arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_1 [i_2])), (14449753238838206501ULL))) < (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_1 [i_2])), (-1679761668))))))) ^ ((-(((int) 1679761651))))));
                    var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)90))))), (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1]))))), (4294967295U)))));
                }
            } 
        } 
    } 
}
