/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157926
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
    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        for (signed char i_4 = 3; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0 + 1] [i_1 + 1] [i_1] [i_3] [8ULL] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) 2405389723U)) ? (3195943967U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47798)))));
                                var_16 = (-(max((arr_4 [i_0 - 2] [i_1]), ((~(((/* implicit */int) arr_5 [i_1] [i_1 - 3])))))));
                            }
                        } 
                    } 
                } 
                var_17 -= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1099023342U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55688))) : (3195943971U)))) > (((((/* implicit */_Bool) (unsigned short)47798)) ? (arr_7 [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [13U] [i_0 - 1] [i_1 + 2]))))));
            }
        } 
    } 
    var_18 &= ((/* implicit */unsigned char) (~((((+(((/* implicit */int) var_11)))) - (((/* implicit */int) var_1))))));
    var_19 = ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))))), (((((long long int) var_2)) - (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
    var_20 *= var_6;
}
