/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103149
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                var_18 &= ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_0 [2])), (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [(unsigned short)6])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_0 [i_1 + 1]))))), (8862390140691917945LL)))));
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */unsigned long long int) ((-8862390140691917940LL) - (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)58)))))))) + (arr_5 [i_1 + 1])))));
                var_20 ^= ((/* implicit */int) min((((arr_1 [i_1 + 1]) % (8862390140691917945LL))), (max((((arr_1 [i_1]) % (-7041627359559221040LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (var_7) : (((/* implicit */int) arr_3 [i_0])))))))));
                var_21 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)13314))) ^ (((((/* implicit */_Bool) (short)-32738)) ? (arr_4 [(unsigned char)8] [i_1 + 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8165)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        for (long long int i_3 = 1; i_3 < 22; i_3 += 1) 
        {
            {
                arr_12 [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) (signed char)90)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)97))) : ((~(arr_7 [(unsigned char)16]))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-112)))));
                arr_13 [i_3] |= ((/* implicit */_Bool) ((int) max(((~(((/* implicit */int) (signed char)-65)))), (((((/* implicit */int) arr_6 [(unsigned short)4] [i_2])) | (((/* implicit */int) arr_8 [i_2] [i_2] [i_2])))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (8862390140691917963LL))), (((/* implicit */long long int) var_7))))) ? (var_5) : (((/* implicit */unsigned long long int) (-(min((((/* implicit */int) var_8)), (var_6))))))));
}
