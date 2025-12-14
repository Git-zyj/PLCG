/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115960
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
    var_14 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((int) 70360154243072ULL))) : (var_0))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 6; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)28263)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242))) : (17585415274905517148ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)8776))) : (921772576U)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-38))) : (min((-2442695893329509603LL), (((/* implicit */long long int) (signed char)38)))))) : (((/* implicit */long long int) 921772566U))));
                var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (signed char)1)), (11522787876885571275ULL)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 2) 
    {
        for (long long int i_3 = 1; i_3 < 12; i_3 += 3) 
        {
            {
                arr_12 [i_2] [i_2] [(unsigned char)3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((3373194730U), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_2])))))))) ? ((-(min((var_1), (((/* implicit */unsigned long long int) (unsigned char)229)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) (signed char)-38)) : (((/* implicit */int) arr_10 [i_2] [i_3] [i_3]))))) ? (((/* implicit */int) ((unsigned short) arr_9 [i_2] [(unsigned short)6]))) : ((-(((/* implicit */int) var_7)))))))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_13 [i_3 + 3] [i_2 + 2] [i_3 + 3])), ((-(((/* implicit */int) arr_15 [i_3 - 1] [i_2 - 3] [(signed char)0]))))));
                            var_18 = (-(max((((/* implicit */unsigned int) arr_8 [i_2])), (((unsigned int) var_3)))));
                            var_19 = ((/* implicit */unsigned long long int) ((short) (-(((/* implicit */int) arr_11 [i_3 - 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
