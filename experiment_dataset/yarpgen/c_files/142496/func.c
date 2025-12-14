/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142496
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
    var_13 |= ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) / (((/* implicit */int) (_Bool)1))))), (var_6))) + ((-((~(var_6)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [i_0] [i_0])))) != (min((((/* implicit */unsigned long long int) -1182814242582536961LL)), (11489320550467145402ULL)))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_14 &= (((((!(((/* implicit */_Bool) 0ULL)))) ? (((((/* implicit */_Bool) arr_12 [i_0] [(unsigned char)18] [(unsigned char)18] [i_0] [i_0] [i_0] [i_0])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [11ULL] [i_3] [i_4] [i_0] [i_0]))))) | (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_4 [i_4] [i_4] [i_4])), (var_3)))) ? (min((((/* implicit */unsigned long long int) var_0)), (18446744073709551611ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_9 [i_0]), (((/* implicit */short) (_Bool)1)))))))));
                                var_15 = ((/* implicit */unsigned short) (+(0ULL)));
                                var_16 = ((3352068633990833658ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(var_8))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3]))))))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_1] [i_1] &= ((/* implicit */signed char) 2802166233U);
                /* LoopNest 3 */
                for (unsigned char i_5 = 3; i_5 < 18; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
                        {
                            {
                                arr_23 [(_Bool)1] [i_5 + 2] [i_5] [i_5] [i_5 + 2] = ((/* implicit */_Bool) ((((int) ((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */int) arr_11 [i_0] [i_5] [i_5] [4] [i_7] [2ULL] [i_7]))))) / (((/* implicit */int) (_Bool)1))));
                                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_18 [i_5 - 2] [i_5 - 2] [i_5] [i_5 - 1] [i_5 + 2]), (arr_18 [i_5 - 1] [i_5 - 2] [i_5 - 1] [i_5 - 3] [i_5 - 3])))))))));
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((~(((/* implicit */int) arr_2 [i_0]))))))) ? (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_2)))) - (((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [20] [i_1] [i_6]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6] [i_6] [i_6]))) + (2107019393595896174ULL)))))));
                                var_19 = ((/* implicit */unsigned short) var_8);
                                var_20 += ((/* implicit */_Bool) var_3);
                            }
                        } 
                    } 
                } 
                arr_24 [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1492801062U))))) >= (min((((/* implicit */int) arr_0 [i_0])), (var_5))))))));
            }
        } 
    } 
}
