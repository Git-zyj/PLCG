/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168172
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
    var_13 = ((/* implicit */short) min((((/* implicit */unsigned int) max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) (short)-5788)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))))), (min((((/* implicit */unsigned int) 2036469987)), (((unsigned int) var_11))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (signed char i_3 = 1; i_3 < 14; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)1803)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) (unsigned char)79))));
                        var_14 += ((/* implicit */signed char) ((arr_7 [i_1] [i_1 + 2] [(unsigned short)13] [i_1]) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_10 [(signed char)7] [i_3 + 4] [i_1 - 2] [i_0] [i_0]))));
                        var_15 += ((int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_8))));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((/* implicit */int) ((unsigned char) var_11))) : (((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 1] [i_0]))));
                        var_17 |= ((/* implicit */unsigned long long int) arr_8 [i_2] [i_1] [i_3 + 4] [i_1 - 3]);
                    }
                } 
            } 
        } 
        var_18 &= ((/* implicit */unsigned short) arr_2 [i_0 - 1]);
    }
    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        var_19 ^= ((/* implicit */short) var_8);
        var_20 += ((/* implicit */unsigned char) ((_Bool) ((signed char) arr_13 [i_4] [i_4])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) 17640084803561094435ULL);
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_17 [i_5] [i_5] [i_5]), (arr_17 [i_4] [i_4] [i_4])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_16 [i_4] [i_4] [i_4]))));
                    var_23 = ((/* implicit */unsigned int) var_3);
                }
            } 
        } 
        var_24 += ((/* implicit */long long int) ((unsigned long long int) ((unsigned char) ((unsigned long long int) (_Bool)0))));
    }
    var_25 = ((/* implicit */unsigned long long int) ((unsigned short) var_2));
    var_26 += ((/* implicit */short) ((signed char) min((((/* implicit */unsigned long long int) var_2)), (min((((/* implicit */unsigned long long int) var_12)), (var_6))))));
}
