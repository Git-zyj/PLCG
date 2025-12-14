/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138208
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
    var_15 *= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)220))) < (7846877926717238399LL)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_0] [i_3] [i_3] = arr_3 [i_0] [i_0];
                                arr_18 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (unsigned char)243)))), (max(((-(((/* implicit */int) (unsigned char)37)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_3])) || (((/* implicit */_Bool) var_14)))))))));
                                var_16 = max((arr_2 [i_3]), (((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (var_2) : (((/* implicit */int) (unsigned char)203))))) : (arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4]))));
                            }
                        } 
                    } 
                    arr_19 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (273549268) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2]))));
                }
            } 
        } 
    } 
}
