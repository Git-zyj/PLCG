/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119151
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
    var_15 = ((/* implicit */unsigned short) var_5);
    var_16 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (var_1)))) && ((!(var_7))))) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((/* implicit */int) var_2))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) != (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)60668))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (16465424815171658237ULL)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) var_7);
                            var_19 = ((/* implicit */_Bool) min((arr_7 [i_0] [i_0]), (max((4294967295U), (1061448214U)))));
                            /* LoopSeq 3 */
                            for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 4) 
                            {
                                var_20 = (_Bool)1;
                                var_21 = ((/* implicit */_Bool) min((((unsigned short) (_Bool)1)), (((/* implicit */unsigned short) (_Bool)1))));
                            }
                            for (short i_5 = 0; i_5 < 12; i_5 += 4) 
                            {
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), (min((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 2909784901U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))))), ((~(0ULL)))))));
                                arr_18 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2577606731U)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14))));
                                arr_19 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_8)))))) : (max((((/* implicit */unsigned long long int) 0U)), (var_9))));
                                arr_20 [i_0] [(unsigned short)7] [i_2] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [9ULL] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_14 [i_0] [i_1] [i_1] [i_2] [i_1] [i_3] [i_1]))));
                            }
                            /* vectorizable */
                            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                            {
                                arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((_Bool) 4503599627370495ULL));
                                var_23 = ((/* implicit */unsigned int) var_0);
                                arr_25 [i_0] [i_0] [(short)9] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (_Bool)1)))) << (((4294967280U) - (4294967265U)))));
                                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                            }
                            arr_26 [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) (!(var_6)))) >= (((var_10) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13)))))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)65472)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (1326271882U)))))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (2577606733U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_0 [i_0]))))));
                arr_27 [i_1] = ((/* implicit */unsigned int) ((_Bool) (~(var_5))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    var_26 = (~((~(var_5))));
                    var_27 ^= (!((_Bool)1));
                }
            }
        } 
    } 
}
