/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123943
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (_Bool)0))));
    var_13 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_8)), ((unsigned short)45980)));
    var_14 = ((/* implicit */unsigned int) (unsigned short)45985);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 8; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) min((1875387817), (((/* implicit */int) (unsigned char)124))));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_1])) ? (((/* implicit */int) arr_6 [i_2 - 1] [i_2] [(signed char)4] [i_2])) : (((/* implicit */int) arr_6 [i_2 - 2] [i_1 + 2] [(_Bool)1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)19551)) >> (((3013527387299676373LL) - (3013527387299676366LL)))))) : (((unsigned long long int) arr_5 [i_2 - 2] [i_1 - 2] [(short)8]))));
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) 3775303201339336742ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((short) 884130552)))))) : (((((/* implicit */_Bool) var_11)) ? (-1713692108) : (arr_5 [(signed char)9] [i_1] [(signed char)9])))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((((/* implicit */_Bool) (unsigned short)45990)) ? (4907200786569620077ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)45985))))) % (((((((/* implicit */int) (signed char)-79)) + (2147483647))) >> (((17534159383382860655ULL) - (17534159383382860648ULL))))))))))));
                }
            } 
        } 
    } 
}
