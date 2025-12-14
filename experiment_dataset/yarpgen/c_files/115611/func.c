/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115611
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
    var_20 += ((/* implicit */short) (~(((/* implicit */int) var_13))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) 911967118737498321LL))));
                    arr_10 [(short)2] [(short)2] [(short)2] [i_1] = ((/* implicit */unsigned char) 911967118737498327LL);
                }
            } 
        } 
        var_22 ^= ((/* implicit */signed char) max((max((((/* implicit */long long int) var_4)), (arr_8 [8U] [i_0]))), (((/* implicit */long long int) arr_5 [i_0] [i_0]))));
    }
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */signed char) max(((+(((/* implicit */int) var_6)))), ((~(((/* implicit */int) arr_1 [i_3] [i_3]))))));
        arr_14 [12ULL] = ((/* implicit */unsigned long long int) (~(min((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) | (3233042882U))), (((/* implicit */unsigned int) var_16))))));
    }
    for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (3862356533U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [9LL] [10LL]))) : (911967118737498321LL))) : (((arr_17 [i_4] [i_4]) / (((/* implicit */long long int) arr_15 [i_4]))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_16 [10U])) == (((/* implicit */int) arr_16 [i_4]))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_4] [i_4])) ? (4067996163066099579LL) : (var_5))) != ((+(-911967118737498323LL))))))));
        arr_19 [i_4] = ((/* implicit */unsigned char) (~(-911967118737498334LL)));
    }
    var_23 = ((/* implicit */unsigned char) (-((+(((var_14) / (((/* implicit */int) var_10))))))));
}
