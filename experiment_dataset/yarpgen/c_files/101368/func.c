/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101368
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */_Bool) (~(max((arr_3 [i_0] [i_1]), (((/* implicit */unsigned int) (short)13873))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 4; i_2 < 21; i_2 += 1) /* same iter space */
                {
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) arr_6 [i_2] [i_2] [i_2] [(unsigned char)20]))));
                    var_14 = max((((/* implicit */unsigned int) (((!(var_0))) ? (((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_0])) : (((/* implicit */int) var_10))))), (arr_2 [i_1] [i_1]));
                    var_15 = ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) * (14011389523731560681ULL));
                }
                /* vectorizable */
                for (unsigned short i_3 = 4; i_3 < 21; i_3 += 1) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned short) (~(var_3)));
                    var_17 = (!(((/* implicit */_Bool) arr_10 [i_3 - 3])));
                    var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_6 [i_3 - 2] [i_3 + 1] [i_3 - 1] [i_0]))));
                }
                for (unsigned short i_4 = 4; i_4 < 21; i_4 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */int) (~(min((arr_5 [i_4 - 1] [i_1] [i_4] [i_0]), (arr_5 [i_4 - 4] [i_1] [i_4] [i_1])))));
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned short)10])))))) | (((((/* implicit */_Bool) 17774606996120286848ULL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)142)))))))) ? (((((/* implicit */_Bool) var_10)) ? (arr_5 [i_4 + 2] [i_4 - 1] [i_4 + 2] [i_4 + 2]) : (((((/* implicit */_Bool) 554198965)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 2013542889)))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_8 [(short)3] [i_4 - 2] [i_4 - 1]), (((/* implicit */unsigned short) arr_6 [i_0] [i_4 - 2] [i_4 - 4] [(short)14])))))))))));
                    var_21 = ((/* implicit */unsigned char) (-((((-(10658053539186531318ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_0])))))));
                }
                var_22 = ((/* implicit */short) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_1]))));
            }
        } 
    } 
    var_23 -= min((((/* implicit */long long int) (unsigned char)58)), (4742807731400736438LL));
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) min((((/* implicit */short) var_2)), (var_4)))), (max((((/* implicit */unsigned short) var_7)), ((unsigned short)0)))))) ? (14011389523731560681ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_1)))) ? ((-(2013542889))) : (((/* implicit */int) var_0)))))));
    var_25 = ((/* implicit */unsigned short) (signed char)-15);
}
