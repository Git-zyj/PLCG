/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15026
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
    var_20 = ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) 4127449344U)) || (((/* implicit */_Bool) (unsigned char)30)))))))) ? (max((((/* implicit */int) var_4)), (min((-719926945), (((/* implicit */int) var_17)))))) : (max((min((((/* implicit */int) (unsigned char)16)), (-1634804235))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) (unsigned char)238)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -433285824))))), (((var_18) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 17; i_2 += 4) 
                {
                    for (signed char i_3 = 3; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((unsigned char) (signed char)4)))));
                                arr_19 [i_4] [i_4] [i_4] [i_2] = ((/* implicit */signed char) ((unsigned long long int) (-(((/* implicit */int) (unsigned short)47477)))));
                                arr_20 [i_0] [i_0 + 2] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */int) (~(((((/* implicit */_Bool) (signed char)10)) ? ((~(var_5))) : (((((/* implicit */unsigned long long int) -407545425)) & (0ULL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
