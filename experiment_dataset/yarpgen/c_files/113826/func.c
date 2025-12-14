/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113826
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
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) var_6)))) : ((~(arr_1 [i_0] [i_0])))));
        arr_4 [0U] = ((/* implicit */unsigned long long int) (-(arr_1 [i_0] [i_0 + 1])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                for (unsigned char i_3 = 2; i_3 < 17; i_3 += 1) 
                {
                    {
                        var_14 -= ((/* implicit */unsigned long long int) ((unsigned char) arr_6 [i_0 - 1] [i_0 - 1] [i_3 + 2]));
                        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((unsigned char) arr_6 [i_2 + 3] [i_2 + 2] [i_2 + 2])))));
                        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((arr_9 [i_0] [i_0 + 1] [i_2 + 1] [i_3 - 2]) > (arr_9 [i_0] [i_0 - 1] [i_2 + 1] [i_3 - 1]))))));
                        var_17 = ((/* implicit */unsigned int) ((unsigned char) var_10));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 15; i_4 += 3) 
        {
            for (unsigned char i_5 = 1; i_5 < 18; i_5 += 1) 
            {
                {
                    var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (arr_5 [i_5 + 1] [i_4 + 3] [i_0 + 1]) : (arr_5 [i_5 + 1] [i_4 - 1] [i_0 - 1])));
                    arr_17 [i_4] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_6 [i_4] [i_4 + 2] [i_4 + 2])) ? (((/* implicit */int) var_0)) : (arr_1 [i_0] [i_4])))));
                }
            } 
        } 
        arr_18 [11] = ((/* implicit */int) ((((/* implicit */_Bool) -1839950331)) ? (5U) : (((/* implicit */unsigned int) -960037948))));
    }
    var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_6))));
    var_20 = (+(1697041885));
    var_21 = ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_3) : (var_9)))) ? ((+(var_9))) : (((/* implicit */unsigned int) var_2))))));
}
