/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180815
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
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-28442)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15766))) : (-5498720137394570696LL)));
        arr_3 [(unsigned char)2] = ((/* implicit */_Bool) ((unsigned char) (-(((((/* implicit */_Bool) var_8)) ? (var_0) : (var_1))))));
        var_10 = ((/* implicit */int) ((((((/* implicit */_Bool) 3933199224756918023ULL)) ? (var_6) : ((((_Bool)0) ? (((/* implicit */long long int) var_5)) : (var_2))))) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)26936)))))))));
    }
    for (unsigned short i_1 = 2; i_1 < 20; i_1 += 4) 
    {
        var_11 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_7 [i_1 + 2]))) ? (arr_6 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1855563000)) && (((/* implicit */_Bool) 3225125759U))))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 2; i_2 < 21; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                {
                    var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_6 [i_1 - 1])))) && (((/* implicit */_Bool) (+(((13677219208122939112ULL) / (((/* implicit */unsigned long long int) 906263813)))))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            {
                                arr_16 [i_1] [i_2] [(unsigned short)6] [i_4] [i_5] [(short)2] |= ((/* implicit */int) arr_9 [i_2] [i_1]);
                                var_13 = ((((/* implicit */_Bool) 7138873066260922129ULL)) ? (((/* implicit */long long int) 3859581352U)) : (7742846799012292187LL));
                                var_14 = ((/* implicit */unsigned int) (-(5498720137394570696LL)));
                            }
                        } 
                    } 
                    arr_17 [i_1 + 1] [i_1 + 3] [i_1] = ((/* implicit */int) (+(((((((/* implicit */unsigned long long int) var_1)) - (arr_5 [i_1 + 3]))) + (((/* implicit */unsigned long long int) arr_6 [i_1]))))));
                }
            } 
        } 
    }
    var_15 |= var_1;
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_2)) ? (var_7) : (var_6))) : (var_2)))) ? ((~((-(4294967295U))))) : (((/* implicit */unsigned int) var_5))));
}
