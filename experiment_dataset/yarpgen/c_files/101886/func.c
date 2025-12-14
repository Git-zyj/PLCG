/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101886
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 + 3] [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_1 + 3] [i_1 - 1] [i_1])) : (((/* implicit */int) (_Bool)1))))) ? ((+(((unsigned long long int) arr_1 [i_0] [3U])))) : (max(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63615))) : (arr_4 [i_0]))), (var_9)))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
                {
                    arr_8 [i_0] [i_0] |= ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) arr_0 [i_1 + 1] [i_1 - 1])), (var_0))) % (((/* implicit */unsigned long long int) var_5))));
                    arr_9 [i_0] [i_0] [i_2] [i_2] |= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1]))) : (((((/* implicit */_Bool) (unsigned short)57694)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL)))))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
                {
                    arr_12 [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned short) arr_0 [i_0] [i_1]);
                    var_13 = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_0] [i_1 - 1]))));
                    var_14 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1 + 3])) && (((/* implicit */_Bool) arr_4 [i_1 + 2]))));
                    arr_13 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) ((((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_3])))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_3] [i_1])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_3]))))));
                }
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 8; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_15 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_5 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_4)));
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_5] [i_5] [i_5])) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5] [i_0] [i_0]))) : (var_5))) : (((/* implicit */unsigned int) arr_16 [i_0] [i_1 - 2] [i_4] [(unsigned char)8]))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) ((((_Bool) (_Bool)1)) ? (((((/* implicit */_Bool) (unsigned char)91)) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) (unsigned char)158)))) : (arr_23 [i_4] [i_4] [i_4] [i_4] [i_0] [i_0] [i_0])));
                    arr_24 [i_1] [i_1] [i_0] [i_0] = ((/* implicit */signed char) var_10);
                }
                /* LoopNest 2 */
                for (unsigned short i_7 = 3; i_7 < 10; i_7 += 3) 
                {
                    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        {
                            arr_30 [i_0] [i_0] [i_0] [i_7] [i_7] = ((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_7 + 2] [i_8]);
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1 + 4] [i_1 + 4] [i_8])) && (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                            arr_31 [i_0] = ((/* implicit */int) 5754079329433722740ULL);
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 |= ((/* implicit */unsigned long long int) var_11);
}
