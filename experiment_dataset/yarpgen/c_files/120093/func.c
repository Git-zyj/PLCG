/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120093
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) var_5);
                    var_14 = ((/* implicit */unsigned char) arr_2 [i_1]);
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned char) (signed char)0);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (signed char i_4 = 4; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) ((((unsigned long long int) arr_6 [i_4 - 4] [18U] [i_2 + 1] [i_2 + 1])) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_6 [i_4 + 1] [i_4] [i_4] [i_2 - 1])) : (((/* implicit */int) arr_1 [i_2 - 2])))))));
                                var_16 = ((/* implicit */unsigned short) (signed char)0);
                                var_17 = ((/* implicit */unsigned int) (-(min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-18))) : (var_10))), (((/* implicit */unsigned long long int) var_0))))));
                                var_18 = ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) var_4)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) (signed char)0);
    var_20 = ((/* implicit */_Bool) (signed char)15);
    /* LoopNest 3 */
    for (long long int i_5 = 4; i_5 < 19; i_5 += 4) 
    {
        for (unsigned int i_6 = 1; i_6 < 19; i_6 += 1) 
        {
            for (unsigned char i_7 = 3; i_7 < 22; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 2; i_8 < 20; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 1; i_9 < 20; i_9 += 4) 
                        {
                            {
                                var_21 |= ((/* implicit */signed char) (+((((!(((/* implicit */_Bool) (signed char)15)))) ? (((unsigned int) (unsigned char)211)) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))));
                                var_22 = ((/* implicit */unsigned long long int) 1624474502U);
                            }
                        } 
                    } 
                    var_23 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (var_1) : (var_6))), (((/* implicit */unsigned int) var_5))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-7))) / (((((/* implicit */_Bool) 10631924034825892836ULL)) ? (3867352767U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_9))) * ((+(((/* implicit */int) (_Bool)0)))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) var_4);
}
