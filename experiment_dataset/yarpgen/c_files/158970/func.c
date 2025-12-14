/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158970
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
    for (int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) (unsigned char)37)), (459496932035108939LL))), (((/* implicit */long long int) arr_0 [i_0]))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)11117)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [20LL]))) : (arr_6 [i_0] [i_2]))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-31776))))))))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (-((~(max((arr_7 [i_0] [i_1] [i_2]), (((/* implicit */long long int) (signed char)124))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) (~(min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) var_5))))));
    var_16 = ((/* implicit */long long int) 6648330866815423201ULL);
    /* LoopNest 3 */
    for (unsigned short i_3 = 3; i_3 < 8; i_3 += 1) 
    {
        for (long long int i_4 = 3; i_4 < 10; i_4 += 1) 
        {
            for (int i_5 = 2; i_5 < 10; i_5 += 2) 
            {
                {
                    arr_17 [i_3] [i_5 + 2] [i_5] [i_5] = ((/* implicit */signed char) ((long long int) max((((unsigned long long int) arr_6 [i_3] [i_3])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)11064)) ? (arr_15 [i_3] [i_3] [i_3] [i_5]) : (((/* implicit */int) var_2))))))));
                    var_17 = ((((((_Bool) (signed char)-17)) ? (((var_6) + (((/* implicit */int) (unsigned short)0)))) : ((+(var_6))))) - (((/* implicit */int) (!(((arr_10 [(signed char)9]) > (arr_10 [i_4])))))));
                }
            } 
        } 
    } 
    var_18 &= ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)52309)) - (((/* implicit */int) var_13))))) + (var_12))), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))))))));
}
