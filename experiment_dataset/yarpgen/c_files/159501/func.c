/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159501
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_15 *= ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (short)-1)))));
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 11024368251095810248ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 14; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_17 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0 - 1] [i_2] [i_2] [(_Bool)1] [i_2])) ^ (((/* implicit */int) var_2))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)243))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_0 [i_0])) : (arr_5 [i_3] [i_4])))))))));
                                var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((3942913597U) << (((((/* implicit */int) (short)-1)) + (3)))))) ? ((+(((/* implicit */int) var_11)))) : (arr_8 [i_0 - 1])))) ? (((/* implicit */int) (short)-423)) : (((/* implicit */int) ((arr_4 [i_0] [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((unsigned long long int) min((var_1), (((/* implicit */short) var_10))))))));
                                arr_15 [i_0] [i_1] [i_4] [i_1] [i_3] [i_4] = ((/* implicit */short) min(((-(((/* implicit */int) arr_10 [i_0 - 1] [13] [i_2])))), ((-(((/* implicit */int) min(((unsigned char)252), (((/* implicit */unsigned char) var_14)))))))));
                                var_20 = max((arr_4 [i_2] [i_0]), (((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 - 1] [i_0])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 14; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) min((var_21), (((arr_20 [i_0 - 1] [i_1 - 2] [i_1 + 3] [i_2] [i_5 + 1] [i_6 + 4]) ? (((/* implicit */int) ((((/* implicit */int) min((arr_12 [i_0] [i_1 + 3] [i_2] [(unsigned char)8] [i_6 + 1]), (((/* implicit */short) (_Bool)1))))) != (arr_5 [i_2] [i_6 - 1])))) : (((/* implicit */int) arr_13 [i_5 + 1] [i_2] [i_6 + 4] [i_1 + 1] [i_2]))))));
                                arr_21 [i_0 - 1] [i_1] [i_0 - 1] [i_5 + 1] [i_6] [i_6] [i_6 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-1)) != (((/* implicit */int) (_Bool)0))));
                                var_22 = ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (arr_16 [i_6] [i_6] [i_6 + 3] [i_6 - 1] [8LL]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_7 = 4; i_7 < 22; i_7 += 4) 
    {
        for (int i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    for (short i_10 = 3; i_10 < 23; i_10 += 2) 
                    {
                        {
                            arr_35 [i_7] [i_7] [i_9] [i_10] = ((/* implicit */short) ((max((((((/* implicit */int) var_3)) % (((/* implicit */int) arr_23 [i_7 - 2])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))) >= (((/* implicit */int) ((((((/* implicit */int) arr_32 [i_7])) ^ (((/* implicit */int) var_2)))) < (((/* implicit */int) var_13)))))));
                            var_23 = ((((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_23 [i_10]))))), (min((var_3), (((/* implicit */unsigned char) var_10))))))) / (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */unsigned int) var_4)) != (arr_31 [i_7] [i_8] [i_10])))), (min((var_1), (((/* implicit */short) var_13))))))));
                            arr_36 [i_10 - 2] [i_8] [i_7 + 1] = ((/* implicit */unsigned short) arr_25 [i_7 - 1]);
                        }
                    } 
                } 
                var_24 &= ((/* implicit */unsigned char) arr_27 [i_7 - 1] [i_8]);
            }
        } 
    } 
}
