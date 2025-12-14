/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156841
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
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((-9223372036854775802LL) / (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21929))) > (2372652269U))))))) || (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9404353655084982840ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9404353655084982840ULL)))) || (((/* implicit */_Bool) ((int) var_11))))))))));
    var_20 = (-(var_6));
    var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) var_13)) ? (((9042390418624568776ULL) | (((/* implicit */unsigned long long int) 4367959484913392025LL)))) : (min((9042390418624568788ULL), (((/* implicit */unsigned long long int) var_16))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_1 [i_0])) / (var_10))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) % (9042390418624568776ULL)))) ? (((/* implicit */unsigned long long int) ((var_10) / (((/* implicit */int) arr_1 [i_0]))))) : (min((((/* implicit */unsigned long long int) (short)28286)), (9042390418624568776ULL))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (var_7)))), (arr_0 [i_0]))))));
        var_22 &= ((/* implicit */unsigned long long int) ((_Bool) max((((var_3) / (-109190298))), (((/* implicit */int) min((((/* implicit */unsigned short) (short)32411)), (var_14)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) arr_1 [i_0 + 1])))))) % (max((((unsigned int) var_4)), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_3 [i_0] [i_1])))))))));
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (max((((0ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned long long int) (short)-17644)))))))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned char) (signed char)-86);
                        var_26 = ((/* implicit */signed char) ((int) 3669969334514854460ULL));
                        var_27 ^= ((signed char) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)158))) > (var_13))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    {
                        var_28 ^= ((/* implicit */unsigned short) ((((18446744073709551615ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) >= (max((arr_14 [i_5] [i_5] [i_4 - 1] [i_4 - 1]), (((/* implicit */unsigned long long int) var_11))))));
                        var_29 = -361084567;
                    }
                } 
            } 
        }
    }
}
