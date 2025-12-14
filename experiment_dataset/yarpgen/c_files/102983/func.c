/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102983
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
    var_20 ^= var_8;
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((-54564567) + (2147483647))) << (((((long long int) var_17)) - (2464568584LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)12)) << (((((/* implicit */int) var_14)) - (23160)))))) ? (((/* implicit */long long int) min((54564566), (((/* implicit */int) (unsigned char)7))))) : (var_4)))));
    var_22 = ((/* implicit */signed char) (short)8191);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_23 ^= ((/* implicit */unsigned long long int) min((((((/* implicit */int) (short)28592)) / (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (short)28592)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (-128577474))))));
        arr_3 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((unsigned char) arr_0 [i_0]))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [(signed char)15])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))), (max((var_8), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
        var_24 = 2305842734335787008ULL;
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_25 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [(unsigned char)4] [0ULL]))));
        arr_6 [i_1] [20ULL] |= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_9))) == (((((/* implicit */long long int) ((((/* implicit */_Bool) 54564567)) ? (((/* implicit */unsigned int) arr_4 [(unsigned char)22])) : (var_17)))) | ((~(arr_5 [(short)14] [(short)14])))))));
        arr_7 [i_1] = ((/* implicit */signed char) (_Bool)1);
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) arr_5 [i_1] [i_1]);
    }
    var_26 = ((/* implicit */unsigned long long int) var_0);
}
