/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106214
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
    var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)25)) | (var_10)))) ? (((((/* implicit */_Bool) 13787298987562651721ULL)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (4659445086146899911ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
    var_14 = ((/* implicit */long long int) var_7);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_15 = ((signed char) min((((/* implicit */unsigned long long int) (unsigned char)255)), (arr_0 [i_0])));
        arr_4 [i_0] = ((max((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_4))))) << (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_2 [i_0] [i_0])))) - (241))));
        arr_5 [(signed char)2] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [10LL])) ? (((/* implicit */int) arr_3 [i_0] [(signed char)6])) : (((/* implicit */int) min(((short)-5808), (((/* implicit */short) (unsigned char)250)))))))) ? (((/* implicit */int) max((((/* implicit */short) var_9)), (arr_2 [i_0] [i_0])))) : (((/* implicit */int) ((((((/* implicit */_Bool) 7059394402087768313LL)) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) (signed char)127)))) >= (((/* implicit */int) (signed char)89)))))));
    }
    for (signed char i_1 = 3; i_1 < 11; i_1 += 1) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) (+(((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1])))));
        var_16 = ((/* implicit */int) max((var_16), (max(((-(((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_8 [i_1])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 - 3])))))))))));
        var_17 = ((/* implicit */unsigned char) max((0), (((((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 1])) + (((/* implicit */int) var_1))))));
        var_18 = ((/* implicit */int) var_4);
    }
}
