/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189298
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
    var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned char)222))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)4))) : (var_2)))) ? (((4503599627337728ULL) | (var_2))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((((/* implicit */int) (signed char)-69)) >= (((/* implicit */int) (unsigned char)31)))))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (var_8)))) : (((((/* implicit */_Bool) (unsigned short)57303)) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) (signed char)-119)))))) : ((+(((/* implicit */int) ((signed char) 4503599627337740ULL)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)36))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57303))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)26)) / (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 9645840079703090932ULL)))) : (((((/* implicit */_Bool) var_14)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
        var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_0 [i_0 - 1]))) ? ((~(arr_0 [i_0 + 1]))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_0 [i_0 + 1])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 += ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_6)) ? (((unsigned long long int) (unsigned short)3232)) : (((((/* implicit */_Bool) (unsigned short)8210)) ? (var_2) : (arr_3 [20ULL])))))));
        var_22 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))) == (((((/* implicit */_Bool) -6034674370592257770LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (((((/* implicit */_Bool) -8636872695422559334LL)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (4503599627337728ULL)))))));
        var_23 *= ((/* implicit */unsigned long long int) (-(((var_13) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) (signed char)-28))))));
        var_24 -= ((/* implicit */signed char) arr_3 [(signed char)14]);
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) min(((+(arr_2 [i_1] [(unsigned short)2]))), ((+(arr_3 [(signed char)10])))))) ? (((/* implicit */unsigned long long int) var_12)) : (max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16))) : (arr_3 [(signed char)20]))))))))));
    }
}
