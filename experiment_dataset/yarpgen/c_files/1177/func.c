/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1177
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
    var_20 -= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))))))));
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (-(12370821476938257801ULL))))));
    var_22 = ((/* implicit */short) (!(var_8)));
    var_23 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) var_16)) != (((/* implicit */int) var_12)))) ? (((((_Bool) (signed char)-26)) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-85))))) : (max((var_11), (((/* implicit */long long int) (signed char)-85)))))) : (((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) var_17)))) > (((var_8) ? (((/* implicit */int) (signed char)-90)) : (((/* implicit */int) var_16))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 1; i_4 < 18; i_4 += 1) 
                            {
                                var_24 = ((/* implicit */unsigned char) var_7);
                                var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_11 [i_0] [i_1] [18ULL] [i_3] [i_4 - 1]), (((/* implicit */signed char) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_6 [i_3])) == (((/* implicit */int) var_4))))))) : (((min((((/* implicit */long long int) (_Bool)1)), (var_11))) | (((((/* implicit */_Bool) var_0)) ? (3670532652454011970LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2])))))))));
                            }
                            /* LoopSeq 1 */
                            for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 1) 
                            {
                                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6075922596771293814ULL)) ? (((/* implicit */int) ((unsigned char) var_6))) : (((/* implicit */int) var_17))));
                                var_27 ^= ((/* implicit */unsigned long long int) min((((long long int) ((((/* implicit */_Bool) 6087246707428506672LL)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))), (((/* implicit */long long int) var_4))));
                            }
                            var_28 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (-(7941126282225311624LL)))) ? ((+(((/* implicit */int) arr_7 [i_0] [i_0])))) : ((~(((/* implicit */int) (signed char)-123)))))), (max((-301192645), (((/* implicit */int) var_10))))));
                            var_29 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)232))) != (1783400350U))) ? (max((-6087246707428506672LL), (((/* implicit */long long int) (short)30675)))) : (((/* implicit */long long int) max((((var_2) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_0])))), (((/* implicit */int) ((unsigned char) (unsigned short)16))))))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))))));
            }
        } 
    } 
}
