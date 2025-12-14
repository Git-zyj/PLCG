/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106344
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((((((/* implicit */unsigned int) arr_1 [(signed char)12] [i_0])) > (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_3 [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(_Bool)1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [(unsigned short)12]))) : (arr_3 [i_0])))) ? (((arr_1 [(unsigned char)4] [(unsigned char)4]) / (arr_1 [(unsigned char)0] [i_0]))) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) arr_3 [i_0]))))));
        var_19 *= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned short) 3643076576U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20012))) | (2747594524836491019ULL))))));
        var_20 = ((((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) % (arr_1 [i_0] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0] [2ULL]))) ? (((/* implicit */int) ((signed char) arr_3 [i_0]))) : (((((/* implicit */int) arr_2 [i_0] [i_0])) * (((/* implicit */int) arr_0 [i_0])))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) / (arr_3 [i_0]))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((unsigned int) arr_2 [i_0] [i_0])) | (((unsigned int) arr_8 [i_2] [i_2]))));
                    var_21 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_1])) ^ (((/* implicit */int) arr_9 [i_0]))))) && (((/* implicit */_Bool) ((((long long int) arr_5 [i_0] [i_0] [i_2])) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_1])))))))));
                    var_22 &= ((/* implicit */int) arr_2 [i_1] [i_2]);
                    var_23 -= ((/* implicit */unsigned int) arr_7 [i_2] [i_2]);
                }
            } 
        } 
    }
    var_24 ^= ((/* implicit */_Bool) var_8);
    var_25 = ((/* implicit */unsigned int) var_7);
    var_26 = var_14;
}
