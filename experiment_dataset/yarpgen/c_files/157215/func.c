/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157215
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
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) arr_3 [i_0] [i_0]))));
            arr_5 [i_1] = ((/* implicit */signed char) var_15);
            arr_6 [(unsigned short)15] = ((/* implicit */long long int) (~((~(arr_2 [i_1])))));
        }
        for (short i_2 = 4; i_2 < 15; i_2 += 1) 
        {
            arr_9 [i_0] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_15)) ? ((+(arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_15), (((/* implicit */unsigned short) var_5)))))))) << (((/* implicit */int) arr_4 [i_2] [i_2] [i_0]))));
            var_17 = ((/* implicit */unsigned short) arr_4 [(_Bool)1] [(unsigned short)4] [(_Bool)1]);
            var_18 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-696558629981308682LL)))) ? (((/* implicit */int) max(((unsigned short)9), ((unsigned short)7)))) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))))));
            arr_10 [i_0] [i_2 - 2] = (-(max((arr_8 [i_0 - 1] [i_0 - 1] [i_2 - 2]), (arr_8 [i_0 + 2] [i_2 - 3] [i_2 - 4]))));
        }
        arr_11 [8ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) var_4)), (var_8)))) == ((+(((/* implicit */int) var_2)))))))));
        arr_12 [i_0] = ((/* implicit */unsigned int) var_5);
    }
    /* LoopSeq 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_19 -= ((/* implicit */short) (-(((int) var_1))));
        var_20 *= ((/* implicit */unsigned long long int) (-((-(((long long int) (unsigned short)65527))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_21 &= ((/* implicit */unsigned int) (+(((/* implicit */int) var_10))));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_26 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]);
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            arr_29 [i_4] [i_4] [i_4] [i_4] [i_8] = (_Bool)1;
                            var_22 = ((/* implicit */signed char) max((var_22), (var_5)));
                            arr_30 [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((short) var_3))) ? (((/* implicit */int) (unsigned short)65521)) : (((/* implicit */int) var_8)))) + ((+(((arr_15 [(signed char)11]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))))));
                        }
                    }
                    arr_31 [i_5] [(signed char)8] [(unsigned short)14] |= ((/* implicit */short) (unsigned short)65519);
                }
            } 
        } 
        arr_32 [i_4] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_4] [i_4] [i_4]))) != (((unsigned int) (unsigned short)18)))) ? (((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_10)))) ? ((-(((/* implicit */int) var_9)))) : ((~(((/* implicit */int) var_9)))))) : (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) arr_20 [i_4] [i_4] [i_4])))))));
        var_23 = ((/* implicit */unsigned int) ((short) max(((((_Bool)1) ? (((/* implicit */int) (signed char)57)) : (((/* implicit */int) (unsigned short)18)))), (((/* implicit */int) ((signed char) var_2))))));
    }
}
