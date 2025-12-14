/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125106
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
    var_18 = ((/* implicit */int) var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((var_10), (((/* implicit */unsigned short) var_16)))), (((/* implicit */unsigned short) arr_4 [i_0] [i_1]))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (var_17) : (((/* implicit */long long int) 1015754227U)))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_1]))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (arr_3 [i_0] [i_1] [i_1])))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)255);
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_4 [i_2] [i_0])) : (((/* implicit */int) var_16))))) ? (arr_8 [i_4 + 1] [i_4] [i_4 - 2]) : ((((_Bool)1) ? (769825839) : (((/* implicit */int) (_Bool)1)))))))));
                                var_20 += ((/* implicit */unsigned short) var_14);
                                var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) 6722419774138363105LL)) ? (min((var_3), (((/* implicit */int) (_Bool)1)))) : (var_3)))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((unsigned int) arr_13 [i_2] [i_0])))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_15)))) : (arr_12 [i_2] [i_2] [i_1] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) (+(arr_11 [i_0] [i_1] [i_2]))))));
                }
                for (int i_5 = 2; i_5 < 21; i_5 += 4) 
                {
                    arr_18 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) var_17);
                    var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (arr_11 [i_5 + 1] [i_1] [i_5]))))));
                    var_24 = ((/* implicit */signed char) (short)32767);
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1715820104)) ? ((+((-(1023))))) : ((~(((/* implicit */int) (_Bool)1))))));
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_19 [i_1] [i_6] [i_1] [i_1])), (var_7)))) ? (((/* implicit */int) (short)31738)) : ((~(((/* implicit */int) var_6)))))))))));
                }
                arr_22 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (unsigned char)250)) ? (14759897964564391363ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((_Bool) var_9)))))));
                var_27 = ((/* implicit */unsigned long long int) 1610612736);
            }
        } 
    } 
    var_28 = ((/* implicit */int) min((var_17), (((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) var_7))))))));
}
