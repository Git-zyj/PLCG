/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13712
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
    var_19 &= ((/* implicit */unsigned char) ((short) (_Bool)1));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                arr_4 [i_1] [(unsigned char)15] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-26831))))) : ((((~(4338360943554519357ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [22] [i_1] [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */short) (~(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3]))));
                            arr_9 [i_1] = ((/* implicit */long long int) (unsigned short)1);
                            var_21 ^= ((/* implicit */signed char) arr_3 [i_3]);
                        }
                    } 
                } 
                arr_10 [i_1] [i_1 - 1] = ((((/* implicit */_Bool) max((4325184976766406506LL), ((~(arr_7 [i_1] [1] [i_0] [i_1])))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [(unsigned char)11] [(short)10])) != (((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))))) > (((/* implicit */int) (unsigned short)65529))))) : (((/* implicit */int) (unsigned char)3)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
    {
        for (short i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            {
                arr_17 [i_4] [i_4] [(short)2] = ((/* implicit */unsigned long long int) var_18);
                var_22 *= ((/* implicit */unsigned short) arr_7 [0] [i_5] [i_5] [0]);
                /* LoopNest 3 */
                for (short i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        for (short i_8 = 2; i_8 < 14; i_8 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) (unsigned short)43639);
                                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((var_11) + (2147483647))) >> (((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)63)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4] [i_8] [i_6]))) : (arr_12 [i_4] [i_5])))), (18446744073709551596ULL))) - (18446744073709540063ULL))))))));
                            }
                        } 
                    } 
                } 
                var_25 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4] [i_5])) ? (((/* implicit */int) arr_1 [i_4] [i_4])) : (((/* implicit */int) arr_1 [i_4] [i_5]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_3))) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) ((unsigned char) arr_21 [i_5])))))) : (((((/* implicit */_Bool) (signed char)98)) ? (-4325184976766406507LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))));
                arr_27 [1ULL] = ((/* implicit */signed char) ((unsigned char) 562949953421248LL));
            }
        } 
    } 
}
