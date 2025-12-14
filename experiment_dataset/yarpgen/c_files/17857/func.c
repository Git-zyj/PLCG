/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17857
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
    var_15 += ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (unsigned short)0))));
                                var_17 = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) 1490901559))))), (1088741852)));
                                arr_14 [i_4 - 1] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-124)) || (((/* implicit */_Bool) (unsigned char)248))));
                                arr_15 [i_4] [i_4] [i_0] [i_3] = ((/* implicit */_Bool) var_4);
                                arr_16 [i_0] [i_1 + 3] [i_2] [i_3] [i_0] = (!(((/* implicit */_Bool) (unsigned short)0)));
                            }
                        } 
                    } 
                } 
                var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_4 [i_1 + 1]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_0] [13ULL] [i_0] [i_0 - 1] [i_0])))))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_1 + 1])) : (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (signed char)10))))));
                arr_17 [i_1] [i_1] |= ((/* implicit */unsigned char) arr_1 [i_1]);
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) 2147483647);
    /* LoopNest 2 */
    for (unsigned char i_5 = 1; i_5 < 21; i_5 += 4) 
    {
        for (short i_6 = 3; i_6 < 19; i_6 += 4) 
        {
            {
                var_20 = ((/* implicit */signed char) (((-(((/* implicit */int) var_6)))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_5 - 1] [1U])) ? (((/* implicit */int) arr_19 [i_5 + 1] [i_5 + 1])) : (((/* implicit */int) var_1))))) ? ((+(((/* implicit */int) arr_22 [i_5] [i_5])))) : (((/* implicit */int) min((var_12), (arr_21 [i_5]))))))));
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [i_6 - 3] [i_6 - 3])) > (((int) (_Bool)1)))))));
            }
        } 
    } 
}
