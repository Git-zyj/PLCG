/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150393
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
    var_11 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 4; i_2 < 18; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_2 - 2] [i_3] [i_3] [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_3 [i_1] [(unsigned char)9]))))) ? (((/* implicit */int) arr_4 [i_0] [i_3])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0]))))))))))));
                            var_13 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_7 [i_1] [i_1] [i_2])), (((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? ((-(((/* implicit */int) arr_3 [i_0] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2] [i_1])))))))));
                            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1] [i_3])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_10))))) : ((+(var_4))))), (((/* implicit */unsigned int) var_2)))))));
                            arr_12 [i_1] = ((/* implicit */unsigned char) min((max(((~(3240032107U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3240032107U)) ? (((/* implicit */int) (unsigned short)3)) : ((-2147483647 - 1))))) ? (((var_0) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_0] [i_0])))))))));
                        }
                    } 
                } 
                var_15 -= ((/* implicit */_Bool) arr_0 [i_0]);
                var_16 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [0U])) ? (((/* implicit */int) arr_7 [i_1] [i_1] [i_1])) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0])))) : (((/* implicit */int) arr_8 [i_1])))), (((/* implicit */int) var_8))));
                var_17 |= ((/* implicit */unsigned char) (~((-((~(2147483625)))))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */int) (short)-7650)) : (((/* implicit */int) (unsigned short)65533)))) : ((-(((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_11 [i_0] [i_1] [i_1])), (arr_5 [i_0] [i_0] [i_1])))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_3 [i_1] [i_0]))))) : (((var_0) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1]))) : (arr_5 [i_0] [(unsigned char)17] [i_0])))))));
            }
        } 
    } 
}
