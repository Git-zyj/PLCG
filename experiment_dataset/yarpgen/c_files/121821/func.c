/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121821
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */short) arr_1 [i_0]);
                var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32752)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-32738))))))))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 9; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                            {
                                arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) ((signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (var_0))) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)(-32767 - 1)))))))));
                                var_12 ^= ((/* implicit */signed char) (~(arr_10 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_4])));
                            }
                            var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (~(((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_2] [i_0] [(_Bool)1] [i_3])))))));
                            arr_12 [(unsigned short)2] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? ((-(((/* implicit */int) arr_7 [i_0] [8U] [i_0] [i_0] [i_3] [5])))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) var_7))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? ((~(arr_6 [i_0] [(unsigned char)0] [i_0]))) : (((/* implicit */int) ((unsigned char) arr_8 [0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */int) var_3)) : ((-2147483647 - 1)))) : (((/* implicit */int) arr_5 [i_1] [i_2 + 2] [i_2 - 1] [i_2 + 2]))))));
                            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) max((((unsigned int) max((arr_3 [6U] [6U]), (((/* implicit */int) var_9))))), (((/* implicit */unsigned int) (!(arr_7 [i_0] [i_2 - 2] [i_2] [i_2] [i_2] [i_2 - 1])))))))));
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_5 = 3; i_5 < 18; i_5 += 2) 
    {
        for (unsigned int i_6 = 2; i_6 < 20; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5 + 2] [i_5 - 2])) ? (((/* implicit */unsigned long long int) -1421409974)) : (arr_16 [i_5 + 1] [i_5 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_6 - 2]))))) : (((/* implicit */int) arr_17 [i_6 + 1]))));
                    arr_20 [i_5] [i_5] [i_7] = ((/* implicit */int) var_8);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_9);
    var_18 = ((/* implicit */signed char) var_8);
}
