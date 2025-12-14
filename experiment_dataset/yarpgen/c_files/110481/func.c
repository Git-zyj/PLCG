/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110481
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */unsigned long long int) var_1)), (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    var_18 = (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) <= (((((/* implicit */_Bool) (unsigned short)31323)) ? (3371130440403023ULL) : (((/* implicit */unsigned long long int) var_4)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) 8871592866883990084ULL);
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((1063755160190038686ULL), (((/* implicit */unsigned long long int) -614870147))))) ? (min((arr_5 [i_0]), (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((-1840656931581085329LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-111)))))))))) ? (((3095911074U) * (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)13863)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17382988913519512942ULL)) ? (((int) (short)-3177)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)3176)) && (((/* implicit */_Bool) (signed char)44)))))))) ? (-1840656931581085333LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-58)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                {
                    var_22 = ((/* implicit */short) var_16);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (long long int i_6 = 3; i_6 < 22; i_6 += 4) 
                        {
                            {
                                arr_21 [i_2] [i_2] [i_3] [i_4] [i_5] [i_2] = ((/* implicit */signed char) (+(var_6)));
                                arr_22 [i_2] [i_3 + 3] [i_4] [i_2] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)28365))) | (((((/* implicit */_Bool) var_12)) ? (arr_20 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_6 + 2] [i_3 + 1] [i_2]) : (1621749670118363507ULL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            {
                                arr_28 [i_2] [i_2] [i_4] [i_7] [i_2] = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 902226016)) ? (((/* implicit */int) (unsigned short)13848)) : (((/* implicit */int) (short)31713)))))))), (614870138)));
                                var_23 |= ((/* implicit */signed char) ((((((var_15) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-14))) : (1351991337U))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4265917665133891034LL)))))))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_12), (var_12)))) ? (min((((/* implicit */int) (signed char)-115)), (66578283))) : (((/* implicit */int) var_7)))))));
                                arr_29 [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)13863)) ? (min((((/* implicit */int) var_1)), (((int) var_0)))) : (min((var_14), (((/* implicit */int) (signed char)-37))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
