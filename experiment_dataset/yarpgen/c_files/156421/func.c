/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156421
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
    var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((unsigned char) (short)(-32767 - 1)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (var_10)))));
    var_20 = ((/* implicit */short) ((134300333U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)113)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 1342717733U)) ? (200603484U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                            var_22 = var_6;
                        }
                        /* vectorizable */
                        for (signed char i_5 = 1; i_5 < 13; i_5 += 1) 
                        {
                            var_23 &= ((((/* implicit */_Bool) arr_1 [8U])) ? (arr_1 [(short)12]) : (arr_1 [(signed char)10]));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)105)) && (((/* implicit */_Bool) 4094363811U))));
                        }
                        for (short i_6 = 1; i_6 < 14; i_6 += 3) 
                        {
                            arr_19 [i_0] [(short)4] [(unsigned short)0] [i_0] [i_0] = ((/* implicit */signed char) (+(((arr_3 [i_1 + 1] [i_0] [i_1 + 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
                            var_25 = ((/* implicit */signed char) min(((~(((/* implicit */int) (short)20162)))), ((+(((/* implicit */int) arr_18 [i_6] [i_6 - 1] [i_6 - 1] [(unsigned char)11] [i_6] [i_6]))))));
                            var_26 = ((/* implicit */signed char) min((((/* implicit */int) (short)-10626)), (((((/* implicit */int) min((var_0), ((signed char)-30)))) ^ (((/* implicit */int) (unsigned short)42661))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 1; i_7 < 14; i_7 += 3) 
                        {
                            var_27 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_17)), (4110460235U)))) ? ((+(((/* implicit */int) (short)-12)))) : (((/* implicit */int) ((arr_3 [i_0] [i_0] [i_2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [(short)9] [i_2] [i_3] [i_7]))))))))), (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 - 3] [i_0 - 3] [i_2] [i_3]))) - (arr_9 [i_0 + 2] [i_0 + 2] [i_1] [i_3] [i_0 + 2] [7ULL]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6)))))))));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) + (min((arr_12 [i_0] [i_0] [(signed char)2] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_4))))))) ? ((-(((((/* implicit */_Bool) 2U)) ? (((/* implicit */int) (unsigned char)84)) : (((/* implicit */int) (signed char)10)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [9U] [i_3] [i_7])) ? (36028796985409536ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) <= (arr_16 [i_0] [i_1] [i_2] [i_0] [i_7] [i_2]))))));
                            var_29 = ((/* implicit */signed char) arr_21 [(signed char)6] [i_0 + 1] [i_0]);
                        }
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 200603484U)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-58))))) : (((((/* implicit */_Bool) (signed char)114)) ? (1064793889U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)55))))))), (((/* implicit */unsigned int) (signed char)-115))));
    }
    var_31 = (+(((((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-1), ((signed char)-54))))) ^ (max((2461445916U), (((/* implicit */unsigned int) var_6)))))));
}
