/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183185
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [8LL] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (unsigned short)29586))) && (((/* implicit */_Bool) 4213467329U))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((3071302290U) > (1223665006U));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 16; i_7 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) (~(min((((/* implicit */unsigned int) arr_19 [0U] [i_7 - 1] [0U] [0U] [i_7] [i_7])), (((((/* implicit */_Bool) 1223664989U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (1223664999U))))))))));
                                var_12 = ((/* implicit */int) var_8);
                                var_13 ^= ((/* implicit */signed char) min((((/* implicit */int) (short)-28716)), ((-(((/* implicit */int) ((((/* implicit */_Bool) 14334411143604996339ULL)) && (arr_13 [i_3] [i_4] [i_5]))))))));
                                var_14 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)233)) + (((/* implicit */int) (unsigned char)51))))) ? (min((-3636909635377978630LL), (3636909635377978645LL))) : ((-(3849151727230291910LL)))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (arr_21 [9U] [i_4] [i_3] [i_3] [i_3] [2LL])))) ? (((/* implicit */unsigned int) ((int) (unsigned char)255))) : (((((/* implicit */unsigned int) ((/* implicit */int) min((arr_9 [i_3]), (arr_11 [i_3]))))) * (arr_21 [i_3] [i_3] [i_3] [i_3] [i_4] [i_4])))));
            }
        } 
    } 
}
