/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141753
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) max((16209464698067482716ULL), (((/* implicit */unsigned long long int) (unsigned char)30)))))));
            arr_7 [(short)8] |= ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_1])) != (((/* implicit */int) ((var_7) <= (((/* implicit */long long int) ((/* implicit */int) var_14))))))));
            var_17 += ((/* implicit */signed char) (+(arr_5 [i_1] [i_1])));
            arr_8 [6U] &= ((/* implicit */unsigned char) ((unsigned long long int) max(((-(((/* implicit */int) (unsigned char)127)))), (arr_6 [i_0 + 1] [i_1]))));
        }
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 18; i_2 += 4) 
        {
            var_18 *= ((/* implicit */signed char) arr_0 [(signed char)8]);
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        {
                            var_19 *= ((/* implicit */unsigned long long int) (~(((long long int) arr_6 [i_2] [i_3]))));
                            var_20 -= ((/* implicit */unsigned long long int) var_12);
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_6 = 3; i_6 < 17; i_6 += 4) 
        {
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((unsigned short) arr_22 [4])))));
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) arr_20 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0]))));
        }
        var_23 &= ((/* implicit */unsigned char) max((16209464698067482703ULL), (((/* implicit */unsigned long long int) (((~(arr_22 [(unsigned short)14]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)128)))))))))));
    }
    var_24 = ((/* implicit */unsigned long long int) var_6);
}
