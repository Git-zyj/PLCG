/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175026
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
    for (unsigned long long int i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) var_3))) & (arr_1 [i_0 + 1] [i_0 - 1]))) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (arr_2 [i_0 - 2] [i_0 - 1]) : (((/* implicit */int) (_Bool)1)))))));
        var_19 ^= ((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (-2067041075)));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_2 [i_0] [i_0])) / (arr_1 [i_0] [i_0])))) ? (((unsigned int) var_5)) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0)))))))) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 3])) > (((/* implicit */int) (signed char)8)))))));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_21 = ((/* implicit */long long int) arr_4 [i_1]);
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_9)) ? (8798602946578234615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))))) >> (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) && (((/* implicit */_Bool) var_11))))) >= (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) var_11))))))))));
        var_23 = ((((int) ((signed char) var_17))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */int) ((unsigned char) arr_5 [i_1]))) : (((/* implicit */int) arr_5 [i_1])))));
        var_24 *= ((/* implicit */long long int) (((-(((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_1])), ((unsigned short)65535)))))) >= (((((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) arr_5 [i_1])))) ? (((((/* implicit */int) arr_5 [i_1])) / (((/* implicit */int) arr_5 [i_1])))) : ((+(((/* implicit */int) arr_4 [i_1]))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_5 [i_1]))) ? (max((((/* implicit */long long int) 3540283793U)), (-9179441961273376039LL))) : (((/* implicit */long long int) ((int) max(((signed char)-104), ((signed char)66)))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        var_25 *= ((/* implicit */unsigned char) ((var_8) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)127)) < (2147483647)))))));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) ((short) ((arr_0 [i_2]) ? (((((/* implicit */unsigned int) (-2147483647 - 1))) | (4063807301U))) : (((arr_9 [i_2]) & (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
        var_26 *= ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_2])) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) > (arr_7 [i_2]))))));
    }
    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (((-(var_2))) * (((/* implicit */unsigned int) max((((/* implicit */int) var_10)), (2098846924))))))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) var_13)))))));
}
