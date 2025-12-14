/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112152
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) >= (0ULL))) ? (((((/* implicit */_Bool) (short)-32762)) ? (var_13) : (((/* implicit */long long int) -268435456)))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-95))) : (17179869183LL)))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) : ((-(((((/* implicit */_Bool) var_16)) ? (18446744073709551615ULL) : (var_8)))))));
                arr_5 [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((var_8) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_1)) >= (2576800242U))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] = ((/* implicit */int) ((long long int) ((((/* implicit */unsigned int) var_14)) % (4294967295U))));
                            var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_3))))) ? (((((((/* implicit */_Bool) var_12)) ? (0ULL) : (((/* implicit */unsigned long long int) var_15)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_16)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)53)) & (((/* implicit */int) ((var_11) >= (((/* implicit */unsigned long long int) 481704711))))))))));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)-113)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) != (3368878759U)))) : ((+(((/* implicit */int) (_Bool)0)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((var_6) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) != (((7490045986198812002LL) / (((/* implicit */long long int) ((/* implicit */int) var_17)))))))) ^ (((((/* implicit */int) var_4)) * (((((/* implicit */int) (short)-1)) - (((/* implicit */int) (_Bool)0))))))));
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                {
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((((((/* implicit */unsigned int) 815282185)) - (4294967295U))) + (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))))))) + (((/* implicit */unsigned int) (+(1820260424)))))))));
                    var_24 = ((/* implicit */short) var_9);
                }
            } 
        } 
    } 
    var_25 &= ((/* implicit */unsigned long long int) var_0);
}
