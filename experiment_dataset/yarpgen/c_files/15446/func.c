/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15446
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
    var_10 = ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) min((((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)77)))))), (min((((/* implicit */short) (unsigned char)18)), (arr_3 [i_0 - 2] [i_0] [i_0 + 1])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)33898)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [i_1 + 2]))) : ((((_Bool)0) ? (arr_5 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246)))))));
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((arr_1 [i_2] [(unsigned short)12]) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (_Bool)1))));
                    arr_9 [i_0] [i_0] [15U] = ((/* implicit */signed char) ((_Bool) arr_4 [(_Bool)1] [i_0]));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_13 ^= ((/* implicit */signed char) ((arr_4 [i_0] [i_1]) > (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)55702)))))));
                                var_14 = ((arr_1 [i_0 + 1] [i_0 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 2]))) : (var_1));
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)30185)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) -1367444523)) : (((((/* implicit */_Bool) var_5)) ? (arr_15 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) var_5))))))));
                            }
                        } 
                    } 
                }
                var_16 = arr_5 [i_0];
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((short) var_9))) + ((+(var_5))))) | (var_6)));
}
