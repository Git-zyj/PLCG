/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114485
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            arr_6 [0ULL] = ((/* implicit */short) (+(((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) >> (((((/* implicit */int) (short)9878)) - (9866)))))));
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-105))))) < (arr_3 [i_1] [i_0])));
        }
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    {
                        var_18 = ((short) min((((/* implicit */long long int) ((((/* implicit */int) (signed char)-3)) > (((/* implicit */int) (_Bool)0))))), ((-9223372036854775807LL - 1LL))));
                        var_19 = ((/* implicit */signed char) (+((~(((/* implicit */int) arr_1 [i_3]))))));
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_15 [i_2] [i_2] [i_2] [3ULL]) ? (((/* implicit */int) arr_15 [i_0] [i_2] [i_3] [i_2])) : (((/* implicit */int) arr_15 [i_0] [i_2] [i_3] [i_5]))))) ? (((((/* implicit */int) arr_1 [i_4])) - (((/* implicit */int) arr_15 [i_5] [i_3] [i_2] [i_0])))) : (((/* implicit */int) arr_15 [i_4] [i_3] [i_2] [i_0]))));
                            var_21 += ((((/* implicit */_Bool) (+((~(3110410628U)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_16 [i_0] [i_2] [i_3] [i_4] [i_5] [i_5])) == (((/* implicit */int) arr_16 [i_0] [i_2] [i_3] [i_4] [i_4] [i_3])))))) : (((((/* implicit */long long int) arr_14 [i_0] [i_2] [i_0] [i_4] [i_0] [i_3])) - (arr_7 [i_0] [i_2] [i_4]))));
                            arr_18 [(short)5] [i_2] [i_3] [i_3] [i_3] [i_0] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) 3674231838U)), (4240731723944724383LL))))));
                        }
                        for (short i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) min((((((/* implicit */_Bool) arr_9 [i_3] [i_2] [i_6] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_6] [i_3] [i_4] [i_4]))) : (6652865245903641540LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0] [i_2] [i_3] [i_4])) - (((/* implicit */int) arr_9 [i_4] [5LL] [i_3] [i_4]))))))))));
                            arr_22 [i_3] = ((/* implicit */unsigned char) (~((~(0LL)))));
                            arr_23 [i_0] [i_2] [i_3] [i_4] [i_4] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_2] [i_3])) << (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_0] [i_2])) || (((/* implicit */_Bool) -2099485013)))))));
                        }
                    }
                } 
            } 
            arr_24 [i_0] [i_0] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(1208374775U))))));
        }
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) min((((/* implicit */short) (_Bool)1)), ((short)16370))))));
    }
    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) var_9))));
    var_25 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 2 */
    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (~((~(arr_25 [i_7]))))))));
        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_28 [i_7])))))))));
    }
    for (int i_8 = 0; i_8 < 19; i_8 += 2) 
    {
        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */int) (short)13664)) == (((/* implicit */int) min((arr_30 [i_8] [i_8]), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)1)))))))))))));
        var_29 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_8])) ? (((/* implicit */int) arr_28 [i_8])) : (((/* implicit */int) arr_29 [i_8] [2U]))))) ? (((/* implicit */int) min((((/* implicit */short) arr_30 [i_8] [i_8])), ((short)-23831)))) : (((/* implicit */int) arr_30 [i_8] [i_8])))), ((+(((/* implicit */int) (unsigned char)118))))));
    }
}
