/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133148
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
    var_15 = ((/* implicit */long long int) var_12);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned long long int) var_14);
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 17; i_2 += 2) /* same iter space */
                {
                    var_16 = ((/* implicit */short) (!((!((_Bool)0)))));
                    var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_2] [i_2 - 1] [i_2 - 1])) ? (arr_10 [i_2 - 1] [i_2 + 1] [i_2 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44605))))) > (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)44602)) & (((/* implicit */int) (unsigned short)40790)))))));
                    arr_12 [i_0] [i_0] [(signed char)10] [i_0] = ((/* implicit */long long int) min((arr_11 [i_1] [i_2 - 1] [i_2 + 1]), (arr_8 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])));
                }
                for (signed char i_3 = 1; i_3 < 17; i_3 += 2) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_7)), ((+(1073741823)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_3] [i_0] [i_3 - 1]))))) : (arr_8 [i_0] [i_3 - 1] [i_3] [i_1])));
                    var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_15 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_15 [i_1] [i_3 - 1] [i_1]))))) ? (max((((/* implicit */long long int) (unsigned char)243)), (max((var_2), (((/* implicit */long long int) arr_5 [i_0] [i_0])))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_3 + 1])))))));
                    var_20 = ((/* implicit */long long int) max((max((arr_8 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 1]), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */signed char) ((arr_0 [2U]) != (((/* implicit */long long int) arr_4 [i_0] [i_1]))))))))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_1))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (-1073741827))))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)12)), (var_4)))) : (var_2)))));
}
