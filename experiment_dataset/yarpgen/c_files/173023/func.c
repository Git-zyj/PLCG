/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173023
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) (+(arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-119))));
                    arr_8 [(short)16] [i_1] [i_2 - 1] [(unsigned char)13] = ((/* implicit */unsigned long long int) (-((+(min((arr_6 [i_0] [i_0]), (1934030635)))))));
                    arr_9 [i_0] [i_1] [i_2 + 1] [i_1] = ((/* implicit */long long int) ((min((((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) - (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned int) var_13)))) < ((~(((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) / (arr_1 [i_0] [i_1])))))));
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */signed char) 7ULL);
        arr_11 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [(signed char)21]))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_7)))) ^ (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-123)))))))));
    }
    /* LoopSeq 1 */
    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned char) (+((((~(var_16))) / ((~(((/* implicit */int) (short)14147))))))));
        arr_15 [(signed char)1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_13 [i_3] [i_3]))));
        var_20 = ((/* implicit */unsigned long long int) (~((((!(((/* implicit */_Bool) (short)-2231)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)-32761)))) : ((+(1013528060U)))))));
        var_21 *= ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) arr_12 [i_3])))));
    }
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)13)), ((unsigned short)56754))))));
}
