/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161482
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) var_1);
        arr_4 [12LL] [9LL] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_13)) << (((arr_1 [i_0 + 1]) - (2352191723U))))) % (((/* implicit */int) arr_0 [i_0 + 1]))));
    }
    /* LoopNest 3 */
    for (signed char i_1 = 1; i_1 < 13; i_1 += 2) 
    {
        for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            for (unsigned int i_3 = 1; i_3 < 11; i_3 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 1; i_4 < 13; i_4 += 4) 
                    {
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1 - 1]))));
                        var_17 = ((/* implicit */long long int) min((((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) (short)7936))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_1] [i_3 + 1] [i_1] [i_3] [i_3 - 1])) >> (((2238350559U) - (2238350557U))))))));
                    }
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) (_Bool)1))))) << (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_13))))));
                        arr_18 [i_1] [9LL] = ((/* implicit */_Bool) ((((((((/* implicit */int) (short)-7915)) + (2147483647))) << (((((/* implicit */int) arr_0 [i_1])) - (31162))))) - (((/* implicit */int) arr_9 [(unsigned short)8]))));
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 1; i_6 < 10; i_6 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned short) var_11);
                            var_20 &= ((/* implicit */unsigned long long int) arr_20 [i_6] [i_6 - 1] [i_6 - 1] [(signed char)10] [i_6 - 1] [i_6]);
                            var_21 = ((/* implicit */unsigned int) arr_2 [i_1]);
                        }
                        for (unsigned short i_7 = 1; i_7 < 12; i_7 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_15))));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */int) arr_17 [13U] [i_3 - 1] [i_3] [i_2] [i_2])) << (((/* implicit */int) (short)7))));
                        }
                    }
                    arr_24 [i_3] [i_1] [i_1] = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) var_8)), (287540435758030002ULL))) >> ((((~(((/* implicit */int) arr_16 [i_1 + 1] [i_3] [12U] [i_3 - 1] [i_3 - 1])))) + (135)))));
                }
            } 
        } 
    } 
}
