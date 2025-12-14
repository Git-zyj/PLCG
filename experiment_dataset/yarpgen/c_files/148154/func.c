/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148154
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
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_8 [3LL] [i_1])) : (1852678544))) < ((~(-1852678544))))));
                        var_11 |= ((/* implicit */signed char) min((((-1852678545) ^ (1852678547))), (((int) arr_3 [i_2 + 1]))));
                        var_12 = ((/* implicit */int) ((long long int) (signed char)24));
                    }
                    /* LoopSeq 3 */
                    for (short i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_7)) * (((/* implicit */int) (short)23337)))))))));
                        var_14 |= ((/* implicit */_Bool) var_6);
                    }
                    for (long long int i_5 = 2; i_5 < 11; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)5847)) / ((-2147483647 - 1))))) && (((/* implicit */_Bool) min((arr_15 [i_0] [i_1] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (short)15977)))))));
                        var_16 |= ((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) (signed char)24)))));
                    }
                    for (unsigned short i_6 = 1; i_6 < 10; i_6 += 3) 
                    {
                        arr_21 [i_0] [i_1 + 2] [i_2 - 2] [i_0] |= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 2372432554U)) ? (1852678544) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_0])) || (((/* implicit */_Bool) arr_20 [i_0])))))));
                        var_17 &= ((/* implicit */unsigned long long int) var_7);
                    }
                }
            } 
        } 
    } 
    var_18 |= ((/* implicit */unsigned int) max((var_0), (((/* implicit */signed char) ((((/* implicit */int) (short)-4679)) != (((/* implicit */int) (_Bool)0)))))));
    var_19 &= ((/* implicit */unsigned int) var_10);
    /* LoopSeq 1 */
    for (unsigned char i_7 = 3; i_7 < 15; i_7 += 4) 
    {
        var_20 = ((/* implicit */int) (unsigned short)777);
        var_21 = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) (signed char)24)) + ((+(((/* implicit */int) (signed char)33)))))));
        arr_24 [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)-4683))) % ((+((+((-9223372036854775807LL - 1LL))))))));
    }
    var_22 = ((/* implicit */unsigned short) var_8);
}
