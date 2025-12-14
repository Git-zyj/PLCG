/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149243
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
    var_20 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) max((var_0), (((/* implicit */unsigned char) var_7))))) > (((/* implicit */int) (unsigned char)4)))))) * (var_15));
    var_21 = ((/* implicit */unsigned int) min((var_1), (((/* implicit */long long int) var_2))));
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_18))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */long long int) (-(((/* implicit */int) var_0)))))));
                    var_24 = ((/* implicit */int) max((16949740812021831760ULL), (((/* implicit */unsigned long long int) (unsigned char)194))));
                    var_25 = ((/* implicit */unsigned char) min((var_25), (arr_0 [i_0])));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            var_26 = ((/* implicit */long long int) arr_10 [(short)1] [i_0]);
                            var_27 = ((/* implicit */signed char) (-(var_12)));
                            var_28 = ((/* implicit */int) arr_8 [i_4] [i_3] [1] [i_0]);
                            var_29 = ((/* implicit */_Bool) arr_6 [3U] [i_1] [(unsigned short)7] [(unsigned short)7]);
                        }
                        var_30 = ((/* implicit */int) max(((~(604162223U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1] [i_1 + 1])) <= (((/* implicit */int) arr_5 [i_1] [i_1 - 1])))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned short) arr_13 [i_1 + 1] [i_5]);
                        var_32 = ((/* implicit */_Bool) var_15);
                        var_33 = (unsigned char)200;
                        var_34 = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0]))) & (arr_1 [(signed char)10] [(unsigned char)2])))));
                    }
                    var_35 = ((/* implicit */short) var_10);
                }
            } 
        } 
    } 
}
