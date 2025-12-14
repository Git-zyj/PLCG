/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151584
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [(unsigned char)14] = ((/* implicit */unsigned long long int) var_3);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */signed char) 4444440361287418911ULL);
                    arr_9 [2ULL] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((long long int) (unsigned char)68));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_2] [12LL] [i_0] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((var_1) ? (3645095241U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40689)))))), (((((/* implicit */_Bool) arr_4 [i_3] [i_4])) ? (3047781423910570779LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))))))))));
                                var_18 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24839)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)24846))))) ? (arr_1 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45833)))))) ? (-5762639355302888229LL) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_13 [(unsigned short)7] [i_1 + 2] [i_2 + 2] [i_3])))))))));
                                arr_16 [(unsigned char)8] [i_1 - 1] [(unsigned char)8] [i_1] [i_2 - 2] [i_3] [14LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_2 - 2] [i_2 + 2])) ? (((((/* implicit */int) arr_14 [i_1] [i_2 + 1])) ^ (((/* implicit */int) (unsigned short)10470)))) : (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) (short)32756)))) : (((/* implicit */int) (unsigned short)0))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned int i_5 = 2; i_5 < 24; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            {
                var_19 = (+(1522457500219383993LL));
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_19 [i_5 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6]))) : (arr_19 [i_5 + 1]))))))));
                var_21 = ((/* implicit */unsigned short) (unsigned char)255);
                var_22 = ((/* implicit */unsigned short) (unsigned char)0);
            }
        } 
    } 
    var_23 = ((/* implicit */int) (((~(var_14))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    var_24 = ((/* implicit */unsigned long long int) var_3);
}
