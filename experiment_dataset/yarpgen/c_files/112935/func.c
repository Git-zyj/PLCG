/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112935
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 3028097901U)) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))));
        arr_2 [i_0] = ((/* implicit */long long int) max((((((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) (unsigned char)98)) : (((/* implicit */int) arr_1 [i_0 + 2] [i_0])))) << (((max((16132121049163911081ULL), (((/* implicit */unsigned long long int) (signed char)1)))) - (16132121049163911069ULL))))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)49)) && (((/* implicit */_Bool) var_5))))) >= (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) <= (((/* implicit */int) arr_1 [i_0 + 2] [i_0]))))))))));
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)98), (((/* implicit */unsigned char) var_7)))))) == (min((((9223372036854775794LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_1 [18LL] [18LL]))))), (((/* implicit */long long int) max((arr_0 [i_0 + 2] [i_0 - 2]), (arr_1 [i_0] [(_Bool)0])))))))))));
        var_15 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)142))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((long long int) var_7)) - (((/* implicit */long long int) ((/* implicit */int) max((arr_0 [i_0] [i_0 + 3]), ((signed char)-50)))))))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0 + 3]))))), (((signed char) (short)-27415))))))));
    }
    var_17 = ((/* implicit */unsigned int) (_Bool)1);
}
