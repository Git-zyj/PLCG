/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105217
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
    var_14 = ((/* implicit */long long int) (unsigned short)14590);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned short) (unsigned char)1);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned short) ((((_Bool) (unsigned short)7)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14590)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)19766)) / (((/* implicit */int) (unsigned char)53))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((-565883470) - (-565883470)))) < (((((/* implicit */_Bool) -1444828868)) ? (var_8) : (var_12)))))))));
                            arr_14 [i_0] [i_0] [i_2] [i_2] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_6)) + (-565883470))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)11)) | (((/* implicit */int) (unsigned short)45766)))))))) : (((((-10) * (((/* implicit */int) var_6)))) - (((-2139862021) + (((/* implicit */int) var_11))))))));
                        }
                    }
                    var_17 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned char)12)))) * (((int) ((var_6) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)113)))))));
                }
            } 
        } 
    } 
}
