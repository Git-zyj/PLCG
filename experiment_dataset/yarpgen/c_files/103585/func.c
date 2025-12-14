/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103585
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((-(((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_2])))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) 524287)))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_3] = arr_9 [i_3] [i_1] [i_2];
                        arr_12 [i_3] = ((/* implicit */unsigned char) var_12);
                        var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))) | (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        arr_15 [i_4] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) -583188108);
                        arr_16 [i_1] [i_1] = ((/* implicit */unsigned short) ((arr_6 [i_0] [i_1] [i_2] [i_0]) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                        arr_17 [i_0] [i_0] [i_0] [i_2] [i_4] = ((/* implicit */unsigned char) (~(524287)));
                        arr_18 [i_4] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) var_3)))));
                    }
                    var_17 = ((arr_1 [i_1]) | (((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_2])));
                    arr_19 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_1] [i_0]);
                }
            } 
        } 
        arr_20 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) arr_21 [i_5] [i_5])) | (((/* implicit */int) (_Bool)1)))))));
        arr_23 [i_5] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_5] [i_5])) ? (((/* implicit */int) arr_5 [i_5] [i_5] [i_5] [i_5])) : (max((arr_14 [i_5] [i_5]), (((/* implicit */int) (_Bool)1))))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_14 [i_5] [i_5])))) : (min((-189361540718071389LL), (((/* implicit */long long int) var_11))))))));
        arr_24 [i_5] = ((/* implicit */_Bool) min((((((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_5]))))) | ((-(-8837582799333320897LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */int) arr_21 [i_5] [i_5])) | (-524293))) : (((/* implicit */int) ((short) var_10))))))));
    }
    var_19 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) (unsigned short)46399)), (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_12))))), (((/* implicit */unsigned long long int) ((var_8) ? ((~(((/* implicit */int) var_2)))) : (((((/* implicit */int) var_0)) | (((/* implicit */int) var_6)))))))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) var_0))) ? (((((/* implicit */_Bool) max(((-2147483647 - 1)), (((/* implicit */int) var_11))))) ? ((-(((/* implicit */int) var_2)))) : (((((/* implicit */int) var_4)) | (((/* implicit */int) var_2)))))) : (((/* implicit */int) var_14))));
}
