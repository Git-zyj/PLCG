/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148523
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
    var_19 = ((/* implicit */long long int) ((unsigned long long int) (-(((/* implicit */int) (_Bool)1)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                {
                    var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 + 1] [i_1 + 2] [i_0 - 1]))) - (var_5))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -937211342)) ? (((/* implicit */int) arr_7 [i_2 - 1] [i_1 - 2] [i_0 + 1])) : (((/* implicit */int) arr_7 [i_2 + 1] [i_1 + 2] [i_0 - 1]))))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_1 + 3]), (var_15)))) ? ((~(((/* implicit */int) arr_3 [i_0] [i_1 + 1])))) : (min((((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_2 - 2])), (var_7)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) min((((/* implicit */long long int) var_4)), (var_3)));
    /* LoopNest 3 */
    for (short i_3 = 2; i_3 < 12; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                {
                    var_23 = (_Bool)1;
                    var_24 = ((/* implicit */signed char) (((_Bool)1) && (((max((((/* implicit */unsigned long long int) (_Bool)0)), (var_6))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3 - 2] [i_3 - 2])))))));
                    var_25 = ((((((/* implicit */int) (short)-20022)) + (2147483647))) << (((((((((/* implicit */long long int) (-2147483647 - 1))) % (-547958370460858183LL))) + (2147483662LL))) - (14LL))));
                    var_26 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-34)) ? (((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30205))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (arr_4 [i_4] [(signed char)7])))) ? (((/* implicit */int) arr_14 [7])) : (((/* implicit */int) (_Bool)1)))))));
                    var_27 = max((var_9), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) arr_9 [i_3] [i_3])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            {
                var_28 = ((/* implicit */unsigned char) -3659674536504249561LL);
                var_29 = ((/* implicit */short) var_6);
                var_30 = arr_19 [i_7];
            }
        } 
    } 
}
