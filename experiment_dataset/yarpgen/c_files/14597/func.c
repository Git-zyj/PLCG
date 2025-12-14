/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14597
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) 5203441691815559390ULL);
                            var_18 = ((/* implicit */short) arr_7 [i_0] [i_0]);
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) min(((short)7360), (((/* implicit */short) (unsigned char)26))))) && (((((/* implicit */int) var_12)) <= (arr_6 [i_0] [i_0] [i_0]))))))));
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_20 = ((/* implicit */unsigned short) (short)27881);
                                var_21 = arr_3 [i_1] [i_3] [(short)17];
                                var_22 *= ((/* implicit */unsigned long long int) var_14);
                            }
                            /* vectorizable */
                            for (unsigned int i_5 = 1; i_5 < 18; i_5 += 3) 
                            {
                                var_23 = ((/* implicit */long long int) arr_11 [i_0] [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_0]);
                                var_24 = ((/* implicit */int) 3241892360U);
                                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_0))));
                            }
                            var_26 &= ((/* implicit */unsigned short) min((min((((/* implicit */short) arr_10 [i_3] [i_3] [i_3] [i_2])), (arr_13 [i_0] [i_2] [i_0] [i_0] [i_0]))), (((/* implicit */short) arr_10 [i_0] [(short)12] [i_2] [i_2]))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            {
                                var_27 = arr_18 [i_0] [i_0] [i_0];
                                var_28 = arr_13 [i_6 - 1] [i_0] [i_6 - 1] [i_6 - 1] [i_6 - 1];
                                var_29 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_1] [i_6 - 1] [i_8])) - (((/* implicit */int) arr_14 [3] [i_7] [i_0]))))), (var_6)));
                            }
                        } 
                    } 
                } 
                var_30 &= ((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) % (-1LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)16652)) ? (((/* implicit */int) arr_2 [i_1] [i_0] [i_0])) : (((/* implicit */int) (short)24267)))))));
            }
        } 
    } 
    var_31 |= ((/* implicit */int) var_15);
}
