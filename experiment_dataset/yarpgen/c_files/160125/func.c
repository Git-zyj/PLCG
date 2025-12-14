/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160125
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
    var_10 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (short)63)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1 - 1] [i_0] [(signed char)8] |= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */int) max((arr_5 [i_0] [i_0] [i_1] [i_0]), (((/* implicit */unsigned short) (short)63))))) : ((~(((/* implicit */int) var_2)))))), (((/* implicit */int) (signed char)-63))));
                    var_11 += ((/* implicit */_Bool) max((((/* implicit */int) max((((((/* implicit */_Bool) arr_7 [i_0])) && (((/* implicit */_Bool) arr_7 [i_0])))), ((_Bool)0)))), (((((/* implicit */_Bool) arr_4 [i_2])) ? (((((/* implicit */_Bool) (unsigned short)8054)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_2])))) : (((/* implicit */int) var_2))))));
                    var_12 = ((/* implicit */short) ((signed char) max(((+(((/* implicit */int) arr_3 [i_0] [i_1])))), (((((/* implicit */_Bool) (short)-6621)) ? (((/* implicit */int) arr_3 [i_1] [i_2])) : (((/* implicit */int) (short)-6631)))))));
                    arr_9 [(unsigned short)2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (short)2917);
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        for (short i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_3] [i_5] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)27146)) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_1 + 4] [i_4])) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_3] [i_1 + 4] [11]))))));
                                arr_20 [i_3] [i_1 - 3] = arr_0 [i_0] [i_0];
                                var_13 = ((/* implicit */signed char) var_1);
                            }
                        } 
                    } 
                    var_14 += ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
                    arr_21 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */_Bool) arr_7 [i_3]);
                }
                arr_22 [i_0] [i_1 - 1] = ((/* implicit */unsigned long long int) (_Bool)0);
            }
        } 
    } 
    var_15 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6631))) : ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49829))) : (13180859166277468515ULL))))))));
    var_16 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)13495))))))));
    var_17 = max(((-(max((((/* implicit */int) (short)16383)), (var_7))))), (((/* implicit */int) var_2)));
}
