/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127948
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    var_15 &= ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) (short)-27306)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_14 [i_2] [(unsigned char)21] [i_2] [i_2] = ((/* implicit */unsigned int) ((((unsigned int) (unsigned short)43412)) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)12404))))))));
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) (short)27305))))))));
                                arr_15 [i_2] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) (+(((7638232034105580857LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-27290)))))));
                                var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)69)) | (((/* implicit */int) (short)22605)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (unsigned char)186)) ? (((/* implicit */unsigned int) -2139794721)) : (3795364517U)))))));
    }
    for (unsigned char i_5 = 2; i_5 < 8; i_5 += 1) 
    {
        var_19 += ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) min((2147483647), (0)))))));
        var_20 ^= ((/* implicit */unsigned char) ((unsigned short) (-(2817902479U))));
    }
    var_21 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) (short)-27309))))));
}
