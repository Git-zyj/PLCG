/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179142
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
    var_18 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1958779458U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22697))) : (5832717947951072838ULL)))) ? (((((/* implicit */_Bool) var_16)) ? (5832717947951072838ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22697))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (var_13)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((1958779458U), (((/* implicit */unsigned int) (signed char)-55))))) && (((/* implicit */_Bool) var_4)))))));
    var_19 |= max(((((+(var_13))) << (((((((/* implicit */unsigned int) 2147483647)) * (var_14))) - (1504618155U))))), (((/* implicit */unsigned int) ((((/* implicit */int) min((var_3), (var_3)))) + (((/* implicit */int) ((1249486887) != (((/* implicit */int) (short)-761)))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 12198748010803610422ULL)) && (((/* implicit */_Bool) (short)-1))));
                    arr_9 [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) max((min((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) (short)(-32767 - 1))) : (arr_4 [i_0] [i_0]))))), ((-(((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_8 [i_0] [(unsigned char)2] [i_0]))))))));
                }
            } 
        } 
    } 
    var_21 ^= ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */int) (short)-1)) + (var_6)))) ? ((+(var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) == (((/* implicit */unsigned long long int) var_10))))))))));
}
