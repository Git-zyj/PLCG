/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179831
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
    var_20 = -9026301679382720312LL;
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) arr_0 [i_0])), (5283627600191291870LL))) == (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) -9026301679382720312LL))))))))));
                                var_22 += ((/* implicit */unsigned char) min((((long long int) ((-9026301679382720309LL) & (((/* implicit */long long int) ((/* implicit */int) var_17)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 9026301679382720306LL)))))));
                                arr_15 [i_4 - 1] [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_16))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) -9223372036854775787LL))))), (((long long int) (short)11032))))) >= (min((((/* implicit */unsigned long long int) max((2749960628U), (((/* implicit */unsigned int) var_13))))), (14373122407727312797ULL)))));
                }
            } 
        } 
    } 
    var_23 = ((((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) -9223372036854775774LL)))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((-8845857381952409831LL) <= (var_5))))) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */int) (unsigned char)18)) + (-1856920299)))))));
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) var_11))) & (((int) ((-9026301679382720312LL) | (6680370998211071965LL))))));
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) (unsigned char)25)) << (((((/* implicit */int) (signed char)-71)) + (95))))) : ((+(20)))));
}
