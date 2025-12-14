/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103382
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
    var_14 = ((((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_11)))) >= (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-701641866) >= (23))))) : (((unsigned int) (unsigned short)21355))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3289240431U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24545))) : (262143U)));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (unsigned char)255);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned short)40990), (((/* implicit */unsigned short) (signed char)75))))) ? (min((min((var_10), (((/* implicit */long long int) 6)))), (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [(signed char)10]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((1645742560U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1 + 2] [i_1 - 3])))))))));
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_12 [18U] [18U] [i_2] [i_2] [18U] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29472))) : (var_8)))) || (((_Bool) -1476201931349873296LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        var_18 = ((/* implicit */long long int) (-((+((+(((/* implicit */int) (unsigned char)8))))))));
        var_19 = ((/* implicit */unsigned short) (-(((unsigned long long int) 3964870649U))));
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                for (unsigned short i_8 = 3; i_8 < 17; i_8 += 1) 
                {
                    {
                        var_20 = ((/* implicit */short) min((((((/* implicit */_Bool) (~(1067246544)))) ? (((unsigned long long int) var_13)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-15431))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-61)) ? (-876624925) : (((/* implicit */int) (unsigned char)108)))))));
                        arr_25 [i_5] = ((/* implicit */signed char) var_13);
                        var_21 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) arr_24 [i_8 - 2] [9] [i_8 + 1] [i_8 - 3] [i_8 - 2])), (arr_15 [i_8 - 3]))), (((/* implicit */unsigned int) ((116462684) * (((/* implicit */int) ((unsigned char) var_11))))))));
                    }
                } 
            } 
        } 
    }
    var_22 = ((/* implicit */int) ((long long int) ((((/* implicit */unsigned int) -876624929)) / (var_2))));
}
