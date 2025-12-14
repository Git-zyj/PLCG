/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143446
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
    var_12 *= ((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) (unsigned short)34597)) ? (((((/* implicit */_Bool) (signed char)-89)) ? (1426583514U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-28112))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_4)))))))));
    var_13 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (signed char)16)) * (((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */int) var_3)) : (((int) (short)-28119))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(1426583514U))))))) - ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (var_0))))))));
        var_16 += ((/* implicit */short) ((min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) var_8)))) / (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-41)) * (((/* implicit */int) (signed char)35))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
    }
    for (signed char i_1 = 1; i_1 < 23; i_1 += 3) 
    {
        arr_7 [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned int) var_5);
        var_17 = ((/* implicit */signed char) min((var_17), ((signed char)-41)));
        arr_8 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((signed char) (_Bool)1))), (12077880589928891309ULL)));
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1 - 1])) ? (arr_6 [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) 3360878634U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_6 [i_1 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_4 [i_1]))))), (((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)-41))))))))));
    }
    var_20 = ((/* implicit */unsigned short) var_10);
    var_21 = ((/* implicit */_Bool) var_10);
}
