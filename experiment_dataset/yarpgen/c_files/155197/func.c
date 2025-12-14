/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155197
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
    var_12 |= ((/* implicit */unsigned int) max((((/* implicit */long long int) var_2)), (var_6)));
    var_13 = ((/* implicit */signed char) max((var_0), (((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_8))))))));
    var_14 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (((unsigned long long int) (unsigned short)26216))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 14; i_2 += 3) 
            {
                for (unsigned int i_3 = 4; i_3 < 15; i_3 += 2) 
                {
                    {
                        arr_10 [i_3] [i_2] [i_1] [(signed char)5] = ((/* implicit */unsigned long long int) arr_7 [i_0] [0ULL] [i_0] [(signed char)2] [i_0]);
                        arr_11 [i_0] [14ULL] [i_2 - 3] [i_3] = ((/* implicit */signed char) var_7);
                        arr_12 [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)39319)) ? (((/* implicit */int) (unsigned short)39319)) : (((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
        } 
        var_15 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)39320)) ? (4130447991099495644ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)80)))));
    }
    var_16 = ((/* implicit */unsigned long long int) var_9);
}
