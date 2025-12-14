/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175056
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_1] [i_4] [i_4] = (~((-(((int) -7221912308627842865LL)))));
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [8LL] = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((var_15), (((/* implicit */unsigned int) arr_12 [i_0] [i_1 + 1] [i_2] [i_3 + 1] [i_4]))))), ((~(7221912308627842864LL)))));
                                var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(max((3773202157U), (var_10)))))), (min((((/* implicit */unsigned long long int) var_14)), (((unsigned long long int) arr_8 [i_0] [i_1]))))));
                                var_20 = (-((~((-(873275041436190646LL))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_1] = ((/* implicit */long long int) min((8741907961055356469ULL), (((/* implicit */unsigned long long int) -7221912308627842886LL))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        for (signed char i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) ((unsigned char) var_3)))))));
                    var_22 = ((/* implicit */int) ((long long int) -2680954938751579214LL));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) min(((signed char)96), ((signed char)-16))))))), (var_15)));
}
