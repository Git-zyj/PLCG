/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172679
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = var_9;
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_0])) ^ (arr_1 [3U])))) + ((+(var_8)))))) ? (arr_1 [i_0]) : (((/* implicit */int) max((var_3), (((/* implicit */signed char) arr_0 [i_0])))))));
        arr_5 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */signed char) arr_0 [i_0])), (max((min((((/* implicit */signed char) arr_0 [i_0])), (arr_2 [i_0] [i_0]))), (((/* implicit */signed char) ((var_8) != (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (~((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) != (arr_8 [2U])))))))))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((-(arr_7 [i_1]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-1), ((short)18621)))))))) ? (max((((((/* implicit */_Bool) (short)-18626)) ? (18446744073709551615ULL) : (1ULL))), (((/* implicit */unsigned long long int) min((arr_9 [i_1]), (((/* implicit */unsigned int) -217920076))))))) : (max((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [12U])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1]))))))))));
        var_16 -= ((/* implicit */unsigned char) ((min((min((((/* implicit */unsigned int) var_6)), (arr_9 [i_1]))), (((/* implicit */unsigned int) min((var_4), (var_4)))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
        var_17 = ((/* implicit */signed char) max((max((0U), (((/* implicit */unsigned int) (unsigned short)62176)))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) < (arr_9 [i_1])))))))));
    }
    for (unsigned int i_2 = 3; i_2 < 11; i_2 += 4) 
    {
        var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_7 [(_Bool)1])) ? (((/* implicit */unsigned long long int) arr_10 [i_2 - 1] [i_2 - 1])) : (arr_7 [0]))), ((~(var_1)))));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 11; i_3 += 2) 
        {
            for (signed char i_4 = 1; i_4 < 10; i_4 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) (+((~(((((/* implicit */_Bool) arr_2 [i_3] [12U])) ? (((/* implicit */int) arr_13 [i_2] [i_2])) : (((/* implicit */int) arr_2 [i_2] [i_2]))))))));
                    var_20 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_2 - 1] [i_3 + 1])) > (((/* implicit */int) arr_0 [i_2 - 3]))))), (min((max((((/* implicit */unsigned long long int) var_10)), (arr_8 [i_4]))), (((arr_7 [i_4]) & (((/* implicit */unsigned long long int) var_12))))))));
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((((/* implicit */_Bool) arr_9 [(signed char)3])) || (((/* implicit */_Bool) arr_9 [i_2])))) ? (((((((/* implicit */_Bool) var_1)) && (var_13))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 12810439890676721399ULL)) || (((/* implicit */_Bool) (signed char)123)))))) : (arr_7 [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(var_13)))) : (((/* implicit */int) arr_11 [i_2 - 2]))))))))));
                    arr_17 [i_4] [i_4] = ((/* implicit */unsigned char) (+(arr_9 [i_2])));
                    var_22 = ((/* implicit */unsigned long long int) ((min(((-(((/* implicit */int) arr_14 [i_2 - 1] [i_2] [i_2 - 1])))), (((((/* implicit */int) arr_2 [i_4] [i_4])) ^ (((/* implicit */int) var_13)))))) != ((~(((/* implicit */int) arr_6 [i_4] [i_4]))))));
                }
            } 
        } 
        arr_18 [i_2] = ((/* implicit */signed char) var_11);
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((((/* implicit */int) var_4)) & (((/* implicit */int) var_4)))) ^ (((/* implicit */int) var_4))))) & (max((((((/* implicit */_Bool) var_2)) ? (arr_10 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_2])) ^ (((/* implicit */int) arr_0 [i_2])))))))));
    }
    var_24 = ((/* implicit */short) var_13);
}
