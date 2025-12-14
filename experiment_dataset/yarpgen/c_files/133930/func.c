/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133930
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
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned short) (signed char)12))))) ? (max((((/* implicit */unsigned long long int) arr_0 [(signed char)0])), (var_10))) : (arr_2 [i_1] [0U])))) ? ((+(((unsigned long long int) arr_2 [i_0 + 3] [i_1])))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_2 [i_0] [i_1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))))));
                arr_4 [(unsigned short)2] |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)5))))), (max((arr_2 [i_1 - 1] [i_1]), (arr_2 [i_1 + 4] [i_1])))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) var_18);
    var_22 = var_4;
    /* LoopSeq 3 */
    for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        arr_9 [(_Bool)1] [i_2] = ((/* implicit */_Bool) (signed char)-5);
        var_23 = ((/* implicit */int) var_10);
    }
    for (short i_3 = 2; i_3 < 13; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned int) (signed char)-53)), (1687878943U))))), ((~(((((/* implicit */int) arr_5 [i_3 - 2])) >> (((2461230787U) - (2461230757U)))))))));
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((unsigned long long int) (signed char)7))));
        arr_13 [i_3] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((signed char) 288229276640083968ULL)))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) 801729818563420369ULL)) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) (signed char)47))))), (min((-3440557935392984075LL), (((/* implicit */long long int) 1076168278))))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_16 [i_4] = ((/* implicit */unsigned char) ((arr_11 [i_4] [i_4]) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4] [i_4])) ? (arr_6 [(signed char)9]) : (((/* implicit */unsigned long long int) arr_10 [i_4] [i_4])))))));
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((arr_15 [6LL]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5))))) ? (arr_7 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -751928307)))))))))));
    }
    var_26 &= ((/* implicit */unsigned char) var_8);
}
