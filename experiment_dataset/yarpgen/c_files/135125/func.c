/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135125
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_12 = ((/* implicit */signed char) (-(-2049463600)));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                var_13 ^= ((/* implicit */short) arr_8 [i_1] [i_1] [i_0]);
                var_14 ^= (-(-2049463600));
                var_15 = ((/* implicit */unsigned char) (signed char)113);
            }
            for (long long int i_3 = 1; i_3 < 17; i_3 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        {
                            arr_17 [i_5] = ((/* implicit */int) max((var_0), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((var_1) < (-3133736))))) >= (arr_6 [i_3 - 1] [i_3 + 2] [i_3 + 1]))))));
                            arr_18 [i_5] = ((/* implicit */short) arr_0 [i_0]);
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) min(((!(((/* implicit */_Bool) var_11)))), (((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_13 [i_3 - 1])))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) 9221120237041090560ULL))));
                var_18 -= ((/* implicit */short) 18446744073709551589ULL);
                arr_19 [i_0] = ((/* implicit */signed char) max((-2049463600), (3133730)));
            }
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                for (signed char i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    {
                        arr_24 [i_7] = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_14 [i_7])), ((-(((((/* implicit */_Bool) 3133745)) ? (arr_0 [i_7]) : (18446744073709551589ULL)))))));
                        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_7])))))));
                        var_20 ^= ((/* implicit */short) (signed char)-64);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                for (int i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    for (short i_10 = 3; i_10 < 15; i_10 += 1) 
                    {
                        {
                            arr_33 [i_10] [i_8] [i_8] [i_8] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_26 [i_0] [i_1] [i_8] [i_8])), (min((((((/* implicit */int) (signed char)-16)) % (((/* implicit */int) (signed char)5)))), (((((/* implicit */_Bool) arr_26 [i_1] [(unsigned char)16] [i_1] [i_1])) ? (var_11) : (((/* implicit */int) (short)6845))))))));
                            var_21 = ((/* implicit */signed char) max((var_21), ((signed char)113)));
                            arr_34 [i_8] [i_1] [i_1] [i_1] [(short)8] [(unsigned char)6] = ((/* implicit */unsigned char) -2021141552);
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) max((arr_30 [i_10] [i_10 - 2] [i_1] [i_1] [(signed char)14] [i_10 - 2]), (((/* implicit */int) (short)2040))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)25596), ((short)25604))))) : (max((arr_29 [i_1] [i_10 + 4] [i_10 + 2] [i_10 + 1] [i_10 - 2] [i_1]), (((/* implicit */unsigned long long int) (short)-23174)))))))));
                        }
                    } 
                } 
            } 
            var_23 = 9223372036854775807LL;
        }
        var_24 = ((/* implicit */short) max((max((arr_4 [i_0]), (arr_4 [i_0]))), (arr_4 [i_0])));
    }
    for (int i_11 = 0; i_11 < 18; i_11 += 4) 
    {
        arr_37 [i_11] [i_11] = ((/* implicit */short) min((12689924728048792709ULL), (((/* implicit */unsigned long long int) arr_27 [i_11] [i_11] [i_11]))));
        var_25 = arr_27 [i_11] [i_11] [i_11];
        arr_38 [i_11] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_14 [i_11])))) * (((/* implicit */int) (!(((/* implicit */_Bool) 2049463600)))))));
    }
    var_26 = ((/* implicit */short) var_10);
    var_27 = ((/* implicit */signed char) min((var_10), (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) (signed char)-114))))))))));
}
