/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111669
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
    var_19 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 7U))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_20 |= ((/* implicit */unsigned int) (_Bool)0);
                    arr_6 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (+(arr_0 [1])))) > (var_8)));
                    var_21 = ((/* implicit */int) (unsigned short)39780);
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) 4294967295U))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (4294967294U)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_23 += ((/* implicit */int) var_16);
                                arr_12 [i_0] [i_0] = ((((/* implicit */int) arr_7 [(unsigned short)0])) ^ (((/* implicit */int) ((unsigned short) var_3))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_13 [i_0] [i_0] = ((((/* implicit */_Bool) arr_1 [i_0])) ? (16646144U) : (((/* implicit */unsigned int) arr_1 [i_0])));
        var_24 ^= arr_0 [i_0];
    }
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        for (unsigned char i_6 = 2; i_6 < 14; i_6 += 2) 
        {
            for (short i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                {
                    arr_23 [i_5] [i_5] [11LL] = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_22 [i_6] [i_6 - 1] [i_6 + 1] [i_6 - 1])))), (((((/* implicit */_Bool) arr_22 [i_6 + 1] [(signed char)9] [i_6 - 1] [i_6 - 2])) ? (((/* implicit */int) arr_22 [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1])) : (((/* implicit */int) arr_22 [i_6] [i_6 - 1] [i_6 + 1] [i_6 - 2]))))));
                    var_25 = ((/* implicit */unsigned int) arr_15 [i_5]);
                    var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_16 [i_6 + 1] [i_6 - 2]), (((/* implicit */long long int) (_Bool)1))))) ? (((long long int) min((((/* implicit */int) (unsigned short)33403)), (arr_17 [i_7])))) : (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)0), ((_Bool)1)))))));
                    arr_24 [i_7] [i_7] [(unsigned char)11] [i_7] = ((/* implicit */unsigned long long int) ((((arr_19 [i_6 - 2] [i_6 - 2] [i_6 + 1]) != (arr_19 [i_6 - 2] [i_6 - 1] [i_6 - 1]))) ? (arr_19 [i_6 - 2] [i_6 + 1] [i_6 - 1]) : (arr_19 [i_6 + 1] [i_6 - 2] [i_6 - 1])));
                }
            } 
        } 
    } 
}
