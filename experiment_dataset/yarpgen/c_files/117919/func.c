/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117919
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
    var_19 = ((/* implicit */long long int) ((unsigned int) (+(max((((/* implicit */long long int) var_1)), (var_5))))));
    var_20 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) (unsigned char)96)), (3316617270797729418ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : ((+((+(15130126802911822198ULL)))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) ((_Bool) 3316617270797729418ULL))), (var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_17)));
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_7)) + (1200050419U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned long long int) var_1)) ^ (15130126802911822197ULL))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 + 2])) ? (((((/* implicit */unsigned int) -1569302206)) | (var_16))) : (((/* implicit */unsigned int) arr_0 [i_0 + 2])))))));
        var_23 = ((/* implicit */signed char) var_7);
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 4])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (3316617270797729444ULL))) : (((/* implicit */unsigned long long int) arr_0 [i_0 - 4]))))) ? (((/* implicit */int) ((arr_0 [i_0 + 2]) < (arr_0 [i_0 + 2])))) : ((~((-(((/* implicit */int) var_4))))))));
        var_25 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min(((short)15522), (((/* implicit */short) var_9))))) ? (max((var_16), (((/* implicit */unsigned int) var_2)))) : (var_8))) << (((min((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))) - (4172764020LL)))));
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned char) var_2)), ((unsigned char)229))))))) ? (((/* implicit */unsigned long long int) min((15LL), (((/* implicit */long long int) ((unsigned int) arr_3 [i_0] [i_0])))))) : (min((((/* implicit */unsigned long long int) (unsigned short)63)), (18446744073709551615ULL)))));
    }
    var_27 = ((/* implicit */unsigned short) var_7);
}
