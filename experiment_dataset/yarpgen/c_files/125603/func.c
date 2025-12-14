/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125603
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)70))));
                    arr_6 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) (((~(arr_0 [i_0]))) != ((-(9223372036854775800LL))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (signed char i_3 = 3; i_3 < 19; i_3 += 4) 
    {
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 3; i_7 < 19; i_7 += 3) 
                        {
                            {
                                var_14 += ((/* implicit */signed char) (((-(((((/* implicit */_Bool) (short)5379)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3] [i_3] [i_6]))))))) ^ (((/* implicit */unsigned long long int) (~(max((((/* implicit */int) (unsigned char)4)), (-256))))))));
                                var_15 = ((/* implicit */unsigned short) arr_14 [i_7] [i_7] [i_7] [i_6]);
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */int) ((((((((/* implicit */int) arr_11 [i_3] [i_4] [i_3 + 1] [i_3 - 3])) + (2147483647))) << (((((((/* implicit */int) arr_11 [i_3] [i_4] [i_3 + 1] [i_3 - 2])) + (46))) - (6))))) == (((/* implicit */int) ((signed char) (-(((/* implicit */int) (signed char)91))))))));
            }
        } 
    } 
}
