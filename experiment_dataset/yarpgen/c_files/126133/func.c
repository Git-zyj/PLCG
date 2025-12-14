/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126133
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
    for (signed char i_0 = 3; i_0 < 9; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((unsigned int) ((unsigned char) (-(((/* implicit */int) (signed char)125)))))))));
        var_12 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) max((6524874297310426493LL), (((/* implicit */long long int) 4294967284U)))))) ? (max((((/* implicit */int) arr_2 [i_0 + 1])), (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))) : (min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) (_Bool)1))))))));
        var_13 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (9162323889198072362ULL)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-14)), ((unsigned char)76)))) ? (((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (1152921487426977792LL))) : (max((((/* implicit */long long int) (_Bool)1)), (9223372036854775807LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2])))));
    }
    for (signed char i_1 = 3; i_1 < 9; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */short) 13ULL);
        var_14 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)162))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18851))) : (min((1152921487426977792LL), (((/* implicit */long long int) arr_7 [i_1])))))), (((long long int) (!(var_5))))));
        arr_9 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)120)), (arr_6 [i_1])));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-120)) * (((/* implicit */int) ((_Bool) (unsigned char)180)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121))) & (1667814941U)))));
    }
    var_16 *= ((/* implicit */int) -9223372036854775807LL);
}
