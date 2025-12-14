/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158469
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
    var_18 = var_1;
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [0LL] |= ((/* implicit */long long int) arr_0 [i_1]);
                var_19 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_0 [i_0]))) >> (((((((/* implicit */_Bool) (unsigned char)8)) ? (1714318574U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)163))))) - (1714318560U)))))), (0ULL)));
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 17; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_21 = ((/* implicit */int) max((var_21), ((-(((/* implicit */int) ((max((arr_9 [i_2] [i_2]), (((/* implicit */unsigned int) (unsigned char)159)))) < (((/* implicit */unsigned int) ((int) (unsigned short)38744))))))))));
                var_22 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_7 [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_7 [i_2 + 1] [i_2 + 1]))))) / (((long long int) var_9))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_4 = 3; i_4 < 16; i_4 += 2) 
                {
                    var_23 = ((/* implicit */short) arr_6 [i_2] [i_2]);
                    var_24 |= ((((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) (short)-4742))))) >= (((unsigned long long int) (unsigned char)81)));
                    arr_15 [i_2] [i_2] = ((/* implicit */unsigned char) arr_9 [i_2] [i_2]);
                }
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) (short)-3798);
                            arr_22 [i_2] [i_3] [i_5] [i_6] [i_2] [i_6] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_2)) ? (1734240049) : (arr_20 [i_2 - 1] [i_6 - 1] [i_6 - 1]))));
                            var_26 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))), (max((arr_20 [(unsigned char)7] [i_3] [i_3]), (((/* implicit */int) arr_11 [i_6] [i_5] [i_3]))))))) ? (((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned char) arr_19 [i_2] [i_3] [i_6] [i_2] [i_5] [i_5]))))) ? (((/* implicit */int) ((unsigned char) arr_19 [i_2] [13] [i_3] [i_3] [i_5] [13]))) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
                            var_27 = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_3] [i_3]))))), (arr_16 [i_2 + 1] [i_3]))), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) arr_14 [i_6 - 1] [i_5] [i_2] [i_2]))), (-1734240048))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
