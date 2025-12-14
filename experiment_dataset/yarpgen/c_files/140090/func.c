/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140090
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)77)) ? (((((/* implicit */_Bool) (short)-14172)) ? (0U) : (0U))) : (1U)))) ? (((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_5)) : (var_7)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */long long int) var_12)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (3719712943576718770LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) 5U)) : (var_2))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */long long int) min((var_15), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_3])) ? (((/* implicit */int) arr_7 [i_0 + 2] [i_1] [(_Bool)1] [i_2])) : (((/* implicit */int) arr_11 [i_3]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 6476753364373189775LL)) ? (-1405034871) : (((/* implicit */int) (short)-32739))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_2] [i_2] [i_3 - 1])))))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)0))))) ? (((((/* implicit */_Bool) (short)-14939)) ? (((/* implicit */long long int) var_12)) : (arr_1 [i_2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-96)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40421)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35276))) : (11080934516118480534ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_2] [i_3] [i_4] [i_4])))))));
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (6330241392787838301LL)))) ? (((arr_8 [i_0 + 1] [i_2] [i_2] [i_3 - 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (5U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_10 [i_3] [i_1] [i_2] [i_2])) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_2]))))))))));
                        }
                    }
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [21ULL] [i_0] [i_1])) ? (-3986925928482143125LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [15U] [i_1] [i_1] [i_2] [i_1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1]))) : (573575381U)))) : (((((/* implicit */_Bool) var_10)) ? (11ULL) : (((/* implicit */unsigned long long int) 4294967289U))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (unsigned char)208)) : (((/* implicit */int) (unsigned short)47746))))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-11825))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_0])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned char)59))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))) : (var_12))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_12 [i_0 + 2] [i_1] [i_2])))))))));
                }
            } 
        } 
    } 
}
