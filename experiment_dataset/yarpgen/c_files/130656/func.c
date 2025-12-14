/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130656
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
    var_14 = ((/* implicit */int) var_6);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0 + 2] [i_1 - 2] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((125829120) * (((/* implicit */int) (_Bool)1))))), (arr_5 [i_1 + 1])));
                    arr_8 [i_0] [i_0] [i_1 + 4] [i_2] = ((/* implicit */int) ((_Bool) ((3027225177U) << (((/* implicit */int) (_Bool)1)))));
                    var_15 = ((/* implicit */signed char) min(((~(722062270))), (((/* implicit */int) arr_1 [9LL]))));
                    arr_9 [i_0] [i_1 + 3] [i_2] = ((/* implicit */unsigned char) ((int) (_Bool)1));
                }
            } 
        } 
    } 
    var_16 += ((/* implicit */unsigned short) max((((/* implicit */int) var_9)), (var_13)));
    var_17 -= ((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned char)1)))) != (((/* implicit */int) var_8))));
}
