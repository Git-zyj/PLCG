/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149823
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
    var_18 = ((/* implicit */unsigned char) var_16);
    var_19 = min((((((/* implicit */long long int) (~(((/* implicit */int) var_15))))) * (0LL))), (((/* implicit */long long int) var_5)));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) ((((/* implicit */int) (unsigned char)232)) != (((/* implicit */int) (short)-4096))))) >> (((((/* implicit */int) var_3)) + (22626))))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)7)) > (((/* implicit */int) (unsigned char)120)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_21 -= ((/* implicit */unsigned char) max((min((((/* implicit */int) (unsigned char)247)), (((((/* implicit */int) arr_1 [i_1])) % (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])))))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) arr_2 [i_0] [i_1])))) <= (((/* implicit */int) (unsigned char)158)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_22 ^= ((/* implicit */unsigned short) (((~(((/* implicit */int) (short)-27688)))) == (((/* implicit */int) (short)27687))));
                            arr_12 [i_0] [3U] [i_0] [i_3] [i_0] [i_2] = arr_10 [i_3] [i_3] [i_0 + 1] [i_1];
                            var_23 += ((/* implicit */unsigned char) max((((/* implicit */long long int) ((short) arr_10 [i_0] [i_0] [i_0] [i_0 + 1]))), (max((((/* implicit */long long int) var_17)), (arr_7 [i_0] [i_1] [(short)10] [10U])))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) (-(4143857989U)))) ? (2258200162U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)5)) < (((/* implicit */int) (unsigned char)189)))))))) + (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)100)))))));
            }
        } 
    } 
    var_25 -= ((/* implicit */short) var_6);
}
