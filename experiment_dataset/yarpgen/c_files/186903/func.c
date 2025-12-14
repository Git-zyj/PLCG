/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186903
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
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_16 ^= ((/* implicit */unsigned char) 0ULL);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)6))))) ? (((/* implicit */unsigned long long int) ((var_5) - (arr_4 [i_0] [i_1])))) : (((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (18446744073709551615ULL)))))) ? (var_5) : (((/* implicit */long long int) (-(((/* implicit */int) ((short) (signed char)-6))))))));
                            var_18 ^= ((((/* implicit */_Bool) ((signed char) arr_4 [12] [i_1]))) ? (14035410116259400857ULL) : (((/* implicit */unsigned long long int) arr_4 [i_0 - 1] [i_1])));
                            var_19 ^= ((/* implicit */unsigned char) 0ULL);
                            var_20 ^= ((/* implicit */long long int) ((unsigned char) max((min((-841720382), (((/* implicit */int) (short)-14167)))), (((/* implicit */int) ((unsigned char) 0ULL))))));
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_5 [i_0] [i_1] [(short)11] [i_2]))));
                        }
                    } 
                } 
                var_22 ^= ((((/* implicit */_Bool) max(((-(18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)56))) + (arr_1 [i_0] [(short)0]))))))) ? (((/* implicit */unsigned long long int) ((arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]) ? (((/* implicit */int) arr_5 [i_0 + 2] [i_0 - 1] [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) (unsigned char)243))))) : (11716736400004834506ULL));
                var_23 ^= ((/* implicit */short) ((min((arr_5 [i_0 + 1] [14LL] [i_1] [i_1]), ((_Bool)0))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((int) -7249733817852089933LL)))))) : (((((((/* implicit */_Bool) 8246313691999204552LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)214)))) + (((/* implicit */int) (signed char)31))))));
            }
        } 
    } 
    var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 18446744073709551615ULL)))) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 4411333957450150774ULL))))) : (((/* implicit */int) ((((/* implicit */_Bool) 11716736400004834538ULL)) && (((/* implicit */_Bool) var_15)))))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))))), (min((4356860135047366616LL), (((/* implicit */long long int) 4294967295U)))))))));
    var_25 ^= ((/* implicit */long long int) var_4);
}
