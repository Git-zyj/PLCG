/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166803
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_12 = ((/* implicit */_Bool) (-(min((3730944664984892914ULL), (((/* implicit */unsigned long long int) var_2))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((arr_0 [i_1] [i_0 + 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
            arr_6 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) (_Bool)1));
            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_2)))) : (max((((/* implicit */long long int) var_8)), (arr_2 [(short)8] [(short)8]))))))));
            var_14 = ((/* implicit */_Bool) ((short) ((_Bool) ((_Bool) arr_2 [i_0] [i_0]))));
        }
        arr_7 [(unsigned char)10] |= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)78))))) == (((/* implicit */int) (_Bool)1))))) == (var_0)));
        var_15 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_0 [i_0 + 1] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1] [4]))) : (((((/* implicit */_Bool) var_2)) ? (arr_0 [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) 1768434833U))))));
        arr_8 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (min((((((/* implicit */_Bool) var_0)) ? (8302078378596515261ULL) : (((/* implicit */unsigned long long int) 2177097598U)))), ((~(var_9)))))));
    }
    var_16 = ((/* implicit */_Bool) (+(min((var_7), (((/* implicit */unsigned int) ((signed char) var_1)))))));
    var_17 = ((/* implicit */unsigned int) var_8);
}
