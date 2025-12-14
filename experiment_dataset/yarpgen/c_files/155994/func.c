/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155994
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
    var_18 |= ((/* implicit */unsigned char) max(((short)18), (((/* implicit */short) min((((((/* implicit */int) var_7)) > (((/* implicit */int) var_9)))), (var_17))))));
    var_19 |= ((/* implicit */_Bool) (short)-18);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned long long int) var_8);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_20 *= ((/* implicit */unsigned char) ((unsigned short) ((int) var_0)));
                    var_21 += ((/* implicit */unsigned int) (-(((/* implicit */int) (short)18))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_12);
                }
            } 
        } 
    }
    for (long long int i_3 = 1; i_3 < 20; i_3 += 3) 
    {
        var_22 = ((/* implicit */signed char) (~((~((-(var_3)))))));
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            arr_17 [i_3] [i_3] = max((((/* implicit */unsigned int) var_12)), (max((max((((/* implicit */unsigned int) var_17)), (var_10))), (((/* implicit */unsigned int) ((3902629123U) <= (((/* implicit */unsigned int) var_8))))))));
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_4))));
            var_24 = ((/* implicit */unsigned int) 127LL);
        }
    }
}
