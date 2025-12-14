/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133204
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
    var_16 += ((/* implicit */unsigned char) var_2);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        var_17 = ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)-85)));
        arr_2 [i_0] = ((/* implicit */signed char) (unsigned char)98);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_18 += ((/* implicit */unsigned short) arr_4 [13ULL]);
                        arr_9 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_3] = ((/* implicit */short) arr_6 [i_2] [i_2]);
                        /* LoopSeq 1 */
                        for (signed char i_4 = 2; i_4 < 12; i_4 += 2) 
                        {
                            var_19 = ((/* implicit */signed char) arr_8 [i_0] [i_0] [i_4 + 2] [i_4 + 3]);
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4 + 1] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_4 + 3]))));
                            arr_13 [i_0] [i_1] [i_0] [i_3] [i_2] = ((arr_0 [i_0 + 2] [i_4 + 1]) ? (-1152921504606846976LL) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_2] [i_3]))) : (arr_5 [i_0] [i_4]))));
                            var_20 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) arr_1 [i_0])) < (var_8))));
                        }
                        arr_14 [i_0] [i_0 - 2] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_4))) & (((/* implicit */int) arr_3 [i_0 - 1]))));
                    }
                } 
            } 
        } 
        arr_15 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_12)));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((signed char) (+(((/* implicit */int) (unsigned short)32436))))))));
    }
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            for (signed char i_7 = 1; i_7 < 13; i_7 += 2) 
            {
                {
                    arr_22 [i_5] [i_5] [i_6] [i_7 + 3] = ((/* implicit */long long int) arr_20 [i_5] [i_5] [i_5] [i_5]);
                    arr_23 [i_6] [i_7 + 1] = ((/* implicit */_Bool) arr_20 [i_7 - 1] [i_7 + 2] [i_7 - 1] [i_7 - 1]);
                    arr_24 [5ULL] [i_6] [i_7] = ((/* implicit */signed char) arr_16 [i_5] [i_6]);
                }
            } 
        } 
    } 
}
