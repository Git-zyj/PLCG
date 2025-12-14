/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133160
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
    var_19 += ((/* implicit */unsigned int) var_4);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_20 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((int) -1))))) * (((unsigned int) arr_5 [i_0 - 3] [12LL] [(unsigned char)4] [(unsigned char)1]))));
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [13LL] [7])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_1 [i_2] [(unsigned short)5]))))))) : (min((((/* implicit */unsigned int) min((var_7), (((/* implicit */unsigned short) (_Bool)1))))), (((1830275003U) + (1830275003U)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) 4095);
    var_23 += ((/* implicit */unsigned char) var_1);
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        for (long long int i_4 = 1; i_4 < 12; i_4 += 4) 
        {
            for (int i_5 = 2; i_5 < 10; i_5 += 3) 
            {
                {
                    arr_13 [i_3] [2LL] [i_3] [4] = ((/* implicit */unsigned long long int) 1830275001U);
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 2; i_6 < 11; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 4; i_7 < 11; i_7 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) var_1);
                                var_25 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_10 [i_7]))) ? (((arr_10 [i_7]) - (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
