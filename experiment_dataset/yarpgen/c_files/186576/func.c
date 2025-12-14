/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186576
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
    var_20 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_5)), (arr_0 [i_0]))))));
                arr_4 [6U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)46852)) ? (((/* implicit */int) (unsigned short)46852)) : (((/* implicit */int) (unsigned short)46852))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-24683)), (arr_7 [i_1] [i_1] [i_1] [i_3])))) ? (((/* implicit */int) ((_Bool) (signed char)-31))) : (((/* implicit */int) var_14))))) ? ((-(((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_3])))) : (((((/* implicit */_Bool) (unsigned short)46852)) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) arr_2 [i_1])))))))));
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)46847)) >> (((((/* implicit */int) ((unsigned char) arr_0 [(short)9]))) - (121))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                arr_19 [i_0] [i_0] &= ((/* implicit */unsigned int) (-(((long long int) ((((/* implicit */int) (unsigned short)18683)) * (((/* implicit */int) (unsigned short)59575)))))));
                                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) arr_13 [i_0] [i_1] [i_4] [i_4] [i_6]))));
                                var_25 = ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_9 [i_0] [i_1])))), ((~(((/* implicit */int) arr_9 [(unsigned short)13] [i_1]))))));
                                arr_20 [i_4] [i_5] [i_4] [i_4] = ((/* implicit */short) arr_2 [i_1]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
