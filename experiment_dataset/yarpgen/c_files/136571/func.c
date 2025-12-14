/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136571
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
    var_17 = max((var_9), (((/* implicit */unsigned char) var_8)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] [i_2 + 3] = ((/* implicit */int) var_5);
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) (signed char)-15)))) : (((/* implicit */int) var_6)))))));
                    var_19 = ((/* implicit */unsigned char) (((~(arr_3 [i_2 + 4]))) * (((/* implicit */int) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */signed char) (_Bool)1))))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        var_20 += ((/* implicit */_Bool) arr_5 [(unsigned char)8] [i_1] [i_1]);
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (min((var_11), (((/* implicit */unsigned long long int) ((arr_0 [(unsigned char)4]) % (var_16)))))) : (((/* implicit */unsigned long long int) arr_4 [(unsigned char)0] [(unsigned char)0] [i_3]))));
                    }
                    arr_10 [i_0] [i_1] [i_2 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(var_4)))) ? (arr_9 [i_2] [8ULL] [i_0] [15]) : (((((/* implicit */_Bool) arr_7 [i_2 + 2] [i_2] [i_1] [i_1] [(signed char)9])) ? (((((/* implicit */_Bool) var_15)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_2 [i_0] [i_0]))))))));
                }
            } 
        } 
    } 
}
