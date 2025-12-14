/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112552
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
    var_17 = ((/* implicit */unsigned int) min((var_15), ((+(min((((/* implicit */int) var_6)), (var_1)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) 4095)), (var_13)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)55714))));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned char)6])) ? (((/* implicit */long long int) 88473994U)) : (var_5)))) ? (((((/* implicit */_Bool) var_0)) ? (3275185284U) : (arr_2 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))))))));
        var_20 = (~(arr_0 [i_0]));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(4095))))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            var_22 = ((/* implicit */unsigned int) 4097);
            arr_9 [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) (unsigned char)9)) : (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))) : (((((/* implicit */_Bool) arr_3 [14U])) ? (var_12) : (((/* implicit */long long int) var_1))))));
        }
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)247))) : (4294967295LL))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
            /* LoopNest 3 */
            for (long long int i_4 = 3; i_4 < 18; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) ((unsigned short) arr_3 [i_5]))) : (((/* implicit */int) var_16)))))));
                            arr_23 [i_1] [i_3] [i_3] [i_5] [i_6] = ((/* implicit */signed char) ((arr_20 [i_6] [i_4] [i_4 + 1] [i_4 - 1]) != (var_13)));
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_21 [i_6] [i_5] [16U] [16U] [i_1] [i_1])))))));
                            var_26 = ((/* implicit */unsigned int) var_9);
                        }
                    } 
                } 
            } 
        }
        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (unsigned char)64))));
    }
    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)137)), (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)49793)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)64))) & (15222007783682669054ULL)))))) ? (((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((var_13) >= (var_13))))))) : (var_4))))));
}
