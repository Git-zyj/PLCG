/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132795
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
    var_19 = ((/* implicit */_Bool) 828712372);
    var_20 = var_3;
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_21 = ((/* implicit */short) (_Bool)1);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */signed char) arr_4 [i_2] [i_1]);
                    arr_6 [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) var_5);
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((504403158265495552LL) + (((/* implicit */long long int) 2147483638))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            var_24 += ((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2 - 1]);
                            var_25 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_3] [i_4]))) == (((18ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))) ^ (((/* implicit */int) var_1))));
                            var_26 = ((/* implicit */unsigned short) arr_1 [i_0 + 2]);
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_16)) >= (((-504403158265495561LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54819)))))));
                        }
                        for (int i_5 = 1; i_5 < 23; i_5 += 4) 
                        {
                            var_28 = ((/* implicit */short) var_4);
                            var_29 = ((/* implicit */unsigned char) (unsigned short)23);
                            var_30 = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (var_2)))) >> ((((-(((/* implicit */int) (signed char)3)))) + (16))))) * (((/* implicit */int) ((var_15) != (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                        }
                    }
                }
            } 
        } 
        var_31 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)171))) != (((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [(signed char)22] [i_0]))) : (arr_4 [(_Bool)1] [8U]))) / (((/* implicit */unsigned long long int) ((int) var_6)))))));
    }
}
