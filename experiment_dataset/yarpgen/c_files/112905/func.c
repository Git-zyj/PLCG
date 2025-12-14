/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112905
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = max((((/* implicit */unsigned int) var_11)), (((((/* implicit */_Bool) ((short) (unsigned short)23209))) ? (min((((/* implicit */unsigned int) (unsigned short)5521)), (var_5))) : (((/* implicit */unsigned int) max((arr_0 [i_0]), (((/* implicit */int) arr_1 [13U]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23180)) ? (((/* implicit */int) (unsigned short)23209)) : (((/* implicit */int) (unsigned short)60021))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [i_0])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_12 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min(((unsigned short)5515), (((/* implicit */unsigned short) (_Bool)1))))), (((((/* implicit */unsigned long long int) arr_7 [i_1])) & (max((((/* implicit */unsigned long long int) arr_5 [i_1])), (12ULL)))))));
        arr_8 [(signed char)18] = ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)5501))))) ? (var_1) : (((((/* implicit */_Bool) 18446744073709551604ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_1))))) + (((/* implicit */unsigned int) (+(arr_7 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            arr_14 [(signed char)6] [i_3] [i_3] = (!(((/* implicit */_Bool) var_5)));
            var_13 = ((/* implicit */unsigned short) arr_7 [i_3]);
        }
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                {
                    var_14 = ((/* implicit */signed char) arr_11 [i_2] [14LL]);
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        for (signed char i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            {
                                arr_24 [i_2] [i_4] [(_Bool)1] [i_4] [i_7] [i_4] = ((/* implicit */_Bool) arr_15 [i_4]);
                                var_15 = ((/* implicit */unsigned int) var_11);
                                arr_25 [i_7] [i_6] [i_4] [i_4] [i_2] = ((/* implicit */signed char) ((((_Bool) (unsigned char)251)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */int) (unsigned short)60018)) : (((/* implicit */int) (unsigned short)60035))))) : (2915938820U)));
                            }
                        } 
                    } 
                    arr_26 [i_4] = ((/* implicit */signed char) ((min((arr_11 [(_Bool)1] [i_4]), (arr_11 [i_4] [i_5]))) | ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_17 [1] [i_4] [1] [i_5])) : (((/* implicit */int) arr_12 [i_2] [i_4] [i_5]))))))));
                }
            } 
        } 
        arr_27 [i_2] = ((/* implicit */long long int) var_11);
        var_16 = ((arr_17 [(_Bool)0] [i_2] [i_2] [i_2]) || (((/* implicit */_Bool) var_1)));
    }
    var_17 = ((/* implicit */unsigned short) max((var_6), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) var_5))))))))));
    var_18 = ((/* implicit */unsigned int) var_4);
}
