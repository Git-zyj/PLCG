/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160067
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned short) ((_Bool) max((((/* implicit */int) (_Bool)1)), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_11 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) (signed char)-78)))))));
            arr_6 [i_0] [i_0] [(unsigned short)16] = ((unsigned char) (~(((/* implicit */int) var_9))));
        }
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
        {
            var_12 = (short)-27482;
            var_13 &= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-11928))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_4 = 1; i_4 < 19; i_4 += 3) 
            {
                for (unsigned short i_5 = 3; i_5 < 20; i_5 += 1) 
                {
                    {
                        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_4] [(short)15] [i_4 + 2] [i_5 - 2] [i_5 - 1])) ? (((/* implicit */int) arr_15 [i_4 + 2] [i_4 - 1] [i_4] [i_5 + 1])) : (((/* implicit */int) (_Bool)1))));
                        var_15 = ((/* implicit */unsigned short) (!(arr_1 [i_5 + 1])));
                        var_16 = ((/* implicit */long long int) arr_0 [i_5]);
                        var_17 = ((/* implicit */_Bool) (signed char)14);
                        var_18 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned short)15979)) : (((/* implicit */int) (short)12038))));
                    }
                } 
            } 
            arr_18 [i_0] [i_3] = var_0;
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 21; i_6 += 4) 
            {
                for (unsigned char i_7 = 3; i_7 < 18; i_7 += 2) 
                {
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)4080))));
                            var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [(unsigned char)4] [i_7 + 3] [(_Bool)1] [i_7 - 2])) ? (((/* implicit */int) arr_14 [i_3] [i_7 - 2] [i_7] [i_7 - 2])) : (((/* implicit */int) (unsigned short)39728))));
                            var_21 = ((/* implicit */short) ((arr_21 [i_7] [i_7 - 2] [i_7 - 1] [i_7]) ? ((-(arr_4 [i_3] [i_3] [i_6]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)32713)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)(-32767 - 1))))))));
                        }
                    } 
                } 
            } 
            arr_26 [(unsigned short)18] [i_0] = (unsigned char)176;
        }
        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) /* same iter space */
        {
            arr_30 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-2181))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0))))) : ((~(arr_22 [i_9] [i_9] [(signed char)16] [(unsigned char)12])))));
            /* LoopNest 3 */
            for (short i_10 = 0; i_10 < 21; i_10 += 4) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned char i_12 = 1; i_12 < 18; i_12 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)28171)) <= (((/* implicit */int) (short)(-32767 - 1)))))) : (((/* implicit */int) arr_7 [i_12 + 1])))) <= (((/* implicit */int) ((signed char) arr_24 [i_9] [i_9])))));
                            var_23 ^= ((/* implicit */short) min((((/* implicit */long long int) (short)-15854)), ((-9223372036854775807LL - 1LL))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)30959)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_17 [i_0] [(unsigned char)10] [(unsigned short)5] [i_9])))))));
            arr_38 [i_9] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (arr_23 [i_0] [i_9] [i_0])))) ? (((/* implicit */int) ((unsigned char) arr_20 [i_0] [(unsigned short)16] [3LL]))) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : ((-(963893890611683600LL))));
        }
        var_25 = ((/* implicit */long long int) (unsigned char)224);
    }
    var_26 = ((/* implicit */unsigned char) var_9);
    var_27 += ((/* implicit */short) (-(((/* implicit */int) ((short) var_5)))));
    var_28 |= ((/* implicit */long long int) ((unsigned char) min((var_1), (var_4))));
    var_29 += ((/* implicit */short) var_4);
}
