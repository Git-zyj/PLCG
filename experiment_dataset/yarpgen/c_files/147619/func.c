/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147619
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
    var_18 = ((/* implicit */_Bool) max((((/* implicit */long long int) var_15)), ((~(((((/* implicit */long long int) ((/* implicit */int) var_11))) & (var_17)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (+(min((((var_16) & (((/* implicit */unsigned int) arr_4 [i_1])))), (((/* implicit */unsigned int) var_9)))))))));
                var_20 = ((/* implicit */signed char) (+(((long long int) arr_3 [i_0] [i_1]))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) arr_4 [i_1]);
                                var_21 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_2] [i_3] [i_4] [i_4])) ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_11)) ? (arr_4 [i_1]) : (((/* implicit */int) arr_3 [i_0] [i_1])))) : (((/* implicit */int) ((var_17) != (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    var_22 = ((/* implicit */_Bool) max((max((arr_9 [i_0]), (((/* implicit */unsigned int) arr_16 [i_5] [i_1] [i_5] [i_0])))), ((-(arr_9 [i_5])))));
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_12))));
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_5])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_5] [i_1] [i_5]))))) ? (var_0) : (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_1])))))))))))));
                }
                for (short i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    var_25 = ((/* implicit */unsigned char) var_9);
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_26 *= ((/* implicit */signed char) arr_7 [(_Bool)1] [i_1] [i_7] [i_8]);
                                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_21 [i_0]))) ? (((/* implicit */int) ((signed char) arr_3 [i_0] [i_0]))) : ((+(((/* implicit */int) arr_3 [i_0] [i_0]))))))) ? ((+(arr_27 [i_0] [i_1] [i_1] [i_6] [i_6] [i_0] [i_8]))) : (((/* implicit */unsigned long long int) ((unsigned int) min((var_13), (((/* implicit */unsigned int) arr_5 [i_7] [i_1] [i_1]))))))));
                                var_28 = var_7;
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_29 = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (min((min((var_6), (var_6))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))))));
}
