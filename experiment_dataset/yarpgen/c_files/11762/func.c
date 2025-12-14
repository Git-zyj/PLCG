/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11762
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
    var_19 = ((/* implicit */unsigned long long int) ((unsigned int) ((short) min((var_13), (((/* implicit */short) (_Bool)1))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_5)) : (min((15U), (((/* implicit */unsigned int) var_10))))))) ? (((/* implicit */int) (unsigned char)128)) : (((((/* implicit */int) arr_5 [i_2] [i_1])) | (((/* implicit */int) min((((/* implicit */short) (unsigned char)117)), (arr_5 [i_2] [i_2]))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_20 *= ((/* implicit */unsigned short) ((unsigned long long int) (+(((/* implicit */int) min((((/* implicit */short) var_9)), (var_11)))))));
                                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((signed char) min(((unsigned char)194), (((/* implicit */unsigned char) (signed char)-28))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 2; i_5 < 20; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            {
                                arr_19 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) min((((((/* implicit */int) var_17)) >> (((/* implicit */int) ((((/* implicit */int) var_15)) < (((/* implicit */int) arr_10 [0ULL]))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_6] [i_5 + 2] [i_2] [i_1]))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)27039))) : (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_10 [i_5])))))))));
                                arr_20 [i_0] [i_1] [i_2 + 1] [i_2] [i_6] = ((/* implicit */unsigned short) var_15);
                                var_22 = ((/* implicit */int) ((long long int) min((((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)17113))))))));
                                var_23 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_1))))) ? (arr_13 [i_0] [i_5 - 2]) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_15))))))), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)42)) || (((/* implicit */_Bool) (short)(-32767 - 1)))))))))));
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_6 [i_5 + 1] [i_2 + 1] [i_1 + 1] [i_0 - 2])))) && (((_Bool) ((arr_6 [i_0] [i_0] [i_2] [i_6]) <= (((/* implicit */int) (short)-17114)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
