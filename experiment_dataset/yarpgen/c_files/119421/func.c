/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119421
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0 - 1]))) ? (var_10) : (((/* implicit */unsigned long long int) ((int) arr_2 [i_0 - 1] [i_0])))));
        var_18 ^= ((/* implicit */unsigned int) (~(3308687516993503265LL)));
        arr_3 [i_0] [5LL] = min((8453816541253790495LL), (max((((/* implicit */long long int) arr_0 [i_0 + 1])), (((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (9223372036854775807LL))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_19 = ((/* implicit */long long int) (-((~(((/* implicit */int) arr_5 [i_1] [9U]))))));
                        var_20 *= ((/* implicit */unsigned char) ((int) max((((/* implicit */long long int) arr_10 [i_4 - 1] [10LL] [i_4] [i_4 - 1] [i_4])), (-3225035038703644835LL))));
                        var_21 ^= ((/* implicit */signed char) min((((/* implicit */long long int) ((short) (-(-3225035038703644835LL))))), (8453816541253790495LL)));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    {
                        var_22 = (!(((/* implicit */_Bool) 3308687516993503265LL)));
                        arr_20 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) ((arr_16 [i_5] [i_6] [i_5] [i_5]) <= ((-(var_6))))))));
                        var_23 -= ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) max((4696661335297775634LL), (-4696661335297775651LL)))))));
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
    var_25 = var_14;
}
