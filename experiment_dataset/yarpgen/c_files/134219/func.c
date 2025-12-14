/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134219
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_12)), (var_11)))) || (((/* implicit */_Bool) var_1))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 4; i_2 < 12; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) max((((long long int) max((arr_1 [i_1 - 3] [i_2 + 2]), (((/* implicit */long long int) var_5))))), (((/* implicit */long long int) ((arr_5 [i_0] [12U] [i_1 - 1] [i_2 + 2]) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 3] [i_2 - 2])) || (((/* implicit */_Bool) -9038766340286220095LL)))))))))));
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) -7077013678973367287LL);
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) (-(var_8)))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 4; i_3 < 11; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_11 [2U] [i_3 - 1] [i_3] [10U] [i_1] = arr_7 [11LL] [i_1 + 1] [11LL] [11LL];
                                arr_12 [i_1] [i_2 - 1] [i_2 + 1] = ((/* implicit */long long int) arr_2 [i_1 - 1] [i_2 - 2] [i_4]);
                                arr_13 [i_1] = ((long long int) ((((((/* implicit */long long int) 1297604381U)) - (-9038766340286220095LL))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [10LL] [6LL] [i_4 - 1] [i_3])) ? (((/* implicit */int) arr_10 [i_0] [i_0 + 2] [i_0] [i_0 + 4] [i_0])) : (((/* implicit */int) var_4)))))));
                                var_23 = ((/* implicit */unsigned int) ((max(((+(var_18))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 6410061475777996402LL))))))) / (-4830906892174250501LL)));
                            }
                        } 
                    } 
                    arr_14 [i_0 + 4] [i_1 - 3] [i_1 - 3] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */unsigned int) arr_4 [i_0] [i_1 + 1] [i_2] [i_2])) ^ (max((var_2), (arr_5 [i_0] [i_1] [i_2 + 2] [i_1 + 1])))))), ((+(9123729518359883802LL)))));
                }
            } 
        } 
    } 
    var_24 |= ((/* implicit */long long int) var_16);
    var_25 = ((/* implicit */unsigned int) max((var_25), (var_0)));
}
