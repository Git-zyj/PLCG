/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151578
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
    for (int i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_11 |= max(((+((-(arr_2 [i_0]))))), (((/* implicit */unsigned int) 0)));
        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (short)8845))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
        {
            var_13 |= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */int) var_5)) >> (((arr_3 [i_0] [i_1]) + (5036526574956487843LL))))) : (arr_0 [i_0] [i_0]))));
            var_14 = (_Bool)0;
        }
        for (long long int i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */_Bool) (((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) var_3)) ? (17669993313984641269ULL) : (((/* implicit */unsigned long long int) var_3)))))) % (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))), (((unsigned long long int) 17575006175232LL))))));
            var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0))));
            var_17 += ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2305515231U)));
        }
        for (long long int i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
        {
            arr_12 [i_0] = ((/* implicit */unsigned short) -17575006175242LL);
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_3] [6LL])) || (((/* implicit */_Bool) arr_2 [i_3])))))));
            arr_13 [i_0] [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) 0)), (var_3)))) ? (((/* implicit */unsigned long long int) arr_7 [i_0])) : (6453265037858030422ULL)))) ? (arr_3 [i_0] [i_3]) : (var_8)));
        }
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) max((arr_7 [i_0]), (((/* implicit */unsigned int) ((unsigned char) 2147483643))))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) ((9223372036854775793LL) / (((/* implicit */long long int) arr_0 [i_4] [i_4]))));
        arr_17 [i_4] [i_4] = ((/* implicit */short) ((arr_8 [i_4]) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4]))) <= (17774180159026660889ULL))))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 1; i_5 < 23; i_5 += 4) 
    {
        var_21 = ((arr_18 [i_5 + 2]) ? (((/* implicit */int) arr_18 [i_5 - 1])) : (((/* implicit */int) arr_18 [i_5 - 1])));
        var_22 = ((/* implicit */unsigned short) arr_19 [i_5]);
    }
    var_23 = ((/* implicit */unsigned int) var_10);
    var_24 = ((/* implicit */int) (+(12772723346543630958ULL)));
    var_25 = var_4;
}
