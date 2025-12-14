/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108676
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
    var_10 = ((/* implicit */short) min((3238111017U), (((/* implicit */unsigned int) (signed char)14))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1 - 1])), (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_4)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-18354)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (unsigned char)255))))) : (-9223372036854775806LL))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 7723428548931955839LL)) : (var_9))))) && (((/* implicit */_Bool) max((((/* implicit */int) (signed char)112)), (max((((/* implicit */int) var_8)), (arr_2 [i_0] [i_0]))))))));
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) > (((((/* implicit */_Bool) var_1)) ? (arr_1 [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (+(min((((((/* implicit */_Bool) 1589515485U)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22482))))), (((/* implicit */unsigned long long int) var_2)))))))));
                        arr_9 [i_2] = ((/* implicit */long long int) 236363393);
                    }
                    for (signed char i_4 = 1; i_4 < 13; i_4 += 4) 
                    {
                        arr_13 [i_0] [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) arr_12 [i_4] [i_2] [i_2] [i_0]);
                        arr_14 [i_0] [i_2] [i_1] [(unsigned char)12] [i_2] [i_4 + 1] = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) arr_4 [i_2 + 1])), (var_9))) != (((/* implicit */unsigned long long int) max((3843993075U), (((/* implicit */unsigned int) (unsigned char)127)))))));
                    }
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        arr_17 [i_5] = ((/* implicit */int) ((var_2) + (var_0)));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((signed char) var_4)))));
    }
}
