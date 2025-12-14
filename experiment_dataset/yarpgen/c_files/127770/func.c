/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127770
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) < (((/* implicit */int) (!(((/* implicit */_Bool) (short)21751)))))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-21752))));
    }
    for (int i_1 = 3; i_1 < 8; i_1 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 3])) ? (arr_3 [i_1 - 1]) : (arr_3 [i_1 + 3])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-25014))))) : (((((/* implicit */_Bool) arr_3 [i_1 - 3])) ? (arr_3 [i_1 - 2]) : (((/* implicit */unsigned long long int) var_3))))));
        var_23 ^= ((short) min((((/* implicit */unsigned long long int) ((long long int) (_Bool)1))), (((unsigned long long int) (unsigned short)6474))));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (max((64348430), (((/* implicit */int) (short)21758)))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)21751))))))) ? (max((((arr_3 [i_1]) * (7792290579172390039ULL))), (((var_19) ? (arr_3 [7ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))))))) : (max((max((17788961560928799186ULL), (((/* implicit */unsigned long long int) arr_0 [i_1])))), (((/* implicit */unsigned long long int) min((var_4), ((short)-11936))))))))));
    }
    for (int i_2 = 3; i_2 < 8; i_2 += 4) /* same iter space */
    {
        arr_7 [i_2 - 2] [5] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_0 [i_2 - 2])) ? (arr_0 [i_2 + 2]) : (((/* implicit */int) arr_4 [i_2 - 3] [i_2 + 3])))));
        var_25 ^= ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (min((var_17), (arr_3 [i_2 + 3]))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (((long long int) (unsigned char)241))))));
    }
    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)27698)), (var_18)))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_5))))) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_16))));
    var_27 = ((/* implicit */unsigned long long int) var_8);
    var_28 = ((/* implicit */long long int) ((((/* implicit */int) (short)-15556)) >= ((+(((/* implicit */int) var_0))))));
}
