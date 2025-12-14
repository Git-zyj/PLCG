/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143519
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
    var_19 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) min((arr_1 [i_0 + 3]), (arr_1 [i_0 + 3])))) && (((min((arr_1 [i_0]), (((/* implicit */unsigned int) var_15)))) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64))))))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            arr_4 [i_1] = ((/* implicit */unsigned short) var_9);
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (int i_3 = 2; i_3 < 22; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [i_2] [i_2] [i_2] &= ((/* implicit */short) min((((/* implicit */int) max((arr_7 [i_0] [i_3] [i_3] [i_3 + 1]), (arr_7 [i_1] [i_1] [i_1] [i_3 + 1])))), ((~(((/* implicit */int) (signed char)64))))));
                        arr_10 [i_2] [i_1] [i_1] [i_2] [i_3] |= ((/* implicit */_Bool) ((long long int) min((arr_7 [i_3 + 1] [i_0 + 3] [i_0 + 3] [i_0 - 1]), (((/* implicit */unsigned char) (signed char)76)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    {
                        arr_16 [i_5] [(_Bool)1] [i_0] [i_1] [(_Bool)1] [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) max((arr_0 [i_0 + 2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)64)))))))) ? (((((/* implicit */_Bool) ((var_17) - (((/* implicit */int) (unsigned short)3))))) ? (((((/* implicit */_Bool) var_5)) ? (arr_8 [i_0] [(unsigned char)18] [(unsigned char)18] [i_5]) : (arr_0 [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)127)) | (((/* implicit */int) var_8))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) % (((var_2) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))))));
                        var_21 += (signed char)-1;
                    }
                } 
            } 
        }
        for (unsigned short i_6 = 1; i_6 < 22; i_6 += 1) 
        {
            arr_21 [i_0] [i_0] = arr_1 [i_6];
            var_22 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)0)) ? (((arr_6 [i_0] [i_0] [(signed char)8]) * (((/* implicit */unsigned int) arr_14 [i_0] [i_0] [20] [i_6])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_6 - 1] [i_0 + 1] [i_0]))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)3840)))))));
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (~(((/* implicit */int) ((short) (-(arr_14 [i_0] [i_0] [0LL] [i_0]))))))))));
            arr_22 [i_0] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0 + 3] [i_6 - 1])) ? (((((/* implicit */_Bool) arr_3 [i_6] [i_0])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_2))))))) ? ((-(arr_14 [i_0 + 3] [i_6] [(signed char)20] [i_6]))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_6]))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [12LL] [i_6] [i_6]))) != (922325588U))))))))));
        }
    }
}
