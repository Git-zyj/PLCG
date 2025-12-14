/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125180
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
    var_13 = ((/* implicit */unsigned char) ((((((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)226))))) | (((/* implicit */long long int) ((((/* implicit */int) (signed char)35)) ^ (((/* implicit */int) (unsigned char)229))))))) ^ (((/* implicit */long long int) ((((var_7) | (((/* implicit */int) (unsigned char)27)))) ^ (((((/* implicit */int) var_9)) | (((/* implicit */int) (unsigned char)14)))))))));
    var_14 = ((/* implicit */unsigned short) ((((((var_0) >> (((var_12) - (802002283123541910ULL))))) << (((/* implicit */int) ((((/* implicit */int) (unsigned char)39)) < (var_0)))))) << (((((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_1))))) * (((((/* implicit */int) (unsigned char)226)) % (((/* implicit */int) (unsigned char)226))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_15 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)229)) >> (((var_11) + (7798185358880542719LL))))) < (((((/* implicit */int) arr_1 [i_0])) >> (((var_5) + (285006249)))))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 1866855433U))))) > (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) < (arr_0 [i_0] [i_0]))))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */unsigned int) var_0)) > (3018753547U)))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)222))) < (arr_3 [i_1])))))) << (((((((((((/* implicit */int) var_3)) ^ (((/* implicit */int) (signed char)-47)))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */int) (unsigned char)237)) > (((/* implicit */int) (signed char)35))))) - (1))))) - (2147483581)))));
        var_17 = ((/* implicit */unsigned char) ((((((((/* implicit */int) (unsigned char)26)) * (((/* implicit */int) var_4)))) % (((((/* implicit */int) (unsigned char)212)) << (((((/* implicit */int) (unsigned short)54091)) - (54085))))))) <= (((((((/* implicit */int) var_8)) << (((((/* implicit */int) arr_1 [i_1])) - (108))))) >> (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1])) > (((/* implicit */int) var_8)))))))));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((((((var_11) + (9223372036854775807LL))) << (((/* implicit */int) arr_2 [i_1])))) >> (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned char)229)))))) <= (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)244)) << (((((((/* implicit */int) (unsigned char)32)) << (((((/* implicit */int) (unsigned char)29)) - (15))))) - (524272)))))))))));
        var_19 = ((/* implicit */int) ((((((((/* implicit */int) var_2)) | (var_5))) ^ (((((/* implicit */int) (unsigned char)226)) & (((/* implicit */int) (unsigned char)229)))))) < (((((((var_5) + (2147483647))) >> (((((/* implicit */int) (signed char)-60)) + (74))))) % (((((var_5) + (2147483647))) << (((((/* implicit */int) arr_2 [i_1])) - (1)))))))));
    }
}
