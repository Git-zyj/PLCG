/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140003
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_19 = max((((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-75)), (var_6)))) ? (((var_15) ^ (arr_0 [i_0]))) : (max((((/* implicit */long long int) var_5)), (9052695770192987092LL))))), (max((max((((/* implicit */long long int) 190772341)), (-3203978422715817415LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 4037802666U))))))));
                arr_8 [i_0] [i_0] [9LL] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-65)), (var_18)))) && (((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [i_1])), (var_18))))))), (max((((/* implicit */long long int) min(((signed char)82), (((/* implicit */signed char) arr_1 [i_1] [i_1]))))), (max((((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0])), (var_18)))))));
                var_20 = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_16)))), (((((/* implicit */_Bool) 2084711413)) && (((/* implicit */_Bool) 1006124548023921325LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)84)) ? (8388607LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (arr_5 [i_0] [i_0]) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (70368743915520LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)82))))))) : (((/* implicit */long long int) ((/* implicit */int) max((min(((short)2713), (((/* implicit */short) (unsigned char)1)))), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_16)))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 3; i_2 < 17; i_2 += 2) 
    {
        for (short i_3 = 1; i_3 < 17; i_3 += 2) 
        {
            {
                arr_15 [i_2 - 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)108))) + (var_16)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)119))) >= (8102703491962589254LL))))) : (((var_7) ^ (var_7))))) - (((((/* implicit */_Bool) min((arr_14 [i_2 + 1] [i_2 + 1] [i_2]), (arr_14 [13U] [i_2 - 1] [4U])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_12 [i_2] [i_2 - 1] [i_2])))))) : (max((var_6), (((/* implicit */long long int) var_1))))))));
                var_21 = ((((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)126))) - (var_11))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_3] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [(unsigned char)18])))))))) & (((((/* implicit */_Bool) min((arr_14 [i_2 - 3] [i_2 - 3] [(_Bool)1]), (((/* implicit */long long int) 1072486001))))) ? (((((/* implicit */_Bool) (short)0)) ? (arr_11 [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */long long int) (short)31806)), (var_16))))));
            }
        } 
    } 
}
