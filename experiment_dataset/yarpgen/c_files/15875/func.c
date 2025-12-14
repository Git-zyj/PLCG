/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15875
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) min((max((arr_8 [i_1] [i_1] [i_2]), (((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_1])))), (((/* implicit */int) arr_2 [i_0] [i_0]))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) ((_Bool) ((short) 524287)))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1242070988)))))));
                    arr_9 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) arr_5 [i_1] [i_1] [i_1] [i_0])))))) ? (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_0]))))) ? (min((-1756283770), (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_2 [i_0] [i_2])))) : (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_2])) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((unsigned short) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_3] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */int) arr_1 [i_1 + 1])) : ((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) min((arr_5 [i_1 + 1] [i_3] [i_1] [i_1 + 1]), (arr_5 [i_1 - 1] [i_1] [i_1] [i_2])))) : (((/* implicit */int) ((unsigned char) ((unsigned int) (signed char)-19))))));
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)46341)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14210009042796632690ULL)))))))));
                                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) min((min((268020735333228660ULL), (max((18178723338376322970ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_6 [i_4] [i_1 - 1] [i_4] [i_3 + 1])), (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0] [i_3])) ? (arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_18)))) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) var_14)))))));
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_6])) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_25 [i_5] [i_6] [i_5] [i_5])))) : (((((/* implicit */_Bool) arr_15 [i_8])) ? (((/* implicit */int) (unsigned char)60)) : (arr_16 [i_5] [i_5]))))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_6] [i_8])))))));
                        var_25 -= ((/* implicit */unsigned short) 17200804580045620085ULL);
                        var_26 &= ((/* implicit */short) (((_Bool)1) ? (((((/* implicit */_Bool) (unsigned char)66)) ? (((((/* implicit */_Bool) (short)32592)) ? (((/* implicit */int) arr_20 [i_5] [i_5] [i_8])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_25 [i_5] [i_5] [i_5] [i_6])))) : (((/* implicit */int) arr_25 [i_5] [i_5] [i_5] [i_8]))));
                    }
                    var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5] [i_6] [i_7])) ? (((/* implicit */int) arr_18 [i_5] [i_6] [i_6])) : (((/* implicit */int) arr_18 [i_7] [i_5] [i_5]))))) ? (max((((/* implicit */int) arr_25 [i_7] [i_7] [i_7] [i_6])), (((((/* implicit */_Bool) arr_16 [i_5] [i_5])) ? (arr_15 [i_5]) : (-1496747464))))) : (((/* implicit */int) ((((unsigned long long int) 18178723338376322967ULL)) != (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)15))));
}
