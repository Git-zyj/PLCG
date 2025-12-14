/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176466
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) var_6);
                                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [4LL] [i_0]))) : (arr_5 [i_1 + 1] [i_3 + 2])))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_2 + 1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2])) ? (((/* implicit */long long int) 2858895234U)) : (arr_5 [i_2 + 1] [i_2]))), (((((/* implicit */long long int) ((/* implicit */int) var_2))) + (var_8)))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) (-(((/* implicit */int) ((((((/* implicit */int) var_11)) - (((/* implicit */int) (short)8064)))) <= (((/* implicit */int) var_11)))))));
                                var_15 = ((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2 - 1] [(short)6]);
                                arr_18 [i_0] = ((/* implicit */int) ((2858895234U) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (3954254820U)))) || (((/* implicit */_Bool) 4294967295U))))))));
                            }
                        } 
                    } 
                    var_16 = min((((/* implicit */long long int) arr_12 [i_0] [i_0] [(short)1] [i_2] [i_2] [i_2 - 1])), (((((/* implicit */_Bool) ((long long int) 995896702687378497LL))) ? ((~(-995896702687378497LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-33))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_7 = 2; i_7 < 15; i_7 += 4) 
        {
            for (short i_8 = 3; i_8 < 15; i_8 += 3) 
            {
                for (int i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    {
                        var_17 = ((/* implicit */int) (~((~(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8))) & (5097815296121107495LL)))))));
                        var_18 &= ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_7] [i_7] [i_7] [i_7 - 2] [i_7 - 2] [i_7 + 1]))))) ? (((2525973953U) << (((-1872137751) + (1872137779))))) : (((/* implicit */unsigned int) (-(arr_9 [1] [i_8 - 2] [i_8 - 1] [i_8] [i_7] [i_7 + 1])))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_21 [i_8 - 3] [i_8] [i_8] [i_7 + 1]))) ? ((~(((/* implicit */int) ((unsigned short) (signed char)33))))) : (((/* implicit */int) ((short) arr_21 [i_7 - 1] [i_7 - 1] [i_8 - 3] [i_7 - 1])))));
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */_Bool) ((((((/* implicit */int) var_7)) - (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), ((unsigned short)36770)))))) ^ ((-(-1887766578)))));
    var_21 = ((/* implicit */long long int) min(((~(((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) var_7))));
}
