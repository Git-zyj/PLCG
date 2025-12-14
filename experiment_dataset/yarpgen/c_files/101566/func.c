/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101566
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
    var_17 = ((/* implicit */unsigned short) var_14);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */signed char) arr_9 [i_0] [i_1] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        for (short i_4 = 4; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) (-((~(((/* implicit */int) var_10))))));
                                arr_17 [i_4] [i_0] [i_0] = ((/* implicit */unsigned char) arr_11 [i_0] [i_2 - 2]);
                                arr_18 [i_0] [i_1] [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (arr_3 [i_3]) : (((/* implicit */unsigned long long int) var_0)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1 - 2] [i_1 - 3] [i_2 - 1] [i_0]))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((4294967295U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4 - 3] [i_1] [i_1] [i_0]))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 4; i_5 < 8; i_5 += 4) 
                    {
                        for (short i_6 = 1; i_6 < 10; i_6 += 1) 
                        {
                            {
                                arr_24 [i_0] [(short)1] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_23 [(unsigned char)7] [i_2] [(unsigned char)7])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_2 - 2] [i_5 + 4] [i_6])) : (((/* implicit */int) var_8))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_6 + 2] [i_2 + 1] [3])) == (((/* implicit */int) ((arr_20 [i_1]) < (536870911U))))))) : (((/* implicit */int) (_Bool)1))));
                                arr_25 [i_0] [i_1] [i_0] [i_5] [i_6] = ((/* implicit */unsigned long long int) var_13);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 2; i_7 < 10; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 3; i_8 < 11; i_8 += 1) 
                        {
                            {
                                arr_30 [i_8] [i_7 + 1] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) ((_Bool) (unsigned short)12)))) ? (min((((((/* implicit */_Bool) -1)) ? (836402180025980503ULL) : (((/* implicit */unsigned long long int) 1449510025U)))), (((/* implicit */unsigned long long int) arr_13 [i_7])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [(signed char)9] [i_0] [i_8])))));
                                var_19 = ((/* implicit */signed char) 134217728U);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
