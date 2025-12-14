/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175138
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
    var_17 = ((/* implicit */short) min((((var_6) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_3)), (var_16)))) : (((((/* implicit */_Bool) (signed char)-25)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))), (((((((/* implicit */_Bool) var_5)) ? (10656398843046127071ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) >> (((/* implicit */int) var_6))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */int) ((((/* implicit */int) (short)32765)) < (((((/* implicit */_Bool) min((arr_1 [i_1 - 2]), (((/* implicit */unsigned char) (signed char)-17))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-25)) && (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) var_4))))));
                var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_3)) << (((max((var_0), (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_1 - 1])))) - (8907860282039847912LL))))) != (((/* implicit */int) ((unsigned char) min((var_0), (((/* implicit */long long int) var_3))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    for (unsigned short i_5 = 1; i_5 < 11; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) (signed char)25);
                                var_21 = ((/* implicit */int) (-(((var_13) ? (((((/* implicit */_Bool) var_10)) ? (-787282333225649748LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)25)))))));
                                var_22 = ((/* implicit */signed char) (unsigned char)141);
                                var_23 = ((/* implicit */unsigned short) min((((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_5]))) < (-2448011073559904454LL)))) < (((int) arr_15 [i_3] [i_4] [i_6])))), (((((/* implicit */_Bool) (signed char)25)) && (((/* implicit */_Bool) 18446744073709551615ULL))))));
                                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)-25)) ? (2448011073559904459LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (min((((/* implicit */unsigned long long int) (unsigned short)23234)), (var_12))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))))))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */int) 13402702003347960352ULL);
            }
        } 
    } 
    var_26 = (unsigned char)254;
}
