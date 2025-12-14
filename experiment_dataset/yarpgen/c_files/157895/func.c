/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157895
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-31244)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_14 = arr_0 [i_0];
        arr_2 [i_0] = ((/* implicit */unsigned char) ((arr_1 [i_0] [i_0]) >= ((((_Bool)1) ? (((((/* implicit */_Bool) var_0)) ? (arr_1 [(unsigned char)3] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) (unsigned short)10738))))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [(_Bool)1] [i_3] [i_4] |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_11 [i_0] [i_1] [i_1] [i_2] [i_1] [i_0] [i_4])))) ? (min((var_11), (((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_0] [i_3] [i_0] [i_4] [i_4])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0])))))) * (((((/* implicit */unsigned long long int) min((((/* implicit */int) var_2)), (arr_11 [i_4] [i_4] [i_3] [i_2] [i_1] [i_1] [(unsigned short)1])))) * (0ULL)))));
                                arr_14 [i_0] [17U] [i_1] [i_2] [i_2] [17U] [i_2] = ((/* implicit */short) ((((((/* implicit */int) (short)31243)) / ((+(((/* implicit */int) arr_10 [i_0] [i_3])))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10740)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? ((-(var_8))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_0])) : (2147483647)))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) arr_8 [(short)19] [i_1] [18ULL]);
                }
            } 
        } 
    }
}
