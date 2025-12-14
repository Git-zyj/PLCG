/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147538
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
    var_18 ^= ((/* implicit */long long int) var_6);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_19 -= ((/* implicit */_Bool) ((20U) >> (((((653736280U) >> (((((/* implicit */int) (unsigned short)64849)) - (64842))))) - (5107292U)))));
        var_20 = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)246)) + (((((/* implicit */int) (unsigned char)37)) ^ (((/* implicit */int) (signed char)-86)))))) / (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) (signed char)12)))))));
        var_21 = ((/* implicit */unsigned short) 6547762496508167066LL);
    }
    /* LoopSeq 1 */
    for (unsigned int i_1 = 3; i_1 < 19; i_1 += 4) 
    {
        arr_7 [10U] &= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)63978)) || (((/* implicit */_Bool) 3665655451U))))) == (((/* implicit */int) (unsigned char)246))))) == (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)107))))) || (((/* implicit */_Bool) (unsigned short)64858)))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 1; i_3 < 17; i_3 += 4) 
            {
                {
                    arr_13 [i_1] [(unsigned char)16] &= (unsigned short)64858;
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((((/* implicit */_Bool) 29979484U)) ? (13729665613972273120ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64863))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */int) (unsigned char)7)) : (408132810)))))))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) 1564645951U)) && (((/* implicit */_Bool) (short)0)))) && (((/* implicit */_Bool) var_8))))) / (((/* implicit */int) (short)248))));
}
