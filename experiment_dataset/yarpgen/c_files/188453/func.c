/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188453
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    arr_9 [(unsigned short)0] = ((unsigned long long int) (-9223372036854775807LL - 1LL));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (arr_6 [i_0] [i_1] [(short)5]) : (arr_6 [i_0] [i_2] [i_4])));
                                var_19 = ((/* implicit */signed char) (_Bool)1);
                                var_20 = (!(((/* implicit */_Bool) arr_2 [i_0] [i_1])));
                            }
                        } 
                    } 
                }
                for (short i_5 = 3; i_5 < 7; i_5 += 1) 
                {
                    var_21 = arr_3 [i_0] [(short)8];
                    var_22 = ((/* implicit */int) ((signed char) max((((unsigned char) (unsigned short)65533)), ((unsigned char)67))));
                    var_23 *= ((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_5 + 4]);
                }
                for (short i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    arr_20 [i_0] = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_15)) ^ (((/* implicit */int) arr_2 [(short)6] [i_6])))));
                    arr_21 [i_0] = ((/* implicit */short) var_1);
                }
                arr_22 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1] [i_0] [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((max(((_Bool)1), ((_Bool)1))) && ((_Bool)1)))))));
                var_24 *= ((/* implicit */_Bool) (((((~(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_1] [i_1])))) / (((/* implicit */int) arr_2 [i_0] [i_1])))) * (((((/* implicit */int) min((var_7), (((/* implicit */short) (_Bool)1))))) >> (((((/* implicit */int) ((unsigned char) (short)22415))) - (121)))))));
                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) arr_19 [i_0] [i_0] [i_1] [i_1]))));
            }
        } 
    } 
    var_26 = ((((/* implicit */_Bool) ((2902300349U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))))));
    var_27 *= ((/* implicit */unsigned short) var_9);
    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (short)32767))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_6)) : (var_4))) : (var_1)))));
}
