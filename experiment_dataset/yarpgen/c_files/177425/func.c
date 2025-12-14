/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177425
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 21; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_3] [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)94))))) | (min((4045057120U), (((/* implicit */unsigned int) (signed char)-123)))))));
                                var_13 *= ((/* implicit */unsigned short) (~((~(((/* implicit */int) ((unsigned short) arr_11 [i_0] [i_1] [i_2] [i_0] [i_4] [i_2 + 4])))))));
                                arr_14 [i_0] [i_1] [i_2] [i_0] [i_4] [i_4] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [(unsigned char)3] [i_0] [i_0]))) / (arr_2 [i_0] [i_1])))) || ((!(arr_10 [i_0] [i_1] [i_0] [i_4]))))), (((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_2 + 1])) && (((/* implicit */_Bool) (signed char)-94))))));
                            }
                        } 
                    } 
                } 
                var_14 -= ((/* implicit */_Bool) min((min((var_10), (((/* implicit */unsigned long long int) arr_9 [i_0])))), (((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) (signed char)-84)), (4294967295U))))))));
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            {
                                arr_26 [i_5] [i_1] = ((/* implicit */unsigned int) (signed char)7);
                                var_15 &= ((/* implicit */unsigned int) var_9);
                                var_16 = ((/* implicit */_Bool) var_8);
                            }
                        } 
                    } 
                } 
                arr_27 [i_0] [(unsigned short)18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_1))) && (((/* implicit */_Bool) (signed char)-51))));
                var_17 = ((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) arr_25 [i_0] [i_0] [24U] [i_0] [(_Bool)0])))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */int) (short)-32333)) & ((+(((/* implicit */int) (_Bool)1))))));
    var_19 = ((/* implicit */unsigned short) ((long long int) min((var_0), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)4))))))));
}
