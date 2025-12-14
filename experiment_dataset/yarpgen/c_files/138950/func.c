/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138950
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
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */_Bool) (-(((((arr_6 [i_0] [i_1] [i_2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) ? (((arr_3 [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (4429235422087407336LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))))));
                    var_14 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_2 [i_0] [i_0]), (((/* implicit */long long int) var_8))))), ((~(arr_6 [i_0] [i_1] [i_2 + 3])))))) ? (((/* implicit */unsigned int) ((int) (unsigned char)25))) : (((((/* implicit */_Bool) ((3671346183U) + (((/* implicit */unsigned int) 1746290793))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-5131))) : (var_11)))));
                    var_15 = min(((-(((arr_5 [i_1]) / (((/* implicit */unsigned long long int) var_7)))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1746290793)) ? (arr_2 [i_1] [i_1]) : (((/* implicit */long long int) var_7)))) <= (((/* implicit */long long int) min((((/* implicit */unsigned int) var_9)), (var_11))))))));
                    arr_9 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)5131))))) ? (min((arr_1 [i_2 + 1]), (((((/* implicit */_Bool) var_12)) ? (arr_6 [i_0] [i_1] [20LL]) : (((/* implicit */unsigned long long int) var_7)))))) : (var_2)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        for (unsigned char i_4 = 3; i_4 < 10; i_4 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((long long int) var_6));
                arr_14 [i_4] [(unsigned short)4] = ((/* implicit */_Bool) var_5);
                arr_15 [i_3] [i_4 + 1] [i_4] = ((/* implicit */unsigned char) ((unsigned int) var_10));
                var_17 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_1) & (arr_10 [i_3]))) <= ((-(var_11))))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [i_3])))) & ((+(3281948980395099958ULL))))));
                arr_16 [i_3] [i_4] = max((((183612750U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4] [i_4 + 1]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) var_10)))))));
            }
        } 
    } 
    var_18 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_10)), ((-(((/* implicit */int) (unsigned short)53432))))))) ? (((/* implicit */int) var_8)) : (var_7)));
}
