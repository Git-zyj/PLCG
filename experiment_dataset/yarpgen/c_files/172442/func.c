/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172442
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] &= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 6436094362208043604LL)) ? (var_10) : (((/* implicit */int) (signed char)-63)))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (-8802254155467942923LL))))) - (117LL)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)-63)) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)62)) | (((/* implicit */int) (signed char)58))))) ? (((((/* implicit */_Bool) -665146566)) ? (((/* implicit */int) (short)254)) : (((/* implicit */int) (short)20677)))) : (((/* implicit */int) (short)254))))));
        var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0 + 3] [i_0 + 3])) ? (((/* implicit */int) arr_0 [i_0 + 3] [i_0 + 3])) : (((/* implicit */int) arr_0 [i_0 + 3] [i_0 + 3])))) != (((-951787827) / (((/* implicit */int) (short)-254))))));
        arr_4 [i_0] = ((((((/* implicit */long long int) ((/* implicit */int) ((var_16) != (((/* implicit */int) (short)32325)))))) != (2902764344426225749LL))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_18)) + (2147483647))) << (((((((((/* implicit */_Bool) 10378681984186706155ULL)) ? (((/* implicit */int) (signed char)-58)) : (var_10))) + (84))) - (26)))))) : (((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_14) : (((/* implicit */unsigned long long int) var_17)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)237)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))));
    }
    for (signed char i_1 = 2; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) == (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)0)) | (var_10)))))))));
        var_21 *= ((((((arr_6 [i_1] [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)62))))) > (((/* implicit */unsigned long long int) ((-1268219668) / (((/* implicit */int) arr_0 [i_1] [i_1]))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 - 1])) ? (arr_6 [i_1 - 2] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-63)) ? (65535U) : (4294967295U))))))));
    }
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((var_11) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) -567322512)) ? (((/* implicit */int) (short)-11930)) : (((/* implicit */int) (short)24275))))) ? (((-4815384796017521251LL) / (((/* implicit */long long int) ((/* implicit */int) (short)1751))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (var_17)))))))))));
}
