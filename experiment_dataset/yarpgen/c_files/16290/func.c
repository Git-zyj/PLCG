/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16290
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
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) (unsigned short)15464))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) (-(((/* implicit */int) var_3))));
                                arr_15 [i_0] [i_1] [(_Bool)1] |= ((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)41097));
                                var_14 &= ((/* implicit */signed char) arr_0 [i_0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 1; i_6 < 16; i_6 += 4) 
                        {
                            {
                                arr_20 [i_0] [10ULL] [(unsigned short)10] [(unsigned short)12] [6U] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)34488)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_8 [i_6 - 1] [i_0 + 2] [i_1 - 1]))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */int) (short)17314)) : (((/* implicit */int) (_Bool)1))));
                                arr_22 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1015808)) ? ((-(arr_12 [i_0] [i_1] [i_1] [(short)15] [i_2] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 8179639652761633567LL))))))))));
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58573))) : (1383692334U)))))) ? ((-(arr_14 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)44125))))));
                                arr_23 [i_0] [(unsigned short)14] [i_2] [(unsigned short)18] [i_6] |= ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_0))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (short)0))))));
                }
                var_17 = ((/* implicit */unsigned short) var_7);
                var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))) * (((((/* implicit */_Bool) arr_18 [i_0 + 2] [i_0 - 1] [i_1 - 1] [i_0])) ? (((1508926544U) ^ (((/* implicit */unsigned int) -1015831)))) : (((/* implicit */unsigned int) (~(-2147483640))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((_Bool) (signed char)-88)) ? (7364560283008489779ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)60340))))))))));
    var_20 = ((/* implicit */signed char) min((min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))))), (min(((unsigned short)30930), ((unsigned short)44122))))), (((/* implicit */unsigned short) var_11))));
}
