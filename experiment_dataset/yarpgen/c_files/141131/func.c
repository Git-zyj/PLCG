/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141131
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) arr_6 [i_4] [(unsigned short)18] [(unsigned short)18]);
                                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (-(arr_4 [i_0] [i_0] [i_0]))))));
                                arr_13 [i_0] [i_1] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) == (((((/* implicit */_Bool) ((unsigned int) arr_5 [i_0] [i_0] [i_0]))) ? (arr_12 [i_0] [i_2] [i_3] [i_3] [i_0] [i_0] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1])))))));
                                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)28)) ? (((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_2 [i_3] [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_4])) - (((/* implicit */int) (unsigned char)223)))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned char) arr_11 [i_0] [i_1] [i_2] [i_2] [i_2])), ((unsigned char)223))))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */int) arr_1 [i_0] [i_0]);
                                arr_18 [i_2] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_5] [i_5] [i_6])) - (((/* implicit */int) arr_9 [i_1] [i_2] [i_5] [i_6]))))) ? (((/* implicit */int) ((unsigned short) (unsigned char)33))) : (((/* implicit */int) arr_0 [i_5])));
                                var_18 *= ((/* implicit */unsigned long long int) arr_15 [(unsigned short)19] [i_5] [i_6]);
                            }
                        } 
                    } 
                    arr_19 [i_2] [19] [19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_17 [i_2] [i_1] [i_2] [i_1] [i_0]))) ? (((((/* implicit */int) ((((/* implicit */int) (unsigned short)64229)) < (((/* implicit */int) arr_15 [i_0] [i_1] [i_2]))))) >> (((((arr_11 [i_0] [i_2] [i_2] [i_1] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1298))) : (arr_4 [i_1] [i_1] [i_1]))) - (1281LL))))) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_2])) == (((arr_11 [i_0] [i_0] [i_1] [i_2] [i_2]) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (signed char)28)))))))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_2] [i_1] [i_0]))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_2))) % (arr_4 [i_0] [i_1] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_0] [i_0] [i_2])))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) var_12);
    var_21 += var_5;
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 10; i_7 += 2) 
    {
        for (short i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            {
                var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_14 [i_8] [i_8] [i_7] [i_7])))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-23221))));
                var_23 += ((/* implicit */unsigned char) (-(var_12)));
            }
        } 
    } 
    var_24 &= var_5;
}
