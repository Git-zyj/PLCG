/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105115
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
    var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) (((_Bool)1) ? (((((/* implicit */_Bool) 1503470361)) ? (min(((-2147483647 - 1)), (((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned char)85)))) : (((/* implicit */int) var_2)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) var_7);
        var_11 = ((/* implicit */long long int) max((var_0), (((/* implicit */unsigned short) var_4))));
        arr_3 [i_0] [(unsigned short)2] = ((/* implicit */long long int) ((var_5) > (((/* implicit */int) min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 2]))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned int i_4 = 2; i_4 < 17; i_4 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0 - 1] [i_1 + 1] [i_2 + 3]))))))))));
                            var_13 &= ((int) ((signed char) ((((/* implicit */_Bool) arr_8 [i_0] [16U] [i_3] [i_4])) ? (((/* implicit */long long int) 2U)) : (-2189964286137709861LL))));
                            var_14 |= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) (short)32636)) / (((/* implicit */int) (short)-4123)))));
                        }
                    } 
                } 
            } 
            var_15 -= ((/* implicit */unsigned char) var_4);
            var_16 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) var_6)))), (((/* implicit */int) (short)-5))));
        }
        for (unsigned int i_5 = 2; i_5 < 17; i_5 += 4) 
        {
            arr_20 [i_0] [16U] = ((/* implicit */short) (~(((/* implicit */int) (short)-2))));
            var_17 = ((/* implicit */short) max((((/* implicit */int) var_7)), (((((/* implicit */int) min(((short)4117), (((/* implicit */short) (signed char)104))))) >> (((/* implicit */int) max((var_4), (var_2))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                var_18 = ((/* implicit */unsigned short) var_9);
                var_19 = ((/* implicit */int) var_6);
                var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_5 + 1])) || (((/* implicit */_Bool) var_9))));
                arr_23 [i_0] [i_0] [i_5 - 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_8)) - (7901))))) : ((-(((/* implicit */int) var_9))))));
            }
        }
        /* vectorizable */
        for (short i_7 = 3; i_7 < 14; i_7 += 1) 
        {
            arr_26 [i_0] [i_0] [2] = ((/* implicit */unsigned long long int) var_5);
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((arr_19 [(short)8] [8] [i_7 + 3]) - (((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_7])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))))))));
        }
        var_22 &= ((/* implicit */unsigned short) ((max((var_5), (((/* implicit */int) var_7)))) ^ ((~(((((/* implicit */_Bool) (short)-6)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [(unsigned char)14])) : (((/* implicit */int) (short)-13))))))));
    }
}
