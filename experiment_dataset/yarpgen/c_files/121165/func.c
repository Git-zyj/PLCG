/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121165
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
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 1) 
                {
                    arr_10 [7LL] [i_1 - 2] [i_1] = ((/* implicit */signed char) -118872056769556664LL);
                    var_10 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_1] [i_1]))));
                    arr_11 [i_0] [i_1 + 1] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_1]);
                }
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    arr_14 [12ULL] [i_0 - 1] [i_0] [i_0] |= ((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */unsigned int) arr_7 [i_3] [i_1] [i_1]))));
                    arr_15 [i_1] [i_0] [i_0] [i_1] = (i_1 % 2 == zero) ? (max((((((/* implicit */_Bool) max((arr_4 [i_0] [i_1] [i_0 + 1]), (((/* implicit */unsigned long long int) arr_3 [i_1 - 1] [2]))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)-5733), (((/* implicit */short) arr_0 [i_0] [i_0])))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-5737))) : (-118872056769556653LL))))), (((/* implicit */long long int) min((((/* implicit */int) max((((/* implicit */unsigned char) arr_8 [i_0 + 1] [i_3] [i_1])), (arr_6 [i_1] [i_1])))), (((((/* implicit */int) (short)5733)) >> (((arr_4 [i_3] [i_1] [i_0]) - (2466236553497260951ULL)))))))))) : (max((((((/* implicit */_Bool) max((arr_4 [i_0] [i_1] [i_0 + 1]), (((/* implicit */unsigned long long int) arr_3 [i_1 - 1] [2]))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)-5733), (((/* implicit */short) arr_0 [i_0] [i_0])))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-5737))) : (-118872056769556653LL))))), (((/* implicit */long long int) min((((/* implicit */int) max((((/* implicit */unsigned char) arr_8 [i_0 + 1] [i_3] [i_1])), (arr_6 [i_1] [i_1])))), (((((/* implicit */int) (short)5733)) >> (((((arr_4 [i_3] [i_1] [i_0]) - (2466236553497260951ULL))) - (14301570893901085229ULL))))))))));
                    var_11 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(min((((/* implicit */int) (unsigned char)127)), (520430893)))))), (((((/* implicit */_Bool) (~(4088355047U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-5733))) : (((arr_3 [i_1] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_3])))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 3; i_4 < 12; i_4 += 3) 
                    {
                        arr_19 [i_1] [3] = ((/* implicit */int) arr_13 [i_0] [i_0 - 1] [i_0 + 1]);
                        var_12 = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_13 [i_0 + 1] [i_1] [i_4 - 3])) * (((/* implicit */int) arr_13 [i_0 + 1] [i_0 + 1] [i_0]))))));
                        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned int) arr_7 [i_1] [i_1] [7U])) <= (arr_2 [i_1]))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)123))) : (min((118872056769556653LL), (((/* implicit */long long int) (short)5757))))));
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) ((arr_8 [i_0] [i_0] [i_1]) ? (arr_1 [i_0]) : (arr_7 [i_4 + 1] [i_3] [i_1])))), (arr_2 [i_0 + 1])))) : (min((((/* implicit */long long int) arr_0 [i_0 + 1] [i_1 + 1])), (8664905975345914675LL)))));
                    }
                    var_15 |= ((/* implicit */unsigned long long int) arr_1 [(unsigned char)0]);
                }
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1] [i_1 + 1])) ? (((((/* implicit */_Bool) arr_23 [i_0 - 1] [i_1 + 1] [i_1] [i_0 + 1])) ? (((/* implicit */int) arr_23 [i_0] [i_1 - 2] [i_1] [i_0 - 1])) : (((/* implicit */int) arr_23 [i_0] [i_1 - 2] [i_1] [i_0 - 1])))) : ((~(((/* implicit */int) arr_21 [i_1]))))));
                            arr_25 [i_0 - 1] [i_1] [i_0] [i_0] = arr_8 [i_1] [i_5] [i_1];
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) var_2)) >= ((+(((/* implicit */int) (_Bool)1)))))))));
}
