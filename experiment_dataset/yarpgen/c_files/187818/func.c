/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187818
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
    var_11 = ((/* implicit */signed char) var_4);
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) (signed char)-105))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_0] = ((/* implicit */unsigned int) (+(var_6)));
                    var_13 = min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-105))))), ((~((~(((/* implicit */int) var_10)))))));
                }
            } 
        } 
        var_14 = ((/* implicit */long long int) arr_1 [i_0 - 3]);
    }
    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        arr_13 [(unsigned char)0] [i_3] &= ((/* implicit */int) (~(max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_12 [i_3] [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-104)) / (((/* implicit */int) var_10)))))))));
        var_15 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)24165))));
        var_16 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((0), (((/* implicit */int) (unsigned short)24165))))) ? (7ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120))))) * (((/* implicit */unsigned long long int) max((((var_4) ? (((/* implicit */int) (short)24648)) : (arr_10 [i_3] [i_3]))), (((int) var_7)))))));
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            arr_17 [i_4] [i_4] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_11 [i_3]))))))) ^ (((((((/* implicit */int) arr_11 [6])) > (((/* implicit */int) (unsigned char)177)))) ? ((+(var_2))) : (((/* implicit */unsigned long long int) (+(var_8))))))));
            var_17 -= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (arr_16 [i_4] [i_3])))));
            var_18 *= ((/* implicit */unsigned long long int) max(((unsigned char)4), (((unsigned char) arr_14 [i_3] [i_4] [i_4]))));
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_2)))) ? (((((/* implicit */_Bool) arr_12 [i_4] [i_3])) ? (arr_12 [i_3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [11LL] [i_4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3] [i_4]))))))));
        }
        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            var_20 = ((/* implicit */long long int) (+((-(((/* implicit */int) arr_14 [i_3] [i_3] [i_5]))))));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 4) 
            {
                for (int i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    {
                        var_21 *= ((/* implicit */unsigned long long int) var_4);
                        var_22 = (+(((/* implicit */int) var_0)));
                    }
                } 
            } 
        }
        var_23 = ((/* implicit */signed char) (-(((((/* implicit */int) (signed char)42)) % (1775344326)))));
    }
}
