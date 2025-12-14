/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111723
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
    for (short i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        arr_2 [2U] [(signed char)4] &= ((/* implicit */short) (-(max((((/* implicit */unsigned int) (short)489)), (arr_1 [i_0] [6])))));
        arr_3 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)145))));
        var_18 = ((/* implicit */signed char) arr_0 [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_19 = var_11;
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((((arr_6 [i_1] [(unsigned short)9]) <= (((((/* implicit */_Bool) 8553749987358980369ULL)) ? (arr_5 [i_1]) : (((/* implicit */long long int) arr_4 [i_1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])) - (9892994086350571261ULL)))) ? (min((((/* implicit */unsigned long long int) 288229826395897856LL)), (183485639403993081ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [i_1] [i_1]) != (arr_5 [i_1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_4 [i_1])) == (-485308249434913364LL)))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) (((+(((/* implicit */int) ((short) var_12))))) / (480846315)));
    }
    var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_14), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_12)) : (9892994086350571252ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) var_2)) * (((/* implicit */int) (unsigned short)56472)))) > (((/* implicit */int) var_9)))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)105))) : (3845328343U)))), (((4130735298537285306LL) >> (((1626254120708730703LL) - (1626254120708730665LL)))))))));
    var_21 += ((/* implicit */int) var_12);
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (var_14)));
}
