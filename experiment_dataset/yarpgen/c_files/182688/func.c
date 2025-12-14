/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182688
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
    var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_7)))) ^ (((/* implicit */int) var_7))))) ^ (((((unsigned long long int) var_14)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_11), (var_7)))))))));
    var_20 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned long long int) 281474976645120LL))) ? (((((/* implicit */int) (signed char)102)) >> (((((/* implicit */int) (signed char)102)) - (90))))) : (((/* implicit */int) (unsigned short)48740)))) + (((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((((/* implicit */short) var_13)), (var_0))), (max((arr_0 [(_Bool)1] [i_1]), (((/* implicit */short) (_Bool)1))))))) ? (((/* implicit */int) ((short) (-(((/* implicit */int) (unsigned char)94)))))) : (min((((/* implicit */int) (signed char)97)), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_6 [(short)5] [i_1] [i_2] [i_2])) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_15 [i_3] [i_3] [(unsigned char)21] [i_3 + 2] [i_4] = ((/* implicit */unsigned short) arr_5 [i_3] [i_3] [i_3] [i_3 - 3]);
                                var_21 = ((/* implicit */signed char) ((min((arr_12 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_3] [i_1 - 1] [i_1 + 1] [i_3 - 2]), (arr_12 [i_1 + 1] [i_1 + 1] [i_1] [i_3] [i_1 + 1] [i_1 + 1] [i_3 + 3]))) ? (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (unsigned short)48742)))), (((/* implicit */int) ((((/* implicit */int) (signed char)-94)) < (((/* implicit */int) (_Bool)1)))))))) : (var_12)));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2677564274U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)9))))))), (((((/* implicit */_Bool) max((arr_3 [i_0] [i_1] [i_2]), (arr_6 [i_0] [i_1] [i_1] [i_2])))) ? (((((/* implicit */_Bool) (unsigned short)21991)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25110))) : (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23764)))))));
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        var_23 *= ((/* implicit */short) ((((/* implicit */int) (unsigned short)16797)) >= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 2] [i_1 - 1])) : (((/* implicit */int) (_Bool)0))))));
                        var_24 = ((/* implicit */unsigned char) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        arr_18 [i_5] [i_5] [i_5] = ((/* implicit */long long int) (short)17643);
                    }
                }
            } 
        } 
    } 
}
