/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129221
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */short) (((~(min((var_5), (((/* implicit */unsigned long long int) arr_1 [i_0])))))) + (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 2]))) ^ (arr_4 [i_0] [i_1 + 2] [i_2]))))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((arr_4 [i_1 + 2] [i_1 - 2] [i_1 + 1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 2]))))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-8165)) : (((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 1])))))));
                    var_16 -= ((/* implicit */unsigned long long int) ((max(((+(var_15))), (((/* implicit */unsigned long long int) max((3319116017U), (((/* implicit */unsigned int) arr_1 [i_0]))))))) <= (((unsigned long long int) arr_2 [i_1 - 1] [i_1]))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_3 = 1; i_3 < 11; i_3 += 1) 
    {
        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) max((max((arr_5 [i_3] [i_3 - 1] [i_3 - 1]), (((/* implicit */unsigned long long int) 3319116023U)))), (((/* implicit */unsigned long long int) min((var_14), (arr_10 [i_3])))))))));
        arr_12 [i_3] [i_3 - 1] = ((/* implicit */_Bool) min((((short) max((((/* implicit */unsigned int) (short)1)), (3319116033U)))), (((/* implicit */short) ((signed char) arr_4 [i_3] [i_3 - 1] [i_3])))));
        arr_13 [(short)9] [(short)9] = ((/* implicit */short) var_5);
        var_18 -= arr_10 [i_3];
        var_19 = ((/* implicit */short) 16ULL);
    }
    var_20 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 7995354767245939390ULL)))) * (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-37))) : (var_5))))) + (var_8));
    /* LoopNest 2 */
    for (short i_4 = 2; i_4 < 11; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            {
                var_21 -= ((/* implicit */signed char) -5309094544146636850LL);
                var_22 ^= ((/* implicit */unsigned long long int) var_9);
                arr_18 [1ULL] [0ULL] = ((/* implicit */short) ((((((((/* implicit */long long int) ((/* implicit */int) (short)0))) % (-5309094544146636842LL))) >> (((((/* implicit */int) arr_10 [i_4])) - (7850))))) - (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4])) && (((/* implicit */_Bool) var_3))))), (arr_17 [i_4 - 1])))))));
                arr_19 [i_4 - 2] [i_4] [i_5] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)23937))) : (arr_4 [i_4] [i_4] [1U]))));
            }
        } 
    } 
}
