/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179908
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) var_16);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            arr_14 [i_3] [2ULL] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
                            arr_15 [i_0] [(signed char)1] [i_1] [i_2] [9ULL] [12LL] [i_3] = ((/* implicit */unsigned short) min(((~(min((((/* implicit */long long int) arr_7 [(_Bool)1])), (var_5))))), (-599382480939247218LL)));
                            var_17 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1])) ^ (((/* implicit */int) arr_1 [i_0]))));
                        }
                        arr_16 [1U] [(signed char)10] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1905515879)) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_7 [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_3] [i_3] [i_3] [i_3] [(unsigned short)7] [6LL] [i_3])) * (((/* implicit */int) arr_7 [(signed char)14]))))) : (min((((/* implicit */unsigned int) ((15162545067538490313ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))), (201663568U)))));
                    }
                    var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)73)), (535822336)))) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47799))) : (((((/* implicit */unsigned long long int) max((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)33145))))) ^ (var_16))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) var_0);
    var_20 = ((/* implicit */long long int) var_15);
    var_21 += min((((((/* implicit */_Bool) var_1)) ? ((+(10962950834830318457ULL))) : (((/* implicit */unsigned long long int) ((long long int) 15077832682894451894ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_6) : (var_2)))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)99))) / (var_0)))))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_15))) & (min((-7854337559906020863LL), (((/* implicit */long long int) var_1))))))) ? (((unsigned int) ((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) 4326636733356970903LL)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-14278)))))))));
}
