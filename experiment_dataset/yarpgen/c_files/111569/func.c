/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111569
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (2035060641U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-25871)))))) : (((var_15) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (signed char i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(18446744073709551615ULL)))))) && (((/* implicit */_Bool) -148114958744731270LL))));
                                arr_13 [i_4] [i_3 + 1] [i_2] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) 1484608510)) || (((/* implicit */_Bool) 0ULL)))) ? (((16ULL) | (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_6), (0ULL)))) && (((/* implicit */_Bool) ((4680150109297687557ULL) ^ (6ULL))))))))));
                                arr_14 [i_0] [2U] [i_2] [11LL] [i_4] [i_2] [i_3 - 1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((long long int) (+(var_8))))) & (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_11)))));
                                arr_15 [i_2] [i_1] [i_2] [i_3 + 1] [i_4] = ((/* implicit */short) (+((+(((((/* implicit */_Bool) -538294335844531988LL)) ? (((/* implicit */int) (unsigned char)238)) : (-1778536412)))))));
                                arr_16 [(unsigned char)2] [i_1 + 4] [i_0] = ((/* implicit */unsigned long long int) (((+(var_7))) - ((-(2503367011U)))));
                            }
                        } 
                    } 
                } 
                arr_17 [(unsigned char)9] [i_1] [i_1] = ((/* implicit */long long int) (+(1778536419)));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_11);
    var_18 += ((/* implicit */unsigned short) (+(17076651501564304604ULL)));
    var_19 |= ((/* implicit */int) var_11);
}
