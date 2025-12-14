/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117893
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
    var_18 = ((((/* implicit */_Bool) var_13)) ? ((-((-(((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((_Bool) (short)0))))));
    var_19 = ((/* implicit */int) var_6);
    var_20 = ((/* implicit */short) 4294967295U);
    var_21 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (signed char i_4 = 3; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)(-127 - 1))))) / (((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) (unsigned short)49984)) : (((/* implicit */int) (unsigned short)49972))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65280))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_11 [i_0] [i_1] [i_2] [i_4]) : (((/* implicit */int) (short)0))))) : (min((((/* implicit */unsigned long long int) var_6)), (arr_14 [i_0] [i_1] [i_0] [i_3])))))));
                                var_23 += ((/* implicit */unsigned char) (signed char)-26);
                            }
                        } 
                    } 
                } 
                arr_16 [i_1] = ((/* implicit */unsigned short) (signed char)(-127 - 1));
                var_24 |= ((/* implicit */unsigned int) arr_5 [i_0]);
            }
        } 
    } 
}
