/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166395
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) min((((((/* implicit */_Bool) min((var_12), (((/* implicit */long long int) (short)0))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_2])) << (((var_0) - (1975554194))))))))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2])) ^ (((/* implicit */int) (unsigned char)151))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2])) >> (((((/* implicit */int) (signed char)72)) - (43))))))))) + (((int) ((((/* implicit */_Bool) (signed char)-57)) ? (18U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))))));
                        var_17 = ((/* implicit */unsigned short) max((min((arr_0 [i_0]), ((unsigned char)255))), (min((arr_0 [i_3]), (arr_0 [i_3])))));
                    }
                    for (long long int i_4 = 3; i_4 < 17; i_4 += 2) 
                    {
                        var_18 = (signed char)40;
                        arr_12 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_11 [i_4] [i_1] [i_1] [i_4])) ? (((/* implicit */unsigned int) -1495141351)) : (1137619901U))))) ? (((/* implicit */int) (short)0)) : (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_2])), (var_11)))) : (((((/* implicit */_Bool) 0U)) ? (2147483632) : (var_6)))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)0))));
                                arr_19 [i_6] [i_6] [i_6] [(unsigned short)0] [i_6] = ((/* implicit */long long int) ((((min((arr_2 [i_1] [3U]), (((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_1])))) != (((((/* implicit */_Bool) var_4)) ? (1137619901U) : (26U))))) ? (((((/* implicit */_Bool) arr_13 [i_6] [i_5] [(unsigned char)10] [i_1] [i_0])) ? (min((((/* implicit */unsigned int) (unsigned short)0)), (arr_14 [i_0] [i_1] [2ULL] [(_Bool)1] [i_6] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_11 [i_1] [i_5] [i_1] [i_1]) >= (((/* implicit */int) arr_1 [i_0])))))))) : (((/* implicit */unsigned int) ((var_13) / (((/* implicit */int) ((short) var_8))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 ^= -799548674;
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (-(min((max((var_14), (((/* implicit */unsigned long long int) (-2147483647 - 1))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)0)) * (((/* implicit */int) var_10))))))))))));
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((2686838994U) <= (((/* implicit */unsigned int) -997225333))))), (((var_12) + (((/* implicit */long long int) var_1))))))) > (min((((/* implicit */unsigned long long int) var_11)), (min((((/* implicit */unsigned long long int) 0U)), (var_5))))))))));
}
