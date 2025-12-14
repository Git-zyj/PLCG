/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174013
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
    var_13 = ((/* implicit */long long int) var_6);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        var_14 = (((+(((/* implicit */int) arr_0 [i_0 + 2])))) * ((((+(((/* implicit */int) (signed char)3)))) / (((/* implicit */int) arr_0 [i_0 + 3])))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)40207)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)0)))) | (((/* implicit */int) min((arr_0 [i_0 + 2]), (((/* implicit */unsigned short) (signed char)-10)))))));
    }
    for (int i_1 = 2; i_1 < 10; i_1 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_1] [i_1])), (min((arr_0 [2ULL]), (((/* implicit */unsigned short) arr_2 [(short)3]))))));
        var_16 = ((/* implicit */unsigned long long int) (short)22566);
    }
    for (int i_2 = 2; i_2 < 10; i_2 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 - 2]))) : (((((/* implicit */unsigned int) 0)) + (0U))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_2 - 2])) * (((/* implicit */int) var_8)))))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            var_18 *= ((/* implicit */unsigned char) (-(min(((+(274877906943LL))), (((/* implicit */long long int) arr_2 [i_2 - 1]))))));
            var_19 ^= ((/* implicit */unsigned long long int) min(((((_Bool)1) ? (2572320759260951289LL) : (((/* implicit */long long int) 731894055)))), (((/* implicit */long long int) (~(arr_5 [i_3] [i_3]))))));
        }
        var_20 *= ((/* implicit */unsigned long long int) 4120119258U);
        arr_13 [i_2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) min(((~(2914999286U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) << (((var_5) - (2705186781054774610LL))))))))), (min((arr_12 [i_2 + 1] [i_2 - 1] [i_2 + 1]), (arr_12 [i_2 - 1] [i_2 - 2] [i_2])))));
    }
}
