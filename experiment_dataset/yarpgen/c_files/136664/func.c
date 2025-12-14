/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136664
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
    var_18 ^= ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)68))))), (((((/* implicit */_Bool) 6560975024069596229LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19241))) : (6560975024069596229LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) min((6560975024069596229LL), (((/* implicit */long long int) 374400604))))) ? (min((((/* implicit */long long int) var_11)), (6560975024069596225LL))) : (((/* implicit */long long int) max((((/* implicit */int) var_0)), (-374400586)))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (374400613))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)17538))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
    {
        var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_6)) : (arr_4 [i_1])))) ? (((((/* implicit */int) var_5)) - (((/* implicit */int) var_2)))) : ((+(((/* implicit */int) (_Bool)1))))));
        var_21 ^= ((/* implicit */unsigned char) arr_3 [i_1] [i_1]);
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_12))) ? (arr_4 [i_2]) : (((/* implicit */int) (!((_Bool)1))))));
        var_23 &= (~(((/* implicit */int) ((_Bool) (short)-7522))));
    }
    var_24 ^= ((/* implicit */long long int) var_6);
    var_25 = ((/* implicit */long long int) (((+(((((/* implicit */_Bool) (unsigned short)65535)) ? (2473276814U) : (((/* implicit */unsigned int) -374400609)))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_1))))));
    var_26 ^= ((((/* implicit */long long int) (((+(-374400586))) - (((/* implicit */int) var_4))))) / ((+(((((/* implicit */_Bool) (short)17538)) ? (-8904209558981626106LL) : (((/* implicit */long long int) ((/* implicit */int) (short)26909))))))));
}
