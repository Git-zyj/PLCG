/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165709
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 0)), (1157773373U)))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) -1)) : (var_10)))))) ? (((/* implicit */int) (unsigned char)8)) : ((-2147483647 - 1))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_2 - 1]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 4092)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [0ULL] [i_2 + 2] [i_1] [i_0]))) : (9329239153511071422ULL)))))))));
                        arr_10 [i_0] [i_2 - 1] [i_2] [i_3] [i_3] = max(((~(arr_8 [i_2 + 2] [i_0]))), ((~(8437066010648341811ULL))));
                    }
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_2 - 1]))) || ((!(((/* implicit */_Bool) 10009678063061209804ULL))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)117)) || (((/* implicit */_Bool) (unsigned char)75)))))) * (8437066010648341824ULL)))) ? (10009678063061209791ULL) : (((((/* implicit */_Bool) ((unsigned long long int) -6553501160264460299LL))) ? (((/* implicit */unsigned long long int) -1110841464)) : (min((2629643438428102248ULL), (((/* implicit */unsigned long long int) (unsigned char)129)))))));
                                arr_19 [i_0] [11U] [5LL] [i_0] [i_4] [i_5] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) (unsigned char)75)), (((((/* implicit */_Bool) -4093)) ? (arr_9 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_2 + 2]))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) -137290703)) && (((/* implicit */_Bool) 431003559U))))), ((unsigned char)75)))))));
                                arr_20 [i_0] [i_0] [i_2] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) ((4054727830U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)139)))))), ((unsigned char)185)))) != (((/* implicit */int) ((((/* implicit */_Bool) 2603065125663402326ULL)) || (((/* implicit */_Bool) 3591653825405819279ULL)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 4; i_6 < 13; i_6 += 2) 
                    {
                        for (long long int i_7 = 1; i_7 < 13; i_7 += 2) 
                        {
                            {
                                arr_26 [10U] [i_0] [i_1] [i_2] [11ULL] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((2738483648U), (((/* implicit */unsigned int) 207366545)))))));
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) > (10009678063061209791ULL))) ? (((unsigned long long int) max((16333860540733109691ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((long long int) (~(10009678063061209791ULL)))))))));
                            }
                        } 
                    } 
                    arr_27 [i_0] [(unsigned char)11] [i_1] [(unsigned char)6] = ((((/* implicit */_Bool) min((min((arr_8 [i_0] [i_0]), (arr_9 [i_2]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_21 [i_0] [i_0] [i_2] [i_2])))))))) ? ((~(1540563669168530783ULL))) : (((/* implicit */unsigned long long int) arr_22 [i_1] [i_0])));
                }
            } 
        } 
    } 
}
