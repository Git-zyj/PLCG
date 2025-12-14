/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168403
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
    var_16 = ((/* implicit */long long int) ((int) -53304914));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_9 [4LL] [i_1] [(unsigned short)10] = -202556960;
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (11274171065838429759ULL)))))));
                    var_18 = ((/* implicit */int) min((((long long int) arr_5 [i_1] [i_1])), (max((((/* implicit */long long int) arr_3 [i_0] [i_1])), (var_4)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) (_Bool)1)), (((unsigned char) (~(var_8))))));
}
