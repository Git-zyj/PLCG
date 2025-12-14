/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124784
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
    var_11 = ((/* implicit */_Bool) ((signed char) var_7));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [(unsigned char)16] [i_1] [i_3 - 1] [(unsigned char)16] = ((/* implicit */unsigned int) (~(((((/* implicit */int) ((unsigned short) (short)-4109))) - (((((/* implicit */_Bool) arr_10 [i_0] [11] [11] [i_1] [11])) ? (var_6) : (((/* implicit */int) (short)-4109))))))));
                                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_3 - 1] [i_2 + 1] [i_2 + 1])))))));
                                arr_16 [i_0] [6U] [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) ((((unsigned long long int) arr_14 [i_0] [(unsigned short)23] [i_2 - 1] [i_3 - 2] [i_3 - 2] [(unsigned short)23])) >= (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) (short)-4137)), (3062608462U))) >> (((var_10) - (10786826235516344592ULL))))))));
                                arr_17 [i_0] [i_1] [i_2 + 1] = ((/* implicit */signed char) max((((unsigned long long int) (short)-4137)), (((/* implicit */unsigned long long int) max((arr_13 [i_4] [i_4] [10LL] [i_1]), (arr_14 [i_0] [6ULL] [6ULL] [6ULL] [i_3 - 2] [i_2 - 1]))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_2 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_2 - 1] [i_2 + 1] [i_2 - 1]) & (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)4162)), (4294967274U))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (arr_8 [i_0] [9U] [17LL] [(signed char)18])))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) (short)4136))))) : ((-(arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1])))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) -1182160105);
                                var_14 = ((/* implicit */short) min((var_14), (((short) ((((/* implicit */int) (signed char)-8)) >= (((/* implicit */int) (signed char)12)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
