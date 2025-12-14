/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188905
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
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */int) ((unsigned char) (~((~(2528516831U))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_4 = 1; i_4 < 10; i_4 += 2) 
                        {
                            arr_13 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [10] [10] [i_3 - 3] [i_0])) ? (arr_4 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                            arr_14 [i_0] = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4] [6U] [6U] [i_1] [i_0]))) - (14742059107047863087ULL)))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (((-(((/* implicit */int) (short)14122)))) * (((/* implicit */int) ((signed char) (short)14122)))))) - (((3704684966661688514ULL) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-14126)))))))));
                            arr_17 [(unsigned char)3] [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_15 [0] [i_2] [i_3 + 1] [i_3 + 1] [i_3 - 2] [0] [i_3 + 1]);
                            arr_18 [i_0] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) 1537070932U);
                        }
                        var_19 = (short)-14122;
                    }
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        var_20 = ((/* implicit */signed char) 1509605108U);
                        var_21 += arr_21 [i_0] [i_1] [i_1] [i_1];
                    }
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        var_22 = (-(((/* implicit */int) (short)16172)));
                        arr_25 [i_0] [i_1] [(unsigned short)4] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) arr_16 [i_0] [i_0] [i_1] [i_2] [i_7]))) << ((((-(arr_24 [i_1] [i_1] [i_7]))) + (1632894623)))));
                        var_23 = ((/* implicit */short) (unsigned char)250);
                        arr_26 [i_0] [9] [i_0] [i_7] = ((/* implicit */short) var_2);
                    }
                    arr_27 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (short)15872)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (short)14122))))));
                    var_24 = ((/* implicit */short) arr_0 [i_0]);
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)16173)) ^ (((/* implicit */int) ((((/* implicit */_Bool) ((int) var_2))) || (((/* implicit */_Bool) ((short) var_0))))))));
}
