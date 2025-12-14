/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187868
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
    var_20 = (~((+(8215063050363669789LL))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 4; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_10 [2U] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) max((3933016720U), (679837313U)));
                    arr_11 [i_0] [i_0] [i_1 - 1] [i_2 - 3] = ((arr_8 [i_2 - 4] [i_2 - 4] [i_2 - 1]) + (((arr_8 [i_2 - 1] [i_2 - 4] [i_2 + 1]) ^ (arr_8 [i_2 - 4] [i_2 - 1] [i_2 - 2]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_21 -= ((/* implicit */unsigned int) (unsigned char)244);
                                var_22 = ((/* implicit */long long int) (unsigned char)209);
                                arr_16 [i_0] [i_1] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_15 [i_0] [i_1 - 2] [i_2] [i_3] [i_4])), (arr_5 [i_2 - 3])))), (((((/* implicit */_Bool) 2210720505712784476LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_2 - 2] [i_3] [i_4]))) : (arr_6 [i_1] [(_Bool)1] [(_Bool)1]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_23 &= ((/* implicit */int) max((max((3615129983U), (((unsigned int) 8215063050363669785LL)))), (((/* implicit */unsigned int) ((_Bool) 3687205046U)))));
                        var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1])) ? (arr_4 [i_1 + 1] [i_1]) : (arr_4 [i_1 - 3] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1 - 1] [i_1 - 2]))) : ((~(arr_4 [i_1 - 1] [i_1]))));
                    }
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        arr_21 [i_6] [i_2 - 1] [i_0] [i_0] &= ((/* implicit */_Bool) (signed char)94);
                        var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4018656121316749995LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_7 [i_0] [i_0] [i_0]) && (((/* implicit */_Bool) -7495981795123678298LL)))))) : (arr_8 [i_2] [i_2 + 1] [(unsigned char)23]))))));
                    }
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        arr_25 [i_0] [i_1 - 2] [i_0] [i_7] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_13 [i_0] [i_0]))))));
                        var_26 += ((/* implicit */long long int) ((-1427999289) != (arr_12 [i_7] [i_7] [i_7] [i_7] [i_7])));
                    }
                }
            } 
        } 
    } 
}
