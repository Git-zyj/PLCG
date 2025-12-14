/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12041
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
    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 3914786426U)))) & (max((var_3), (((/* implicit */unsigned int) (unsigned char)107))))))), (((((/* implicit */_Bool) ((int) -6LL))) ? (((/* implicit */long long int) max((var_3), (((/* implicit */unsigned int) var_0))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)149))) : (-6LL))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)159))))), (((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */unsigned long long int) var_9)) : (var_8)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */signed char) 3964426108077443916ULL);
                            var_13 = ((/* implicit */unsigned short) 63LL);
                            var_14 = ((/* implicit */signed char) var_1);
                            arr_9 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */long long int) var_7);
                        }
                    } 
                } 
                arr_10 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned int) (signed char)-36))))) ? (((((/* implicit */int) var_4)) & (((/* implicit */int) (signed char)37)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-11)))))))));
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-28882))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) (~((((!(((/* implicit */_Bool) var_3)))) ? ((-(var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) var_5)))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) (~(max((((/* implicit */int) var_4)), (((((/* implicit */int) var_0)) ^ (((/* implicit */int) (signed char)-73))))))));
                    arr_22 [i_4] = ((/* implicit */signed char) 2523304656223939970ULL);
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_7))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        var_18 &= ((/* implicit */short) ((unsigned int) var_7));
        arr_26 [(_Bool)1] = ((/* implicit */long long int) (+(((/* implicit */int) var_5))));
    }
    var_19 = (!(((/* implicit */_Bool) max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) var_6))))))));
}
