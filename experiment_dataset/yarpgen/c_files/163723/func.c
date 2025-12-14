/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163723
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
    var_16 = ((/* implicit */short) max((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 989406129)) ? (1700911286) : (((/* implicit */int) (unsigned char)133))))) ? (((long long int) var_4)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    var_17 &= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [0U])))))))) ? (((((/* implicit */int) max(((short)14446), (((/* implicit */short) (signed char)-38))))) + (((((/* implicit */_Bool) 1741762244)) ? (-989406129) : (((/* implicit */int) (unsigned char)137)))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) var_4)))) || ((!(((/* implicit */_Bool) arr_7 [4] [i_0] [i_0] [(unsigned short)2])))))))));
                    /* LoopSeq 3 */
                    for (int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        var_18 = min((169359901656168700ULL), (((/* implicit */unsigned long long int) (short)2)));
                        arr_10 [i_0] [i_0] [i_2] [(unsigned char)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)10407)) || (((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) (signed char)0))))))));
                        var_19 = arr_3 [i_0] [i_1];
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) -1LL)) ? (((((/* implicit */_Bool) arr_3 [12] [i_1])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) : (arr_4 [i_0 - 1] [i_2 - 1] [i_4])));
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) -989406129))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (6918425825416216265ULL)));
                            arr_17 [i_2] [i_0] [i_0] [i_4] [i_5] [i_5] [4] = ((/* implicit */int) (+(((((/* implicit */_Bool) (unsigned char)25)) ? (var_14) : (((/* implicit */unsigned int) 989406113))))));
                            var_23 = (~(((/* implicit */int) arr_0 [(unsigned short)0])));
                            var_24 = ((/* implicit */int) ((unsigned long long int) arr_11 [i_0 - 1] [i_1] [i_0 - 1] [(unsigned char)5] [i_5]));
                            arr_18 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) var_9);
                        }
                    }
                    for (signed char i_6 = 1; i_6 < 14; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            arr_24 [(unsigned char)12] [i_0] [(signed char)9] = ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_0))))) << ((((-(((/* implicit */int) var_9)))) + (59243))));
                            arr_25 [(unsigned short)0] [(signed char)10] [(signed char)10] [(unsigned char)6] [i_2] [i_6] [(signed char)10] &= ((/* implicit */short) var_13);
                            arr_26 [i_0] [i_0] [i_2] [i_6] [i_7] = ((/* implicit */unsigned long long int) var_14);
                            arr_27 [i_0] [i_0] [i_7] [i_6] [i_7] = ((/* implicit */int) (+((((!(((/* implicit */_Bool) (unsigned char)137)))) ? (((((/* implicit */_Bool) (unsigned char)113)) ? (4031430770U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))));
                        }
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_21 [i_6 - 1] [i_6] [i_0 + 1] [i_6] [i_2 + 3]))) ? (((((/* implicit */_Bool) ((int) var_0))) ? (arr_4 [i_0] [i_1] [i_6]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_1), (var_3))))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_8 = 4; i_8 < 10; i_8 += 4) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            {
                var_26 = ((/* implicit */unsigned short) var_7);
                var_27 ^= ((unsigned char) ((arr_6 [i_8] [i_9] [i_8 - 3]) < (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4)))))));
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 11; i_10 += 1) 
                {
                    for (unsigned short i_11 = 1; i_11 < 10; i_11 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)0)) * (174600093)));
                            var_29 = ((/* implicit */unsigned char) (+(((int) arr_0 [i_9]))));
                            arr_37 [i_9] [i_9] [i_11] [i_10] = ((/* implicit */signed char) var_15);
                            var_30 = ((/* implicit */int) 11528318248293335350ULL);
                        }
                    } 
                } 
                var_31 = ((/* implicit */signed char) ((174600091) != (((/* implicit */int) (unsigned short)65463))));
                var_32 += max((((-474704900) + (((/* implicit */int) ((((/* implicit */int) (unsigned short)21890)) < (68862438)))))), (max((((/* implicit */int) var_2)), (arr_16 [i_8] [i_8] [i_8 - 3] [i_8] [i_8] [i_8]))));
            }
        } 
    } 
}
