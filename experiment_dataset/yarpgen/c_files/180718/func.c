/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180718
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
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) var_9))) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) != (-1064364353246229631LL))))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned long long int) ((var_10) - (var_5))));
                arr_6 [i_0] = ((unsigned char) ((((/* implicit */_Bool) -1064364353246229605LL)) && (((/* implicit */_Bool) arr_0 [i_0 - 3]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 1; i_3 < 18; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                {
                    arr_17 [i_3] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) >= (var_3))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_14 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 - 1]))))) : (((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [i_3 - 1] [i_3 + 1] [i_3 + 1]))) : (arr_8 [i_3 - 1] [i_3 - 1])))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 17; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            {
                                arr_23 [i_2] [i_3 + 1] [i_4] [i_5 + 2] [i_6] [i_5] [13ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(1064364353246229630LL)))) ? (-1064364353246229631LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1064364353246229631LL)) ? (((/* implicit */int) arr_9 [i_5 + 2] [i_3 - 1] [(_Bool)1])) : (((/* implicit */int) var_6)))))));
                                arr_24 [i_2] [i_2] [i_2] [i_5 - 1] [i_6] [i_5 - 1] [i_2] = ((/* implicit */unsigned short) -1064364353246229631LL);
                                var_12 = ((long long int) ((((/* implicit */_Bool) arr_21 [i_6] [i_5] [i_4] [i_3 + 1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_7)))) : (((arr_13 [i_2] [(unsigned short)1]) % (((/* implicit */unsigned long long int) -1064364353246229626LL))))));
                                arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 1064364353246229631LL)))) : (((((/* implicit */_Bool) ((var_6) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)207))) : (arr_11 [i_2])))) ? (min((9229890946624785779ULL), (((/* implicit */unsigned long long int) -1064364353246229636LL)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)44215)))))))));
                            }
                        } 
                    } 
                    arr_26 [i_2] [i_3 - 1] [i_4] [i_2] = ((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((var_8) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_7))))));
                    arr_27 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_20 [i_3 - 1] [i_3]), (arr_20 [i_3 + 1] [i_3]))))));
                }
            } 
        } 
    } 
}
