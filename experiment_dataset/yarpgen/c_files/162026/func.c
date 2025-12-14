/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162026
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
    var_11 = ((/* implicit */long long int) var_4);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] [(unsigned char)11] = ((/* implicit */signed char) var_3);
        var_12 = ((/* implicit */signed char) var_7);
        var_13 = ((/* implicit */unsigned long long int) -1051817301788295799LL);
    }
    for (unsigned long long int i_1 = 3; i_1 < 7; i_1 += 3) 
    {
        var_14 += ((/* implicit */unsigned char) min((max((arr_0 [(unsigned short)4] [i_1 - 3]), (arr_0 [2LL] [i_1 + 2]))), (((/* implicit */unsigned short) max(((signed char)75), (var_9))))));
        arr_5 [i_1] = ((/* implicit */unsigned char) min((2260440997495647084ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
        var_15 = ((/* implicit */short) (((!(((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) arr_4 [i_1]))))))) ? ((-(326537260U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) max((((/* implicit */long long int) (unsigned char)255)), (var_6))))))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)57131)) || ((((_Bool)0) || (((var_4) >= (var_1)))))));
    }
    for (int i_2 = 1; i_2 < 10; i_2 += 1) 
    {
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_2 + 1]))))), (((((/* implicit */_Bool) arr_0 [(signed char)18] [i_2 + 1])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(_Bool)1] [i_2 + 1]))))))))));
        arr_8 [i_2] = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (signed char)-8))))) >> ((((+(((/* implicit */int) (unsigned char)255)))) - (224))))) >= (min((((int) arr_1 [i_2])), (((/* implicit */int) (unsigned char)248))))));
        arr_9 [i_2] [(unsigned short)8] = ((/* implicit */unsigned long long int) arr_6 [i_2]);
    }
}
