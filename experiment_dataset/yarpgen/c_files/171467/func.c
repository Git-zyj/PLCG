/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171467
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) min((max((((arr_1 [i_0]) >= (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) 14458776002982201216ULL)))))), (((arr_1 [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -4246502193509547376LL))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_5)))), (((/* implicit */int) var_15))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 831419671U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)227))) : (2406031811U))))));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) & (14119031198672125136ULL)));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 3; i_2 < 19; i_2 += 4) 
        {
            arr_8 [i_2 + 2] [i_2 + 2] [i_2 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3463547613U)) ? ((-(831419683U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 + 2] [i_2 + 2])))));
            var_22 = min((((arr_6 [i_2 - 1] [i_2 - 1]) ? (((/* implicit */int) arr_6 [i_2 - 2] [i_2])) : (((/* implicit */int) arr_6 [i_2 - 2] [i_2])))), (((/* implicit */int) max((((/* implicit */unsigned short) (short)15191)), ((unsigned short)47072)))));
            var_23 = ((max((((/* implicit */unsigned int) arr_6 [i_1] [i_2])), (((arr_6 [i_1] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1]))) : (2406031811U))))) | (((/* implicit */unsigned int) ((/* implicit */int) max((arr_3 [i_2 + 2] [i_2 - 2]), (((/* implicit */signed char) arr_6 [i_2 + 2] [i_2])))))));
            arr_9 [4] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)(-32767 - 1)))))) | (var_16)));
        }
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */unsigned int) var_13)), (921796409U))) != (max((3269513323U), (((/* implicit */unsigned int) (signed char)-98)))))))) != (((long long int) ((var_14) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))) : (-828451420769132619LL))))));
            arr_13 [(unsigned char)8] [i_3] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((1888935485U) | (2406031811U)))))), (((/* implicit */long long int) arr_12 [i_1] [i_3] [i_3]))));
            var_25 = 4057028275U;
        }
    }
    var_26 = ((/* implicit */int) var_14);
}
