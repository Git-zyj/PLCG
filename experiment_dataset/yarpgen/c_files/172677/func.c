/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172677
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((min((((long long int) var_16)), (((/* implicit */long long int) arr_0 [i_0])))) ^ ((((-(6860699869867072348LL))) * (((/* implicit */long long int) ((/* implicit */int) min((arr_0 [(_Bool)1]), (((/* implicit */signed char) var_10)))))))))))));
        var_20 = ((/* implicit */unsigned short) min((max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_3)), (-6860699869867072350LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6860699869867072349LL)) ? ((+(6860699869867072351LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31100))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_4 [19U])) : (((/* implicit */int) var_8)))) >= (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)100)))))) ? (min((((/* implicit */long long int) (unsigned char)0)), (6860699869867072337LL))) : (((/* implicit */long long int) ((((((/* implicit */int) arr_4 [i_1])) + (2147483647))) >> (((arr_2 [i_1]) + (1171063447))))))));
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-46)))) * (((((((/* implicit */int) (signed char)67)) * (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) arr_6 [i_1] [i_1]))))));
            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) == (var_14))) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (max((arr_3 [17LL]), (((/* implicit */int) arr_6 [18] [i_2]))))))) + (min((((/* implicit */long long int) (signed char)45)), (1485034124589945828LL))))))));
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : ((~(((((/* implicit */_Bool) arr_5 [17ULL] [i_2])) ? (-7) : (((/* implicit */int) (_Bool)0))))))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 4; i_3 < 21; i_3 += 3) 
        {
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_5 [i_3 - 3] [i_3 - 4])))))));
            var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_3 + 1])) ? (arr_8 [i_3 - 2]) : (arr_8 [i_3 - 4])));
        }
    }
    var_27 = ((/* implicit */short) var_18);
}
