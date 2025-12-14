/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122201
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) 2477933565481792330ULL))) / (((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_0] [i_1 - 2] [i_1 - 2] [i_1 - 2])), (var_3))))))) : (2477933565481792330ULL)));
                    arr_11 [12ULL] [12ULL] [i_2] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((arr_2 [i_1]) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) var_0))))) ? ((-(((/* implicit */int) (signed char)16)))) : (min((((/* implicit */int) var_10)), (var_7))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) var_3))));
    var_12 = ((/* implicit */short) ((unsigned int) (-(max((((/* implicit */long long int) var_1)), (-1LL))))));
    var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 4; i_5 < 17; i_5 += 3) 
            {
                {
                    arr_21 [i_4] = ((/* implicit */short) ((long long int) 2477933565481792330ULL));
                    arr_22 [i_3] [i_3] [i_3] [i_3] &= arr_17 [i_5] [i_4] [i_3] [i_3];
                    var_14 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2477933565481792330ULL)) ? (((/* implicit */int) arr_2 [i_5 - 3])) : (((/* implicit */int) arr_2 [i_5 + 1]))))), (((((/* implicit */_Bool) arr_13 [i_5 - 3] [i_5 - 1])) ? (2477933565481792327ULL) : (17300040982396158307ULL))));
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        var_15 -= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)163)) >> (((((/* implicit */int) (signed char)-27)) + (34)))));
                        var_16 = ((/* implicit */unsigned char) arr_18 [i_4]);
                        var_17 = ((/* implicit */unsigned int) var_8);
                    }
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)164)) / (((/* implicit */int) (unsigned char)192)))) / (((/* implicit */int) ((unsigned char) (unsigned short)16538)))))), (((((/* implicit */_Bool) arr_19 [i_5 + 1] [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_19 [i_5 + 1] [i_3] [i_3]))))))));
                }
            } 
        } 
    } 
}
