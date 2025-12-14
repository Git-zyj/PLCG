/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187725
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
    for (int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */signed char) min((((/* implicit */int) max(((unsigned char)215), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_1])))))))), ((+(((/* implicit */int) (unsigned char)128))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (+((~(min((0ULL), (((/* implicit */unsigned long long int) (short)24061)))))))))));
                        var_16 = ((/* implicit */int) (+(((((/* implicit */_Bool) (signed char)-1)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1)))))));
                        var_17 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (signed char)15))))));
                        var_18 |= ((/* implicit */unsigned long long int) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)118))) | (18446744073709551615ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)128)), (arr_3 [i_3] [12])))))) == ((+(0ULL)))));
                        var_19 += ((/* implicit */short) ((((/* implicit */_Bool) (-(((4510468378083064992ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-51)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((-2147483647 - 1))))) ? (((/* implicit */int) (short)20746)) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0]))) ? (((/* implicit */unsigned long long int) (+(arr_7 [3] [i_2] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 2] [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
                    }
                    var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)128)) < (769717056)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)125))))) ? ((+(9ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-59)))))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_4))))) ? (-515933062) : (((/* implicit */int) var_10)))))));
}
