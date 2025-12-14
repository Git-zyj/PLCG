/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153094
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) 4879934338821768586LL);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)58))))) ? ((+(((/* implicit */int) arr_2 [i_4] [i_2])))) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((signed char) arr_3 [i_0] [i_2]))) : (((/* implicit */int) (unsigned short)44564))));
                                arr_13 [i_0] [i_1 + 2] [i_0] [i_3] [i_4] = max(((-(((arr_1 [i_0] [i_1]) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (unsigned char)64)))))), (((/* implicit */int) ((signed char) (-(((/* implicit */int) (signed char)-119)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            {
                                arr_28 [i_5] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))) ? (((long long int) (short)21380)) : (((/* implicit */long long int) (-(((/* implicit */int) var_16)))))))) ? (((/* implicit */int) min(((!(((/* implicit */_Bool) (signed char)-4)))), (var_4)))) : (((/* implicit */int) var_4))));
                                var_19 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) 121369849))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_17)) < (((/* implicit */int) var_13))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_17)))))));
    var_22 &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)198))) : (var_5)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_11))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) var_1))))))));
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_14))));
}
