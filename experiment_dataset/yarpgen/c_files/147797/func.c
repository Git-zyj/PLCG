/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147797
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
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) min((var_19), (min((var_16), (arr_2 [3ULL])))));
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)26))))) ? (((/* implicit */int) ((short) var_10))) : (((/* implicit */int) min((var_12), ((signed char)80))))))) > (4294967295U)));
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1201998249)) ? (((/* implicit */unsigned long long int) 7122800897029794002LL)) : (11144066539030945084ULL))))));
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((((((/* implicit */_Bool) max((var_18), (((/* implicit */unsigned long long int) 576460752303423487LL))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_0 [i_0])))) : (min((((/* implicit */long long int) (unsigned short)4008)), (arr_11 [i_0] [i_0] [i_4] [i_3 - 1] [i_4] [i_1]))))), (((/* implicit */long long int) var_6)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        for (long long int i_6 = 3; i_6 < 21; i_6 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min((7302677534678606531ULL), (18446744073709551603ULL)))))) % (min((7302677534678606517ULL), (((/* implicit */unsigned long long int) arr_13 [i_5] [(_Bool)1] [i_2] [i_5] [i_2] [i_6 + 3]))))));
                                var_24 = ((/* implicit */_Bool) ((var_4) << (((((/* implicit */long long int) ((var_16) ? (((/* implicit */int) var_12)) : (1000242179)))) / (min((((/* implicit */long long int) (signed char)-8)), (9223372019674906624LL)))))));
                            }
                        } 
                    } 
                    arr_19 [7LL] [i_1] [2LL] [i_1] = ((/* implicit */unsigned int) ((_Bool) min((min((((/* implicit */unsigned long long int) (signed char)-29)), (var_18))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_1] [i_0 - 2] [i_2] [i_0 - 2] [i_1] [i_2])) + (((/* implicit */int) var_14))))))));
                    var_25 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1])))))), ((-(7302677534678606529ULL))))) << (((/* implicit */int) max((arr_0 [i_1 - 3]), (((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_2])))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (signed char i_8 = 2; i_8 < 10; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_30 [i_7] [i_8] [i_9] [i_7] = ((/* implicit */_Bool) arr_17 [11LL]);
                            arr_31 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) 0ULL))) && ((((!(((/* implicit */_Bool) var_12)))) || (arr_2 [i_9])))));
                            arr_32 [i_7] [i_8] [(signed char)4] [(signed char)4] = ((/* implicit */_Bool) ((signed char) var_9));
                        }
                    } 
                } 
                arr_33 [i_7] [i_8] [(_Bool)1] = ((/* implicit */_Bool) var_18);
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) var_2);
}
