/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184781
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
    /* vectorizable */
    for (int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */long long int) arr_4 [i_1]);
            var_12 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0 - 1]))));
            var_13 -= ((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0 + 2]);
            arr_6 [i_0 + 2] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) ^ (arr_4 [i_0 + 3])));
            var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0 + 1] [i_1 - 1])) >= (((/* implicit */int) (_Bool)1))));
        }
        for (int i_2 = 3; i_2 < 16; i_2 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned char) (_Bool)0);
            var_16 = ((/* implicit */unsigned short) ((8234078894696799787LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
            /* LoopSeq 3 */
            for (unsigned short i_3 = 2; i_3 < 16; i_3 += 2) 
            {
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (13346570252389991826ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 + 1] [i_2] [i_2 - 1]))))))));
                arr_13 [8ULL] [i_2] [i_0] [i_0 + 3] = ((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_0 - 1]))));
            }
            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_5))));
                arr_16 [i_0] [i_2] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)26714))));
                arr_17 [i_0] [i_2 - 1] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 2100396304U))))));
            }
            for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_19 = ((/* implicit */int) arr_8 [i_0 - 1] [i_0 + 3] [i_2 - 2]);
                        arr_26 [i_0] [7LL] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6670)) ? (7274257241988012131ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    arr_27 [(_Bool)1] [i_5] [i_2] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) <= (var_1))))) % (arr_21 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 2])));
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        var_20 *= ((/* implicit */unsigned short) -1162642037);
                        arr_30 [i_6] [i_6] [i_6] [i_8] [i_6] = ((/* implicit */unsigned short) arr_19 [i_0 + 3] [i_2] [i_2 - 2] [8ULL]);
                        arr_31 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (arr_12 [i_0] [i_0 + 2] [i_0 + 1] [(unsigned char)0]) : (arr_12 [i_0] [(_Bool)1] [i_0 + 3] [12LL])));
                        var_21 = ((/* implicit */int) var_10);
                    }
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1672297901U)) ? (((/* implicit */int) arr_20 [i_0 - 1])) : (((/* implicit */int) arr_25 [i_0 - 1] [i_2 - 1] [i_2 + 1] [i_0 - 1] [i_0 - 1]))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_9 = 1; i_9 < 13; i_9 += 4) 
                {
                    var_23 = ((/* implicit */signed char) (_Bool)1);
                    arr_34 [9LL] [i_9] [(_Bool)1] [i_9] [i_2 - 3] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [(_Bool)1] [(signed char)12] [i_2] [i_2] [i_0]))) : (((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_9] [i_5] [i_2] [7U] [i_0 - 1])))))));
                    arr_35 [i_9] = ((/* implicit */int) ((unsigned short) arr_29 [i_9] [i_2 - 2] [i_2] [i_9 + 1]));
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_10 [i_9] [16] [i_2] [i_0]) ? (19ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) || (arr_28 [i_0 + 3] [i_0 + 2] [i_0 + 1]))))));
                    arr_36 [i_0] [i_9] [i_5] [i_5] = ((/* implicit */unsigned short) arr_19 [i_9] [i_9] [i_9 + 1] [i_9 + 2]);
                }
            }
        }
        for (int i_10 = 3; i_10 < 16; i_10 += 4) /* same iter space */
        {
            arr_40 [i_10] [i_10] [i_0] = ((/* implicit */unsigned int) (unsigned char)67);
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [i_10 + 1] [i_0 - 1] [i_0])) ? (arr_12 [i_10 - 3] [i_10 + 1] [i_0 + 3] [i_0]) : (((/* implicit */unsigned long long int) arr_37 [i_10 + 1] [i_0 + 3] [(unsigned short)3]))));
        }
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1790795086)) ? (1813812051) : (((/* implicit */int) var_10))));
    }
    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) (short)-4881)))))) : (((/* implicit */int) (short)13410))));
    var_28 = ((/* implicit */unsigned short) var_0);
    var_29 = ((/* implicit */unsigned char) var_4);
}
