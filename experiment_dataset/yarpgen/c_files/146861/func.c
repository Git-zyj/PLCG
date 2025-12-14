/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146861
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
    var_14 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 24; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((((arr_3 [i_1 + 1] [4LL]) / (arr_3 [i_1 - 2] [2U]))) / (((/* implicit */long long int) ((/* implicit */int) max((var_7), (((/* implicit */unsigned short) (unsigned char)87))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [3ULL] [i_2] [(signed char)24] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 + 2])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 + 1])))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_6 [i_2 - 1])), (arr_5 [i_0 + 1] [i_2 - 1])))) : (((16323253861508803225ULL) ^ (((/* implicit */unsigned long long int) arr_5 [i_0 + 2] [i_2 + 1]))))));
                                var_16 = ((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [(unsigned char)10] [i_1] [(unsigned short)21]);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) min((var_12), (((((var_4) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27))))) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_10);
    var_19 += ((/* implicit */unsigned char) var_0);
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            {
                arr_23 [(short)6] [i_6] [i_6] = ((/* implicit */signed char) 6708562325127628283LL);
                arr_24 [(short)2] [i_6] [i_6] = ((/* implicit */short) var_9);
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    for (unsigned short i_8 = 3; i_8 < 16; i_8 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-82))) / (max((((var_4) & (var_13))), (((/* implicit */unsigned int) var_11))))));
                            var_21 = -6708562325127628297LL;
                            arr_33 [i_8] [i_6] [i_8] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)10461))));
                        }
                    } 
                } 
                var_22 *= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) max(((unsigned short)10470), (min((var_7), (((/* implicit */unsigned short) (short)-28302))))))) - (10450)))));
                arr_34 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)0)) : (((((/* implicit */int) (unsigned char)49)) & (((/* implicit */int) arr_6 [i_6]))))));
            }
        } 
    } 
}
