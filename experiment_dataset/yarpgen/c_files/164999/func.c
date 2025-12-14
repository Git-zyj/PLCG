/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164999
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
    var_13 = ((/* implicit */_Bool) var_9);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_0] [10ULL] = min((((/* implicit */long long int) (unsigned short)40548)), (321667526533855832LL));
                var_14 -= ((/* implicit */int) (!(((((/* implicit */_Bool) ((unsigned char) (unsigned short)40548))) || (((/* implicit */_Bool) min((var_12), (((/* implicit */short) arr_0 [i_1])))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) var_4)))))) ? (((unsigned int) ((((/* implicit */int) (signed char)54)) + (((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */short) var_1)), (var_9)))) * ((+(((/* implicit */int) var_7))))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_2 = 4; i_2 < 23; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 1; i_3 < 24; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                {
                    arr_15 [i_3] = (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61685))) < (var_8)))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            {
                                arr_20 [i_3] [i_3] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)40548))));
                                var_16 = ((/* implicit */unsigned short) arr_9 [i_2] [i_2]);
                                var_17 ^= ((/* implicit */_Bool) ((((/* implicit */int) var_5)) - (((/* implicit */int) arr_13 [i_4] [i_4] [i_4] [i_2 - 3]))));
                            }
                        } 
                    } 
                    arr_21 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_4] [i_4])) ? (((/* implicit */int) arr_16 [i_3 - 1] [i_4])) : (((/* implicit */int) arr_12 [i_4]))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 21; i_8 += 3) 
                        {
                            {
                                arr_27 [i_2] [i_2] [i_3] [i_4] [i_4] [i_7] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_23 [i_2] [i_2 - 4] [(unsigned short)17] [i_2 - 4] [i_3])) : (((/* implicit */int) ((signed char) (signed char)71)))));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((-4369263172811902178LL) - (((/* implicit */long long int) 3126063986U)))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_2] [i_2] [i_2 - 4])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 13404320379047668780ULL)) ? (((/* implicit */int) ((_Bool) (signed char)29))) : ((~(((/* implicit */int) arr_24 [i_2 - 4] [i_2 + 2] [i_2] [i_2 - 4]))))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1442000118594373053LL)) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) ((_Bool) (unsigned char)18)))));
    }
    var_21 = (-(((((/* implicit */int) (signed char)80)) + (((/* implicit */int) (unsigned char)249)))));
}
