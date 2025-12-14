/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153571
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
    var_12 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) var_10)) < (((int) (-9223372036854775807LL - 1LL))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_0] [(signed char)7] = ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
                var_13 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [6] [6])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))), (9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1] [i_0] [i_0])) | (((/* implicit */int) var_6)))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 4; i_2 < 17; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) ((signed char) (+((-9223372036854775807LL - 1LL)))));
                            var_15 -= ((/* implicit */long long int) max(((+(((((/* implicit */int) arr_2 [(_Bool)0] [i_2] [i_3])) << (((((/* implicit */int) (short)-22636)) + (22645))))))), (((((/* implicit */_Bool) arr_3 [i_1] [i_3])) ? (((var_9) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_0] [i_0] [(unsigned char)5])))) : (((/* implicit */int) max(((_Bool)0), (var_9))))))));
                            arr_10 [i_2] [i_2] = ((/* implicit */unsigned short) var_2);
                        }
                    } 
                } 
                var_16 = max((((((/* implicit */_Bool) (short)28718)) ? (((int) arr_8 [i_1] [i_1] [i_1] [(unsigned char)16])) : (((/* implicit */int) arr_7 [i_1 + 1] [(unsigned short)8] [i_1] [i_1 + 1])))), (2100090616));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)32767)) : (((/* implicit */int) var_8)))))), (((/* implicit */int) ((signed char) max((8388607U), (((/* implicit */unsigned int) var_11))))))));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10578344677161066275ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-17437))) : (5253948038850802665LL)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)0)))) : (2966538284U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    /* LoopNest 2 */
    for (unsigned char i_4 = 1; i_4 < 15; i_4 += 1) 
    {
        for (unsigned int i_5 = 1; i_5 < 17; i_5 += 3) 
        {
            {
                var_19 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_1 [i_4 + 1] [i_4 - 1])) ? (((/* implicit */int) arr_1 [i_4 + 3] [i_4 + 1])) : (((/* implicit */int) arr_1 [i_4 + 3] [i_4 + 1])))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    for (short i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        {
                            var_20 |= ((/* implicit */unsigned int) (-(((/* implicit */int) min((((unsigned short) var_9)), (((/* implicit */unsigned short) var_9)))))));
                            arr_20 [i_4] [i_4] [(_Bool)1] [i_4] = ((/* implicit */unsigned short) ((int) ((unsigned char) (_Bool)1)));
                            var_21 = ((/* implicit */short) (-(((/* implicit */int) var_4))));
                        }
                    } 
                } 
            }
        } 
    } 
}
