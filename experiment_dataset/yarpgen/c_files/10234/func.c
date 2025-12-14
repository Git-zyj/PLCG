/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10234
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
    var_20 = ((/* implicit */short) (~(var_2)));
    var_21 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)60))) ? (((/* implicit */int) ((unsigned short) (unsigned char)178))) : (((/* implicit */int) var_16))))) ? (((/* implicit */int) max((((/* implicit */short) (signed char)109)), ((short)-19259)))) : (((/* implicit */int) max((((/* implicit */unsigned char) ((signed char) 4294967295U))), (((unsigned char) var_10)))))));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)90)) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) (short)32369))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_19)) >> (((938540010) - (938540000)))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)229))) == (15051976860914522674ULL))))))), (((((/* implicit */_Bool) 13835541671327890026ULL)) ? (15575808575105798866ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)106))))))))));
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */unsigned long long int) (+(arr_1 [i_0] [i_0])))) - (((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : ((+(0ULL))))))))));
        arr_3 [i_0] = ((/* implicit */long long int) (-(max((((/* implicit */unsigned long long int) (signed char)-92)), (((((/* implicit */_Bool) 4294967293U)) ? (2870935498603752749ULL) : (7850609187745095526ULL)))))));
        var_25 += ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        var_26 |= ((/* implicit */unsigned int) arr_2 [i_0] [(signed char)10]);
    }
    /* LoopNest 3 */
    for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (unsigned char i_3 = 1; i_3 < 23; i_3 += 3) 
            {
                {
                    arr_12 [i_3] [i_2] [i_1] = ((/* implicit */unsigned int) ((((12114283572984282551ULL) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) | (var_8)))))) | (((((/* implicit */_Bool) (signed char)-112)) ? (15575808575105798874ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                    var_27 = ((/* implicit */long long int) arr_9 [i_2]);
                }
            } 
        } 
    } 
}
