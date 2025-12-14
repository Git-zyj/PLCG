/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135590
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
    var_16 = ((/* implicit */int) ((((/* implicit */int) ((var_3) == (((/* implicit */int) ((var_6) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))) == (min(((~(var_3))), (((((/* implicit */_Bool) (signed char)-71)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)96))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_17 = ((/* implicit */int) max((var_17), ((~(((((/* implicit */int) arr_1 [i_0] [(signed char)2])) << (((((/* implicit */int) arr_1 [i_0] [i_0])) - (37893)))))))));
        var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 2068562752)) ? (((/* implicit */int) (unsigned short)15476)) : (((/* implicit */int) (unsigned char)113)))))) ? ((((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)131), ((unsigned char)96))))) : (((unsigned int) var_13)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? ((-2147483647 - 1)) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_0])))))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_1 = 3; i_1 < 19; i_1 += 3) 
    {
        for (unsigned short i_2 = 2; i_2 < 16; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                {
                    arr_13 [i_3] [i_2 + 2] [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) 0U)), (11177712724608734721ULL)));
                    arr_14 [i_1] [i_3] = ((((/* implicit */_Bool) max((arr_9 [i_1] [i_2 + 2] [i_3]), (((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)34555)))))))) ? (max((arr_10 [i_1 - 1]), (((/* implicit */unsigned long long int) (unsigned char)96)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1 + 1])) ? (((/* implicit */int) arr_5 [i_2 + 4])) : (((/* implicit */int) arr_5 [i_3]))))));
                }
            } 
        } 
    } 
}
