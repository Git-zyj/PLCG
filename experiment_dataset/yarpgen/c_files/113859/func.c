/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113859
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_11 ^= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) -7401774213458726929LL)) ? (arr_5 [i_0] [i_1 - 1] [i_1 - 1]) : (((arr_4 [i_0] [i_1] [i_0]) & (-6581564159147659292LL)))))));
                    var_12 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3560654450U)) ? (4709790244426977624LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8191)))))) ? (max((-4709790244426977624LL), (((/* implicit */long long int) (unsigned char)96)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2895633593U)) && (((/* implicit */_Bool) 4578783521358468051ULL))))))))) || (((/* implicit */_Bool) (short)-2441))));
                }
            } 
        } 
    } 
    var_13 *= ((/* implicit */unsigned short) ((((((/* implicit */int) var_7)) >> (((((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))) - (200))))) << (((((unsigned long long int) max((var_9), (((/* implicit */unsigned int) var_3))))) - (1452919415ULL)))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)152)), (((((/* implicit */_Bool) -7401774213458726917LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))))) ? (14272246515164730185ULL) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 17113383256979196353ULL)) ? (4709790244426977616LL) : (-7742221411461049979LL))), (min((-8180408170790955674LL), (-4709790244426977624LL))))))));
    var_15 = ((/* implicit */unsigned long long int) var_10);
}
