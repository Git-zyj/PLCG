/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132891
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                var_14 += ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [(unsigned short)3] [i_0]))));
                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [(unsigned short)12])) ? (((/* implicit */int) arr_3 [7U])) : (((/* implicit */int) arr_3 [i_0]))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_0);
    /* LoopNest 3 */
    for (unsigned char i_2 = 1; i_2 < 15; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                {
                    var_17 -= ((/* implicit */_Bool) (-(arr_5 [(short)9] [i_3])));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 15; i_6 += 2) 
                        {
                            {
                                arr_19 [i_2] [10] [i_4 + 1] [i_3] [i_6] |= ((/* implicit */long long int) (unsigned short)65516);
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_12 [i_4 + 1] [i_4 + 1] [i_4 + 1]), (((/* implicit */signed char) ((((/* implicit */int) (signed char)25)) < (((/* implicit */int) (unsigned short)43099)))))))) ? (min((min((var_6), (((/* implicit */long long int) (unsigned char)52)))), (((/* implicit */long long int) arr_7 [i_2])))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)13)))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) min((((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_10 [i_2 + 2])))) ? (((/* implicit */int) min(((short)11639), ((short)-16409)))) : (((/* implicit */int) var_10)))), (((((/* implicit */_Bool) arr_18 [i_4 + 1] [i_4] [i_4] [i_4 + 1] [(unsigned char)15])) ? (arr_18 [i_4 + 1] [11U] [i_4 + 1] [i_4 + 1] [i_4]) : (arr_18 [i_4] [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1])))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((max((((((/* implicit */int) (unsigned char)155)) ^ (((/* implicit */int) var_7)))), (((/* implicit */int) ((unsigned char) (unsigned char)26))))) > (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_2))))))));
}
