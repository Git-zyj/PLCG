/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140767
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_7 [(_Bool)1] [i_1] [i_2] [i_2] &= ((/* implicit */int) min((((long long int) ((((/* implicit */_Bool) (unsigned short)55484)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)10))))), (((/* implicit */long long int) var_8))));
                    arr_8 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((-271885100), (((/* implicit */int) (_Bool)0))))) ? (((unsigned int) ((long long int) arr_5 [i_0] [8U] [7U] [2U]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_6 [i_0] [i_1]), (arr_6 [i_0] [i_1])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            var_17 = ((/* implicit */int) 3848213455351320774LL);
                            var_18 &= ((/* implicit */short) arr_4 [i_3 - 1] [i_1]);
                            var_19 = ((/* implicit */_Bool) arr_3 [i_3 + 1] [i_3] [3]);
                        }
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)100)) * (((/* implicit */int) (_Bool)0))));
                        arr_15 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((signed char) arr_13 [i_3 + 1] [i_3] [i_3 + 1] [i_2] [i_1]));
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) (-(-4881936891016298566LL)))) ? (((((/* implicit */_Bool) var_6)) ? (-2147483625) : (((/* implicit */int) (unsigned short)65535)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (var_8))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_5 = 2; i_5 < 22; i_5 += 1) 
    {
        var_22 = var_11;
        var_23 = ((/* implicit */long long int) arr_17 [12] [i_5]);
        var_24 &= ((/* implicit */signed char) (~(((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_9))))));
        arr_20 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */int) arr_18 [i_5 - 2])) * (((/* implicit */int) arr_18 [i_5 + 1]))));
    }
    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) var_16))));
    var_26 -= ((/* implicit */long long int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_14)), (var_2)))) ? (((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) var_3))));
}
