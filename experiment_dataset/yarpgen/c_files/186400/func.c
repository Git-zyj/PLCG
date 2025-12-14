/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186400
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
    var_15 &= (+((((~(((/* implicit */int) (short)-19686)))) + (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (var_2)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_16 = min(((-(((((/* implicit */int) (unsigned char)243)) | (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) < ((-(4294967295U)))))));
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max(((+(1661676161348893252ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_0]))) <= (((/* implicit */int) (signed char)23)))))));
                    arr_9 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) (signed char)23)))) : (((/* implicit */int) ((var_8) < (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1 - 3]))))))));
                    var_17 = (((-(((/* implicit */int) (_Bool)1)))) & ((((+(var_6))) % (((/* implicit */int) arr_1 [i_2] [i_0])))));
                }
            } 
        } 
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-38)) % (arr_5 [i_0] [i_0] [i_0])))) ? (max((-1573995754), (arr_5 [i_0] [i_0] [i_0]))) : (((/* implicit */int) min(((short)-19686), (((/* implicit */short) (_Bool)1)))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_8)))) ? (1841007362U) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_1)) + (80))))))))));
    }
    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 4) 
    {
        var_20 = ((/* implicit */short) ((max((((/* implicit */int) max((((/* implicit */unsigned char) var_7)), (arr_11 [i_3] [i_3])))), (((arr_10 [i_3]) | (arr_10 [i_3]))))) + (((/* implicit */int) (((-(var_9))) <= (((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) arr_11 [i_3] [i_3])) : (((/* implicit */int) (_Bool)1)))))))));
        var_21 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_10 [i_3 + 2])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) arr_11 [i_3] [i_3])) + (((/* implicit */int) (signed char)56)))))), ((~((~(((/* implicit */int) var_14))))))));
    }
}
