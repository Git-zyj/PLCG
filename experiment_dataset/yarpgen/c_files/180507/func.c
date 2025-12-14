/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180507
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) ((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((1376183318681881983LL), (((/* implicit */long long int) (short)32766))))) > (((arr_0 [i_0] [(short)19]) ? (arr_1 [i_0]) : (6160124317815899325ULL)))))))));
        var_18 = ((/* implicit */unsigned long long int) (short)32761);
        /* LoopNest 3 */
        for (unsigned int i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        arr_12 [i_3] = ((/* implicit */unsigned int) (short)-32755);
                        var_19 ^= ((/* implicit */unsigned int) ((((((arr_0 [i_0] [15LL]) && (((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32762))) : (((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_3])) ? (((/* implicit */unsigned long long int) 2147483630)) : (var_7))))) > (var_7)));
                        var_20 |= ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (18446744073709551615ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)136))) : (arr_2 [i_0 + 4]))) < (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)24766)))));
                        arr_13 [i_3] [i_3] [i_0] = ((/* implicit */short) ((max((max((((/* implicit */unsigned long long int) (unsigned short)41083)), (var_12))), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_5)), (var_10)))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((-1685808158), (((/* implicit */int) arr_9 [i_0] [i_0] [10ULL]))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-67)), (var_16)))))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((arr_15 [i_4]) + (2147483647))) << (((4294967295U) - (4294967295U)))))) ? (((long long int) (signed char)-79)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34))))), (((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)24453)) * (((/* implicit */int) (unsigned char)250)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))))))));
        arr_17 [i_4] [(unsigned char)8] |= ((/* implicit */long long int) (-((~(((/* implicit */int) ((arr_6 [i_4] [i_4]) <= (((/* implicit */unsigned long long int) 63U)))))))));
    }
    var_22 = ((/* implicit */unsigned long long int) var_2);
}
