/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119974
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 4; i_2 < 12; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */int) (signed char)(-127 - 1));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((-1663489187) + (2147483647))) >> (((var_6) - (17871435182538325399ULL)))))) ? ((~(arr_5 [(short)12] [i_3] [(short)12]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_3 - 2] [i_2 - 2] [12ULL])) ? (min((1520084371), (-1520084371))) : (((/* implicit */int) ((short) arr_16 [i_4] [i_4] [i_4] [i_4] [i_4]))))))));
                                arr_17 [i_4] [i_1] [i_2] [i_1] [i_0] = ((unsigned short) ((unsigned int) ((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)77))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            {
                                arr_24 [i_0] [i_1] [(signed char)3] [i_1] [i_0] [i_1] [i_6] = ((/* implicit */unsigned short) arr_0 [i_6]);
                                arr_25 [13LL] [13LL] [10ULL] [i_0] [10U] [i_0] = (!(((/* implicit */_Bool) (unsigned char)217)));
                                var_13 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_10 [8] [i_1] [i_2 - 2] [i_2 - 2])))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((-1520084371) + (2147483647))) >> (((((/* implicit */int) (short)32755)) - (32747)))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (short)8188))))))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned short) min((var_14), (arr_13 [i_1] [i_2] [i_2] [i_2 - 4] [(_Bool)1])));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((5508017664305256288LL) >> (((-651965305) + (651965340)))));
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_10))));
}
