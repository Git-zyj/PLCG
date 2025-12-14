/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111847
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
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0]) < (((/* implicit */int) (unsigned short)31553)))))) : (max((6563160931802544559ULL), (10544981955485717286ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (arr_0 [i_0])))) >> (((((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0])))) - (38703))))))));
        var_12 = ((((/* implicit */_Bool) min((((var_10) / (arr_0 [i_0]))), (((((/* implicit */_Bool) 11883583141907007057ULL)) ? (-1207831673) : (((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) ^ (2097151U))) >> (((((unsigned int) arr_1 [i_0])) - (38703U)))))) : (((((((/* implicit */_Bool) arr_1 [i_0])) ? (6563160931802544559ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_8)))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 15; i_2 += 3) 
            {
                for (short i_3 = 4; i_3 < 13; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */signed char) ((((((/* implicit */int) ((11883583141907007070ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2 - 1] [i_2] [i_3 - 1])))))) % (((/* implicit */int) min((arr_4 [i_0] [i_0]), (arr_8 [i_0] [i_0] [i_2])))))) + (((((/* implicit */int) max((var_11), (((/* implicit */unsigned short) var_3))))) >> (((((unsigned int) 1207831670)) - (1207831656U)))))));
                        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)54)), ((short)18285)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [(unsigned short)0] [i_3])) & (((/* implicit */int) (signed char)34))))) : (((var_2) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128)))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_2])) + (var_10))))) : (min((((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0]) : (((/* implicit */int) var_4)))), (max((((/* implicit */int) var_4)), (var_1))))))))));
                        var_15 *= ((/* implicit */unsigned char) ((((((long long int) arr_10 [i_1] [(unsigned char)4] [i_1] [i_0] [(unsigned char)4])) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_0)))))) - (((/* implicit */long long int) ((int) ((unsigned short) var_11))))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */int) ((signed char) min((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) != (var_10)))))));
    }
    var_17 = ((int) (unsigned char)135);
}
