/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120224
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
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 13; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_15 = (((_Bool)1) ? (((((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) 0U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_0 [i_0])))) : (min((((/* implicit */unsigned int) (_Bool)1)), (4294967295U))))) : (((/* implicit */unsigned int) ((var_10) ^ (((((/* implicit */int) arr_0 [i_0])) << (((9999489984831464621ULL) - (9999489984831464617ULL)))))))));
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (+(((((_Bool) (_Bool)0)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && ((_Bool)1)))) : (((/* implicit */int) arr_3 [i_0])))))))));
                            var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_6 [i_1] [i_1 + 1] [i_1 - 1] [(_Bool)1] [(_Bool)1] [i_2 - 3]))))), (((3221225472U) ^ (4294967295U)))));
                        }
                    } 
                } 
                var_18 &= ((/* implicit */short) (!(((((((/* implicit */_Bool) 12ULL)) ? (((/* implicit */int) (short)-18538)) : (((/* implicit */int) (signed char)-36)))) < (((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 1]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) (_Bool)1)) : (0)))), (((((/* implicit */_Bool) 10583324256740126382ULL)) ? (var_1) : (var_1)))))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) || ((!((!(((/* implicit */_Bool) var_1))))))));
}
