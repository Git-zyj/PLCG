/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124047
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_10 [(short)1] [(_Bool)1] [(_Bool)1] = ((((/* implicit */_Bool) (+(var_6)))) ? (arr_3 [i_0] [15ULL]) : (((/* implicit */unsigned long long int) 1437148924)));
                    arr_11 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (-2147483647 - 1))))) || (((/* implicit */_Bool) var_8)))))) : ((+(((unsigned long long int) var_5))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_18 [i_4] [i_3] [(unsigned char)2] [i_3] [i_0] = ((/* implicit */unsigned long long int) arr_5 [(unsigned char)11]);
                                arr_19 [i_0] [i_3] = ((/* implicit */long long int) var_0);
                                arr_20 [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) -2147483633))))))), (min(((+(((/* implicit */int) (unsigned char)36)))), (((/* implicit */int) var_8))))));
                                arr_21 [i_3] = (+(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-19851)), (18446744073709551612ULL)))) ? (var_6) : (arr_7 [i_0]))));
                            }
                        } 
                    } 
                    arr_22 [15] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
                }
            } 
        } 
    } 
    var_10 = ((/* implicit */signed char) var_2);
}
