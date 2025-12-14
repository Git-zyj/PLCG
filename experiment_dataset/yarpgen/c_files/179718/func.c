/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179718
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned short) (-(arr_1 [i_1] [i_0])));
                var_20 = ((/* implicit */long long int) 10461048148963808709ULL);
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (max((((/* implicit */int) var_18)), ((~(((/* implicit */int) (signed char)-28)))))) : ((-((~(((/* implicit */int) (unsigned short)0))))))));
    var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14)))) / (((/* implicit */int) var_16))))), (var_11)));
    /* LoopSeq 2 */
    for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_5 [i_2]) - (arr_5 [i_2])))) ? ((~(arr_7 [i_2]))) : (((/* implicit */long long int) (-(2013265920U)))))))));
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (+(((unsigned int) 2281701376U)))))));
        var_25 = ((/* implicit */int) min((((((/* implicit */_Bool) (+(arr_5 [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) arr_6 [i_2])))))) : (arr_5 [i_2]))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (+(var_4)))), ((-(2281701376U))))))));
        var_26 = ((/* implicit */short) (-2147483647 - 1));
    }
    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_4 = 1; i_4 < 23; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_5 = 1; i_5 < 21; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    {
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_8 [i_5 + 1])) ? (((/* implicit */int) max(((unsigned short)52626), (((/* implicit */unsigned short) (_Bool)0))))) : (max((-607299286), (((/* implicit */int) arr_11 [i_3])))))), (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_8 [i_4 - 1])) - (13458))))))))));
                        var_28 = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned int) arr_12 [i_6] [i_6])), (2281701376U)))));
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned int) ((max((arr_14 [i_3] [i_3] [i_4] [i_4 + 1]), (((/* implicit */int) arr_18 [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1])))) == (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_1))))))));
            var_30 = arr_14 [i_3] [i_3] [i_3] [i_3];
        }
        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) (-(arr_9 [i_3]))))));
        var_32 = ((/* implicit */_Bool) var_7);
    }
}
