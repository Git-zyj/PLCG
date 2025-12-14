/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15547
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
    var_12 = ((/* implicit */int) var_2);
    var_13 = max((((/* implicit */short) var_2)), (var_0));
    var_14 = (~(min(((+(((/* implicit */int) var_7)))), ((~(((/* implicit */int) var_0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                arr_5 [i_1] [5U] = ((/* implicit */unsigned int) (unsigned char)255);
                arr_6 [i_0] [i_1] = (+(max(((+(-1320294783))), (-1168421591))));
                arr_7 [i_0] [i_1] [5ULL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-1691372529), (((/* implicit */int) var_1))))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (1168421591))), (((/* implicit */int) var_11)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7396)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)4096))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 7414598256171183254LL)) ? (((/* implicit */int) (unsigned short)40188)) : (((/* implicit */int) (signed char)-113)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                {
                    var_15 = ((/* implicit */long long int) var_0);
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 11; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            {
                                var_16 *= var_2;
                                var_17 -= ((/* implicit */unsigned int) (((-9223372036854775807LL - 1LL)) <= (((/* implicit */long long int) -521082112))));
                            }
                        } 
                    } 
                    arr_21 [i_2] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-8192)))) : ((~(((/* implicit */int) ((((/* implicit */unsigned int) var_5)) <= (var_4))))))));
                    arr_22 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-6067)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)127))))) : (var_3)));
                    var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (short)-4097))));
                }
            } 
        } 
    } 
}
