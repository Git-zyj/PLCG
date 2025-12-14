/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146059
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
    for (unsigned long long int i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = arr_4 [i_0] [i_0] [i_1];
                var_11 = ((max((min((((/* implicit */unsigned long long int) arr_2 [i_0])), (var_9))), (((/* implicit */unsigned long long int) var_7)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (short i_4 = 3; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-75)), (arr_4 [i_0] [i_1] [i_3])))) ? (((/* implicit */int) arr_0 [i_4] [i_4 - 3])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))), ((((-(((/* implicit */int) arr_13 [i_2] [i_3] [i_2] [i_1] [i_0])))) ^ (((((/* implicit */int) arr_4 [i_4] [i_4] [i_4])) * (((/* implicit */int) arr_5 [i_1]))))))));
                                var_13 = ((/* implicit */unsigned char) max((((/* implicit */int) arr_7 [i_0] [i_0] [i_0 + 1] [i_0 - 1])), (((((/* implicit */int) ((1891553814) == (((/* implicit */int) (_Bool)1))))) * (((/* implicit */int) (_Bool)1))))));
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((2571872671U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_4 - 1] [i_0 + 2])))))) ? ((~(((/* implicit */int) arr_8 [(unsigned char)2] [i_4 - 1] [i_0 - 2])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_0] [i_4 - 2] [i_0 - 1])) : (((/* implicit */int) var_2))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            {
                                arr_20 [i_0] [i_0] [i_2] [i_5] [i_2] [i_2] |= ((/* implicit */int) var_7);
                                var_15 += ((/* implicit */unsigned char) (unsigned short)28);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_26 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */int) var_10);
                                var_16 = ((/* implicit */int) max((((1152921504606846975LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0 + 1])) - (((/* implicit */int) arr_2 [i_0 + 1])))))));
                                arr_27 [i_0] [i_8] = arr_19 [i_0] [i_0 - 3] [i_0] [i_0 + 1];
                                var_17 = ((/* implicit */signed char) var_2);
                                arr_28 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [4] = ((/* implicit */_Bool) (+(1256556670095560396ULL)));
                            }
                        } 
                    } 
                    var_18 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)14)) << (((-1835613531) + (1835613538))))))));
                }
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    var_19 = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_5)))) & (((((/* implicit */_Bool) arr_11 [i_1] [i_1])) ? (var_6) : (((/* implicit */int) (_Bool)0))))));
                    var_20 = (-(((/* implicit */int) (signed char)-1)));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) var_8))))));
    var_22 = ((/* implicit */_Bool) ((unsigned long long int) (_Bool)1));
}
