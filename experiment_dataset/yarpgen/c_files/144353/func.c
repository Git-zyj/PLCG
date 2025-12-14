/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144353
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
    var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) min((var_9), (((/* implicit */unsigned int) (signed char)71))))))) : (var_0)));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned short) var_6))))) ? ((-(((/* implicit */int) arr_1 [i_0])))) : ((+(((/* implicit */int) arr_1 [i_0]))))));
        var_17 -= ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_3)), (min((((/* implicit */unsigned int) (signed char)-87)), (var_9)))))) : ((~(arr_0 [(unsigned short)8]))));
    }
    for (short i_1 = 4; i_1 < 17; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_11)) <= ((~(arr_7 [i_2] [i_2])))));
                    var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-71)) ? ((((!(var_13))) ? (((/* implicit */unsigned long long int) var_1)) : (min((((/* implicit */unsigned long long int) arr_5 [i_2] [i_1])), (arr_10 [i_1] [i_1] [i_2] [i_1]))))) : (((/* implicit */unsigned long long int) min((((var_13) ? (arr_4 [i_2] [i_2]) : (((/* implicit */long long int) arr_8 [i_1] [i_2] [i_3])))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)0)))))))));
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) min((max((((((/* implicit */_Bool) var_14)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_15))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 4] [i_1])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65517))))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_3 [5U])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_7 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) min((var_11), (arr_8 [(short)13] [i_1] [i_1 - 4])))))))))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 0ULL)) ? (arr_10 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) var_1))))) ? (min((((/* implicit */unsigned long long int) var_14)), (min((((/* implicit */unsigned long long int) arr_9 [i_1] [8ULL] [8ULL] [12ULL])), (var_0))))) : (min((max((arr_7 [i_1] [i_1 - 1]), (((/* implicit */unsigned long long int) (short)5035)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1] [i_1 - 2] [i_1])) ? (((/* implicit */int) var_3)) : (var_8))))))));
    }
    var_23 = ((/* implicit */unsigned short) var_6);
    var_24 = ((/* implicit */_Bool) var_9);
}
