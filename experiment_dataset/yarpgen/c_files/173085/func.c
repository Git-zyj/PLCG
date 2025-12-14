/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173085
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */signed char) (short)-20408);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (signed char i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
                            {
                                var_16 += ((/* implicit */unsigned int) 7280578831076130250LL);
                                arr_15 [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)28019)) ? (((long long int) 1828239849)) : (((/* implicit */long long int) ((/* implicit */int) (short)-28013)))));
                                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (((+(var_13))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)17))) != (4294967295U))))))))));
                            }
                            for (signed char i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
                            {
                                arr_18 [i_1] [i_1] [i_1] [i_1] [i_5] [i_0] = ((((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? ((+(4499201580859392ULL))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_2] [i_2])) ? (arr_14 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))))) >> (((((int) (-(((/* implicit */int) var_4))))) - (306))));
                                arr_19 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_2])) : (var_11)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -6640129029764273111LL)) ? (arr_12 [i_0] [i_1] [i_2] [i_3] [i_5]) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))))))));
                                arr_20 [i_2] [i_3 + 1] [i_1] [i_3] [i_5] [i_1] [i_1] = min((((unsigned int) max((arr_8 [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_5))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(var_0))))))));
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_14))));
                            }
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (+(((/* implicit */int) (short)20407)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_14))) >= (((((/* implicit */unsigned int) ((/* implicit */int) var_15))) * (var_5))))) ? (min((max((var_0), (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) 0U))));
    /* LoopSeq 1 */
    for (short i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        arr_25 [i_6] = ((/* implicit */unsigned char) 17179869183ULL);
        arr_26 [i_6] = ((/* implicit */unsigned int) min((arr_17 [i_6] [i_6] [i_6] [i_6] [i_6]), (((unsigned char) (short)-20407))));
        arr_27 [i_6] = ((/* implicit */signed char) (~((+(((((/* implicit */_Bool) arr_14 [i_6])) ? (((/* implicit */int) arr_4 [i_6] [i_6] [i_6])) : (((/* implicit */int) var_2))))))));
    }
}
