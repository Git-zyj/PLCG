/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160506
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
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) var_0))));
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))));
    var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (~(var_5)))), ((-(var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (max((((/* implicit */unsigned long long int) var_2)), (max((var_9), (((/* implicit */unsigned long long int) var_8))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((max((((arr_0 [i_0] [(short)4]) ? (3904031567U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)96))))))) / (((/* implicit */unsigned int) ((/* implicit */int) max((arr_3 [i_1 - 2] [i_1 + 1] [i_1 - 1]), (((/* implicit */unsigned short) var_4))))))));
                var_15 = ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) 15393716329348375756ULL)) ? (((/* implicit */long long int) 3904031566U)) : (5713367335805083984LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1 + 1])) ? (390935751U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1 + 1]))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_16 -= ((/* implicit */unsigned char) -5507105521587350407LL);
                                arr_14 [i_2] [i_4] [i_2] [i_3] [i_4 - 1] = ((/* implicit */int) var_5);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 18; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) 1390844130);
                                arr_20 [i_6] [i_1 - 2] [i_0] &= ((/* implicit */unsigned short) (!(arr_18 [i_0] [i_0] [i_0] [i_0])));
                                arr_21 [i_0] [i_0] [i_0] [i_2] |= ((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_2] [i_0]);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
