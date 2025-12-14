/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150516
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_16 = ((/* implicit */unsigned short) ((unsigned long long int) var_15));
                    var_17 = ((((/* implicit */_Bool) (~(2101195360U)))) ? (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (511ULL))), (max((var_3), (518ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                    arr_7 [i_0] [i_1] [(unsigned short)4] = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_5 [i_0] [(signed char)9] [i_2]), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) (signed char)85)), ((unsigned char)164))))))) % (((/* implicit */int) var_6))));
                }
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned short) (short)-32766)), ((unsigned short)1)));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) /* same iter space */
    {
        arr_11 [i_3] = ((/* implicit */unsigned char) max(((-((~(var_1))))), (((/* implicit */unsigned long long int) arr_6 [i_3] [i_3] [i_3] [i_3]))));
        var_18 += var_1;
    }
    for (signed char i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [8U] [21U] [i_4] [i_4])) ? (((/* implicit */int) (short)-32766)) : (((/* implicit */int) ((unsigned char) 3854525017U)))));
        arr_15 [i_4] = ((/* implicit */unsigned short) var_3);
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) 18446744073709551615ULL))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((unsigned char) 440442294U))));
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (36028779839094784LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65530)))));
    }
}
