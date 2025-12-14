/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122318
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
    var_20 = ((/* implicit */unsigned long long int) ((long long int) ((signed char) ((unsigned long long int) var_1))));
    var_21 = ((/* implicit */short) ((unsigned int) min((((unsigned long long int) var_15)), (((/* implicit */unsigned long long int) ((short) (signed char)24))))));
    var_22 &= ((/* implicit */signed char) var_19);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (arr_7 [i_1] [i_0])))))) ? (((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_1)))) : (max((((/* implicit */long long int) arr_6 [i_0] [2U])), (arr_1 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_23 += ((/* implicit */short) (-(((int) ((signed char) arr_12 [i_2] [i_2] [i_2])))));
                            var_24 = ((/* implicit */signed char) (~(11252227554870138746ULL)));
                            arr_16 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_3] [i_1])) <= (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((short) arr_14 [i_0] [i_0] [i_2] [i_0] [i_3]))) : (((((/* implicit */_Bool) arr_14 [i_3] [i_0] [i_2] [i_0] [i_0])) ? (((/* implicit */int) (short)7142)) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_3] [i_0]))))));
                            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) var_15)))))))));
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)12588))) - (18446744073709551606ULL))) == (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) 1392103756)) : (arr_12 [i_0] [i_2] [(short)8])))))) == (arr_10 [i_0])));
                        }
                    } 
                } 
            }
        } 
    } 
}
