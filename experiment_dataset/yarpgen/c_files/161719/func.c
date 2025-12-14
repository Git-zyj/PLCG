/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161719
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
    var_10 = ((/* implicit */short) (-(var_9)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) ((arr_5 [i_0] [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) (short)8)))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    var_11 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_1] [(unsigned short)4]))))))))));
                    var_12 = ((/* implicit */short) arr_8 [i_1]);
                    var_13 = ((/* implicit */int) var_5);
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 1; i_4 < 19; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 2; i_5 < 19; i_5 += 1) 
                        {
                            {
                                arr_17 [(unsigned short)14] [(unsigned short)6] [i_1] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */short) (~(280375465082880ULL)));
                                arr_18 [i_4] [i_5] [i_1] [i_1] [(unsigned char)4] [i_1] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_5 + 2] [i_5 + 2] [i_5]))));
                            }
                        } 
                    } 
                    var_14 = ((((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_3]))) : (var_8))) != (((/* implicit */unsigned int) (~(((/* implicit */int) arr_14 [i_0] [i_3] [i_3] [i_1] [i_3] [i_3]))))));
                    arr_19 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) (~(280375465082880ULL)));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            {
                                arr_27 [i_0] [i_1] [i_3] [i_6] [i_7] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (_Bool)1))))));
                                var_15 = ((/* implicit */signed char) (_Bool)1);
                                arr_28 [i_0] [i_0] [i_0] [i_6] [i_7] = 280375465082880ULL;
                                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_1])))));
                            }
                        } 
                    } 
                    var_17 = ((long long int) arr_13 [i_1] [11LL] [i_1] [i_1]);
                }
                arr_29 [i_0] [i_0] = ((/* implicit */unsigned char) max((280375465082880ULL), (((/* implicit */unsigned long long int) (unsigned char)253))));
            }
        } 
    } 
}
