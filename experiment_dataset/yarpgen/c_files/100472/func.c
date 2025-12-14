/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100472
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) ((((/* implicit */int) max(((unsigned short)0), (arr_3 [i_0])))) == (((/* implicit */int) ((signed char) arr_3 [i_0]))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_3])) : (((((/* implicit */_Bool) (-(arr_9 [i_3] [i_2] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) (+(arr_7 [i_0] [i_1] [i_2] [i_2])))) : (((unsigned long long int) arr_0 [i_0] [i_1]))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */int) max((2962925369U), (((/* implicit */unsigned int) ((signed char) arr_0 [i_0] [i_1 + 2])))));
                        var_11 = ((/* implicit */unsigned char) (((~(((unsigned int) (short)15666)))) * (((/* implicit */unsigned int) ((((/* implicit */int) ((arr_0 [i_2] [i_0]) || (((/* implicit */_Bool) arr_1 [i_2]))))) * (((/* implicit */int) min(((unsigned short)18), (((/* implicit */unsigned short) var_2))))))))));
                    }
                } 
            } 
        } 
        var_12 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) / (747140548921210510ULL))));
        arr_13 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)65506)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))) : (4461306928691479019LL))) * (((/* implicit */long long int) ((/* implicit */int) ((131071ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_13 -= ((/* implicit */signed char) arr_7 [i_4] [i_4] [i_4] [(short)14]);
        arr_16 [i_4] [i_4] = ((/* implicit */int) (signed char)27);
    }
    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (~((+(arr_1 [i_5]))))))));
        arr_19 [i_5] = ((/* implicit */unsigned int) arr_5 [i_5] [i_5] [i_5]);
        var_15 = ((/* implicit */int) max((((/* implicit */long long int) arr_10 [i_5] [0ULL] [i_5] [i_5])), (5792555890135881777LL)));
    }
    var_16 = ((/* implicit */unsigned char) (_Bool)1);
}
