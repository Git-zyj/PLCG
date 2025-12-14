/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13385
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((arr_3 [i_0]), (((((/* implicit */_Bool) (+(5665770711080884289LL)))) ? (max((((/* implicit */long long int) 3406727777U)), (arr_0 [i_1] [i_1]))) : (((/* implicit */long long int) arr_2 [i_1]))))));
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (5665770711080884296LL) : (arr_0 [i_0] [i_1]))) : (((((/* implicit */_Bool) ((var_3) % (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (max((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0])), (arr_3 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))))));
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) max(((~(var_9))), (((/* implicit */unsigned int) ((unsigned char) var_13)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0]))))) : (((/* implicit */int) ((signed char) max((var_6), (var_3))))))))));
            }
        } 
    } 
    var_19 |= ((/* implicit */signed char) var_1);
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
    {
        arr_12 [1LL] [1LL] = ((/* implicit */unsigned int) arr_0 [i_2] [i_2]);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                for (int i_5 = 2; i_5 < 12; i_5 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) max((var_0), (((/* implicit */unsigned char) (signed char)124))))), (((arr_20 [3] [3] [i_2] [3] [i_3] [i_5]) / (((/* implicit */int) var_7))))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_22 [(short)4] [i_5 + 1] [i_5] [i_5] [i_5 - 1] [i_4])), (((((/* implicit */_Bool) arr_16 [i_2])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_2] [i_2] [i_2])))))))) : (((((/* implicit */_Bool) (short)-32765)) ? (9223372036854775807LL) : (((/* implicit */long long int) 524287))))));
                        arr_24 [(signed char)11] [i_5] = ((/* implicit */unsigned int) (unsigned char)112);
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_2] [i_2] [(short)7] [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2]))) * (arr_13 [i_2] [i_2] [i_2])))) : (max((((/* implicit */unsigned long long int) arr_13 [(short)10] [i_2] [i_2])), (16007100571533638734ULL))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2]))))))));
        arr_25 [i_2] [3U] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) != (arr_11 [i_2] [i_2]))))) : (((var_9) & (var_6))))), (max((max((var_9), (((/* implicit */unsigned int) arr_22 [i_2] [i_2] [10U] [i_2] [(signed char)8] [i_2])))), (max((var_12), (var_2)))))));
        var_22 -= ((/* implicit */int) var_10);
    }
    for (int i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */short) ((((/* implicit */int) var_11)) << (((((((/* implicit */_Bool) max((((/* implicit */long long int) (short)18758)), (8397286729127678321LL)))) ? (max((2215726090U), (754970549U))) : ((-(2U))))) - (2215726078U)))));
        arr_28 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)14254)) == (((/* implicit */int) (unsigned char)214))));
        var_24 = ((/* implicit */signed char) 2147483647);
        var_25 *= ((/* implicit */unsigned int) arr_17 [i_6] [i_6] [i_6]);
        arr_29 [9U] [9U] = ((/* implicit */signed char) var_12);
    }
}
