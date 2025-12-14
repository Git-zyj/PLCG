/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12711
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_4 [i_0])))), (((/* implicit */int) ((var_10) < (var_6))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (short i_4 = 1; i_4 < 19; i_4 += 3) 
                            {
                                var_14 = ((/* implicit */unsigned long long int) min((var_14), ((-(min((((((/* implicit */_Bool) (unsigned char)23)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned long long int) arr_1 [(unsigned short)13])), (arr_16 [6] [i_1] [i_2] [i_2] [i_4 - 1])))))))));
                                arr_17 [(_Bool)1] [i_3] = ((/* implicit */signed char) min((((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_0]))))), (min((((/* implicit */signed char) (_Bool)1)), (arr_9 [i_0] [i_0] [i_0] [i_0])))))), (((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */int) (unsigned char)169)) : (((/* implicit */int) (_Bool)1))))));
                            }
                            arr_18 [i_0] [i_3] [i_0] [4ULL] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) > (((((/* implicit */_Bool) (((_Bool)1) ? (arr_2 [i_0]) : (arr_16 [i_3 + 2] [i_0] [(short)15] [i_0] [i_0])))) ? (545460846592ULL) : (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */long long int) arr_7 [i_0])))))))));
                        }
                    } 
                } 
                var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [(short)8] [i_0]))))) ? ((-(max((var_12), (((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)12))))) ? (2147483647) : (((/* implicit */int) max(((short)12), (((/* implicit */short) (unsigned char)244)))))))));
                var_16 = ((/* implicit */int) min((var_16), ((-(((/* implicit */int) var_5))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((unsigned char) var_11));
}
