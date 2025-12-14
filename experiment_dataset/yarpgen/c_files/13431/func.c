/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13431
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
    var_14 = ((/* implicit */unsigned char) ((unsigned int) ((int) ((((/* implicit */_Bool) var_9)) ? (3539978550U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26271)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) (signed char)76)))) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) 3539978552U)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        var_15 = ((/* implicit */long long int) max(((-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) != (((/* implicit */int) var_12))))))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)64707)) <= (((/* implicit */int) var_12))))) <= (((/* implicit */int) min(((unsigned short)39277), (((/* implicit */unsigned short) arr_1 [i_0] [i_0]))))))))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) arr_1 [i_0 + 2] [i_0 - 1])) : (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) var_10))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) var_3);
    }
    for (long long int i_1 = 3; i_1 < 11; i_1 += 2) 
    {
        var_17 = (unsigned char)44;
        arr_7 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39254)) ? (((/* implicit */int) (unsigned char)99)) : (-1515151225)))) ? (min((arr_6 [i_1 - 2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)26271)) : (((/* implicit */int) (unsigned short)25416))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 3] [i_1 + 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)39279)))))));
    }
}
