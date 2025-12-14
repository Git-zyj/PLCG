/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115500
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
    for (unsigned char i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        var_18 = ((((((/* implicit */int) arr_0 [i_0 - 4] [i_0])) + (((/* implicit */int) arr_0 [i_0 + 1] [i_0])))) - ((-(((/* implicit */int) (unsigned char)29)))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */signed char) min((arr_7 [i_0] [i_2 - 2] [i_3]), (((/* implicit */unsigned short) (unsigned char)189))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_0] [i_0 - 4] [(signed char)22]), (arr_5 [i_0] [i_0] [i_0 - 4] [i_0 - 4])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [20U] [i_0 - 1] [i_0]))))) : (max((var_7), (((/* implicit */unsigned long long int) arr_5 [i_0 - 1] [i_0] [i_0 - 4] [i_0]))))));
                            arr_15 [i_3] [i_2] = ((/* implicit */unsigned long long int) (short)(-32767 - 1));
                            arr_16 [i_4] [i_2] [i_3] [i_2 + 1] [i_2] [i_0 - 1] = ((/* implicit */long long int) (unsigned short)15472);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_21 |= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)52)) ^ (((((/* implicit */int) (unsigned char)69)) << (((((/* implicit */int) (unsigned char)197)) - (181)))))));
                            var_22 ^= ((/* implicit */unsigned long long int) var_9);
                            arr_21 [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_2] = ((/* implicit */signed char) (short)7);
                        }
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)50057)) : (((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) (signed char)0))))))) ? (max((arr_8 [i_2] [i_1 - 2] [i_0 - 2] [i_2]), (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) var_16))));
                    }
                } 
            } 
        } 
        arr_22 [i_0] = ((/* implicit */unsigned short) var_3);
    }
    var_24 = ((/* implicit */unsigned short) var_6);
}
