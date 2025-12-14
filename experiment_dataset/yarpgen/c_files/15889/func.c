/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15889
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
    var_14 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))));
    var_15 -= ((/* implicit */unsigned int) (+((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)99))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */long long int) (-(((int) (short)19252))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_17 = var_5;
                                var_18 = ((/* implicit */int) max((max((((/* implicit */long long int) 3245062092U)), (((long long int) var_2)))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_8 [i_0] [i_1 - 2] [i_3] [i_3] [i_0] [i_3]), (((/* implicit */int) var_13))))) ? (arr_5 [i_3] [i_4 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-40)) ? (var_4) : (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) 641808649)))) : (min((((/* implicit */long long int) var_8)), (arr_10 [i_2] [i_0] [i_0] [i_0 + 2])))))) ? (min((((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((short) (unsigned char)192))))) : (((/* implicit */long long int) ((-1183913905) ^ (arr_6 [i_0 + 2] [i_0]))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_4);
    var_21 = ((/* implicit */_Bool) ((var_9) - (((/* implicit */long long int) ((/* implicit */int) max(((short)-7976), (((/* implicit */short) (_Bool)1))))))));
}
