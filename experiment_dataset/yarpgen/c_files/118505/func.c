/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118505
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [i_1] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) >> (((6234758414487970280LL) - (6234758414487970253LL)))))), (var_15)))) ? (((((/* implicit */int) ((1714343725244322340ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) & (((/* implicit */int) max((var_10), (((/* implicit */unsigned char) var_3))))))) : (min((var_14), (((/* implicit */int) ((7268726559378118139LL) >= (((/* implicit */long long int) var_15)))))))));
                    var_18 *= ((/* implicit */signed char) ((4013752076059900938LL) == (((/* implicit */long long int) ((/* implicit */int) arr_5 [5] [5])))));
                    arr_7 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(min((-1LL), (-6234758414487970296LL)))))), (max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) 2752494696494681398LL)) : (18139588340104376588ULL)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_8)) ? ((-(var_11))) : (((/* implicit */long long int) (+(4294967270U)))))), (((/* implicit */long long int) var_4))));
}
