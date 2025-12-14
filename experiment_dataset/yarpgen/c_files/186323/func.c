/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186323
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                arr_8 [i_0] [i_1 - 1] [i_0] = (-(((/* implicit */int) var_5)));
                arr_9 [i_0] [(signed char)0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)1024))) : ((~(-5248932310015072092LL)))))) ? (((unsigned long long int) (-(((/* implicit */int) (unsigned short)63801))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_0])))));
            }
            var_13 = ((/* implicit */long long int) (((!(((((/* implicit */int) (unsigned short)39863)) > (((/* implicit */int) var_1)))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -5248932310015072085LL))))) : (((/* implicit */int) var_9))))));
        }
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_3] [i_3] [i_0])) >> (((((((/* implicit */int) var_2)) + (((/* implicit */int) arr_0 [i_0])))) - (7721)))));
            var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (((unsigned int) (-(((/* implicit */int) var_1)))))));
        }
        for (short i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            arr_15 [i_0] [7ULL] [i_0] = ((/* implicit */_Bool) var_1);
            arr_16 [i_0] [(short)5] = ((/* implicit */short) arr_6 [i_4] [i_4] [i_4] [i_0]);
            var_16 ^= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_12 [i_0] [i_4]))))));
            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)511)) ? (-5248932310015072092LL) : (-5248932310015072092LL)));
        }
        var_18 = var_8;
    }
    var_19 = var_7;
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? ((-(var_6))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    var_21 -= ((/* implicit */unsigned char) ((5248932310015072076LL) | (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)13)), ((short)-5429)))))));
}
