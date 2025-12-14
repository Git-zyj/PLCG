/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155020
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
    var_19 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned long long int) var_15))));
    var_20 &= ((/* implicit */unsigned char) 498884870735665313LL);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned long long int) var_16));
        var_21 = ((/* implicit */int) ((unsigned short) (!(arr_0 [i_0 + 1]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((arr_6 [i_1]) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) var_18))))) < ((~(852615481U)))))))))));
        var_23 = ((/* implicit */unsigned char) arr_7 [i_1]);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (signed char i_4 = 1; i_4 < 15; i_4 += 2) 
            {
                for (signed char i_5 = 1; i_5 < 16; i_5 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((int) (signed char)94)))));
                        arr_19 [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_5 - 1] [(signed char)9] [i_3] [i_5 + 1]))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4 + 2]))) % (arr_9 [i_5 + 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_4 + 2])) ? (((/* implicit */int) arr_5 [i_4 - 1])) : (((/* implicit */int) arr_14 [i_5 + 1] [i_3] [i_3] [16ULL])))))));
                    }
                } 
            } 
        } 
        arr_20 [i_2] = ((/* implicit */unsigned char) (unsigned short)57089);
    }
}
