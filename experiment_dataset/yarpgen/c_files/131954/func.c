/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131954
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (long long int i_3 = 3; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [12LL] [i_2] [12LL] [i_0] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)47424))))) ? (((unsigned long long int) arr_10 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1])) : (((/* implicit */unsigned long long int) max((var_4), (var_4))))))) ? ((-(((((/* implicit */_Bool) 18169562112972365180ULL)) ? (8795958804480ULL) : (((/* implicit */unsigned long long int) 0U)))))) : (var_14));
                                var_15 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_13)) ? (-3047945897779139457LL) : (((arr_7 [i_0] [i_0] [i_0] [i_0]) - (arr_2 [i_0] [i_0])))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)170)) ? (9221120237041090560ULL) : (((/* implicit */unsigned long long int) 292776597)))), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)0))))) : (((((-8090686216241694385LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_11)) - (39211)))))))) : (((unsigned long long int) max((2147483643), (((/* implicit */int) (unsigned char)26)))))));
                var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) ((long long int) var_7))) ? (((((/* implicit */_Bool) var_10)) ? (arr_2 [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) << (((arr_5 [i_0] [i_1 + 1]) - (2144513563087679163LL)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */long long int) ((/* implicit */int) var_10))) - (-7277774648281942169LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_3) : (var_5)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min(((short)32745), ((short)32748)))))))));
}
