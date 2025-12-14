/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171199
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((2326148238320227437ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10091)))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (((_Bool)1) ? (-1965672571) : (((/* implicit */int) (_Bool)1))));
                var_17 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)10069)) >= (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_18 = (-(min((1264583337U), (((/* implicit */unsigned int) ((signed char) (_Bool)1))))));
}
