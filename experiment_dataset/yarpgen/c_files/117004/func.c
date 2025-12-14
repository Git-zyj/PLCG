/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117004
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_10 = ((/* implicit */signed char) min((((/* implicit */int) (_Bool)0)), ((+(((/* implicit */int) (short)-23885))))));
        var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */int) (short)-23885)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
        {
            var_12 |= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23864)) ? (((/* implicit */int) arr_0 [(unsigned char)6])) : (((/* implicit */int) var_3))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (arr_1 [i_1])))));
            var_13 = (signed char)59;
            var_14 = ((/* implicit */int) ((unsigned short) (-(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)29))) + (4294967295U))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
        {
            arr_9 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)255))))), (var_1))))));
            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_7 [i_0] [i_2])))), ((-(((/* implicit */int) arr_0 [i_2])))))))));
        }
        arr_10 [13LL] = ((/* implicit */signed char) ((long long int) ((short) (signed char)50)));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 3; i_6 < 13; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 12; i_7 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3]))) : (arr_3 [i_3] [i_3])));
                                arr_22 [i_3] [3LL] [0LL] [i_6 - 3] [i_7] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)3))));
                                arr_23 [3ULL] [i_3] [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) (!((_Bool)1)));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) 1742698797U);
                    arr_24 [i_3] [i_4] [i_3] [i_3] = ((/* implicit */unsigned int) ((signed char) arr_4 [i_3]));
                    var_18 = ((/* implicit */unsigned char) arr_11 [i_4]);
                }
            } 
        } 
        arr_25 [(signed char)8] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (_Bool)1))))) : (-611484472330180227LL)));
        arr_26 [i_3] = ((/* implicit */unsigned long long int) ((_Bool) arr_6 [(signed char)14] [(signed char)14] [i_3]));
    }
    var_19 = ((/* implicit */_Bool) ((unsigned short) var_1));
}
