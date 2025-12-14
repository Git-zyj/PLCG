/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144327
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
    for (int i_0 = 4; i_0 < 7; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                var_11 = ((((/* implicit */_Bool) (unsigned short)574)) ? (((/* implicit */int) arr_5 [i_0 + 3])) : (((arr_3 [i_1 - 1] [i_1 - 1]) ? (((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 1])) : (((((/* implicit */_Bool) arr_5 [8ULL])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))))));
                arr_6 [i_1 - 2] [i_0 + 3] |= ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) && (((/* implicit */_Bool) (+(((/* implicit */int) ((arr_3 [i_1 - 3] [i_0]) && (arr_3 [1LL] [i_1])))))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 3; i_2 < 6; i_2 += 3) 
                {
                    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((unsigned long long int) ((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */int) arr_5 [i_0 - 4])) : (((/* implicit */int) arr_8 [i_1 - 3] [i_0 - 4])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 6; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_16 [i_4] [i_3] [i_2 - 1] [i_1] [i_0] = ((/* implicit */short) (~(((var_5) ? (((/* implicit */int) arr_3 [6U] [i_1 - 2])) : (-1331263179)))));
                                arr_17 [i_0] [i_1] [i_0] [i_2 - 2] [(short)2] [(_Bool)1] [i_4] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2 + 3] [i_1] [9ULL] [i_2 + 4] [i_3 + 2] [9U])) ? (arr_11 [0ULL] [(_Bool)1] [0ULL] [i_2 - 1] [i_3 + 2] [i_3]) : (arr_11 [i_4] [(short)4] [i_2] [i_2 - 1] [i_3 + 4] [i_0])))) ? (((/* implicit */int) arr_5 [i_1 - 3])) : (((((/* implicit */int) ((signed char) arr_15 [i_0] [i_0] [(short)0]))) << (((((((/* implicit */_Bool) 1331263173)) ? (1331263201) : (1331263175))) - (1331263188)))))));
                                var_13 *= (+(((/* implicit */int) ((_Bool) 1331263180))));
                                var_14 -= ((/* implicit */int) (short)5086);
                                var_15 = ((/* implicit */short) 18446744073709551606ULL);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) (_Bool)1);
                }
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_2);
}
