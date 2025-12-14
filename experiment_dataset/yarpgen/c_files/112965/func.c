/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112965
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
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (~(18446744073709551615ULL))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    var_18 = ((((_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20983))) : (18446744073709551606ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 113635475U)) / (max((arr_1 [i_2]), (arr_2 [i_1])))))) : (max(((+(27ULL))), (((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (10384774377762854559ULL))))));
                    var_19 = ((/* implicit */_Bool) max((((((/* implicit */int) (unsigned short)4735)) | (((/* implicit */int) (short)-5470)))), (min((arr_5 [i_1] [i_1] [13U]), (((/* implicit */int) var_1))))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned short)3072)), (4181331837U))))));
                }
                /* vectorizable */
                for (long long int i_3 = 1; i_3 < 16; i_3 += 4) 
                {
                    arr_11 [i_3] [i_1] [i_0] = ((_Bool) 210134297);
                    var_21 = ((/* implicit */short) (~(((/* implicit */int) arr_4 [i_0 - 1] [i_1]))));
                    var_22 = ((/* implicit */signed char) (short)20977);
                }
                var_23 ^= ((/* implicit */signed char) ((853255864367125640LL) >= (((arr_2 [i_0 - 2]) ^ (((/* implicit */long long int) (-(((/* implicit */int) (short)24497)))))))));
            }
        } 
    } 
}
