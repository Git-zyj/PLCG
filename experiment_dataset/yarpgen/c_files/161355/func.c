/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161355
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0 - 1])) || (((/* implicit */_Bool) 2143288306475162223LL)))) ? (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4995953418623821690LL))))), (max((((/* implicit */unsigned int) arr_0 [i_0])), (2147352576U))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1])))))));
        var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((((/* implicit */int) arr_1 [2LL])) <= (((/* implicit */int) arr_1 [(signed char)8])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)1]))) : (max((((/* implicit */long long int) var_2)), (467293304339638583LL))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_3] [i_0] [i_1] [i_0] = var_0;
                                var_12 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_4] [i_1] [i_2 - 3] [i_3])) ? (((((/* implicit */_Bool) 2147614731U)) ? (((/* implicit */unsigned long long int) 1352671117U)) : (17724025710357335252ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_3 [i_1] [i_2] [i_4])), ((signed char)31)))) ? (2942296191U) : (((/* implicit */unsigned int) ((/* implicit */int) ((722718363352216354ULL) >= (((/* implicit */unsigned long long int) var_9)))))))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned int) var_3);
                    arr_13 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2] [i_2] [i_0] [i_2 + 1])) || (((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_2] [i_2 + 1] [i_0] [i_2 - 3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_2] [i_0] [i_2 + 1])))))) : (max((((/* implicit */unsigned long long int) var_8)), (arr_10 [i_1] [i_2] [i_2] [i_2] [i_0] [i_2 - 3])))));
                }
            } 
        } 
    }
    var_14 = 17724025710357335252ULL;
    var_15 = ((/* implicit */signed char) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_5 = 3; i_5 < 11; i_5 += 4) 
    {
        arr_17 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_5 + 2])) | (((/* implicit */int) var_8))));
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            var_16 = ((/* implicit */int) min((var_16), ((~(((/* implicit */int) arr_14 [i_5 + 1]))))));
            var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 6ULL))));
        }
        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            arr_22 [i_5] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) arr_15 [i_5] [i_5])) - (7ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
            arr_23 [i_5] = ((/* implicit */unsigned short) arr_20 [i_5] [i_5 - 2]);
        }
        arr_24 [i_5 + 2] [i_5] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) 2147614704U)) && (((/* implicit */_Bool) var_9))))));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)109)) ? (6841149030947782863LL) : (((/* implicit */long long int) 2147352603U))))) || ((!(((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_5])))))))));
    }
}
