/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181380
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_11 [i_3] [(short)19] [i_1] [i_0] = ((/* implicit */unsigned short) arr_9 [i_0]);
                            var_19 = ((/* implicit */short) (_Bool)0);
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_3 + 1])) ? (arr_4 [i_1 - 1] [i_3 - 2]) : (arr_4 [i_1 - 2] [i_3 + 1])))) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_3])) || (((/* implicit */_Bool) arr_8 [i_0] [i_2]))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-24925))) + (arr_9 [i_0])))) ? (((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 1])) : (max((((/* implicit */int) var_5)), (arr_2 [i_0])))))));
                            arr_12 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */_Bool) max((((((_Bool) (unsigned short)2637)) ? (((/* implicit */int) ((_Bool) 14353943835108860579ULL))) : (((/* implicit */int) ((unsigned short) (signed char)(-127 - 1)))))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)8229)) <= (((/* implicit */int) arr_6 [i_1] [8ULL])))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) arr_8 [i_0] [i_1]);
                /* LoopNest 3 */
                for (signed char i_4 = 4; i_4 < 19; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 4) 
                    {
                        for (short i_6 = 3; i_6 < 18; i_6 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) (short)27818);
                                arr_23 [i_6] [i_1] [i_6] [i_5 - 1] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_10 [i_6 + 2] [1ULL] [i_4] [i_5])) ? (arr_7 [i_6] [i_1] [i_0]) : (((/* implicit */int) arr_8 [i_0] [i_1 - 1])))), (((((/* implicit */_Bool) 1016437459U)) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) arr_18 [i_5] [i_5] [i_5]))))))) % ((+(arr_20 [i_1] [i_4] [i_4 - 2] [i_5 - 2] [i_6 - 1])))));
                                var_23 = ((/* implicit */unsigned int) (~((-(arr_21 [i_6] [(_Bool)1] [i_6 - 3] [i_5] [i_5 + 3] [i_5])))));
                                var_24 = ((/* implicit */unsigned short) arr_13 [i_0] [i_1 - 1] [i_4]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) + (((/* implicit */int) var_1))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned short) (short)27821))))))))) ? (((long long int) ((unsigned short) var_7))) : (((/* implicit */long long int) var_17))));
    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) max(((-(var_7))), (((/* implicit */long long int) var_0)))))));
}
