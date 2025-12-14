/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140622
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) arr_0 [i_0]);
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5] [i_4] [i_3] [i_4])) ? (213557990U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(unsigned short)12])))))) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) arr_3 [i_3]))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_3]))) : (arr_6 [i_3] [i_4])))) ? (((arr_11 [i_3] [i_3]) ? (arr_2 [i_5] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 213557990U)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (signed char)55)))))))));
                    /* LoopNest 2 */
                    for (short i_6 = 3; i_6 < 12; i_6 += 4) 
                    {
                        for (signed char i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_14))));
                                arr_24 [i_3] [i_3] [i_3] [(short)9] [(short)9] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 7932597770947154611ULL)) ? (arr_2 [i_3] [i_5]) : (((arr_11 [i_3] [i_3]) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20901)) ? (arr_20 [i_3]) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) arr_23 [i_4] [i_5] [i_6 - 1] [i_6 - 1]))))))));
                            }
                        } 
                    } 
                    arr_25 [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-82)) || (((/* implicit */_Bool) -9088806882491386166LL))));
                }
                var_23 = ((/* implicit */unsigned short) ((var_0) % (var_0)));
                arr_26 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? ((~(((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_3] [i_3] [i_3] [8LL]))) : (3136686795650390604ULL))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_14)) - (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) arr_18 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_3]))) : (arr_6 [i_3] [i_4]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_21 [i_3] [i_3] [i_3] [9LL] [i_3] [i_3] [14LL])))))))));
            }
        } 
    } 
    var_24 |= ((/* implicit */long long int) var_16);
}
