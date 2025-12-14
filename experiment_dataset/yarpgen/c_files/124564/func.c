/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124564
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
    var_19 -= var_9;
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6928670943712580923LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (6928670943712580947LL)));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)17549))))) / (-2957313365020385073LL)));
            arr_5 [i_0] = ((/* implicit */unsigned int) (-(5366960778666839547LL)));
            var_22 |= ((/* implicit */_Bool) var_3);
        }
        for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 4) /* same iter space */
        {
            var_23 -= ((/* implicit */signed char) ((var_7) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
            arr_8 [i_0] = ((/* implicit */unsigned long long int) (unsigned char)89);
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 1) 
                {
                    {
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_17))) / (6928670943712580941LL))))));
                        /* LoopSeq 2 */
                        for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))) : (6928670943712580947LL)));
                            arr_18 [i_0] [i_0] [(unsigned short)0] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)17)) % (2147483647)));
                        }
                        for (unsigned int i_6 = 1; i_6 < 14; i_6 += 2) 
                        {
                            arr_21 [i_6] [i_0] [(unsigned char)12] [i_0] [i_0] = ((/* implicit */signed char) var_15);
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (-(-852527030))))));
                            var_27 = ((/* implicit */unsigned char) (signed char)7);
                        }
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((var_11) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-76))))) & (((((/* implicit */_Bool) 5366960778666839547LL)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))))))));
                    }
                } 
            } 
        }
        for (long long int i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            var_29 -= ((((/* implicit */unsigned long long int) 1540318811U)) | (5399422871094240582ULL));
            var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_12))));
            var_31 = ((((/* implicit */_Bool) (signed char)-116)) ? (-8934756624106246143LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))));
        }
    }
    for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 3) 
    {
        var_32 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) && (((/* implicit */_Bool) ((var_7) / (((/* implicit */unsigned long long int) 4294967295U))))))))));
        arr_28 [i_8] [i_8] = ((/* implicit */unsigned short) var_16);
    }
}
