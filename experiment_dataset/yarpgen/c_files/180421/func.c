/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180421
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
    var_19 ^= ((/* implicit */_Bool) max((((unsigned long long int) ((long long int) (unsigned short)65535))), (((((/* implicit */_Bool) var_16)) ? (4158985677485386625ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_18))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (var_6) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -5600367854760518428LL)) ? (var_12) : (((/* implicit */unsigned long long int) -5600367854760518435LL))))) ? (((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
    var_22 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */int) ((signed char) var_18))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))))) ^ (var_12)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_23 += ((/* implicit */short) 9223372036854775807LL);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25590)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)4371))))) ? (((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 + 1]) ? (((/* implicit */long long int) var_14)) : (8204263436412435933LL))) : (var_11)));
                        var_25 = ((/* implicit */long long int) arr_6 [(_Bool)0] [i_1] [i_2] [(_Bool)1]);
                    }
                }
                /* vectorizable */
                for (unsigned int i_4 = 1; i_4 < 8; i_4 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */short) var_17);
                    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) 5600367854760518412LL)) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 - 2]))));
                }
                for (unsigned int i_5 = 1; i_5 < 8; i_5 += 1) /* same iter space */
                {
                    var_28 *= ((/* implicit */_Bool) 3874020711062176796LL);
                    var_29 = ((/* implicit */unsigned char) var_17);
                }
                var_30 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_16)))) ? (arr_16 [i_0] [2LL] [2LL]) : (-4LL)));
                arr_20 [i_1] = ((/* implicit */signed char) 2074818015691839374ULL);
                arr_21 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((long long int) arr_19 [i_0] [i_0] [i_0]));
            }
        } 
    } 
}
