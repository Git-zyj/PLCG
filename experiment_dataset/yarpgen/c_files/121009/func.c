/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121009
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
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_10 [i_3] [i_0] [i_0] [i_0] = (short)-24;
                            var_16 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (short)-18)) ? (((/* implicit */int) (short)-18060)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned short) arr_8 [i_0] [i_0] [i_1] [i_0])))));
                        }
                    } 
                } 
                arr_11 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_10)) == (((/* implicit */int) (short)18052)))) ? (((-750852832) & (((/* implicit */int) arr_9 [i_1] [i_0] [i_1] [2ULL] [i_0] [i_0])))) : (((/* implicit */int) arr_2 [i_0]))))), (((unsigned long long int) (unsigned short)29782))));
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (~(((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)1))))) / ((-(arr_5 [i_0] [(short)2] [2LL]))))))))));
                var_18 ^= ((/* implicit */unsigned int) ((-2946751511054653433LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62133)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    var_19 &= ((/* implicit */unsigned short) ((unsigned long long int) arr_1 [i_0] [i_0 + 1]));
                    arr_15 [i_4] [i_0] [i_0] |= ((/* implicit */long long int) var_7);
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)19331))) | ((~(var_13)))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 3; i_5 < 24; i_5 += 3) 
    {
        for (signed char i_6 = 1; i_6 < 24; i_6 += 3) 
        {
            {
                var_21 -= ((/* implicit */unsigned long long int) arr_19 [i_5] [i_6] [i_5]);
                var_22 = ((/* implicit */short) (+(((/* implicit */int) (short)-18051))));
                var_23 = ((/* implicit */long long int) max((var_23), (max(((((!(arr_20 [i_5]))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-32753)), (var_9)))) : (arr_16 [i_6 + 1] [i_5 - 3]))), (((/* implicit */long long int) var_9))))));
                var_24 = ((/* implicit */unsigned int) ((unsigned long long int) ((signed char) max((((/* implicit */unsigned int) (short)-32747)), (3641891033U)))));
                var_25 = ((/* implicit */signed char) ((short) var_11));
            }
        } 
    } 
}
