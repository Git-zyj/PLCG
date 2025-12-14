/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180657
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) | (((/* implicit */int) arr_1 [i_0])))) >> (((/* implicit */int) ((var_5) && (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))))));
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                for (short i_3 = 1; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (arr_0 [i_3] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2])))))) ? (min((var_0), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 - 2] [i_1] [(unsigned char)8] [i_2 - 2] [i_3 + 1] [i_3 + 1]))))) | ((+((~(var_0)))))));
                        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((((/* implicit */int) arr_5 [i_1] [i_1])) > (var_6))), (arr_8 [i_2 - 1] [i_1] [i_3 - 1] [i_3] [i_3] [(short)21]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2] [i_2] [10LL]))) : (arr_0 [i_0] [i_2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2] [i_1])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0])))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_0)))))));
                        arr_10 [i_0] [i_0] [i_2 - 1] [i_3 - 1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0] [i_1]))))) ? (min((0ULL), (((/* implicit */unsigned long long int) (short)-12516)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3] [i_1] [i_0] [i_0] [i_1] [i_0]))))) - (((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) arr_3 [i_1] [i_3])), (arr_0 [i_1] [i_2]))), (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) arr_3 [i_1] [i_1])) - (83)))))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
    {
        var_14 -= ((/* implicit */unsigned char) var_5);
        var_15 = ((/* implicit */long long int) max((((/* implicit */int) max((arr_1 [i_4]), (arr_1 [i_4])))), (((((/* implicit */int) arr_1 [i_4])) ^ (((/* implicit */int) arr_1 [i_4]))))));
        var_16 = ((/* implicit */unsigned char) var_10);
    }
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((var_0) >> (((var_11) + (8324277163073633249LL)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (var_0)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))) : (var_8)))) : (max((max((((/* implicit */unsigned long long int) var_2)), (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_0)))))) ? (((/* implicit */long long int) ((((/* implicit */int) max((var_3), (((/* implicit */unsigned char) var_2))))) << (((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_10))))))) : (min((max((((/* implicit */long long int) var_6)), (var_9))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_11)))))));
}
