/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103059
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
    for (int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    arr_7 [i_0 + 2] [i_1] [i_2] [i_0 + 1] = ((/* implicit */_Bool) var_4);
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */_Bool) (signed char)34);
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 3; i_4 < 9; i_4 += 4) 
                        {
                            arr_13 [i_4] [i_3] [i_2] [i_1 + 1] [i_3] [i_0 + 1] = (-((+(((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 2])))));
                            arr_14 [i_0] [i_1] [i_3] [i_3] [7ULL] = ((/* implicit */unsigned long long int) (signed char)-34);
                            arr_15 [i_0] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) var_13)) + ((((_Bool)1) ? (((/* implicit */int) arr_2 [i_0] [i_2] [i_3])) : (((/* implicit */int) (!(arr_1 [i_3] [i_4]))))))));
                        }
                        arr_16 [i_3] [i_2] [i_3] = max((((/* implicit */int) (signed char)-34)), (((((/* implicit */int) (signed char)34)) * (((/* implicit */int) (!(((/* implicit */_Bool) 1119585372))))))));
                        var_16 = ((((((/* implicit */unsigned long long int) 1579725299)) > (arr_9 [i_3]))) ? (min((((/* implicit */unsigned int) arr_5 [i_2 + 1])), (var_2))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (-1122848046)))));
                        arr_17 [i_3] [i_1] [i_1] [i_1 + 2] = arr_1 [i_0 + 1] [i_2 - 1];
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */_Bool) arr_0 [i_2 - 1] [i_0 + 1]);
                        arr_20 [i_5] [i_5] [i_2] [i_5] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)58)) ? (arr_11 [i_5]) : (arr_11 [i_5])));
                        arr_21 [i_0] [i_1] [i_5] [i_5] = (signed char)34;
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            arr_25 [i_0] [i_0] [i_0 - 1] [i_5] [i_0] = ((/* implicit */signed char) ((4294967275U) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)10876)) ? (var_9) : (((/* implicit */int) (_Bool)0)))))));
                            var_18 = ((/* implicit */long long int) var_14);
                        }
                        var_19 = ((/* implicit */unsigned long long int) ((long long int) (-(var_3))));
                    }
                }
            } 
        } 
    } 
    var_20 = ((var_0) <= (((/* implicit */int) var_7)));
    var_21 = ((/* implicit */unsigned long long int) var_13);
    var_22 = ((/* implicit */unsigned long long int) ((max((var_10), (((/* implicit */int) (signed char)-103)))) | ((-(1754422854)))));
}
