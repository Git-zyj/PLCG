/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126284
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
    var_18 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3412885437U)) ? (18446744073709551602ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) (short)2145))))))) : ((+((+(var_8))))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) min((((1277661843) & (((/* implicit */int) (signed char)102)))), (((/* implicit */int) ((short) 368961622U)))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (9542166503346641858ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (min((287868098U), (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((var_13) ? (-1384362299) : (((/* implicit */int) (signed char)-52)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_20 = ((short) arr_0 [15LL] [i_0]);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            arr_5 [(short)6] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1])))));
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) var_16)) - (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)15072)) : (((/* implicit */int) var_16))))));
        }
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-102))) : (((9542166503346641858ULL) >> (((/* implicit */int) var_13))))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 2; i_2 < 23; i_2 += 4) 
        {
            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)2079)) ? (87470869U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [2U] [2U])))));
            arr_9 [i_0] = ((/* implicit */unsigned long long int) var_14);
            arr_10 [i_0] [i_2] [i_2] = var_5;
            arr_11 [i_0] [(signed char)3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)29)) ? (((long long int) var_11)) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_7))))));
        }
        for (long long int i_3 = 2; i_3 < 23; i_3 += 4) 
        {
            var_24 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_9) > (var_8))))) / (((((/* implicit */_Bool) 534773760U)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))));
            arr_15 [(unsigned short)1] = (unsigned short)15072;
            var_25 = ((/* implicit */long long int) var_17);
            var_26 = ((/* implicit */int) ((var_15) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)18807)) != (((/* implicit */int) arr_3 [18U] [18U]))))))));
        }
        arr_16 [15] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))) | (((var_9) << (((arr_2 [i_0] [i_0]) - (2604747207U)))))));
    }
    var_27 = ((/* implicit */unsigned int) max((var_27), ((-(((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned int) var_14)), (2680971763U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))))));
}
