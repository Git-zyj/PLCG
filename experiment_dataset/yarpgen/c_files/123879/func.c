/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123879
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    for (signed char i_3 = 4; i_3 < 14; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_11 [i_4] [i_1] [i_2] [i_3 - 3] [(short)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)5077)) ? (((/* implicit */int) var_12)) : (((int) arr_0 [i_1] [15U]))))) : ((-(arr_4 [i_0] [10U] [i_3 - 2])))));
                                var_19 = ((/* implicit */unsigned char) var_4);
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_8 [i_0] [i_1] [i_1] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0])))))) : (min((arr_9 [i_0] [i_0] [i_2] [i_2] [i_4]), (((/* implicit */unsigned int) var_6))))))) > (((((/* implicit */_Bool) ((int) (unsigned char)126))) ? (min((arr_4 [i_0] [i_2] [i_4]), (((/* implicit */long long int) (short)-17506)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -691559666)) ? (((/* implicit */int) (short)-19957)) : (((/* implicit */int) (unsigned char)141))))))))))));
                            }
                        } 
                    } 
                } 
                var_21 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (arr_7 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) * (max((((/* implicit */long long int) (unsigned short)0)), (-6793464852089664763LL)))));
                arr_12 [14ULL] [i_0] [14ULL] = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)31019)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32304)))));
}
