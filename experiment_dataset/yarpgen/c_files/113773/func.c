/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113773
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
    var_14 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_3 [(unsigned char)8] = ((/* implicit */unsigned long long int) arr_1 [(unsigned char)7]);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_7 [4LL] [(unsigned short)11] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [(unsigned char)4] [i_1]))));
            var_15 = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [12] [(short)12])) * (((/* implicit */int) var_12))));
        }
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            arr_10 [(_Bool)1] = ((/* implicit */int) ((arr_5 [i_0] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) ((var_5) == (((/* implicit */long long int) ((/* implicit */int) arr_8 [(short)9] [(signed char)12]))))))) : (var_6)));
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
            {
                arr_15 [(_Bool)1] [i_3] [i_3] [(signed char)12] = ((/* implicit */unsigned long long int) ((_Bool) arr_4 [i_0]));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    var_16 = ((/* implicit */unsigned short) (_Bool)1);
                    var_17 = ((/* implicit */_Bool) var_10);
                }
                arr_18 [i_3] = ((/* implicit */unsigned char) var_13);
                arr_19 [(_Bool)1] [i_3] [(short)1] = (-(((/* implicit */int) (unsigned char)56)));
            }
            for (short i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned char) ((((arr_11 [i_2] [(unsigned char)2] [(unsigned char)4] [(_Bool)1]) - (var_3))) + (((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */long long int) 2147483647))))));
                arr_22 [(unsigned char)8] [(short)13] [6] [14] = ((/* implicit */short) (~(arr_21 [i_0] [(unsigned char)0] [(short)2])));
            }
        }
        for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            arr_26 [(unsigned char)7] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_12 [i_0] [4] [(unsigned char)8] [i_0]))))));
            var_19 = ((/* implicit */int) arr_6 [(unsigned short)12] [(_Bool)1]);
        }
        for (unsigned int i_7 = 2; i_7 < 14; i_7 += 3) 
        {
            arr_31 [3] [(unsigned char)9] [(signed char)9] = ((/* implicit */unsigned long long int) arr_6 [i_7 + 1] [10ULL]);
            var_20 = ((/* implicit */unsigned char) (+(2147483647)));
            var_21 = ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (arr_11 [i_0] [i_7 - 2] [i_7 - 1] [(_Bool)1]));
        }
        arr_32 [2LL] = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) == (((/* implicit */int) arr_14 [i_0] [(short)2] [(_Bool)1] [(unsigned short)10]))));
        var_22 = ((/* implicit */short) (~(((/* implicit */int) ((signed char) var_7)))));
    }
    for (signed char i_8 = 0; i_8 < 20; i_8 += 3) 
    {
        var_23 = ((/* implicit */unsigned char) arr_35 [(short)18]);
        arr_37 [(short)17] [(_Bool)1] = ((/* implicit */long long int) ((((int) arr_36 [i_8])) == (((/* implicit */int) arr_34 [(unsigned char)19] [(short)7]))));
    }
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) 
    {
        arr_41 [4LL] [(short)5] = ((/* implicit */long long int) ((((/* implicit */int) arr_34 [i_9] [i_9])) - (((/* implicit */int) ((short) var_7)))));
        arr_42 [9LL] = ((/* implicit */unsigned long long int) (~(var_6)));
        var_24 = ((/* implicit */unsigned long long int) arr_34 [(short)13] [10LL]);
    }
    var_25 = ((/* implicit */long long int) var_7);
}
