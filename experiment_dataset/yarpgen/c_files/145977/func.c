/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145977
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_14)) : (arr_0 [i_0]))) / (arr_0 [i_0 - 2])));
        arr_2 [16U] = ((unsigned int) (_Bool)0);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_0 [i_1]))));
        arr_5 [i_1] = ((/* implicit */long long int) (~((~(((/* implicit */int) (_Bool)0))))));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))));
    }
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((-1813552544667714137LL), (((/* implicit */long long int) ((((/* implicit */_Bool) -4475923470860578387LL)) && (((/* implicit */_Bool) arr_11 [i_2])))))))) || (max(((!(((/* implicit */_Bool) -1813552544667714137LL)))), ((!(((/* implicit */_Bool) 16LL))))))));
                /* LoopNest 3 */
                for (unsigned int i_4 = 2; i_4 < 8; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_19 [i_2] [i_3] [i_5] [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [0U])) ? (((((((/* implicit */_Bool) arr_4 [i_2])) || (((/* implicit */_Bool) arr_6 [i_2])))) ? (((((/* implicit */_Bool) -1813552544667714137LL)) ? (arr_14 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (max((((var_11) << (((arr_16 [i_2] [i_2]) + (82709163668644143LL))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [(_Bool)1])))))))));
                                var_23 = var_7;
                                var_24 = ((/* implicit */_Bool) arr_14 [i_4]);
                                var_25 *= arr_15 [i_4];
                                var_26 = ((/* implicit */_Bool) min((var_8), ((-((+(arr_11 [i_6])))))));
                            }
                        } 
                    } 
                } 
                var_27 = ((((-5240688542157142357LL) & (((/* implicit */long long int) 257410886U)))) >> (((3812164939U) - (3812164925U))));
                arr_20 [i_2] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((arr_10 [i_3]), (arr_14 [i_2])))), (((min((var_13), (((/* implicit */long long int) var_12)))) >> ((((~(-1813552544667714137LL))) - (1813552544667714105LL)))))));
                var_28 -= ((/* implicit */unsigned int) (_Bool)0);
            }
        } 
    } 
}
