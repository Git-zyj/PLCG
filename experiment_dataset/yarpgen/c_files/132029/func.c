/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132029
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
    for (signed char i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min(((~(((/* implicit */int) arr_5 [i_0] [i_1] [i_0 + 2])))), (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_1])) > (arr_0 [i_0] [i_2]))))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_0 + 2] [i_2]))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_7 [i_2] [i_0]), (arr_7 [i_1] [i_1]))))) : (min((((/* implicit */long long int) arr_3 [i_2])), (-6705066557736956779LL))))) : (((/* implicit */long long int) (+(-976518786))))));
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) (-(((132120576U) * (((/* implicit */unsigned int) -1442564648))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_10);
                        var_13 = ((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 2])))));
                        var_14 += ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_2])) | (((/* implicit */int) arr_5 [i_0] [i_0 - 2] [i_0]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_3]))) | (var_12)))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_2);
                        var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 2]))))), (((unsigned int) var_4))));
                        arr_19 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((-3391434791610826715LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 3391434791610826715LL)) || (((/* implicit */_Bool) var_1)))))))) && ((!(((((/* implicit */_Bool) arr_7 [i_0] [i_1])) && (((/* implicit */_Bool) arr_1 [i_0]))))))));
                        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) min((max(((((_Bool)1) ? (((/* implicit */unsigned long long int) 3391434791610826715LL)) : (103079215104ULL))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((arr_13 [i_4] [i_1] [i_0]), ((unsigned char)242))))))))))));
                        arr_20 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (-3391434791610826715LL) : (((/* implicit */long long int) (-(3865032042U))))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        arr_24 [i_0] [i_2] [i_5] = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_11 [i_0] [i_0])))) | (max((((/* implicit */int) ((-1585954305400805139LL) < (((/* implicit */long long int) 1954792073))))), ((~(((/* implicit */int) (unsigned short)57959))))))));
                        var_17 = ((/* implicit */int) (~(max((2712819260U), (((/* implicit */unsigned int) arr_11 [i_0 + 2] [i_1]))))));
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) arr_11 [i_0] [i_5]))));
                        arr_25 [i_2] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0 - 1])) / (((/* implicit */int) arr_2 [i_0 + 2] [i_0]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) : (var_12)));
                    }
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        var_19 = ((/* implicit */int) var_11);
                        arr_29 [i_0] [i_1] [i_2] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)62553)) & ((~(((((/* implicit */_Bool) 3698580265021687003LL)) ? (((/* implicit */int) (short)8445)) : (((/* implicit */int) (_Bool)1))))))));
                    }
                    arr_30 [i_2] [i_1] [i_2] = ((/* implicit */long long int) (signed char)(-127 - 1));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 1; i_7 < 9; i_7 += 2) 
    {
        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            {
                var_20 = ((/* implicit */short) min(((-(max((((/* implicit */unsigned int) (_Bool)1)), (3865032042U))))), (((/* implicit */unsigned int) 650239440))));
                var_21 = ((/* implicit */short) (~(((/* implicit */int) (short)21941))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_8)))) ? ((~(((var_12) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)74))))))) : (((/* implicit */long long int) ((/* implicit */int) max((min(((short)280), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)71)))))))))));
}
