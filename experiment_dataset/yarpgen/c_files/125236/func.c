/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125236
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (-(((int) (~(((/* implicit */int) var_16)))))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((arr_1 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (((unsigned int) var_9)))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((492581209243648LL) % (((/* implicit */long long int) -78190353)))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) arr_1 [i_0]))))))));
        arr_4 [(_Bool)1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) ((var_14) % (((/* implicit */int) var_13))))))));
    }
    /* LoopNest 3 */
    for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 2; i_3 < 10; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 2; i_4 < 10; i_4 += 3) 
                    {
                        for (short i_5 = 2; i_5 < 10; i_5 += 4) 
                        {
                            {
                                arr_16 [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) (((+(((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2]))))))) >= (((/* implicit */unsigned int) (((-(arr_5 [i_4]))) / (((/* implicit */int) ((-1994740422) < (((/* implicit */int) (unsigned char)60))))))))));
                                arr_17 [i_2] = ((/* implicit */long long int) ((((long long int) var_7)) <= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 4294967274U))))));
                            }
                        } 
                    } 
                    arr_18 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((arr_12 [i_2] [i_2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_17)) : (var_0))) < (((/* implicit */int) var_11))))))));
                    var_21 += ((/* implicit */short) arr_6 [i_2]);
                    var_22 += var_8;
                    arr_19 [i_2] = (~(((((/* implicit */int) (short)17943)) >> (((((/* implicit */int) (short)25809)) - (25809))))));
                }
            } 
        } 
    } 
    var_23 = ((_Bool) ((((/* implicit */unsigned int) var_0)) / (var_19)));
    var_24 = (((~(((/* implicit */int) var_8)))) / (((/* implicit */int) var_13)));
}
