/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120769
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
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned int) (-(arr_0 [i_0])));
        var_17 = ((/* implicit */_Bool) ((arr_0 [i_0]) & (((/* implicit */int) arr_1 [i_0]))));
        arr_3 [(signed char)7] = ((/* implicit */short) (~((-(arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_0 [i_1]) : (-1736085847))));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((min((arr_5 [7] [i_1]), (((/* implicit */unsigned short) arr_1 [i_1])))), (arr_5 [i_1] [i_1])))), ((+(min((((/* implicit */unsigned int) var_3)), (var_5))))))))));
        var_19 |= ((/* implicit */unsigned int) ((((1736085846) / (max((((/* implicit */int) arr_5 [i_1] [(signed char)13])), (arr_4 [i_1] [i_1]))))) >> ((((+(arr_0 [(unsigned short)12]))) + (2054596433)))));
    }
    /* LoopSeq 3 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_20 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_6 [i_2 - 1])) ? (arr_6 [i_2 - 1]) : (((/* implicit */int) (short)22718)))));
        arr_10 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-36)) ? ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63589))) : (606156671U))) : (((/* implicit */unsigned int) 1))));
    }
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        arr_14 [i_3] = ((/* implicit */int) min((((((/* implicit */_Bool) max((-359505008), (((/* implicit */int) arr_1 [7]))))) ? (max((var_0), (((/* implicit */unsigned int) 2029682050)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)30)))))))), (((/* implicit */unsigned int) (((-(((/* implicit */int) arr_1 [i_3])))) > (((/* implicit */int) ((((/* implicit */unsigned int) 1736085853)) == (3648697690U)))))))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */int) (_Bool)1)) : (arr_4 [i_3] [i_3])))) || (((467981933) < (((/* implicit */int) (_Bool)1))))));
    }
    for (int i_4 = 1; i_4 < 23; i_4 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) max(((short)6275), (((/* implicit */short) (signed char)-40))))) & (((/* implicit */int) arr_15 [i_4]))));
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            var_23 = arr_17 [i_4] [i_5] [i_4];
            var_24 = ((/* implicit */unsigned short) arr_18 [i_4] [i_5]);
        }
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) (~((~(((/* implicit */int) var_2))))))), ((~((+(var_9))))))))));
    }
}
