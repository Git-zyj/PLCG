/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107755
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            arr_4 [i_0] [i_0] [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (867240767U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 4031429379236520437LL))))));
            arr_5 [i_0 + 1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_0 + 2])) / (((/* implicit */int) (_Bool)1)))) / (((((/* implicit */_Bool) (unsigned char)93)) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) (unsigned char)252))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 16; i_2 += 3) 
        {
            for (short i_3 = 2; i_3 < 16; i_3 += 3) 
            {
                {
                    arr_13 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) arr_8 [(short)14]);
                    arr_14 [i_3] = ((/* implicit */unsigned int) (unsigned char)93);
                    arr_15 [i_3] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (1222688088U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) + (((((/* implicit */_Bool) (unsigned char)52)) ? (arr_11 [i_0 + 4] [7LL] [i_3 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) > (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)162)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-30300))))))))));
                    arr_16 [i_3] [i_0 + 3] [i_0 + 3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) var_17)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 2; i_4 < 17; i_4 += 3) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_2] [i_3] [10] [8] [(_Bool)1] |= ((((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-1LL))) | (((/* implicit */long long int) ((/* implicit */int) var_5))))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])))))));
                                arr_22 [i_0] [i_0] [i_0] [(short)3] [i_5] [i_0] = ((/* implicit */unsigned long long int) max(((+(var_12))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) var_4))))) <= (((((/* implicit */_Bool) -3630519638691738401LL)) ? (((/* implicit */unsigned long long int) -1LL)) : (108086391056891904ULL))))))));
                                arr_23 [(_Bool)1] [i_5] = ((/* implicit */unsigned char) 867240767U);
                                arr_24 [i_5] [i_5] [i_3] [i_3] [i_2] [i_5] [i_0 + 3] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((short) (short)13595))), (max((max((0LL), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) ((((/* implicit */int) (short)6424)) | (((/* implicit */int) var_17)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_25 [i_0] = ((/* implicit */unsigned char) ((_Bool) var_8));
    }
    /* vectorizable */
    for (unsigned char i_6 = 1; i_6 < 14; i_6 += 4) /* same iter space */
    {
        arr_29 [i_6] = ((/* implicit */_Bool) ((unsigned long long int) var_14));
        arr_30 [i_6] = ((/* implicit */int) ((unsigned int) (unsigned char)163));
    }
    var_20 = ((/* implicit */_Bool) (~(max((((/* implicit */int) var_13)), (((var_2) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)44196))))))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) ^ (-1LL)))) ? (3072279191U) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)14))))))) ? (((3072279217U) / (((unsigned int) var_2)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((short) (unsigned short)60160))))))));
}
