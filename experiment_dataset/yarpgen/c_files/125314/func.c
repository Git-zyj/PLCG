/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125314
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) arr_1 [i_0] [i_2]);
                    arr_7 [i_0] [i_1 - 2] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((max(((_Bool)0), ((_Bool)1))) || (((/* implicit */_Bool) arr_5 [i_0 - 1] [i_2]))))) << (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7786184415711996768LL)) && (((/* implicit */_Bool) 3659762152U))))), ((-(18446744073709551598ULL)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 3; i_3 < 12; i_3 += 2) 
    {
        for (unsigned int i_4 = 1; i_4 < 12; i_4 += 1) 
        {
            for (short i_5 = 1; i_5 < 13; i_5 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) 18446744073709551615ULL);
                    var_21 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3] [i_3 - 1] [i_3 - 1] [i_3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)0))))) ? (arr_3 [i_5]) : (((/* implicit */int) arr_15 [i_3 - 2] [i_4 + 1] [i_3 - 2] [i_5])))));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_16 [i_5] [i_5 + 1] [i_4 - 1] [i_3 + 2])))) : (((((/* implicit */unsigned long long int) ((3659762152U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))) ^ (((17ULL) >> (((((/* implicit */int) var_12)) - (76)))))))));
                    var_23 |= ((/* implicit */signed char) ((_Bool) ((unsigned long long int) (~(-1LL)))));
                }
            } 
        } 
    } 
}
