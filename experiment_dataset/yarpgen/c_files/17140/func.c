/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17140
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
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_16 *= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0])))));
                var_17 ^= var_15;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3] [i_1] &= ((((((/* implicit */_Bool) min((arr_3 [i_1] [(unsigned short)0]), (var_12)))) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_3] [i_3])) : (((((/* implicit */_Bool) (short)-1483)) ? (((/* implicit */int) (short)-1483)) : (((/* implicit */int) (signed char)99)))))) ^ (((((/* implicit */_Bool) ((unsigned int) (unsigned short)16078))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_7 [i_0])))) : (((/* implicit */int) arr_10 [i_2] [i_1] [i_2] [i_3])))));
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(arr_12 [i_1] [4ULL] [i_2] [i_1] [i_0])))) < (var_8)));
                            }
                        } 
                    } 
                } 
                arr_14 [i_1] [i_0] [i_0] = ((/* implicit */signed char) min((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) var_12))));
            }
        } 
    } 
    var_19 ^= ((/* implicit */int) (-(0ULL)));
    var_20 = ((/* implicit */unsigned short) var_8);
}
