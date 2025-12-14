/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102015
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
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) (signed char)119)))));
                    arr_9 [i_0] [i_0] [i_0] = arr_1 [(short)3];
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 4294967273U)))) ^ ((~(4294967271U)))))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    arr_12 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) | ((~(((arr_6 [(_Bool)1] [(unsigned char)1] [(unsigned char)1] [(unsigned char)1]) ? (arr_7 [i_3] [(_Bool)1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70)))))))));
                    arr_13 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) var_4);
                    var_19 *= ((/* implicit */signed char) arr_11 [i_1] [i_0 + 2] [i_0]);
                    var_20 *= ((/* implicit */unsigned int) var_9);
                }
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_18 [i_0] [i_4] = ((/* implicit */int) (~(262143LL)));
                    arr_19 [i_0 + 1] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */unsigned char) arr_11 [i_0] [i_1] [i_4])), (arr_17 [i_0])))), (min((9223372036854775807LL), (((/* implicit */long long int) arr_1 [i_1])))))))));
                }
                arr_20 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (short)-1)) <= (((/* implicit */int) (!((_Bool)1))))))), (max(((~(var_2))), (((/* implicit */unsigned int) var_13))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_23 [i_0] [i_0] [i_1] [i_0] = (unsigned short)14284;
                    arr_24 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) (+((~(var_8)))));
                }
                arr_25 [i_0 + 2] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_6);
            }
        } 
    } 
    var_21 = var_4;
    var_22 = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_5))))));
    var_23 = ((/* implicit */long long int) var_16);
}
