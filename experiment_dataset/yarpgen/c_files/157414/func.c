/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157414
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_14 &= ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2 + 1] [i_1] [i_4] [i_0 - 1] [i_4])) && (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2 - 1] [i_0] [i_4] [i_0 - 1] [i_1]))))));
                                arr_10 [i_2 - 1] &= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_6 [i_0 + 1] [i_0 - 1] [i_2 + 1]))))));
                                arr_11 [i_1] [i_3] [i_2] [i_1] [i_0] &= ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) 12989549449869586675ULL)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_5 = 2; i_5 < 23; i_5 += 1) 
                    {
                        arr_14 [(unsigned char)14] [i_1] [i_2] [i_5] &= ((/* implicit */unsigned short) arr_13 [i_0 + 1] [i_2] [(unsigned short)4] [i_0 + 1]);
                        var_15 &= ((/* implicit */_Bool) (+((+(max((var_9), (((/* implicit */long long int) var_1))))))));
                        arr_15 [i_1] [(short)12] [i_2 - 1] &= ((/* implicit */unsigned short) (~(((/* implicit */int) var_1))));
                        var_16 &= ((/* implicit */signed char) var_12);
                    }
                    for (int i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        arr_18 [(unsigned short)16] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_1] [i_0] &= ((/* implicit */long long int) (((~(((/* implicit */int) arr_13 [i_0 - 1] [i_2 - 1] [i_2] [i_6])))) > (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)116)))))));
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) arr_3 [i_0] [i_1] [i_6]))));
                    }
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((min((arr_12 [i_0] [i_1] [i_1] [i_1] [(_Bool)1]), (arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] [i_2 + 2]))), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_4 [i_0])))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
    {
        arr_23 [i_7] &= ((/* implicit */signed char) min((((/* implicit */int) ((max((((/* implicit */int) arr_4 [i_7])), (var_4))) >= (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) arr_2 [i_7] [i_7])))))))), (max((1784754988), (((/* implicit */int) (unsigned short)37011))))));
        var_19 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (+(var_4))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) arr_21 [i_7] [i_7]))) << (((((/* implicit */int) var_0)) - (65194)))))) : (2025897252U)));
    }
    for (int i_8 = 1; i_8 < 13; i_8 += 1) 
    {
        var_20 &= ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_9 [i_8] [i_8] [i_8] [i_8] [i_8 + 2])))), (((/* implicit */int) arr_17 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1])))) << (((((((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */long long int) arr_26 [(unsigned short)3])))) | (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_8 - 1] [i_8 + 1] [i_8 + 2] [i_8 + 2]))))) + (8747200545106076071LL)))));
        arr_27 [i_8] &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_8] [i_8 - 1] [i_8] [(unsigned short)12])) & (((/* implicit */int) (short)-8143))))) ? (-1784755003) : ((+(arr_26 [14LL]))))), (min((((((/* implicit */_Bool) 32767)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) arr_1 [i_8])))), ((+(((/* implicit */int) (unsigned short)9))))))));
    }
    var_21 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) max((var_4), (((/* implicit */int) var_0))))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) max((var_3), (var_10)))))) : (min((((((/* implicit */int) var_10)) / (var_12))), (var_4)))));
}
