/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139080
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
    var_15 = ((/* implicit */unsigned long long int) (~((~((~(4276795590U)))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) max(((~((-(((/* implicit */int) var_7)))))), (((/* implicit */int) ((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 3605406954505177830LL)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))));
        var_16 = ((/* implicit */int) 3605406954505177857LL);
        arr_5 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
    }
    for (unsigned int i_1 = 2; i_1 < 19; i_1 += 4) 
    {
        arr_8 [i_1] &= ((/* implicit */unsigned int) (((-(((/* implicit */int) (short)-5248)))) / (((/* implicit */int) var_12))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((signed char) (+(((/* implicit */int) arr_7 [i_1 - 1]))))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (unsigned int i_3 = 3; i_3 < 20; i_3 += 4) 
            {
                {
                    var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_10)), (max((((((/* implicit */_Bool) (short)31185)) ? (arr_10 [i_1 + 1] [i_3 - 2]) : (var_3))), (((/* implicit */unsigned long long int) ((short) (signed char)-16)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 4) 
                    {
                        for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            {
                                var_19 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((int) arr_13 [i_1] [i_4]))) + ((((_Bool)1) ? (((/* implicit */unsigned long long int) (-(-3605406954505177858LL)))) : (arr_10 [4U] [i_2])))));
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max(((signed char)-88), (((/* implicit */signed char) (_Bool)1))))), (((((/* implicit */_Bool) arr_12 [i_4 + 3] [i_1] [i_4 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_4 + 3] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 + 2]))) : (var_11))))))));
                                var_21 = ((/* implicit */unsigned int) (((!(var_1))) ? (((/* implicit */int) ((arr_13 [i_3 - 3] [i_1 - 2]) > (arr_13 [i_3 + 1] [i_1 - 1])))) : ((~(((/* implicit */int) (_Bool)0))))));
                                var_22 = ((/* implicit */signed char) (+(arr_11 [i_2])));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 3; i_6 < 21; i_6 += 4) 
                    {
                        arr_23 [i_3] [6ULL] [(short)3] [i_3] = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), (31)));
                        var_23 = ((/* implicit */_Bool) ((unsigned int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) - (48684607U)))));
                    }
                }
            } 
        } 
        arr_24 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) min((((/* implicit */unsigned short) arr_20 [i_1 + 3] [i_1] [i_1])), ((unsigned short)18853))))));
    }
    for (signed char i_7 = 0; i_7 < 20; i_7 += 4) 
    {
        arr_27 [i_7] = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (0)))) ? (arr_16 [i_7] [i_7] [10U] [i_7] [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_7] [i_7] [i_7]))))), (((((/* implicit */_Bool) (short)-12641)) ? (3958991329057124001ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26993)))))));
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_24 = ((/* implicit */long long int) arr_11 [i_7]);
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-120)) ? (((((/* implicit */_Bool) (+(var_8)))) ? (arr_11 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) 3275434756U))));
        }
        var_26 = ((/* implicit */_Bool) max(((unsigned short)17), (((/* implicit */unsigned short) (signed char)(-127 - 1)))));
        var_27 -= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))))), ((~(var_11)))));
    }
}
