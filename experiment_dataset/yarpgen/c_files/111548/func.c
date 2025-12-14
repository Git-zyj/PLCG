/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111548
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_8 [2ULL] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) 9223372036854775789LL)) ? (((/* implicit */unsigned long long int) -1602780886)) : (16383ULL));
                    arr_9 [i_0] [i_1] = ((/* implicit */signed char) min((max((((/* implicit */unsigned char) arr_4 [i_0] [i_0])), (arr_5 [i_1]))), (((/* implicit */unsigned char) ((signed char) -292485484)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((short) var_3));
    var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16))));
    var_20 = ((/* implicit */_Bool) ((short) min(((~(5704740526819730945LL))), (((/* implicit */long long int) max((292485489), (((/* implicit */int) (signed char)127))))))));
}
