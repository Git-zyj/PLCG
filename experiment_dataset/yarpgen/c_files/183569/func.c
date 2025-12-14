/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183569
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
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)64836)) > (((/* implicit */int) (unsigned char)77))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */int) arr_3 [i_1] [i_1]);
                                arr_13 [i_0] [i_1] [i_1] [i_1] [(unsigned short)10] [20U] [5] = ((/* implicit */short) ((((long long int) 19LL)) > (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)64836)) & (((/* implicit */int) (unsigned short)54391)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = var_4;
    /* LoopNest 3 */
    for (unsigned short i_5 = 3; i_5 < 7; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 4; i_7 < 7; i_7 += 1) 
            {
                {
                    arr_20 [i_7] = ((/* implicit */int) ((((((/* implicit */int) ((3912196255791791082LL) < (((/* implicit */long long int) var_1))))) % (((/* implicit */int) (unsigned short)25117)))) < (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) 6488862520832827819LL)) ? (var_1) : (((/* implicit */int) (unsigned short)64845))))))));
                    var_21 += ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-4406))))), (((long long int) var_15))))) | (((((/* implicit */_Bool) (unsigned char)254)) ? (((262143ULL) << (((-3912196255791791083LL) + (3912196255791791099LL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) | (-6488862520832827833LL)))))));
                }
            } 
        } 
    } 
}
