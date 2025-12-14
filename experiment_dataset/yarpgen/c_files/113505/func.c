/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113505
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_15 [11] [i_0] [11] [i_1] [i_0] [i_0] = ((/* implicit */int) 5594774963541877229ULL);
                                arr_16 [i_0] [10LL] [i_2] [i_3 + 1] [i_0 + 2] |= ((/* implicit */unsigned short) ((arr_7 [(signed char)12]) ^ (arr_7 [20LL])));
                                var_20 &= ((/* implicit */unsigned int) var_16);
                                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) (-(arr_7 [(unsigned short)10])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_14))))));
                            }
                        } 
                    } 
                    var_22 &= ((/* implicit */unsigned char) ((((((/* implicit */int) var_0)) % (((/* implicit */int) arr_4 [i_1])))) % (((/* implicit */int) var_17))));
                    var_23 -= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (unsigned short)55909))))) + (((/* implicit */int) ((1266706281) <= (1266706282))))));
                    arr_17 [i_0] [i_0] [i_2 + 1] [i_0] = ((/* implicit */unsigned char) var_7);
                }
                arr_18 [10] [14] [10] |= ((/* implicit */unsigned short) min(((-(1266706281))), (max(((~(((/* implicit */int) arr_0 [22ULL] [22ULL])))), (min((((/* implicit */int) var_0)), (var_11)))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_5 = 2; i_5 < 22; i_5 += 1) 
                {
                    arr_22 [18ULL] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 + 1]))));
                    arr_23 [i_0] [i_0] = ((/* implicit */int) var_19);
                }
                /* vectorizable */
                for (signed char i_6 = 4; i_6 < 20; i_6 += 3) 
                {
                    var_24 = (+(var_9));
                    var_25 = -1266706282;
                }
                for (unsigned short i_7 = 3; i_7 < 22; i_7 += 1) 
                {
                    arr_29 [i_0] [i_0] [22] [i_7] = ((/* implicit */int) var_17);
                    var_26 = ((/* implicit */unsigned int) max((var_26), (var_13)));
                    arr_30 [i_0] [i_0] = ((/* implicit */unsigned long long int) -536870912);
                }
            }
        } 
    } 
    var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) var_4))));
    var_28 = ((/* implicit */unsigned int) var_14);
}
