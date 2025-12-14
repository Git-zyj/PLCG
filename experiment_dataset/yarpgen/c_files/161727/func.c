/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161727
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) + (min(((~(((/* implicit */int) (unsigned char)176)))), (((/* implicit */int) var_10))))));
    var_12 = var_3;
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */long long int) max((var_13), (((((/* implicit */_Bool) ((max((5217799384184384070ULL), (((/* implicit */unsigned long long int) (signed char)-51)))) >> ((((~(((/* implicit */int) (short)-11110)))) - (11063)))))) ? (min((7258213803196179047LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 12186398503442553962ULL)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (signed char)-100))))))) : (((2501778119823874260LL) >> (min((13228944689525167546ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))))));
                    var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_2])), (15U)))) > (((long long int) arr_2 [i_2] [i_2] [i_2]))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) var_4);
    var_16 = ((/* implicit */signed char) (+(((/* implicit */int) min((var_0), (min((((/* implicit */signed char) (_Bool)1)), ((signed char)101))))))));
}
