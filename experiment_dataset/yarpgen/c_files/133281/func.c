/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133281
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_13 -= ((/* implicit */unsigned char) var_6);
                    arr_10 [12ULL] [14ULL] [i_0] [(unsigned char)17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((18322834698899228928ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-87)))))))) ? ((+(((((/* implicit */int) var_12)) | (((/* implicit */int) arr_3 [(signed char)0])))))) : (((/* implicit */int) ((arr_5 [i_1 - 1] [(signed char)18]) != (((((/* implicit */_Bool) 4230620552237925573ULL)) ? (14928813348429536192ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5))))))))));
                }
            } 
        } 
    } 
    var_14 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(4738766842372226515ULL)))) ? (((/* implicit */unsigned long long int) var_11)) : (var_9)))) ? ((~(max((var_2), (16140901064495857664ULL))))) : (max((((unsigned long long int) (signed char)40)), (((/* implicit */unsigned long long int) var_4))))));
    var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((var_6) * (var_8))) - (var_6)))), (484271001212245078ULL)));
    var_16 = ((/* implicit */unsigned long long int) ((unsigned int) max((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551614ULL)) && (((/* implicit */_Bool) var_7))))))));
    var_17 = ((/* implicit */unsigned long long int) (unsigned char)202);
}
