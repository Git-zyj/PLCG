/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141584
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
    for (int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_6 [i_1] = arr_1 [i_2];
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [(unsigned short)8] [i_4] [i_4] = ((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1] [i_3]);
                                arr_13 [i_3] [i_3] [i_3] [i_3] [(_Bool)1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) - (((/* implicit */int) (unsigned short)16380))))) ? (((unsigned long long int) (short)21707)) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_4])), (var_7))))))) ? (((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) arr_10 [i_0 + 1] [i_1] [i_2] [i_0] [i_4] [i_3] [i_4])) : (((/* implicit */int) (_Bool)0)))) : (var_7)));
                                var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)98)))))));
                                var_12 = ((/* implicit */unsigned char) (-((-((+(((/* implicit */int) (unsigned char)11))))))));
                                var_13 = ((/* implicit */unsigned short) var_9);
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0])) ? (min((var_2), (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) ((unsigned char) (_Bool)1))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        arr_17 [i_5] [i_5] = ((/* implicit */short) (((((~(((/* implicit */int) arr_10 [i_5] [(signed char)12] [i_5] [i_5] [i_5] [(signed char)12] [6ULL])))) + (2147483647))) >> (((min((((/* implicit */long long int) (unsigned short)21607)), (arr_9 [i_5]))) - (21578LL)))));
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) var_8))));
    }
}
