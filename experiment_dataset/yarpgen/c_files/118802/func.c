/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118802
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_13 [i_2] [i_3] [(short)19] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_9 [i_2] [i_2 - 1] [i_4] [i_4 + 2]), ((short)-1))))));
                                arr_14 [i_2] [i_2] [i_0] [i_3] [i_2 + 1] [i_2] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0] [i_1] [i_2 - 1] [i_4 - 2]))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0] [i_1] [i_2 + 1] [i_3]))))) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) (short)-10)) : (arr_6 [i_0] [i_2]))) : (((/* implicit */int) (short)10)))) : ((~(((/* implicit */int) arr_11 [i_4] [(signed char)10] [i_4 + 1] [i_2] [i_4 + 1])))));
                                arr_15 [i_2] [i_2] [i_2] [i_4 + 1] [i_4] [i_3] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned short) arr_1 [i_2 - 1])), (((unsigned short) max((((/* implicit */unsigned long long int) (short)22704)), (arr_5 [(short)3] [i_0]))))));
                                arr_16 [i_4] [i_4 - 2] [i_4 - 2] [(signed char)15] [i_4 - 2] [i_2] = ((/* implicit */signed char) (short)-5);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_6 [i_6] [i_2])) ? (((/* implicit */int) arr_18 [15] [i_5] [i_1] [i_0])) : (((/* implicit */int) (short)20))))))) ? ((-(((/* implicit */int) arr_7 [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 1])))) : (((/* implicit */int) (short)-13))));
                                arr_22 [i_6] [5] [5] [i_6] [i_6] [i_2] [i_6] = ((/* implicit */int) (short)-10);
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (short)13)))) < (max(((+(((/* implicit */int) (short)-13)))), (((/* implicit */int) arr_19 [i_1] [(signed char)1] [i_2 - 1] [i_0] [0ULL] [i_2]))))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (arr_6 [i_0] [i_0]) : (arr_6 [i_7] [i_1]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        var_14 |= ((/* implicit */unsigned short) arr_10 [i_0] [i_1] [i_7]);
                        arr_30 [i_0] [i_1] [i_7] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_24 [1LL] [i_8]))));
                    }
                }
                for (short i_9 = 0; i_9 < 20; i_9 += 3) 
                {
                    var_15 += ((/* implicit */_Bool) ((int) ((((((/* implicit */_Bool) (short)13)) ? (((/* implicit */int) (short)-11)) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1] [i_1])))) - (((/* implicit */int) (short)4)))));
                    var_16 = ((/* implicit */int) ((short) ((signed char) arr_32 [i_0] [i_0] [i_9] [i_1])));
                    var_17 = ((/* implicit */unsigned short) (~(max((((/* implicit */int) var_6)), ((-(((/* implicit */int) (signed char)-37))))))));
                    var_18 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)4)) : (((/* implicit */int) (short)-10))))));
                }
                arr_33 [i_0] = ((/* implicit */unsigned long long int) arr_17 [i_1] [i_1] [i_1] [i_1]);
            }
        } 
    } 
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_4))));
}
