/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152488
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
    var_20 = ((/* implicit */unsigned int) (-(((long long int) var_3))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((-(71916856549572608LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -71916856549572622LL)) && (((/* implicit */_Bool) 3U))))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) (+(71916856549572625LL)));
        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_0 [i_0])))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_23 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) -1)) | (71916856549572608LL)))) : (((((/* implicit */_Bool) var_6)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
        var_24 = ((/* implicit */unsigned char) min((var_24), (var_6)));
        var_25 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (signed char)-57))))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 2; i_2 < 19; i_2 += 4) 
        {
            for (long long int i_3 = 1; i_3 < 21; i_3 += 4) 
            {
                for (long long int i_4 = 1; i_4 < 21; i_4 += 2) 
                {
                    {
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) (~(var_8)))) : ((-(var_5)))));
                        var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_3 + 1] [i_2] [i_1])) > (((/* implicit */int) arr_9 [i_3 + 1] [i_2 + 2] [i_3]))));
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) ((1716024321190236731ULL) > (((/* implicit */unsigned long long int) 4294967295U))))) << (((/* implicit */int) (_Bool)1))));
                            var_29 = ((/* implicit */long long int) 0);
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6)))))));
                        }
                        for (unsigned char i_6 = 1; i_6 < 21; i_6 += 4) 
                        {
                            var_31 = ((unsigned int) arr_10 [i_2 - 2] [i_3] [i_4 + 1]);
                            var_32 = ((/* implicit */long long int) arr_6 [i_6] [i_2 - 2]);
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_12 [i_1]) : (0)));
                        }
                    }
                } 
            } 
        } 
        var_34 = ((/* implicit */unsigned long long int) arr_3 [i_1]);
    }
}
