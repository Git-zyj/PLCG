/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170681
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (8673156232531269809ULL) : (((/* implicit */unsigned long long int) 134217727U)))))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */int) var_6)))))))));
    var_11 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned char) var_2)))))) == (min((((/* implicit */unsigned int) var_6)), (3579686580U))))) ? (((/* implicit */int) var_5)) : (max((var_9), (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) var_8))));
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */int) (_Bool)1)) >> (((arr_2 [i_0 - 1]) - (5106987873946255584ULL))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))))))));
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)33410)) | (((/* implicit */int) ((_Bool) var_5)))));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 18374153213763022631ULL))) ? (((int) arr_6 [i_1])) : (((/* implicit */int) ((unsigned short) 17950713047692991730ULL)))))) : ((((+(8673156232531269809ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1])))))));
        arr_7 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (496031026016559885ULL) : (1850306544429317393ULL)))))))));
        var_16 = ((/* implicit */unsigned short) arr_4 [i_1] [i_1]);
        var_17 -= var_2;
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) min(((~(((/* implicit */int) arr_6 [i_1])))), (arr_3 [i_1]))));
    }
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) -8192))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */int) var_2))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (var_4)))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)127))))) | (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 5U)) : (33554431ULL))))))))));
}
