/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134597
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
    var_10 *= ((/* implicit */unsigned int) max((((/* implicit */long long int) var_7)), (min((((/* implicit */long long int) ((23U) << (((4294967273U) - (4294967256U)))))), (var_4)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_11 -= ((/* implicit */unsigned char) max(((unsigned short)45766), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 17485325280966712815ULL)))))));
                    var_12 = ((/* implicit */short) max((var_12), (arr_2 [i_0])));
                    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_0))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 2])))))) : (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))) : (1246037259U))), (((/* implicit */unsigned int) (short)-1))))));
                    var_14 = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_0])) : (((/* implicit */int) arr_4 [i_1 + 1] [11])))), (((/* implicit */int) arr_4 [i_1 + 1] [i_1]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 2; i_3 < 24; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_8)))))));
                        var_16 = ((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 2]);
                    }
                    for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 1) 
                    {
                        var_17 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) < (2754759800462441757ULL))))) != (((((/* implicit */unsigned long long int) 2298156568688787714LL)) + (var_9)))));
                        arr_11 [(_Bool)1] [i_2] [2U] [(_Bool)1] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (_Bool)1)), (3840ULL)));
                        var_18 = ((/* implicit */short) max((var_18), (arr_6 [i_0] [i_2] [i_0] [i_0])));
                    }
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)15)) ? ((~((+(((/* implicit */int) (short)1)))))) : (((((/* implicit */_Bool) arr_9 [(unsigned short)16] [i_0] [(signed char)22])) ? ((-(var_3))) : (((/* implicit */int) arr_6 [i_0 - 1] [i_0] [i_0] [(unsigned char)19]))))));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5]))) + (18446744073709551614ULL)));
        var_21 = ((/* implicit */signed char) var_7);
        arr_15 [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-95)) ? (-2298156568688787714LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [15ULL] [15ULL] [i_5] [15ULL] [i_5]))))))));
    }
    /* LoopNest 2 */
    for (signed char i_6 = 1; i_6 < 13; i_6 += 4) 
    {
        for (unsigned int i_7 = 1; i_7 < 15; i_7 += 4) 
        {
            {
                var_22 -= ((/* implicit */unsigned int) ((short) var_6));
                var_23 = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)73));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 3; i_8 < 12; i_8 += 2) 
                {
                    for (signed char i_9 = 3; i_9 < 15; i_9 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(var_4))), (((/* implicit */long long int) arr_24 [i_6 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5319918126789196472ULL)))))) : ((((!(((/* implicit */_Bool) (short)-1)))) ? (((/* implicit */unsigned long long int) arr_0 [2] [(unsigned char)7])) : (arr_3 [i_8 + 1] [i_8] [i_8 + 1])))));
                            arr_27 [i_6] [10ULL] [(short)8] [i_6] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) - (var_9)))) ? ((+(var_4))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_7 + 1] [i_6 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3906))) : (arr_0 [i_7 + 1] [i_6 + 3]))))));
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)19792)) ? (4072939709446103369ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))));
                            var_26 = ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_8 - 3] [8ULL] [i_6])) ? (arr_25 [i_6] [i_8] [(signed char)5] [i_6]) : (((/* implicit */long long int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) (short)-20049)))))) : (max((-2298156568688787690LL), (((/* implicit */long long int) var_3))))));
                            var_27 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) 566868331))) ? (((((/* implicit */_Bool) arr_19 [i_6 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_7 + 1] [i_6 + 3]))) : (-9191316059599263481LL))) : (((((/* implicit */_Bool) arr_6 [i_9 - 2] [i_8 + 1] [i_7 + 1] [i_6 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_7 + 1] [i_6 + 3]))) : (var_8)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) 906094283U);
}
