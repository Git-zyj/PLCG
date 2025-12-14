/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157679
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
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */long long int) ((/* implicit */int) (short)4488))) : (var_13))))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        var_15 *= ((/* implicit */short) var_13);
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((((-1LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)34)))))));
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (var_0)))) : (max((((/* implicit */int) var_9)), (((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0]))))))));
        /* LoopSeq 3 */
        for (short i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            arr_9 [i_1] = ((/* implicit */short) max(((((_Bool)1) ? (((/* implicit */int) var_2)) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)2047)))))), (((/* implicit */int) arr_0 [i_0]))));
            var_16 *= ((/* implicit */unsigned char) max((((/* implicit */int) arr_2 [i_0])), (((((/* implicit */_Bool) ((((((/* implicit */int) (short)-1)) + (2147483647))) << (((((/* implicit */int) (short)4095)) - (4095)))))) ? (((/* implicit */int) min(((short)-17461), (var_8)))) : (((/* implicit */int) (unsigned short)2265))))));
        }
        for (int i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
        {
            arr_12 [i_2] = ((/* implicit */long long int) var_4);
            arr_13 [i_0] = ((((/* implicit */int) (unsigned short)2041)) <= (((/* implicit */int) (signed char)-85)));
        }
        for (int i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
        {
            var_17 ^= ((((/* implicit */int) (short)-1)) >= (((/* implicit */int) (unsigned char)11)));
            var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))));
            var_19 *= ((/* implicit */unsigned char) (+(((((/* implicit */int) var_7)) | (((/* implicit */int) arr_0 [i_0 + 1]))))));
        }
    }
    var_20 = ((/* implicit */long long int) (~((~(((((/* implicit */_Bool) (short)13461)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) var_7))))))));
}
