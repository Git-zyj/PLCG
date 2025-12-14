/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178091
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
    var_10 = ((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */unsigned long long int) (-(var_8)))), (var_6))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_9))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (var_9))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    var_11 = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_0]))));
                    arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)-93)), (0U)));
                    arr_8 [i_1] [i_1] [i_0] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_5 [i_0 - 1] [i_2 - 1] [i_2])))) ? ((+(((/* implicit */int) min((arr_4 [i_0] [i_0]), (arr_3 [i_1] [i_0])))))) : ((+(((/* implicit */int) max((var_3), (arr_4 [i_0] [i_0]))))))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_3 = 2; i_3 < 17; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */short) (~(((unsigned int) arr_9 [i_4] [i_4] [i_3 + 1]))));
                                var_13 = ((/* implicit */_Bool) ((short) arr_2 [i_5] [i_1]));
                                var_14 ^= ((/* implicit */_Bool) arr_4 [i_0] [i_0]);
                                var_15 = ((/* implicit */unsigned long long int) ((short) ((signed char) arr_2 [i_0] [i_0])));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_0 + 3]))));
                    arr_17 [i_3] [i_1] [i_0 + 1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_13 [i_3] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 2; i_6 < 17; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 4; i_7 < 14; i_7 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) ((_Bool) arr_15 [i_3 + 1] [i_0 + 3]));
                                arr_25 [i_0] [i_1] [i_1] [i_7] [i_7] [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) var_2))));
                                var_17 ^= ((/* implicit */unsigned int) ((short) arr_15 [i_6 - 1] [i_7 - 1]));
                            }
                        } 
                    } 
                }
                for (short i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    arr_30 [i_0] [i_0] [i_0] = ((/* implicit */short) max((((((/* implicit */int) var_3)) / (((/* implicit */int) ((short) arr_14 [i_0 - 1] [i_0 - 1] [i_1] [i_8] [i_0]))))), (max((min((var_7), (((/* implicit */int) var_3)))), (((/* implicit */int) arr_24 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                    arr_31 [i_0] [i_8] [i_8] [i_1] = ((/* implicit */short) ((min((((var_6) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_8] [i_8])) || (((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0 - 2]))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_26 [i_0 - 2] [i_1] [i_8])))))))));
                }
                arr_32 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_14 [i_0] [i_0 + 1] [i_0] [i_1] [i_0]), (((/* implicit */short) arr_11 [i_0] [i_0 - 1] [i_0 - 1] [i_0]))))) - (((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */int) min((var_3), (arr_3 [i_0] [i_0])))) : (min((var_7), (((/* implicit */int) arr_3 [i_1] [i_0]))))))));
                var_18 = ((/* implicit */signed char) min((var_4), (((/* implicit */unsigned short) var_5))));
            }
        } 
    } 
}
