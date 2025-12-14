/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172969
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            arr_6 [i_1 - 2] [i_1 - 3] [i_1] = ((/* implicit */long long int) (_Bool)1);
            var_18 = arr_4 [i_0];
        }
        for (unsigned int i_2 = 3; i_2 < 19; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                var_19 ^= ((/* implicit */int) (!((_Bool)1)));
                var_20 = ((/* implicit */_Bool) arr_11 [3ULL] [i_2] [i_0]);
                arr_12 [i_0] [(_Bool)1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) 248265580)) || (((_Bool) (_Bool)1))));
            }
            var_21 = ((/* implicit */unsigned long long int) ((int) arr_2 [i_0] [(short)8]));
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
            {
                arr_15 [i_4] [18LL] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                arr_16 [i_0] [i_2 - 1] [(unsigned short)20] [i_4] = ((/* implicit */short) arr_8 [i_0]);
            }
            for (short i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
            {
                arr_19 [i_0] = arr_9 [i_5];
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((signed char) arr_3 [i_2 - 2] [i_2])))));
            }
        }
        for (short i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            var_23 *= ((/* implicit */signed char) ((_Bool) (!((_Bool)1))));
            var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-7100))));
        }
        var_25 -= ((/* implicit */long long int) (+(((((/* implicit */_Bool) 3257626952U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
        var_26 -= ((/* implicit */unsigned short) (-((~(((/* implicit */int) (_Bool)1))))));
    }
    for (short i_7 = 0; i_7 < 16; i_7 += 3) 
    {
        arr_25 [i_7] = ((/* implicit */short) (+(((/* implicit */int) ((arr_4 [(unsigned short)15]) >= (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_7] [i_7] [i_7]))))))));
        /* LoopSeq 1 */
        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            arr_28 [15U] [i_7] [i_8] = ((/* implicit */long long int) (!(((((/* implicit */int) (short)32767)) <= (((/* implicit */int) (_Bool)1))))));
            arr_29 [0] [i_7] = ((/* implicit */unsigned short) (_Bool)1);
            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)12)) - (((/* implicit */int) (short)(-32767 - 1)))))) <= (((unsigned int) ((short) arr_3 [(_Bool)1] [i_8]))))))));
        }
    }
    for (unsigned int i_9 = 3; i_9 < 10; i_9 += 2) 
    {
        arr_33 [i_9] = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) (short)20362)))) > (((/* implicit */int) (unsigned char)227)))) ? (((/* implicit */int) (unsigned char)12)) : (1466392226)));
        var_28 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)16))));
        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (!(((/* implicit */_Bool) arr_30 [i_9 - 1] [i_9])))))));
    }
    var_30 ^= ((/* implicit */unsigned int) ((signed char) (_Bool)1));
    var_31 = ((/* implicit */unsigned long long int) (_Bool)1);
    var_32 = ((/* implicit */unsigned int) (!(min((((((/* implicit */int) var_6)) > (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) 2491574118U)) && ((_Bool)1)))))));
}
