/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147854
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
    var_10 = ((/* implicit */unsigned long long int) var_4);
    var_11 = ((/* implicit */short) var_6);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) var_2);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            arr_6 [i_1] = ((((/* implicit */int) ((short) arr_2 [i_1]))) != ((-(arr_2 [i_0]))));
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        arr_11 [(short)12] [i_1] [i_2] = ((/* implicit */long long int) (~((+(((/* implicit */int) (_Bool)1))))));
                        arr_12 [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_2] [i_0])), (1023ULL)))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)17350), (((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_2] [(_Bool)1])))))) : (min((arr_4 [i_0] [i_0]), (-1LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3] [i_3]))))))));
                        arr_13 [i_1] [i_1] [(_Bool)1] [i_2] [(signed char)9] = ((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_2]))))) ? (((/* implicit */int) arr_7 [9LL])) : (((((/* implicit */_Bool) arr_5 [(signed char)4] [i_2] [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_5))))))));
                        arr_14 [i_0] [i_2] [i_0] [i_0] = ((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2 - 1] [i_2 - 1])) || (((/* implicit */_Bool) var_7)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_4 = 1; i_4 < 11; i_4 += 3) 
            {
                for (unsigned short i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    {
                        arr_21 [i_5] [i_4] [i_4] [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2094886693139173100LL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_2)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)0]))))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_20 [i_4 + 1] [i_4] [i_4 - 1] [i_4 - 1])))))));
                        arr_22 [i_0] [i_1] [i_1] [i_4] [12LL] [i_5] = max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_19 [i_0] [(short)2] [i_0] [i_4] [i_4] [i_0]))))), (max((((/* implicit */long long int) var_6)), (var_0))));
                        arr_23 [i_4] [i_4] = ((/* implicit */unsigned short) (short)-26132);
                    }
                } 
            } 
        }
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_26 [i_6] = ((/* implicit */short) arr_25 [i_6]);
        arr_27 [i_6] [i_6] = ((/* implicit */_Bool) (unsigned short)57383);
        arr_28 [i_6] |= (!((!((!(((/* implicit */_Bool) var_8)))))));
    }
    var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)74)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (var_7))) : (var_3))) * (30064771072LL)));
}
