/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162231
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
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (signed char)-36))) ? (((unsigned long long int) -518065194)) : (((((/* implicit */_Bool) var_13)) ? (((unsigned long long int) (short)21059)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((int) arr_1 [i_0]))) ? (((int) 4194303)) : ((-(((/* implicit */int) var_16))))))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) 33554431);
        var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35241)) ? (((/* implicit */int) max(((short)-21048), (((/* implicit */short) (signed char)31))))) : (-4194300)))) ? (-4194298) : (((((/* implicit */int) var_15)) | (((/* implicit */int) (unsigned short)34951))))));
        arr_5 [i_1 - 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_1 - 1])) && (((/* implicit */_Bool) ((11ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 2])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)12)) ? (arr_1 [i_1 + 3]) : (arr_1 [i_1 + 3])))) : (min((((/* implicit */unsigned long long int) arr_2 [i_1 + 3])), (arr_4 [i_1 + 1] [i_1 + 2])))));
    }
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 16846622222200829572ULL)) ? (1751572581132325942ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) < (((/* implicit */int) var_15)))))))))));
}
