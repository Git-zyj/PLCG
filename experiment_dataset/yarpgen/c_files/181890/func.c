/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181890
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))))))) >= (((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) var_5))) != (var_0))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((4294967263U) & (((/* implicit */unsigned int) (~(-1885102087)))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    {
                        arr_11 [i_3] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_2 + 1] [i_3]))) : (arr_9 [i_1] [i_2 + 1] [11LL] [i_2 + 1] [i_2] [i_3])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) arr_6 [i_2 - 1] [i_2 + 1] [i_2 + 1]))))));
                        arr_12 [i_0] [i_1] [i_2 - 1] [i_2 - 1] [(_Bool)1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-38)))))))) ? (max((max((((/* implicit */unsigned long long int) var_5)), (434205929876387822ULL))), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [i_3])))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] [(signed char)0] = ((/* implicit */short) (~(((((/* implicit */_Bool) 2595797430104641875ULL)) ? (((/* implicit */unsigned long long int) var_13)) : (max((arr_9 [i_0] [7LL] [i_0] [7LL] [i_0] [i_0]), (2595797430104641875ULL)))))));
    }
}
