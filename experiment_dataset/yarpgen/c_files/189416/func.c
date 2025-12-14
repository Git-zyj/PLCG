/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189416
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_18 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 924882947080255006ULL)) || (((924882947080255011ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)30061)), ((unsigned short)50026)))))))));
        arr_2 [i_0] [i_0] &= ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) / (((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) ^ (((arr_1 [i_0]) | (arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        arr_6 [i_1] |= ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)15510))))) - (29ULL));
        var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_1])) == (((/* implicit */int) arr_3 [i_1] [i_1]))))) ^ (((/* implicit */int) ((arr_1 [i_1]) == (arr_4 [i_1]))))));
    }
    var_20 &= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (4910111177724414788LL)))) && ((!(((/* implicit */_Bool) 0ULL))))))), (var_6)));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_17)))) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) arr_11 [i_2] [i_2] [i_3])) % (arr_7 [i_2])))))), (((((/* implicit */long long int) ((/* implicit */int) ((arr_10 [i_3] [i_2] [i_2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_3]))))))) ^ (((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2]))) & (arr_9 [i_2])))))));
                /* LoopNest 2 */
                for (long long int i_4 = 3; i_4 < 7; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned char i_6 = 1; i_6 < 7; i_6 += 4) 
                            {
                                arr_21 [i_2] [i_2] [i_4] [i_2] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_4 - 1] [i_2] [i_6 + 3])) << (((((((var_3) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) << (((((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_2] [i_6]))) + (var_13))) - (3619907491U))))) - (5495517445298847742ULL)))));
                                var_22 += ((/* implicit */short) ((((/* implicit */_Bool) ((arr_7 [i_4 - 1]) / (arr_7 [i_4 - 1])))) && (((/* implicit */_Bool) (-(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)37437))))))))));
                            }
                            for (unsigned short i_7 = 0; i_7 < 10; i_7 += 1) 
                            {
                                arr_24 [i_2] [i_2] [i_4] [i_2] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) arr_14 [i_7] [i_2] [i_2] [i_2])))))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) var_2))))) ^ (arr_22 [i_2] [i_4 + 3] [i_4 + 3] [i_4 - 1] [i_4]))))));
                                var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_1) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4] [i_4]))))) - (((/* implicit */unsigned long long int) min((arr_22 [6ULL] [i_3] [i_3] [i_5] [i_7]), (((/* implicit */long long int) var_7)))))))) ? (min((((/* implicit */long long int) var_17)), (min((var_6), (((/* implicit */long long int) var_5)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 6393136806521385331LL)) ? (1610612736U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                                var_24 = (+(((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_7]))) == (var_3)))))));
                                var_25 &= ((/* implicit */long long int) arr_15 [i_2] [i_4]);
                                arr_25 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) arr_1 [i_4 + 1]);
                            }
                            arr_26 [i_2] [i_3] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) arr_12 [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_3] [i_3])) && (((/* implicit */_Bool) arr_0 [i_2] [i_2])))))) : (((var_13) * (var_17)))))));
                            var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_10 [i_5] [i_2] [i_2]))));
                            var_27 -= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) 1365703788)), (0U)))) ? ((((-(arr_4 [i_5]))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (arr_13 [(_Bool)0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_2])) & (((((/* implicit */int) arr_3 [i_2] [i_4])) / (((/* implicit */int) arr_3 [i_5] [i_3])))))))));
                        }
                    } 
                } 
                arr_27 [i_2] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((arr_10 [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) arr_16 [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [i_2] [i_2]))) : (arr_9 [i_2]))) - (((/* implicit */long long int) (+(((/* implicit */int) var_7)))))));
                var_28 *= ((/* implicit */unsigned char) ((max((((/* implicit */long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) arr_23 [i_2] [i_2] [2ULL] [i_3] [i_3]))))), (((var_0) | (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_2] [i_3]))))))) / (((/* implicit */long long int) max((((/* implicit */int) ((arr_22 [(unsigned char)6] [(unsigned char)6] [(unsigned char)6] [(unsigned char)6] [i_3]) != (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_3] [i_3])))))), (((var_16) ? (((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_3])) : (((/* implicit */int) arr_23 [i_2] [i_3] [4ULL] [i_2] [i_2])))))))));
            }
        } 
    } 
}
