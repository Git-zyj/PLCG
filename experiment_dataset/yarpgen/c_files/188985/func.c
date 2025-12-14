/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188985
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
    var_14 = ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned short)19987)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (18446744073709551615ULL))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((int) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        var_15 ^= ((/* implicit */unsigned int) ((signed char) var_12));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 4; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [18ULL] [i_1] = ((/* implicit */unsigned short) var_7);
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)114)));
                        arr_13 [i_1] [15] [i_1] = ((/* implicit */int) (_Bool)1);
                        arr_14 [i_0] [i_1] [i_2] [i_3 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((signed char) var_4)))) ? (min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) arr_11 [i_0] [i_1]))))), (17940976494983881888ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [i_0] [10] [3ULL]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [6ULL])) : (((/* implicit */int) (_Bool)1))))) : (((var_1) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
                        arr_15 [(_Bool)1] [i_1] [i_2] [i_3 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 562949952897024LL)) ? (2447170006U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1])))))) ? (((/* implicit */int) ((signed char) 2147483647))) : (((/* implicit */int) (unsigned short)60853))));
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0])) ? (((unsigned long long int) (((_Bool)0) ? (((/* implicit */int) var_3)) : (892115550)))) : (3904020499937986281ULL)));
                            arr_19 [i_1] [(unsigned short)16] [(signed char)15] [(_Bool)1] [(unsigned short)16] [i_4] = ((/* implicit */_Bool) arr_16 [i_0] [(unsigned char)20] [14ULL]);
                            arr_20 [(signed char)2] [i_1] = ((/* implicit */unsigned char) var_13);
                            arr_21 [(unsigned short)9] [i_1] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_18 [(signed char)2] [(_Bool)1] [i_2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2 - 3]))) : ((((_Bool)1) ? (((/* implicit */long long int) 1023U)) : (-5514946060594959528LL))))), (((/* implicit */long long int) ((signed char) (((_Bool)1) ? (((/* implicit */long long int) 2155869471U)) : (-5560361717429766884LL)))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 1; i_5 < 21; i_5 += 3) 
                        {
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_2 - 2] [i_1])) ? (1281494971639749502ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                            arr_25 [i_1] [i_1] [i_1] [i_2 + 2] [i_1] [i_3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_1]))) : (562949952897034LL)));
                        }
                        for (int i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            arr_29 [(_Bool)1] [i_1] [4ULL] [i_1] [i_6] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2447170006U)) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) (unsigned char)186))))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (938261784U)))));
                            arr_30 [i_2] [i_1] [(short)3] [7LL] [i_2] [i_2] = ((/* implicit */unsigned long long int) (signed char)-6);
                        }
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_33 [i_1] = ((/* implicit */_Bool) ((int) 0));
                        arr_34 [i_1] [i_2] [i_1] = ((((/* implicit */_Bool) ((arr_0 [(short)9] [i_2 - 3]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_0] [i_2 + 1]))))) ? (((((/* implicit */_Bool) (unsigned char)127)) ? (2139097824U) : (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                    }
                }
            } 
        } 
    }
    var_19 = ((/* implicit */_Bool) var_13);
}
