/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163090
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
    var_19 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 4; i_2 < 12; i_2 += 2) 
            {
                {
                    var_20 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) var_17)))))) ? (((/* implicit */int) ((short) 2877893459711674839LL))) : ((-(((/* implicit */int) var_8))))));
                    var_21 &= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_15)) ? (((var_0) ? (arr_2 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_18))))) : (((/* implicit */long long int) var_15)))));
                    var_22 = ((/* implicit */long long int) var_11);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_23 &= (~(((((/* implicit */unsigned int) ((/* implicit */int) (short)224))) * (0U))));
                                var_24 = ((/* implicit */unsigned int) ((((long long int) arr_6 [i_0 + 2])) | ((~(max((arr_10 [i_0] [i_0] [i_2] [i_2 + 2] [2]), (((/* implicit */long long int) var_0))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        for (signed char i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_8 = 2; i_8 < 17; i_8 += 4) 
                    {
                        for (int i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) (-(((/* implicit */int) ((short) ((long long int) 22U))))));
                                var_26 = ((/* implicit */short) arr_14 [i_5] [i_6]);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_21 [i_5] [i_6])))), (((/* implicit */int) var_3))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 3) 
    {
        for (int i_11 = 0; i_11 < 15; i_11 += 1) 
        {
            {
                var_28 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(min((arr_23 [(_Bool)1] [i_11] [i_10] [i_11] [i_10]), (((/* implicit */unsigned long long int) var_12))))))) ? (((/* implicit */unsigned int) max((((((/* implicit */int) var_8)) - (((/* implicit */int) var_3)))), (((/* implicit */int) arr_16 [i_10]))))) : ((-(arr_19 [(signed char)10] [i_11])))));
                var_29 = ((/* implicit */unsigned short) min((max((4294967276U), (((/* implicit */unsigned int) (unsigned char)235)))), (((unsigned int) (!(((/* implicit */_Bool) var_1)))))));
                var_30 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (+(arr_15 [i_10])))))) % (min((arr_14 [i_10] [12]), (((/* implicit */unsigned long long int) arr_21 [4ULL] [i_10]))))));
            }
        } 
    } 
}
