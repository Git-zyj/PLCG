/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157684
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
    var_16 = ((/* implicit */_Bool) var_9);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) 625926188U)) ? (4234543100U) : (60424195U)));
                    var_18 ^= ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27556))) | (60424196U))) * (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) % ((+(((/* implicit */int) arr_4 [i_1])))))))));
                    arr_7 [i_2 - 1] [(unsigned char)7] [i_0] = -2222495244263839560LL;
                }
            } 
        } 
    } 
    var_19 &= ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (unsigned char i_3 = 3; i_3 < 17; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((short) arr_10 [i_3] [i_4]))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_11 [i_4] [i_4])))));
                var_21 += ((/* implicit */long long int) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2771445437878525993LL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), ((~(var_0)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_22 [i_3] [i_3] [(_Bool)1] [i_4] [i_7] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_8 [i_4])), (100663296U)))) ? (-2771445437878525993LL) : (((/* implicit */long long int) 2492891772U))))) ? (((/* implicit */int) ((unsigned short) max((625926174U), (((/* implicit */unsigned int) arr_20 [i_3] [i_3] [1])))))) : (((/* implicit */int) (!((_Bool)1)))));
                                var_22 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-98))) == (13889431212558340778ULL))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
