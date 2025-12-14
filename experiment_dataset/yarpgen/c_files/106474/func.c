/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106474
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
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) ((unsigned char) (signed char)123));
                    var_12 *= max((((/* implicit */unsigned long long int) var_4)), (var_10));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_13 = (i_0 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */int) arr_7 [i_0])) * (max((((/* implicit */int) (signed char)-123)), (max((-1192212867), (arr_1 [i_0] [i_0])))))))) : (((/* implicit */short) ((((/* implicit */int) arr_7 [i_0])) / (max((((/* implicit */int) (signed char)-123)), (max((-1192212867), (arr_1 [i_0] [i_0]))))))));
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((_Bool) (short)6832)))));
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_0]))) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])) : (min((((/* implicit */unsigned long long int) var_9)), (var_10)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-28)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))) : (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (var_6))) : (((/* implicit */unsigned long long int) arr_3 [i_3] [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_4)), (var_9))))) < (((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))) % (((((/* implicit */_Bool) ((var_2) + (((/* implicit */int) var_5))))) ? (max((((/* implicit */long long int) (unsigned char)37)), (9223372036854775807LL))) : (((/* implicit */long long int) ((var_7) ? (((/* implicit */int) var_7)) : (var_2))))))));
    var_17 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))), (((/* implicit */int) ((short) var_9)))))) ? (max((((/* implicit */long long int) (signed char)-123)), ((((-9223372036854775807LL - 1LL)) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-123))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_4)))))));
}
