/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127038
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_17 = ((/* implicit */int) ((unsigned int) arr_0 [i_0]));
    }
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_18 = ((/* implicit */int) min((var_18), ((-(min((12), (((/* implicit */int) (_Bool)0))))))));
        var_19 = ((max((min((16252928ULL), (((/* implicit */unsigned long long int) (unsigned char)78)))), (((/* implicit */unsigned long long int) (unsigned short)0)))) <= (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)125)), (min((((/* implicit */unsigned int) var_6)), (var_11)))))));
        var_20 ^= ((/* implicit */unsigned char) max((((/* implicit */int) arr_2 [i_1])), (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((long long int) arr_3 [i_2])) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2])))))))))));
        var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)124)), ((-2147483647 - 1)))))))) >> (((((long long int) ((((/* implicit */int) var_12)) | (-2147483630)))) + (2147483647LL)))))));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) max((((((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) (short)-1)) : (132811352))) | (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) || (((/* implicit */_Bool) (signed char)-25))))))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) < (((/* implicit */int) (unsigned short)9))))))))));
        var_24 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_3 [i_2])) < (((/* implicit */int) arr_2 [i_2])))) ? (((((/* implicit */int) arr_4 [i_2] [i_2])) / (((/* implicit */int) arr_3 [i_2])))) : (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) (unsigned short)32271)) : (((/* implicit */int) arr_3 [i_2]))))));
    }
    var_25 = ((/* implicit */unsigned short) var_10);
}
