/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155257
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
    var_10 -= ((/* implicit */int) ((_Bool) var_4));
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) 0LL))) + (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)-64)))))))) ? (((/* implicit */int) ((var_3) <= (((/* implicit */unsigned int) var_2))))) : (var_2)));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((unsigned long long int) arr_1 [i_0 + 1]));
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */long long int) var_3)) : (var_0)))) ? (((/* implicit */unsigned long long int) var_2)) : (17882661856637577267ULL));
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((1LL) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((int) 564082217071974356ULL))) || (((/* implicit */_Bool) var_4))))))));
        var_12 = ((long long int) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))));
    }
    for (long long int i_2 = 2; i_2 < 10; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_5 [i_2 + 2] [i_2])) ? (arr_8 [(signed char)8] [i_2 - 2]) : (((/* implicit */int) arr_5 [i_2 + 2] [i_3]))))))));
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                for (unsigned char i_5 = 3; i_5 < 11; i_5 += 2) 
                {
                    {
                        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_6))));
                        var_15 = var_4;
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) 564082217071974349ULL)) ? (((long long int) (unsigned short)48123)) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_8)))))));
                    }
                } 
            } 
            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_8))));
            arr_15 [i_2] = ((/* implicit */_Bool) ((((((int) arr_1 [i_2 + 1])) + (2147483647))) << (((((arr_13 [i_2 - 1] [i_2 + 1] [i_2 + 1]) - (((/* implicit */unsigned long long int) var_5)))) - (4139559933274499306ULL)))));
            var_18 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_1)) ? (arr_12 [i_2] [i_2] [(unsigned short)10] [i_2 + 2]) : (arr_12 [i_2] [i_2] [i_2] [i_2 + 2]))));
        }
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((long long int) arr_1 [i_2 + 1])) | (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)-49)), (var_8))))))))));
    }
    for (short i_6 = 1; i_6 < 23; i_6 += 4) 
    {
        var_20 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_17 [9] [i_6])) ? (var_7) : (((/* implicit */unsigned long long int) arr_17 [i_6 - 1] [i_6])))));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((arr_16 [12LL]) ? (((arr_16 [(_Bool)1]) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((arr_16 [(signed char)20]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_16 [(_Bool)1]))))))))));
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_16 [i_6]) ? (arr_17 [i_6 + 1] [i_6]) : (var_5)))) ? (var_4) : (var_0)));
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) var_4))));
    }
}
