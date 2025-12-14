/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147297
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [(short)13]))))) ? (((arr_2 [i_0] [i_1]) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_0])))) : ((~(((/* implicit */int) arr_1 [i_0]))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) (-(var_1)));
            }
        } 
    } 
    var_10 = ((/* implicit */int) min((((/* implicit */unsigned int) var_8)), (var_0)));
    var_11 = ((/* implicit */signed char) (-(var_6)));
    var_12 = ((((var_5) ? (((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_5))))) : (((var_7) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))) * (((int) ((var_1) & (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
    /* LoopSeq 2 */
    for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        var_13 = (unsigned char)0;
        var_14 = ((/* implicit */_Bool) ((min(((!(var_4))), (var_2))) ? (((arr_8 [i_2]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_8 [i_2])))) : (((/* implicit */int) var_4))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                {
                    arr_14 [i_2] [i_3] [i_2] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_9 [i_3] [i_3])), (((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) arr_7 [i_4])) : (((/* implicit */int) arr_8 [i_2]))))) ? (((/* implicit */int) max((arr_6 [i_3]), (((/* implicit */signed char) var_7))))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_2])), (arr_10 [i_3] [i_4]))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 1; i_5 < 18; i_5 += 4) 
                    {
                        var_15 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_5])) ? (((/* implicit */int) arr_9 [i_3] [i_5])) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((((/* implicit */int) arr_8 [i_2])) != (((/* implicit */int) arr_10 [i_2] [i_2]))))) : (((/* implicit */int) arr_16 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 - 1])))), (((((/* implicit */int) var_3)) >> (((/* implicit */int) var_4))))));
                        arr_17 [i_5] [i_3] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_16 [i_2] [i_3] [i_4] [i_4] [i_5 - 1] [i_5 - 1])) : (((int) arr_12 [i_2] [i_3] [i_4] [(signed char)4])))) != (((/* implicit */int) ((short) arr_16 [i_5] [i_5] [i_4] [i_3] [i_2] [i_2])))));
                    }
                }
            } 
        } 
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        var_16 = ((/* implicit */int) arr_18 [i_6 - 1]);
        var_17 |= ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_19 [i_6 - 1]))))));
        /* LoopNest 3 */
        for (short i_7 = 1; i_7 < 17; i_7 += 4) 
        {
            for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_27 [i_6 - 1] [i_6] [i_8] [i_9] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_23 [i_6] [i_6] [13] [i_9])))) >= (min((((/* implicit */unsigned int) arr_22 [i_7] [i_6])), (var_0))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_18 [i_7]))));
                        var_18 *= ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)222))) & (min((((/* implicit */long long int) var_3)), (var_1))))) >> (((((/* implicit */int) arr_19 [i_8])) - (91)))));
                    }
                } 
            } 
        } 
    }
}
