/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166282
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((max((var_1), (var_3))), (var_1)))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_13) : (var_13)))) ? (((/* implicit */int) min(((unsigned char)91), ((unsigned char)91)))) : (((((var_0) + (2147483647))) >> (((var_12) + (669167170)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (var_12) : ((+(((/* implicit */int) (unsigned char)5)))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) min((min((max((var_2), (((/* implicit */unsigned long long int) (unsigned char)70)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)70)), (4458546913062269759LL)))))), (((((/* implicit */_Bool) ((int) (unsigned char)164))) ? (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_15), (((/* implicit */signed char) (_Bool)1))))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)164)), ((-(1796445056341529861LL)))))) - (max((((12088910853733068403ULL) * (((/* implicit */unsigned long long int) 9223372036854775807LL)))), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
                var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (var_10)));
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65472))) / (18446744073709551615ULL)))) ? (((var_13) / (arr_2 [i_0]))) : (arr_2 [i_1])));
            }
        } 
    } 
    var_19 = ((((((/* implicit */_Bool) ((long long int) var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_8)))))) : (min((((/* implicit */unsigned long long int) var_4)), (var_14))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (var_14)))) ? (((var_7) / (((/* implicit */long long int) 1613570392)))) : (((/* implicit */long long int) ((((/* implicit */int) var_1)) / (var_13))))))));
    /* LoopSeq 1 */
    for (unsigned int i_2 = 2; i_2 < 9; i_2 += 2) 
    {
        arr_11 [0ULL] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_9 [i_2])) ? (420395472U) : (var_11))) + (((/* implicit */unsigned int) (+(var_13))))))) : (min(((+(arr_10 [5]))), (((/* implicit */long long int) ((int) var_9)))))));
        var_20 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_2])) ? (min((((/* implicit */unsigned long long int) arr_8 [i_2])), (var_2))) : (((/* implicit */unsigned long long int) arr_2 [i_2 - 1])))) - ((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)215))) : (18446744073709551607ULL))) / (var_2)))));
    }
}
