/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107580
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (~(var_13)))) || (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))))));
            /* LoopNest 2 */
            for (long long int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        arr_12 [(short)10] [i_2] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_7 [i_0] [(_Bool)1] [i_2] [i_3]);
                        var_19 = ((/* implicit */long long int) ((arr_0 [i_2 + 1]) == (arr_0 [i_2 + 1])));
                        arr_13 [i_0] [i_0] [i_2 + 1] [i_2 + 1] = ((((/* implicit */_Bool) arr_0 [i_2 + 2])) ? (((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */int) (short)5396)) : (((/* implicit */int) (short)1)))) : ((+(((/* implicit */int) var_14)))));
                    }
                } 
            } 
            arr_14 [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 4051978909380942193ULL)) ? (1150010521533472755LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)58)))))));
        }
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_4 = 3; i_4 < 21; i_4 += 2) /* same iter space */
        {
            arr_18 [i_0] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) 1ULL))))));
            arr_19 [i_0] = ((/* implicit */long long int) ((unsigned char) arr_9 [i_4 - 1] [i_0]));
            arr_20 [i_0] [7ULL] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) var_17))));
        }
        for (short i_5 = 3; i_5 < 21; i_5 += 2) /* same iter space */
        {
            var_20 ^= (-(arr_4 [i_5] [(signed char)17] [i_0]));
            arr_24 [i_0] [i_5] = ((/* implicit */unsigned long long int) var_8);
            arr_25 [i_5] [i_5 + 4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_16 [i_5 - 1])))) : (max((((/* implicit */long long int) 131071)), (-28468057920337724LL)))));
        }
        /* vectorizable */
        for (short i_6 = 3; i_6 < 21; i_6 += 2) /* same iter space */
        {
            var_21 |= ((/* implicit */unsigned short) 13090026084519442881ULL);
            /* LoopSeq 2 */
            for (unsigned short i_7 = 3; i_7 < 23; i_7 += 4) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_6 - 2]))));
                var_23 += ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_23 [i_0])) ? (4ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0]))))));
                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((long long int) arr_11 [i_0] [i_6] [i_7 - 3] [i_7 - 1] [i_6 + 3] [(short)5])))));
                /* LoopSeq 1 */
                for (signed char i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_16 [i_8]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_10 [16]))))))));
                    var_26 = arr_9 [i_0] [i_6];
                }
            }
            for (unsigned short i_9 = 3; i_9 < 23; i_9 += 4) /* same iter space */
            {
                arr_35 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) (unsigned short)59715);
                arr_36 [i_0] [i_6] [i_9] [i_6 - 3] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) (signed char)7)))));
            }
            var_27 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? ((-(((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((arr_3 [i_0] [i_6 + 2]) - (((/* implicit */int) var_6))))));
            arr_37 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_5 [i_0] [(short)12]))))));
        }
        /* vectorizable */
        for (short i_10 = 3; i_10 < 21; i_10 += 2) /* same iter space */
        {
            var_28 = ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-115))))) % (var_13));
            var_29 = ((/* implicit */int) ((arr_9 [(unsigned char)11] [i_10 + 3]) - (((/* implicit */long long int) var_10))));
            var_30 = ((/* implicit */long long int) ((11864591533409184002ULL) / (((/* implicit */unsigned long long int) 2147483647))));
        }
    }
    var_31 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_12)))))))) | (var_7)));
    var_32 = ((/* implicit */int) (short)-11911);
}
