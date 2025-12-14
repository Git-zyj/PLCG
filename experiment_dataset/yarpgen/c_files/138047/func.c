/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138047
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
    var_18 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 24; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1 + 1] [4LL] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)14)))) : (var_15))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_1 [i_1]))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 2; i_3 < 23; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_16))));
                        var_19 |= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1 - 1] [i_1])) ? (3773963659241135287ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */int) arr_4 [i_0] [(signed char)14] [i_3])) : (((/* implicit */int) (signed char)8))))))));
                    }
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) 2147483647)), (arr_3 [i_1 + 1] [i_1 - 1]))), (arr_3 [i_1 - 1] [i_1 - 1])));
                        arr_16 [i_0] [i_0] [0ULL] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */int) (short)13234)) ^ (((/* implicit */int) (unsigned short)51510)))), (((/* implicit */int) ((short) (short)13234)))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)13224)), ((unsigned short)65126)))) : (((/* implicit */int) ((max((((/* implicit */int) (signed char)-74)), (67108863))) < (((/* implicit */int) arr_13 [i_1] [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_1 - 1])))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            var_20 ^= ((/* implicit */short) (-(((/* implicit */int) var_10))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)5] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)182))));
                        }
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned char) arr_5 [i_6]))))) ? ((~(((/* implicit */int) arr_1 [i_1 - 1])))) : (((/* implicit */int) ((_Bool) var_8)))));
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */long long int) (-(min((var_16), (((/* implicit */unsigned int) arr_1 [(signed char)11]))))))) > (((long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_1])) ? (arr_10 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) (+(3773963659241135299ULL)));
}
