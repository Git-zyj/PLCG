/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157841
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
    var_15 = ((/* implicit */int) ((((/* implicit */long long int) (~(min((var_14), (((/* implicit */unsigned int) 87127608))))))) / (((((/* implicit */_Bool) ((short) 4707512197310144352ULL))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) 1567814813U)) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) arr_0 [i_0]);
        arr_2 [i_0] &= ((/* implicit */long long int) min((min((((/* implicit */int) arr_1 [i_0])), (87127608))), (((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) 87127618)), (var_7)))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) min((max((((arr_4 [i_0] [i_0]) * (arr_0 [5]))), (arr_4 [i_1] [i_0]))), (((/* implicit */unsigned long long int) max(((short)18223), (((/* implicit */short) ((_Bool) (signed char)-126)))))))))));
            /* LoopNest 3 */
            for (signed char i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                for (short i_3 = 2; i_3 < 12; i_3 += 2) 
                {
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        {
                            arr_14 [i_1] [i_1] [(short)12] [i_1] [0LL] [i_1] [i_1] = ((/* implicit */signed char) var_8);
                            var_18 = ((/* implicit */int) var_7);
                            arr_15 [i_0] [i_1] [i_0] [2LL] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [(signed char)11] [i_3 - 2] [(unsigned char)6] [i_4])) ? (((/* implicit */int) arr_7 [i_3] [(signed char)5] [i_2 - 2])) : (((/* implicit */int) arr_7 [i_0] [i_2 + 2] [i_2])))) * (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1]))))), (var_5))))));
                        }
                    } 
                } 
            } 
            arr_16 [i_0] [(short)8] [i_1] = ((/* implicit */short) 32767ULL);
            arr_17 [i_1] = ((/* implicit */short) var_10);
        }
    }
    for (unsigned char i_5 = 2; i_5 < 20; i_5 += 3) 
    {
        var_19 = ((/* implicit */short) min((((((/* implicit */_Bool) ((13249562354882956729ULL) % (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) arr_18 [i_5])) : (((((/* implicit */_Bool) (signed char)13)) ? (1035816965) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((((/* implicit */long long int) -1224227390)) < ((-9223372036854775807LL - 1LL)))))));
        var_20 = ((/* implicit */int) max((var_20), (max((((/* implicit */int) arr_18 [8U])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((short) arr_19 [(signed char)16]))) : ((((_Bool)0) ? (((/* implicit */int) (short)21)) : (((/* implicit */int) arr_19 [8LL]))))))))));
        var_21 |= ((/* implicit */unsigned int) ((unsigned char) min((arr_18 [(short)12]), (arr_18 [10]))));
    }
    for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) var_1))));
        arr_22 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (short)896)) ? (((/* implicit */long long int) min((((/* implicit */int) ((short) var_6))), ((-(569902539)))))) : (((((/* implicit */_Bool) (short)23425)) ? (-7664115224192041455LL) : (((/* implicit */long long int) 4294967295U))))));
    }
    var_23 &= ((long long int) 5197181718826594893ULL);
}
