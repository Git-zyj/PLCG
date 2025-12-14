/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149988
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [13ULL] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 1]), (arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (((unsigned long long int) arr_3 [i_1 + 1]))));
                    arr_9 [i_0] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)9002)));
                    var_11 = ((/* implicit */signed char) (!((_Bool)0)));
                    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((arr_0 [i_1 + 1] [i_1 - 1]), (arr_0 [i_1 - 1] [i_1 - 1])))), (((16569065045086930031ULL) >> (((((/* implicit */int) (signed char)77)) - (62))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            {
                var_13 = ((/* implicit */short) ((_Bool) max((arr_12 [i_3] [i_3] [i_4]), (((/* implicit */unsigned short) arr_6 [i_3] [i_4] [i_3] [i_4])))));
                arr_14 [i_3] |= ((/* implicit */signed char) ((unsigned short) ((signed char) ((554846212U) >> (((((/* implicit */int) arr_2 [i_3])) - (81)))))));
                /* LoopSeq 1 */
                for (short i_5 = 4; i_5 < 8; i_5 += 3) 
                {
                    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (_Bool)1)), (4294967295U))) | (min((arr_4 [i_5 + 3] [i_5] [i_5]), (((/* implicit */unsigned int) (_Bool)1)))))))));
                    var_15 &= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((unsigned short) arr_13 [i_5 + 2] [i_5 + 2]))), (max((((/* implicit */unsigned int) -1)), (3740121081U)))));
                }
            }
        } 
    } 
}
