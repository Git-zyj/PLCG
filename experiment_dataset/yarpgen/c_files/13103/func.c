/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13103
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                {
                    var_18 |= ((/* implicit */short) arr_4 [i_2 - 1]);
                    var_19 = ((/* implicit */signed char) (-(4158749356540750639ULL)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 1; i_3 < 10; i_3 += 2) 
    {
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            {
                arr_12 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)66)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1188517882U)))))) : ((-(var_6)))));
                var_20 = ((/* implicit */long long int) arr_5 [i_3] [20ULL] [16U] [20ULL]);
                arr_13 [i_3] [(signed char)9] [i_3 - 1] = ((/* implicit */short) var_6);
                arr_14 [5U] [5U] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_4] [i_4] [i_4] [4ULL]))));
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    for (long long int i_6 = 3; i_6 < 9; i_6 += 4) 
                    {
                        for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((signed char) arr_5 [2ULL] [i_4] [2ULL] [i_6 + 2])))));
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_3 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_3 + 1])) && (((/* implicit */_Bool) (unsigned short)26742)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3 + 1]))) ^ (arr_17 [i_3 + 1] [i_6 - 2] [i_6 - 2] [i_6 + 2]))))))));
                                var_23 -= ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) 1048575LL)) && (((/* implicit */_Bool) 14287994717168800982ULL))))), ((+(((/* implicit */int) var_12))))))) ? (((/* implicit */unsigned long long int) 3106449430U)) : (((((8325875932876386447LL) < (((/* implicit */long long int) 3106449414U)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_3] [(short)9] [i_3] [i_3] [i_3] [i_7]))) % (arr_19 [i_3 + 1] [0U] [i_4] [i_6]))) : (((/* implicit */unsigned long long int) ((((var_0) + (9223372036854775807LL))) >> (((((/* implicit */int) var_16)) - (57151)))))))));
                                arr_22 [i_3] [(unsigned short)2] [i_3 - 1] [i_3 + 1] [i_3] [i_3 + 1] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) 746952439944272293LL))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */short) var_4);
}
