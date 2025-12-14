/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13546
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
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) ^ (arr_3 [i_0 + 1])))) && (((arr_3 [i_0 - 1]) > (arr_3 [i_0 - 1])))));
                var_21 -= ((/* implicit */unsigned int) ((-5597213224476761100LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)56)))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned int i_3 = 4; i_3 < 12; i_3 += 3) 
                    {
                        for (int i_4 = 3; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_22 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((max((-1), (((/* implicit */int) var_1)))), (((/* implicit */int) var_2)))))));
                                var_23 &= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 1] [i_1] [i_2] [i_2])))))) && (((var_16) > (var_16))))))));
                                var_24 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_3] [i_0])) ? (((/* implicit */int) arr_4 [i_0 - 1])) : (((/* implicit */int) arr_9 [i_2] [i_4 - 1]))))) ? (max((((/* implicit */long long int) (unsigned char)2)), (-1251430667839304970LL))) : (((/* implicit */long long int) ((arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) >> (((((/* implicit */int) var_14)) - (27))))))));
                                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)64)) && (((/* implicit */_Bool) (unsigned short)45223)))) ? (((int) ((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) : (((((/* implicit */_Bool) (unsigned short)45223)) ? (((/* implicit */int) (unsigned short)45212)) : ((-(((/* implicit */int) (unsigned short)45212)))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1975607956U)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) < (var_6))))) : (((((/* implicit */_Bool) var_14)) ? (790498087U) : (((/* implicit */unsigned int) var_9))))))) ? ((+(((/* implicit */int) var_19)))) : (((/* implicit */int) var_14))));
}
