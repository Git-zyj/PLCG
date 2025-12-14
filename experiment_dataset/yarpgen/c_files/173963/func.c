/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173963
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */int) 16591909494214869448ULL);
                                var_14 *= ((/* implicit */unsigned short) arr_9 [i_1] [i_2] [i_1]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        {
                            arr_19 [i_5] [i_5] [i_1] [i_5] [i_5] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1842734877)) ? (((((/* implicit */_Bool) (short)-7795)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)61)))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_5] [i_0]))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1500142330)) ? (var_0) : (((/* implicit */int) (signed char)10))))) : (min((((/* implicit */unsigned int) (short)20160)), (2741413497U)))))));
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_7)) >> (((/* implicit */int) arr_17 [i_0] [(short)10] [16ULL] [i_0] [(short)10] [i_0])))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)20160)) | (arr_2 [i_0] [i_0])))), (arr_12 [i_0] [i_1 + 1] [2LL] [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_1 - 1]))))));
                            arr_20 [i_1] [i_1] &= ((/* implicit */signed char) ((short) var_6));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 3; i_8 < 9; i_8 += 3) 
        {
            {
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_11)), (((((/* implicit */int) var_5)) - (((/* implicit */int) (_Bool)0))))))) ? (((min((((/* implicit */unsigned long long int) var_1)), (515071087536460932ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_9 [i_8] [(unsigned short)8] [i_8])) : (((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)20160)) ? (((/* implicit */int) arr_13 [i_7] [i_7] [i_8] [i_8])) : (((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) arr_17 [i_7] [i_7] [i_7] [i_7] [(short)20] [i_8])))))));
                var_17 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_7 [i_8 + 1] [i_8 - 3] [i_8] [i_8])) ? (((/* implicit */int) (short)20160)) : (max((-15752669), (((/* implicit */int) arr_10 [i_7])))))));
            }
        } 
    } 
}
