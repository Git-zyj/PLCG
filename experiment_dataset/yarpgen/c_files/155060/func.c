/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155060
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
    for (signed char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_1]);
                var_12 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_0])) ^ (-1199156013))) % ((+(var_6)))))) ? ((~((~(var_3))))) : (((arr_0 [i_0] [12ULL]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                {
                    var_13 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? ((~(((/* implicit */int) arr_4 [i_3] [i_3] [i_2])))) : (((/* implicit */int) arr_9 [i_2]))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (3476935690836272233ULL) : (((/* implicit */unsigned long long int) 1199156031))))) ? (((long long int) var_9)) : (((((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (-36028797018963968LL)))))));
                    arr_17 [i_2] [1ULL] = min((((((/* implicit */unsigned long long int) -7477414218189126969LL)) + (arr_0 [i_2] [(signed char)15]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_2] [i_3] [i_3 + 3]))))));
                    var_14 = ((/* implicit */long long int) var_5);
                    var_15 = ((/* implicit */long long int) var_0);
                    arr_18 [6] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_3 + 1] [i_3 - 1] [i_3 + 1])) ? (((/* implicit */int) arr_5 [i_3 + 1] [i_3 - 1] [i_3 + 1])) : (((/* implicit */int) arr_12 [i_3 + 1] [i_3 - 1] [i_3 + 1]))))) != (max((((/* implicit */long long int) arr_12 [i_3 + 1] [i_3 - 1] [i_3 + 1])), (6878497610285859172LL)))));
                }
            } 
        } 
    } 
}
