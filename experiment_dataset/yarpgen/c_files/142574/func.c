/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142574
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
    var_19 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)132))), (1596499289450528639ULL))) << (((((/* implicit */int) var_13)) - (61315)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    for (signed char i_3 = 3; i_3 < 9; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((7039085088034039714ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((1596499289450528639ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_1 + 1] [i_2] [i_0])))))))))) ? ((+(((/* implicit */int) arr_1 [i_0 + 1])))) : (((/* implicit */int) arr_9 [i_0] [i_0 - 1] [i_2 + 1] [(unsigned char)5] [i_3 - 3]))));
                            arr_10 [i_0] [i_2] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((arr_5 [i_0 + 2] [i_1 + 2] [i_2] [i_2]) + (9223372036854775807LL))) << (((((/* implicit */int) var_13)) - (61331))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) (short)16)) : (((/* implicit */int) (unsigned char)3)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0])) & (((/* implicit */int) (unsigned char)127)))))))) : (((/* implicit */int) (((~(1602217267527133745LL))) < (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_2 - 1] [i_3])) - (((/* implicit */int) (unsigned char)3))))))))));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) min((max((2771684673U), (((/* implicit */unsigned int) arr_1 [i_2 + 2])))), (((/* implicit */unsigned int) max((arr_4 [i_3] [i_0 - 3] [i_0 - 3]), (((/* implicit */unsigned short) arr_1 [i_0 - 3]))))))))));
                            arr_11 [i_0] [i_1] [i_2] [i_0] [i_1 - 2] [i_1] = ((/* implicit */signed char) max((1523282622U), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (short)-31129)) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (short)508)))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_0 - 2])) : ((-(((/* implicit */int) arr_0 [i_0] [i_0])))))), (((/* implicit */int) arr_2 [i_0 + 1]))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) var_14);
}
