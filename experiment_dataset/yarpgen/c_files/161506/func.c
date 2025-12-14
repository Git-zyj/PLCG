/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161506
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
    var_20 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        arr_8 [14ULL] [i_0] [(unsigned char)16] [i_2] [i_1] = ((/* implicit */int) max((max(((-(arr_0 [i_3]))), (((/* implicit */unsigned int) var_19)))), (((/* implicit */unsigned int) min(((-(arr_6 [i_0] [i_1] [i_0] [i_2]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3] [i_0]))))))))));
                        arr_9 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) -605581849)) ? (7755934742881653226LL) : (-8390083800769075822LL))) == (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -8390083800769075822LL)))))) + ((-(arr_0 [i_3]))))))));
                        arr_10 [(signed char)11] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned char) max(((-(arr_6 [i_0] [i_1] [i_2] [i_3]))), (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_1] [i_3])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_1] [i_0])) : (arr_6 [i_0] [i_1] [i_2] [i_3])))));
                    }
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) max(((-(-414222672))), (min((min((var_1), (((/* implicit */int) arr_2 [i_1] [(_Bool)1] [i_2])))), (((/* implicit */int) max((((/* implicit */short) arr_5 [(unsigned char)4] [(unsigned short)8] [(unsigned short)8])), (arr_7 [i_2] [i_2] [i_2] [i_1] [i_1]))))))));
                        arr_15 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_11 [i_0] [i_1] [(signed char)5] [i_4] [i_1])), (min((((/* implicit */int) arr_12 [i_1] [14] [i_4])), (arr_6 [i_0] [i_1] [i_2] [i_4])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_0 [i_0])))) ? (((((/* implicit */_Bool) var_0)) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) | (var_10))))))) : (arr_4 [i_1] [(unsigned char)9])));
                        arr_16 [i_1] [i_2] [i_1] [i_1] = arr_2 [i_1] [i_2] [i_4];
                    }
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_22 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_1] [i_1])) ? ((-(arr_24 [i_0] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0])))))))) & (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_6])))));
                                var_23 = ((/* implicit */int) (~(((min((((/* implicit */long long int) (_Bool)1)), (-2240347968662557228LL))) / ((~(-7755934742881653220LL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
