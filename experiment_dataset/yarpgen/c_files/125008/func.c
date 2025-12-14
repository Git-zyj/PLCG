/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125008
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
    var_13 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    var_14 *= ((/* implicit */signed char) (-(var_8)));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) max(((unsigned short)505), (((unsigned short) max((((/* implicit */unsigned long long int) arr_2 [i_4])), (arr_9 [i_0] [1LL]))))));
                                arr_13 [i_0] [i_3] [i_2] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) max((((/* implicit */short) var_11)), ((short)3840)))), (((((/* implicit */_Bool) var_4)) ? (arr_10 [i_0] [i_0] [2LL] [i_0]) : (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_2] [i_3])))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_1 [i_0 - 2] [i_0 + 2]) : (arr_1 [i_0 + 2] [i_0 + 2]))))));
                                var_16 *= ((/* implicit */unsigned long long int) ((((arr_9 [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) >= (((((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) >= (arr_9 [i_0] [i_0]))) ? (((((/* implicit */_Bool) 12558021668484226576ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_1]))) : (var_9))) : (((((/* implicit */_Bool) 0ULL)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
                                var_17 = ((/* implicit */unsigned long long int) min((var_17), (max((((/* implicit */unsigned long long int) 3018306312227078104LL)), (min((((/* implicit */unsigned long long int) var_12)), (4668773609522955302ULL)))))));
                                arr_14 [i_3] [i_1] [i_1] [i_1] = ((/* implicit */long long int) var_1);
                            }
                        } 
                    } 
                    var_18 |= ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) (short)-3840)), (arr_9 [i_0 - 2] [i_1]))) >> (((((/* implicit */int) arr_11 [i_0 + 1] [i_0] [i_0 + 1] [i_0])) - (15673)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 1) 
    {
        for (unsigned short i_6 = 2; i_6 < 12; i_6 += 2) 
        {
            for (long long int i_7 = 4; i_7 < 12; i_7 += 1) 
            {
                {
                    arr_23 [i_7] [i_7] [i_5] = 7575372807076985755LL;
                    var_19 |= ((/* implicit */unsigned char) ((max((68715282432ULL), (arr_10 [i_7 - 4] [i_6 - 2] [i_6 - 1] [i_5 - 1]))) ^ (((unsigned long long int) arr_10 [i_7 - 3] [i_6 - 1] [i_6 + 2] [i_5 - 1]))));
                    var_20 = ((/* implicit */signed char) arr_7 [i_5]);
                }
            } 
        } 
    } 
}
