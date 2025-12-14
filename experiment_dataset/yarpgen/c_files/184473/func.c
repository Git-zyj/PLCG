/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184473
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] [i_0 - 1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)120)) - (((/* implicit */int) (signed char)(-127 - 1)))))) ? (min(((+(8685190678547721202LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1099454549U)) ? (253982385U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : ((+(((arr_1 [i_0] [(signed char)12]) + (arr_1 [i_0] [i_0])))))));
        arr_3 [i_0] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
        var_17 *= ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) (~(arr_0 [i_0])))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (+(8685190678547721189LL)));
    }
    var_18 = ((/* implicit */long long int) 4167635057U);
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 17U)) ? (((/* implicit */int) ((_Bool) 12178567560569474631ULL))) : (((/* implicit */int) var_4)))))));
    /* LoopNest 2 */
    for (long long int i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        for (short i_2 = 4; i_2 < 17; i_2 += 2) 
        {
            {
                arr_10 [i_1] [i_1] = ((/* implicit */unsigned char) ((8685190678547721189LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((4611686018427387904LL) - (((/* implicit */long long int) min((arr_8 [i_1] [i_2 - 4]), (((/* implicit */unsigned int) ((short) (_Bool)1)))))))))));
            }
        } 
    } 
}
