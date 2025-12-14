/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105701
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] = ((long long int) -1349243578);
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_4 + 1] [i_4 + 1] [i_4 - 2] [(unsigned short)12] [i_4 + 2])) | (((/* implicit */int) var_5))))) ? (((1125899906842623LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)15))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_4 + 1] [i_4] [i_4 - 2] [(_Bool)1] [i_4 + 2])) & (((/* implicit */int) arr_14 [i_4 + 1] [i_4 + 1] [i_4 - 2] [i_4] [i_4 + 2])))))));
                                arr_16 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_4] [i_0])) / (((/* implicit */int) var_13))))) ? (((/* implicit */int) (unsigned short)38818)) : ((~(((/* implicit */int) arr_4 [i_1] [i_1] [i_3])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        for (short i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            {
                arr_22 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) arr_2 [i_5] [i_5]);
                arr_23 [(unsigned char)0] [i_6] [(unsigned char)0] = ((/* implicit */long long int) var_13);
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)15)), (var_2)))))))));
    var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (var_0)))) : (((((/* implicit */_Bool) (signed char)-29)) ? (-1317783417490381227LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))) - (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1467734104U)) ? (((/* implicit */int) (unsigned short)38818)) : (((/* implicit */int) var_3))))) / (var_14))))));
    var_18 = ((/* implicit */signed char) min(((+((+(1657182146))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((unsigned char) var_14))) : ((-(((/* implicit */int) var_11))))))));
}
