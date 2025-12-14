/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155036
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned char)67), ((unsigned char)188)))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (var_3)))) ? (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */long long int) var_1))))) : (max((((/* implicit */unsigned long long int) var_10)), (var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 24; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) arr_7 [i_0]);
                    arr_8 [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) (+(min(((-(((/* implicit */int) var_9)))), (((/* implicit */int) var_14))))));
                    var_17 = ((/* implicit */unsigned int) ((short) max((min((((/* implicit */long long int) (unsigned char)246)), (844424930131968LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 3178438276U)) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))));
                    arr_9 [i_2] [(_Bool)1] = var_13;
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 4) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_3 + 2] [i_3 - 1]))))) ? ((~(((((/* implicit */_Bool) (short)-15124)) ? (((/* implicit */int) (short)13840)) : (((/* implicit */int) (unsigned short)14948)))))) : (((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) (short)15123))) != (16777215LL))), (((_Bool) arr_1 [i_3])))))));
        arr_12 [i_3] [i_3] = ((/* implicit */long long int) var_7);
        arr_13 [i_3] = ((/* implicit */short) min((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3] [i_3 - 2])) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)228)), ((unsigned short)50587)))))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        arr_16 [(short)2] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_6)) ? (max((var_7), (((/* implicit */unsigned long long int) arr_11 [i_4] [i_4])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_4] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)188))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_0 [i_4] [i_4])), ((short)-15124))))) : (((((/* implicit */_Bool) (short)13831)) ? (arr_6 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)133))))))))));
        var_19 = ((/* implicit */int) arr_2 [i_4] [i_4]);
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned char) max((arr_3 [i_4] [i_4] [3ULL]), (((/* implicit */unsigned int) min(((unsigned char)188), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -5042999998800589618LL)) || (((/* implicit */_Bool) (unsigned char)247))))))))));
    }
    var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_11)))) & (((((/* implicit */_Bool) (unsigned char)174)) ? (9312031540768042644ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52728))))))) != (var_3)));
}
