/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182740
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
    for (signed char i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 4; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */unsigned int) -1379439130)) : (866139459U)))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_16 -= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_13))))));
                                arr_16 [i_4] [i_0] [i_0] [i_0] [i_1 + 1] [i_0] = ((/* implicit */_Bool) min((3428827837U), (min((((/* implicit */unsigned int) var_10)), (866139459U)))));
                                var_17 = ((/* implicit */unsigned short) arr_1 [i_3]);
                                var_18 = ((/* implicit */signed char) (~(max((((/* implicit */long long int) max((arr_3 [8U]), (((/* implicit */int) arr_13 [i_1] [i_4]))))), (arr_11 [i_1] [i_3 + 2] [i_2 + 1] [i_1])))));
                                arr_17 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((unsigned long long int) 3428827836U)), (((/* implicit */unsigned long long int) arr_11 [i_0 - 1] [i_1 + 3] [i_2 - 2] [i_3 + 2]))))) ? (min((arr_10 [i_3] [i_3] [i_3 + 1] [i_3] [i_3]), (arr_10 [(unsigned short)4] [(unsigned short)4] [i_3 + 1] [i_3 + 2] [i_2]))) : (((/* implicit */unsigned long long int) (-((-(arr_6 [i_0 - 4] [i_0 - 4] [i_2 + 1] [i_4]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 13; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            {
                                var_19 += ((((((/* implicit */unsigned long long int) (~(-863224637)))) % (((8821503370983240641ULL) / (((/* implicit */unsigned long long int) 866139459U)))))) & (((/* implicit */unsigned long long int) 0U)));
                                arr_23 [i_6] [i_5] [i_6] |= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_22 [(unsigned char)1] [i_1] [i_2] [i_2] [i_6]))))) + (arr_8 [i_1 - 1] [i_2 - 1] [i_6]))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) var_3);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 1; i_7 < 8; i_7 += 4) 
    {
        for (signed char i_8 = 2; i_8 < 7; i_8 += 4) 
        {
            {
                var_21 ^= ((/* implicit */unsigned char) min((((/* implicit */short) ((((/* implicit */int) arr_13 [i_7 + 2] [i_7 + 1])) <= (((/* implicit */int) var_6))))), (min((arr_13 [i_7 + 2] [i_7 + 1]), (arr_13 [i_7 + 2] [i_7 + 1])))));
                arr_29 [i_7] [i_7] = ((/* implicit */signed char) arr_3 [i_7 - 1]);
            }
        } 
    } 
}
