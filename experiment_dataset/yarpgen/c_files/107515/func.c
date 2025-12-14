/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107515
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
    var_13 = ((/* implicit */_Bool) var_12);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [(unsigned short)5] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)45512))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26662))) : (var_10)))))))) : (var_10));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_1 [(unsigned short)4]))) && (var_7)));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_10)) ? (arr_1 [i_0]) : (arr_1 [i_0]))), (arr_1 [i_0])))), (max((min((((/* implicit */unsigned long long int) (unsigned short)14)), (18446744073709551612ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_1 [9]))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_9 [i_1] = min((max((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1]))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_12)) ? (arr_8 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            for (int i_3 = 4; i_3 < 12; i_3 += 2) 
            {
                {
                    arr_16 [i_1] [i_2] [i_3] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1] [i_3 + 1]))));
                    arr_17 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_13 [i_2] [i_3 + 1] [i_3] [i_3 + 1])), (arr_15 [i_2] [i_3 - 1] [i_3] [i_2])))) || (((((/* implicit */_Bool) arr_13 [i_1] [i_3 - 3] [i_3 - 3] [i_1])) || (((/* implicit */_Bool) arr_13 [(_Bool)1] [i_3 + 2] [i_3 + 2] [i_3 + 2]))))));
                }
            } 
        } 
        arr_18 [i_1] = ((/* implicit */unsigned int) ((_Bool) var_2));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_22 [i_4] = ((/* implicit */long long int) ((int) 18446744073709551612ULL));
        arr_23 [i_4] = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) arr_19 [i_4] [i_4])) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */long long int) arr_19 [i_4] [i_4])))))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            for (int i_6 = 2; i_6 < 20; i_6 += 3) 
            {
                {
                    arr_30 [i_5] [i_5] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_4] [i_5] [i_6 - 1])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                    var_14 = 9223372036854775790LL;
                }
            } 
        } 
    }
    var_15 = min((min((((var_7) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13181))))), (((/* implicit */long long int) max((var_10), (((/* implicit */unsigned int) var_11))))))), (max((9223372036854775790LL), (((/* implicit */long long int) var_9)))));
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_12)), (min((((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned int) 736209078)))), (((/* implicit */unsigned int) ((unsigned short) var_10)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_7 = 1; i_7 < 17; i_7 += 3) 
    {
        var_17 = ((/* implicit */long long int) ((unsigned int) arr_25 [i_7 - 1]));
        var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)63929)) || (((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) (short)31265)) : (((/* implicit */int) arr_19 [i_7 - 1] [i_7 + 1]))));
        /* LoopSeq 1 */
        for (unsigned int i_8 = 4; i_8 < 16; i_8 += 2) 
        {
            arr_37 [i_7] [(short)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) || (((/* implicit */_Bool) arr_20 [i_7 + 1]))));
            /* LoopNest 2 */
            for (unsigned int i_9 = 2; i_9 < 17; i_9 += 2) 
            {
                for (unsigned int i_10 = 1; i_10 < 18; i_10 += 2) 
                {
                    {
                        arr_42 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((unsigned short) var_1));
                        var_19 ^= ((/* implicit */unsigned char) var_3);
                        arr_43 [i_7] [i_7] [(_Bool)1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [i_9] [i_9 + 1] [i_9] [i_9 + 2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_26 [i_7] [i_7] [i_10]))))));
                    }
                } 
            } 
            arr_44 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) arr_26 [i_8] [i_7] [i_7])) : (-1809454753823612113LL)))) ? (var_10) : (var_6)));
        }
    }
}
