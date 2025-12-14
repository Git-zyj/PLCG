/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164668
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) ((short) arr_4 [i_1] [i_1]));
                var_16 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_3)))) ? (((int) ((((/* implicit */int) var_13)) & (((/* implicit */int) arr_1 [i_1]))))) : (((/* implicit */int) var_14))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_4))) > (arr_6 [i_2] [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            for (long long int i_4 = 2; i_4 < 16; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */short) 1605932572);
                                arr_20 [i_2] [i_2] [(short)13] [i_2] [i_5] [(unsigned short)7] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_8))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_8 [(_Bool)1] [i_3] [i_3])))) : (arr_16 [i_4] [10ULL] [i_4 - 1] [i_4 - 1])));
                                arr_21 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */int) arr_12 [i_4 - 2] [9ULL] [i_4 - 1])) != (((/* implicit */int) arr_12 [i_4 + 2] [i_4 + 2] [i_4 + 2]))));
                            }
                        } 
                    } 
                    arr_22 [i_4] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_4 + 1] [i_2] [(_Bool)1] [(_Bool)1])) || (((/* implicit */_Bool) arr_19 [i_2] [2U] [i_4 + 1] [(_Bool)1] [2U] [(_Bool)1]))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
    {
        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            {
                var_19 |= ((((long long int) arr_25 [2U] [i_8])) % (((/* implicit */long long int) ((/* implicit */int) ((short) var_13)))));
                var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((signed char) (~(arr_25 [i_8] [i_7]))))), (((unsigned short) arr_26 [i_8]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    var_21 *= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) arr_27 [(unsigned char)12] [i_8] [i_9] [i_8])) == (((/* implicit */int) arr_26 [i_7])))));
                    var_22 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1605932572)))))) * (min((arr_23 [i_7]), (((/* implicit */unsigned long long int) arr_26 [(signed char)14])))))) | (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)44288))))) ? ((+(arr_23 [17ULL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_23 = ((/* implicit */short) arr_26 [i_9]);
                }
                var_24 = ((/* implicit */short) ((unsigned int) ((signed char) ((unsigned long long int) var_13))));
                var_25 = ((/* implicit */signed char) arr_25 [i_7] [14ULL]);
            }
        } 
    } 
}
