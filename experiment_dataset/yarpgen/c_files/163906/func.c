/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163906
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
    var_20 = ((/* implicit */long long int) (signed char)-114);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) var_12);
                var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_0 [9LL] [12])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (short)28509))) : (var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-28509)), (var_9))))) : (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_13)))))) : ((+(arr_1 [i_1])))));
                var_23 = ((((/* implicit */long long int) ((/* implicit */int) var_18))) & (var_7));
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned short i_3 = 3; i_3 < 15; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_15 [i_1] [i_1] [6LL] [17ULL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6245999623409665406ULL)) ? (((/* implicit */unsigned long long int) arr_6 [i_4 + 1] [i_3 + 2] [i_1 + 3] [i_0 - 1])) : (arr_1 [i_0 + 2])))) ? ((-(var_10))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_2 - 1] [i_4 + 2])))))));
                                arr_16 [i_0 + 1] [i_1] [i_2] [i_3] [(short)7] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_12 [i_4] [i_4 + 2] [i_2] [i_1 + 1] [i_4] [i_2]), (((/* implicit */unsigned int) arr_2 [i_1 + 3]))))) ? (((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 1]))) : (var_15))) : (((/* implicit */long long int) max((1013053529), (((/* implicit */int) var_14)))))));
                            }
                        } 
                    } 
                } 
                var_24 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_19)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : ((-(arr_7 [i_0] [(unsigned short)10] [i_1] [(unsigned short)10]))))), (((/* implicit */long long int) max((((short) -1520234013)), ((short)-27181)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        for (long long int i_6 = 3; i_6 < 20; i_6 += 1) 
        {
            {
                var_25 = ((/* implicit */unsigned long long int) var_10);
                var_26 = ((/* implicit */unsigned long long int) arr_20 [i_5] [i_6 - 2]);
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) min((3012752537U), (((/* implicit */unsigned int) var_12))))), ((~(var_6))))), (((/* implicit */long long int) var_9))));
}
