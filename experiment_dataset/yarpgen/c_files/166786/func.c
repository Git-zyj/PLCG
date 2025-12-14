/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166786
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
    var_13 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((1333040893) - (((/* implicit */int) (_Bool)1))))) + (max((var_1), (((/* implicit */unsigned int) var_12)))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */_Bool) arr_1 [i_0]);
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))) + (((((/* implicit */_Bool) 3006502508U)) ? (15959222788817367695ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))))) && ((!((!(((/* implicit */_Bool) (short)-28867))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 2; i_2 < 13; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 13; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_11 [i_3] [i_2 + 2]), (arr_11 [(unsigned char)12] [i_2 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) << (((802068760U) - (802068750U)))))) : (((unsigned long long int) arr_11 [i_2 - 1] [i_2 + 1])))))));
                            arr_17 [i_5] [i_4] [i_4] [i_4] [i_2] = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) (_Bool)1)), (arr_12 [i_2 + 1] [i_4 + 2] [i_5]))), (max((arr_12 [i_2 - 1] [i_4 - 1] [i_4]), (arr_12 [i_2 + 1] [i_4 + 2] [13ULL])))));
                        }
                    } 
                } 
                arr_18 [i_2] [i_2] &= ((/* implicit */unsigned long long int) (-(1023U)));
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) arr_13 [i_2 - 2] [i_2 - 2] [i_2]))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((unsigned long long int) var_4));
}
