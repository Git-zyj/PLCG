/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149276
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
    var_13 = ((/* implicit */_Bool) ((short) 0));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (unsigned char)235);
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (unsigned short)0))) >= (((/* implicit */int) ((unsigned short) 1514497118)))));
        arr_4 [i_0] = ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) (unsigned short)1740)) ? (7021432658718591045ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))), (((/* implicit */unsigned long long int) (-(var_5))))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) ((short) var_12));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 4; i_4 < 12; i_4 += 2) 
                    {
                        for (short i_5 = 3; i_5 < 12; i_5 += 2) 
                        {
                            {
                                arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])), ((+(((/* implicit */int) arr_20 [i_2 + 1]))))));
                                var_14 = ((/* implicit */_Bool) ((short) max((((/* implicit */unsigned short) ((short) var_8))), (((unsigned short) 7326454094592064794ULL)))));
                                var_15 -= ((/* implicit */unsigned short) arr_13 [i_1] [i_1] [i_1] [i_1]);
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_4 - 1] [i_4 - 1]))) != (((((/* implicit */_Bool) (unsigned short)65535)) ? (14885495406661673411ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-164162576), (((/* implicit */int) (unsigned short)65514))))) ? (((/* implicit */unsigned long long int) 9223372036854775788LL)) : (18446744073709551609ULL)))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
                    var_18 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned char)231)))) > (arr_9 [i_1] [i_1])));
                }
            } 
        } 
        var_19 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) arr_11 [i_1]))) & (((int) (short)19597))));
        arr_22 [i_1] = ((/* implicit */unsigned short) min((arr_7 [i_1] [i_1]), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) >> (((var_2) - (8559830249830001356ULL)))))), (max((0ULL), (3909382589507299044ULL)))))));
    }
}
