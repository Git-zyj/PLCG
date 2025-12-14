/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142654
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                arr_7 [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_3 [i_1] [i_1] [i_1]) : (arr_1 [i_0] [i_1 - 2]))))));
                arr_8 [i_1] = ((((6701479582195023709ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))))) << (((/* implicit */int) var_3)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 4; i_2 < 12; i_2 += 2) 
    {
        var_11 = ((/* implicit */unsigned short) 18446744073709551615ULL);
        var_12 = ((/* implicit */unsigned char) ((unsigned long long int) max((arr_3 [i_2 + 1] [i_2] [i_2]), (arr_0 [i_2]))));
    }
    var_13 = ((/* implicit */long long int) ((var_10) <= (((/* implicit */unsigned long long int) var_2))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 4) 
    {
        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            {
                arr_15 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >> (((((unsigned long long int) 14033024379185909964ULL)) - (14033024379185909955ULL)))));
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 3; i_6 < 13; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 2; i_7 < 13; i_7 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) 5409901631841274272LL)) ^ (0ULL))))) | (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_20 [12ULL] [11ULL] [i_4] [(unsigned short)13] [11ULL])), (var_10)))) ? (((/* implicit */int) arr_13 [i_3 + 1] [i_5] [i_4])) : (((/* implicit */int) (unsigned short)19815))))));
                                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4] [(signed char)12] [i_4])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [i_6] [i_4])))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_4] [i_5 - 1] [i_4])) - (((/* implicit */int) arr_13 [i_4] [i_5] [i_4])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
