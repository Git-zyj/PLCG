/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126254
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
    var_16 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_4)) || (var_3))), (((var_11) <= (((/* implicit */unsigned long long int) 399419139U))))))), (var_5)));
    var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), ((~(((((/* implicit */_Bool) (unsigned short)24321)) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65507)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-8)), ((unsigned char)75))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((short) (_Bool)1));
        arr_3 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14086213964457944881ULL))), (((/* implicit */unsigned long long int) ((unsigned short) 11333718122261807297ULL)))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)65)), (2147483647)))) ? (min((((/* implicit */unsigned long long int) 2251799813685247LL)), (arr_0 [i_0] [i_0]))) : (min((arr_0 [i_0] [15LL]), (((/* implicit */unsigned long long int) (signed char)-65))))));
    }
}
