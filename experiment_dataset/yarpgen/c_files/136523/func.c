/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136523
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            {
                var_17 -= ((/* implicit */int) ((unsigned char) ((short) arr_1 [i_0 + 1] [i_1 - 1])));
                arr_5 [(unsigned short)3] [i_1 + 3] [i_1 + 2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))) - (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_4 [i_0]) : (var_11)))), (max((var_5), (var_5)))))));
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_4 [i_0 + 2])))) && (((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0 - 2]))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_1])), (arr_1 [(unsigned char)10] [i_0])))))))));
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)255)) ? (18124326311918351667ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))), ((+(var_13)))))))))));
            }
        } 
    } 
    var_20 += ((/* implicit */int) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (((/* implicit */long long int) (-(var_3)))) : (1820729833250925815LL))) >= (((/* implicit */long long int) (((-(-1142715027))) ^ (((((/* implicit */_Bool) (short)-4027)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_14)))))))));
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) <= (var_5)))) : (((-85972291) / (((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_4))))))))))));
}
