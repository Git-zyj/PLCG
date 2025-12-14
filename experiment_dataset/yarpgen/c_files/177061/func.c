/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177061
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
    var_11 = (~(((((/* implicit */_Bool) (~(1285118321)))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
    var_12 = ((/* implicit */unsigned int) (+(var_6)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_5 [i_0 - 2] [i_0 + 1]))) & (((/* implicit */int) arr_5 [i_0 - 2] [i_0 + 1]))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [(_Bool)1] [i_1 - 3] [i_2] [i_3 - 1] [(unsigned char)16] &= ((/* implicit */signed char) (-(((/* implicit */int) arr_2 [(short)6]))));
                                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0] [i_0] [(signed char)9] [i_2] [i_0] [(short)22])))))))) + (((/* implicit */int) ((arr_3 [i_1] [i_1 + 4] [i_1 + 4]) == (((((/* implicit */int) arr_4 [i_1] [i_1] [i_4])) << (((((/* implicit */int) arr_0 [i_2])) - (235)))))))))))));
                                var_14 += ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_0 [i_0 - 2]), (((/* implicit */unsigned char) arr_10 [i_4] [i_2] [i_1 - 2] [i_0])))))))), ((((!(((/* implicit */_Bool) arr_2 [(signed char)12])))) ? (((arr_3 [i_0 - 2] [(unsigned char)6] [(unsigned char)6]) / (((/* implicit */int) arr_2 [(_Bool)1])))) : (min((-1285118348), (((/* implicit */int) arr_13 [(signed char)20] [(unsigned short)1] [(signed char)20] [(unsigned short)16] [(unsigned short)1] [i_4]))))))));
                                var_15 = ((/* implicit */unsigned int) arr_5 [i_4] [i_1 + 3]);
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)125)) + (((((/* implicit */int) ((short) (_Bool)0))) / (-1285118348)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            {
                var_17 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_6] [i_5] [i_5] [i_5] [i_6]))))) <= (arr_6 [i_6] [12ULL] [(_Bool)1] [12ULL])));
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)125)))))));
            }
        } 
    } 
}
