/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121414
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
    var_11 = ((/* implicit */unsigned int) var_0);
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */_Bool) arr_1 [i_0]);
        arr_3 [8U] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 3]))) : (arr_0 [i_0 - 3])))) ? (((long long int) arr_0 [i_0])) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) arr_0 [i_0])))))))));
        var_13 = ((/* implicit */_Bool) max((var_13), ((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((arr_1 [i_0 - 2]) + (9223372036854775807LL))) >> (((/* implicit */int) (signed char)4))))) | (((unsigned long long int) var_9)))))))));
    }
    for (long long int i_1 = 3; i_1 < 11; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */short) ((long long int) max(((~(((/* implicit */int) (signed char)39)))), (((/* implicit */int) max(((_Bool)0), (arr_2 [i_1])))))));
        var_14 = ((/* implicit */unsigned short) (~(min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) << (((arr_1 [3U]) + (5938393058672286687LL)))))), (((arr_5 [i_1]) ? (((/* implicit */long long int) arr_0 [i_1])) : (-3316644335777227962LL)))))));
    }
    for (long long int i_2 = 3; i_2 < 11; i_2 += 4) /* same iter space */
    {
        var_15 -= ((/* implicit */unsigned short) ((long long int) ((((arr_4 [i_2 - 2] [0U]) + (2147483647))) >> (((arr_4 [i_2 - 1] [(_Bool)1]) - (1205669728))))));
        arr_9 [i_2 - 1] [i_2 - 1] = ((/* implicit */int) arr_2 [i_2 - 2]);
    }
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (long long int i_4 = 3; i_4 < 18; i_4 += 2) 
        {
            {
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [(signed char)4])) ? (((unsigned int) arr_14 [i_4 - 2])) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_11 [i_3]) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)169))))))) >= ((+(arr_12 [7ULL])))))))));
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    arr_19 [i_5] [15LL] [i_3] [15LL] = min((((/* implicit */int) ((unsigned short) arr_18 [i_4 - 3]))), ((-(((/* implicit */int) arr_15 [i_4 + 1] [i_4 - 2] [(signed char)16])))));
                    var_17 = ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned char) arr_10 [i_4 - 1] [(unsigned char)16])), (var_0))));
                }
                arr_20 [i_3] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_10)) & (((/* implicit */int) var_2)))) < (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) arr_15 [i_4 + 1] [i_4 - 2] [i_4 - 2])) ? (((/* implicit */unsigned long long int) (+(arr_12 [i_3])))) : (((((/* implicit */_Bool) (unsigned char)111)) ? (arr_17 [i_3] [(unsigned short)15] [(unsigned short)5]) : (((/* implicit */unsigned long long int) arr_12 [9LL]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            for (short i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                {
                    arr_29 [(signed char)5] [i_8] [i_8] = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) (~(((/* implicit */int) arr_26 [i_6] [(unsigned char)6] [i_6]))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)52865))) | (arr_14 [i_6]))))), (((/* implicit */long long int) max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((arr_8 [i_7] [i_6]), (((/* implicit */unsigned char) (_Bool)1))))))))));
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_0 [9U])) ? (arr_0 [i_6]) : (arr_0 [i_6]))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))) / (arr_0 [i_8]))))))));
                    var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned char) min((arr_13 [i_6] [i_7]), (arr_13 [i_6] [i_6])))), (arr_16 [i_8])));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) max((var_3), (((/* implicit */unsigned long long int) ((unsigned char) min(((unsigned char)85), (((/* implicit */unsigned char) var_2))))))));
}
