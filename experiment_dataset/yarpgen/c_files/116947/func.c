/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116947
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
    var_18 = ((/* implicit */int) var_7);
    var_19 = ((/* implicit */_Bool) ((1283025065) % (((/* implicit */int) (unsigned short)59434))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        arr_12 [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) var_7)))))))));
                        arr_13 [i_0] [i_2] = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (-1)))) | (((536870911ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61440)))))))));
                        arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) (+(((((_Bool) var_13)) ? (min((arr_11 [i_1]), (((/* implicit */unsigned long long int) arr_8 [i_0 - 2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                        arr_15 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) var_9);
                    }
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        arr_18 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4095))) % (arr_16 [i_1] [i_2] [i_1] [i_1])))))) ? (((/* implicit */int) ((unsigned short) ((var_16) & (((/* implicit */int) arr_2 [i_0 - 1] [i_2] [i_1])))))) : ((~(((/* implicit */int) (_Bool)1))))));
                        arr_19 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (((~(-8787114769730883525LL))) != (((/* implicit */long long int) ((/* implicit */int) (short)29015)))))) - (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) 2687034894U))))))));
                        arr_20 [i_0 - 2] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) var_2);
                    }
                    for (int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        arr_24 [i_1] [i_5] [i_1] [i_1 - 2] [i_1] [i_1] = (+(((arr_6 [i_0 - 1] [i_1 - 1] [i_0 - 2]) + (((/* implicit */int) arr_7 [i_2] [i_1 - 3] [i_1 - 3] [i_1 - 3])))));
                        arr_25 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_17 [i_0 - 2] [i_5] [i_1 - 3] [i_5] [i_2])) ? (arr_17 [i_0 + 1] [i_0 + 1] [i_1 - 3] [i_5] [i_1 + 1]) : (((/* implicit */unsigned long long int) arr_8 [i_0 + 1]))))));
                    }
                    arr_26 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned char)56))))))) ? (((/* implicit */int) ((arr_17 [i_1 + 1] [i_1] [i_0 - 2] [i_0 - 1] [i_0 + 1]) < (arr_11 [i_1])))) : ((~((+(1073331516))))));
                    arr_27 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) (short)32758));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((var_7) <= (((((9007199254740991ULL) * (18235293869176564780ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))));
}
