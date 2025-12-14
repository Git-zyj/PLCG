/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171954
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((long long int) (short)-6611));
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((arr_4 [i_0] [i_1] [10ULL] [(short)0]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [(unsigned char)15]))))), (min((((/* implicit */unsigned int) var_7)), (var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_2] [i_2] [i_2]))) > (max((((/* implicit */unsigned long long int) var_0)), (arr_0 [i_0]))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_1] [(short)15]))))) ? (min((((/* implicit */long long int) var_1)), (-1LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
                    {
                        var_16 = arr_9 [i_0] [i_1] [3ULL] [i_3];
                        var_17 = ((/* implicit */unsigned int) ((((max((arr_5 [i_1]), (((/* implicit */long long int) var_3)))) > (((/* implicit */long long int) ((/* implicit */int) (!(arr_3 [i_0]))))))) ? ((-(min((((/* implicit */long long int) arr_3 [i_3])), (-3LL))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (arr_6 [i_0] [i_0])))) ? (max((((/* implicit */long long int) arr_2 [i_0] [11U] [i_3])), (arr_5 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned long long int) 0LL);
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) max((var_14), (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_2] [i_2]))))) ? (max((min((-3LL), (((/* implicit */long long int) arr_11 [i_0] [(short)1] [(unsigned char)7] [i_4])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [14ULL] [(short)4] [i_4])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) ((3LL) == (((/* implicit */long long int) arr_6 [i_1] [i_4]))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_2] [i_4]))))))))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned char) var_7);
                        var_21 *= ((/* implicit */unsigned int) ((unsigned long long int) ((var_5) ? ((+(arr_5 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((-3LL) <= (-1LL))))))));
                        var_22 = ((/* implicit */short) var_6);
                    }
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (~(((/* implicit */int) max((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_10 [i_2] [i_2] [i_2] [i_2] [i_2])))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) 13LL);
    var_25 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 2LL)) ? (-2LL) : (-3LL))), ((~(min((var_4), (((/* implicit */long long int) var_1))))))));
}
