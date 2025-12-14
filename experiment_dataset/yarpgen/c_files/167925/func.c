/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167925
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    var_17 = ((/* implicit */unsigned int) arr_3 [i_1]);
                    var_18 = ((/* implicit */short) max(((+(min((130413911), (((/* implicit */int) arr_3 [i_2])))))), (((/* implicit */int) max((arr_2 [i_1 - 1] [i_2 + 1] [i_2 + 1]), (var_12))))));
                    arr_8 [i_2] [i_1] [i_2 - 1] = ((/* implicit */short) var_1);
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_19 = ((/* implicit */long long int) max(((signed char)-21), ((signed char)-32)));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_11)))))) ? (max((((/* implicit */unsigned long long int) 130413913)), (9848443089076685310ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -6719620625449111011LL)), (var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_11 [i_0])), (arr_3 [(_Bool)1]))))) : (max((arr_1 [i_1] [i_1 - 2]), (((/* implicit */unsigned int) arr_11 [i_3])))))))));
                    var_21 &= ((/* implicit */_Bool) ((max((((/* implicit */long long int) arr_2 [i_1] [i_1 - 2] [i_1 - 2])), (max((var_15), (((/* implicit */long long int) (short)-32746)))))) | (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [(_Bool)1])) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) (short)0)) ? (arr_12 [i_3] [15ULL] [(_Bool)0] [12U]) : (((/* implicit */long long int) ((/* implicit */int) (short)-32746))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)48243)) ? (((/* implicit */int) (unsigned short)31896)) : (((/* implicit */int) var_5)))))))));
                    var_22 |= ((/* implicit */signed char) ((((/* implicit */long long int) 130413913)) * (max((((/* implicit */long long int) (_Bool)0)), (((((/* implicit */_Bool) 3887895156U)) ? (-8433653783776509305LL) : (var_15)))))));
                    arr_13 [3LL] [2U] [(unsigned short)10] [i_0] = ((/* implicit */unsigned long long int) -130413895);
                }
                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_11 [i_1 + 1])), ((short)2539)))) ? (((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32743))) * (arr_1 [15ULL] [15ULL])))) : (((/* implicit */unsigned long long int) max((arr_12 [i_1 - 1] [i_1 - 2] [i_1] [i_1]), (((/* implicit */long long int) -130413887)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 1; i_4 < 9; i_4 += 3) 
    {
        for (long long int i_5 = 1; i_5 < 9; i_5 += 4) 
        {
            {
                var_24 *= ((/* implicit */int) ((((/* implicit */_Bool) max((arr_4 [i_5 + 2]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)177)) || (((/* implicit */_Bool) var_6)))))) : (max((((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_4] [i_4] [1] [i_4])))))))));
                var_25 -= min((((-9223372036854775805LL) | (((/* implicit */long long int) arr_5 [i_4 + 2])))), (((/* implicit */long long int) ((int) arr_5 [i_4 + 1]))));
            }
        } 
    } 
}
