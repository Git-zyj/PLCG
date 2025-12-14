/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185823
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
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((_Bool) var_7)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_1 [i_0])))) < (((unsigned int) arr_1 [i_0 - 1]))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    arr_8 [18U] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) ((arr_6 [i_1] [i_1] [i_1]) == (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_3 [i_0]))))))), (((arr_2 [i_0 - 1] [i_0 + 1] [i_0 + 1]) / (arr_2 [i_0 + 1] [i_0 + 2] [i_0 - 1])))));
                    var_16 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_14) & (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) || (((/* implicit */_Bool) ((unsigned char) var_9)))));
                    var_17 |= var_0;
                }
                var_18 *= ((/* implicit */unsigned long long int) ((min((var_0), (var_2))) * (arr_4 [i_0 - 1] [i_0 + 2] [(short)0])));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((var_8) | (((((/* implicit */int) (short)-26640)) | (((/* implicit */int) (short)26654)))))) % (((/* implicit */int) (short)22990))));
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            {
                var_20 *= ((/* implicit */_Bool) ((unsigned short) (((+(((/* implicit */int) (short)26642)))) % (((/* implicit */int) ((_Bool) (short)23013))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5])))))) ? (((var_9) / (((/* implicit */int) arr_14 [i_5] [i_5])))) : (((/* implicit */int) arr_11 [i_3 + 1]))))))));
                    arr_18 [i_3 + 1] [i_4] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */short) (!(((/* implicit */_Bool) (short)-22966))))), (arr_1 [i_3 + 1])));
                    arr_19 [2] [i_4] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) arr_0 [i_3 + 1])) % (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_9 [i_4])) : (((/* implicit */int) (short)26636)))))));
                    var_22 = max((((/* implicit */short) var_5)), (((short) ((var_14) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-22982)))))));
                }
            }
        } 
    } 
}
