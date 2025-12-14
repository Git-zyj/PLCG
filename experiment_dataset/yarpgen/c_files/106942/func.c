/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106942
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
    var_14 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned int) var_0))))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) - (3514453685U))) % (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_13)), (((-1834028707) * (((/* implicit */int) (_Bool)0)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_15 ^= ((/* implicit */long long int) arr_0 [i_3 + 1] [i_1]);
                        var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [9U] [i_1]))) >= (arr_3 [i_1] [i_1]))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            var_17 = ((/* implicit */int) (-(1623712870U)));
                            var_18 -= ((/* implicit */unsigned char) 1834028719);
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (+(5835100813848965223ULL))))));
                            arr_11 [i_0] = ((/* implicit */long long int) -1834028707);
                        }
                        var_20 = (_Bool)1;
                    }
                } 
            } 
            var_21 *= ((/* implicit */unsigned char) arr_5 [i_1] [i_1] [i_0]);
            var_22 = ((/* implicit */int) ((((/* implicit */unsigned int) var_0)) < (arr_10 [i_0] [(unsigned char)6] [i_0] [i_0] [i_0])));
            var_23 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) + (14086282554440397452ULL));
        }
        var_24 = -1860568484514236292LL;
    }
    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        var_25 &= max(((+(((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (arr_12 [(_Bool)1])))))), ((-(((/* implicit */int) arr_12 [i_5])))));
        var_26 = ((/* implicit */_Bool) (+(-1834028707)));
    }
}
