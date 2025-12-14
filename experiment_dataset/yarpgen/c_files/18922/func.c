/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18922
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */signed char) var_13))))) ? (((/* implicit */int) var_4)) : ((+(((int) 280375465082880LL))))));
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (((_Bool)1) ? (var_8) : (((/* implicit */int) var_4)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) / (var_5)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_2]))))) : (var_12)))) ? ((-(((/* implicit */int) var_7)))) : (min((arr_1 [i_0] [i_1 - 2]), (((/* implicit */int) var_11)))))))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_4 [i_0] [i_2]);
                    var_22 = ((/* implicit */short) min((((/* implicit */int) var_6)), (arr_1 [i_0] [i_1 - 2])));
                }
                for (unsigned char i_3 = 3; i_3 < 12; i_3 += 1) 
                {
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((max((((/* implicit */long long int) arr_9 [i_3 + 1] [i_3 + 1])), (((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (arr_2 [i_0] [i_3 + 1]) : (-280375465082881LL))))) >> (((((((/* implicit */_Bool) ((11868867472534860944ULL) >> (((var_8) - (1877883044)))))) ? (arr_10 [i_0] [i_1 - 1] [i_3 - 3]) : (((long long int) arr_9 [i_1 + 1] [i_3])))) + (8255602161926255562LL))))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 3; i_4 < 10; i_4 += 2) 
                    {
                        for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            {
                                var_24 -= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_5 [i_0] [i_0] [i_3 - 2] [i_3 - 2])) + (((/* implicit */int) arr_5 [i_3] [i_3 - 1] [i_3 - 2] [i_4 + 2]))))));
                                var_25 = ((/* implicit */unsigned char) var_6);
                                arr_17 [i_5] [i_5] [i_3 + 1] [i_4 + 2] = ((/* implicit */signed char) (short)32767);
                                arr_18 [i_0] [i_0] [i_3 + 1] [i_4] [i_5] = ((/* implicit */int) (((!(arr_9 [i_1 - 2] [i_1 - 2]))) || (arr_9 [i_1 - 2] [i_1 - 2])));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 280375465082880LL)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) (_Bool)1))))), (var_9)));
                }
                var_27 = ((/* implicit */_Bool) (~(((arr_13 [i_0] [i_1 + 1] [i_1 + 1] [i_0]) >> (((arr_13 [i_1] [i_1 - 2] [i_1 - 1] [i_1 - 2]) - (9629619788033643758ULL)))))));
                var_28 = ((/* implicit */unsigned char) ((long long int) 1813319672));
                var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) arr_5 [i_1 - 2] [i_1 - 2] [i_0] [i_0]))));
            }
        } 
    } 
}
