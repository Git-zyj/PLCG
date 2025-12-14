/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109469
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
    var_19 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [(unsigned char)10] [(unsigned short)4] = ((/* implicit */_Bool) (+(var_7)));
        arr_3 [9] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) != (var_7)))) : ((~(((/* implicit */int) var_11))))));
    }
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned char)185), ((unsigned char)245)))) ^ (((/* implicit */int) var_14))))) : ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (var_3))))))))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (int i_3 = 1; i_3 < 9; i_3 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) (~(max((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */int) var_15))))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) max((((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_9)), (var_17)))) != (min((var_16), (((/* implicit */unsigned long long int) var_3)))))), (((((/* implicit */int) var_5)) <= (((/* implicit */int) var_14)))))))));
                                var_23 |= ((/* implicit */unsigned char) max(((((_Bool)1) ? (((/* implicit */int) (unsigned short)0)) : (-1867894327))), (max((((/* implicit */int) (unsigned char)74)), (((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */int) (unsigned char)85)) : (((/* implicit */int) (unsigned char)213))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_3))), (((/* implicit */unsigned int) (-(var_7))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13))))) : (var_4));
        var_25 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_15))))) != (max((var_4), (((/* implicit */unsigned long long int) var_11)))))) ? ((((!(((/* implicit */_Bool) var_7)))) ? (((((/* implicit */int) var_0)) & (var_18))) : (((/* implicit */int) var_9)))) : (min((var_18), (((/* implicit */int) var_6))))));
    }
    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
    {
        var_26 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) var_13)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))) != (((var_4) & (var_4))))))));
        var_27 &= ((min((var_17), (((/* implicit */unsigned int) var_7)))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_12)))))));
        var_28 = ((((/* implicit */_Bool) (~(var_4)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (var_4))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))))));
        var_29 = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */short) var_8)), (var_12))))))) <= (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))) & (var_4))));
    }
    var_30 = ((/* implicit */int) var_11);
}
