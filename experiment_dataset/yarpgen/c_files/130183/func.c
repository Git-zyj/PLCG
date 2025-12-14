/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130183
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_1))))) ? (max((var_9), (((/* implicit */unsigned long long int) arr_1 [(short)8])))) : (((/* implicit */unsigned long long int) ((long long int) (short)-17257)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)218))) : ((+(var_5)))));
        arr_2 [(short)1] [(short)0] = ((min((arr_1 [i_0]), (((6ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8003))))))) ? (((((/* implicit */_Bool) (unsigned short)57527)) ? (14180635832641962540ULL) : (((/* implicit */unsigned long long int) -904445647)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_8)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [12] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) -904445648))))))));
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) arr_4 [i_1]))));
        arr_7 [i_1] = ((/* implicit */short) (((+(((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_1])) < (((/* implicit */int) (short)-1))))))) > ((((-(((/* implicit */int) arr_3 [3] [3])))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)55542)))))))));
    }
    for (unsigned short i_2 = 1; i_2 < 9; i_2 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) max((((long long int) arr_9 [i_2])), (arr_8 [i_2])));
        var_16 = ((/* implicit */unsigned char) ((arr_5 [i_2]) + (((/* implicit */long long int) var_0))));
        arr_10 [(unsigned char)2] [(unsigned char)2] |= ((/* implicit */int) (!(((((/* implicit */_Bool) arr_5 [i_2 - 1])) || (((/* implicit */_Bool) min((arr_8 [i_2]), (((/* implicit */long long int) var_7)))))))));
        arr_11 [i_2] = ((/* implicit */_Bool) ((-904445637) - (((/* implicit */int) (unsigned char)255))));
    }
    var_17 = ((/* implicit */unsigned int) var_10);
}
