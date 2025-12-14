/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160692
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_3 [8ULL] [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
        arr_4 [i_0] [i_0] = ((/* implicit */int) var_6);
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_13 = (+(((/* implicit */int) ((arr_6 [i_0] [i_1]) < (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) arr_1 [i_4]);
                                var_15 = ((/* implicit */signed char) var_6);
                            }
                        } 
                    } 
                    var_16 = ((int) (unsigned char)7);
                }
            } 
        } 
        var_17 = ((/* implicit */short) (~(13132963347204831377ULL)));
    }
    for (long long int i_5 = 1; i_5 < 14; i_5 += 1) 
    {
        arr_17 [i_5] = ((/* implicit */long long int) var_0);
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)255))));
        var_18 = ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) (unsigned char)80)) ? (arr_7 [i_5] [i_5] [i_5]) : (((/* implicit */int) (unsigned char)167)))), (((/* implicit */int) var_6)))), (((((/* implicit */int) arr_11 [i_5 - 1] [i_5] [i_5] [i_5 + 1] [i_5])) + (((/* implicit */int) arr_11 [i_5 + 1] [i_5] [0LL] [i_5 + 1] [i_5]))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) 1748897088))));
        arr_21 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_6])) + (((/* implicit */int) var_3))));
        var_20 = ((/* implicit */long long int) 214639588);
    }
    var_21 |= ((/* implicit */short) var_4);
    var_22 &= ((/* implicit */int) var_4);
    var_23 -= ((/* implicit */int) 18446744073709551615ULL);
}
