/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12188
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) 3LL);
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((unsigned int) arr_1 [6U])))));
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) arr_0 [(unsigned char)0]))));
    }
    var_16 = ((/* implicit */unsigned int) ((_Bool) var_13));
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) max((562932773552128LL), (((/* implicit */long long int) (signed char)-1)))))));
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_4), (arr_12 [i_1] [i_1] [(short)9] [i_1])))) ? (((/* implicit */int) ((_Bool) (short)19200))) : (((/* implicit */int) arr_0 [i_1]))))) : (((((/* implicit */_Bool) var_5)) ? (((unsigned long long int) arr_7 [i_1])) : (arr_10 [i_1]))))))));
                                var_19 -= ((/* implicit */short) (~(min((((/* implicit */int) ((-562932773552128LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))), (arr_18 [i_1])))));
                                var_20 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) arr_9 [i_1]))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((1822656488U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ^ (((/* implicit */int) var_6))));
                var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (14832116130473282605ULL)));
            }
        } 
    } 
}
