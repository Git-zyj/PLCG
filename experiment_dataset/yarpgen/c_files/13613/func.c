/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13613
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
    var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (-((~(((/* implicit */int) var_7))))))), (var_2)));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2122627826U)) ? (2122627848U) : (2122627831U)));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) (-(2122627812U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) -1426306199)) && (((/* implicit */_Bool) var_5))))) : ((-(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) min((((unsigned short) 2122627813U)), (((/* implicit */unsigned short) (_Bool)1)))))));
    var_18 = ((/* implicit */unsigned long long int) max((3745716118U), (2122627812U)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [i_0] [(signed char)14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)233)) ? (2172339469U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) var_5)) ? (var_14) : (((/* implicit */int) (_Bool)1)))) : (max((-13564985), (((((/* implicit */_Bool) 2172339483U)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (unsigned char)248))))))));
                var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((_Bool) arr_2 [i_0] [i_1])) ? ((-(((/* implicit */int) (signed char)50)))) : (((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))))))));
                arr_5 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_2 [i_1] [i_1]) : (((/* implicit */unsigned long long int) 2172339483U))))) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_2 [7ULL] [(unsigned char)11]))) : (((/* implicit */unsigned long long int) (~(var_2))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32745)))))));
            }
        } 
    } 
}
