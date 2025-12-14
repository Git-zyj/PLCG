/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114358
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) (signed char)-1)) + (((/* implicit */int) var_11)))) : (min((((/* implicit */int) var_11)), (var_4)))))) ? (((((/* implicit */_Bool) -7120631393486446399LL)) ? (3814224041875440980LL) : (7852676795760406236LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? ((~(var_8))) : (max((((/* implicit */int) (short)2941)), (-32))))))));
    var_16 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    var_17 = ((/* implicit */signed char) arr_2 [i_0] [i_1]);
                    var_18 += ((/* implicit */long long int) max((((/* implicit */int) (signed char)-96)), ((-((~(((/* implicit */int) (short)27251))))))));
                    arr_8 [(unsigned char)6] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))) > (((/* implicit */int) arr_6 [i_0]))))) != (((/* implicit */int) (short)-7))));
                }
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 20; i_4 += 3) 
                    {
                        for (int i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */short) max(((-(((((/* implicit */_Bool) -32)) ? (-7094705757828859731LL) : (-3814224041875440980LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_4 + 1])) ? (((/* implicit */int) var_14)) : (arr_5 [i_4 + 1]))))));
                                arr_18 [i_4] [i_1] [i_3] [i_4] [i_1] [i_1] [i_3] = ((/* implicit */signed char) ((long long int) (~(arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_1] [i_0])) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) var_11))))) > (min((((((/* implicit */_Bool) (signed char)54)) ? (-3814224041875440980LL) : (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_7)))))))));
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        var_21 = ((/* implicit */signed char) max((var_21), ((signed char)0)));
                        arr_21 [i_1] [(unsigned char)5] = ((/* implicit */short) (~(((((/* implicit */_Bool) (-(519191323)))) ? (arr_19 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned int) min((268369920), (((/* implicit */int) var_7)))))))));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)3)) ? (3816206177U) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 268433408)) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) (signed char)-82)))))))));
                        var_23 = ((/* implicit */signed char) min((((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned char)165)) ? (-24) : (((/* implicit */int) (unsigned char)177)))), (((/* implicit */int) (unsigned short)0))))), (((((((/* implicit */int) var_5)) == (1222198661))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_10 [i_6] [i_6] [i_3] [i_6])) : (-7094705757828859731LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 24)) ? (1015808) : (((/* implicit */int) arr_1 [i_6])))))))));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) 3814224041875440980LL)) ? (26380548) : (519191299)));
                    }
                }
                for (unsigned short i_7 = 1; i_7 < 19; i_7 += 4) 
                {
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_15 [i_0] [i_1] [i_7] [i_7 - 1] [i_0] [i_7 + 2]), (arr_0 [i_7 + 2])))) ? (max((arr_14 [i_7 - 1]), (arr_15 [i_0] [i_1] [i_7] [i_7 + 1] [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_0] [i_7 - 1] [i_1] [i_0])) ? (arr_14 [i_7 - 1]) : (arr_0 [i_7 + 1])))));
                    /* LoopSeq 1 */
                    for (signed char i_8 = 3; i_8 < 20; i_8 += 2) 
                    {
                        var_26 = ((/* implicit */signed char) max(((~(((/* implicit */int) (signed char)-77)))), ((+(((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_2 [i_8 - 1] [i_1]))))))));
                        arr_26 [(_Bool)1] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((88826087), (-88826088)))) ? (arr_5 [i_0]) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)7138)) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_8]))))))) ? (((/* implicit */int) ((-1010650305) != (((/* implicit */int) (short)-8310))))) : (((/* implicit */int) ((((int) (signed char)114)) != (((/* implicit */int) var_0)))))));
                        var_27 = ((/* implicit */unsigned short) (short)18141);
                        arr_27 [(unsigned short)7] [i_7] [i_7] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_6 [i_0])), (((((/* implicit */_Bool) (short)12371)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5762)))))))) ? (min((((/* implicit */int) ((((/* implicit */int) (unsigned char)224)) < (((/* implicit */int) (unsigned char)79))))), (((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0]) : (((/* implicit */int) (unsigned short)65530)))))) : (((/* implicit */int) ((((/* implicit */int) var_2)) <= ((-(-1015809))))))));
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)32498)) : (var_8)))) ? ((+(((/* implicit */int) arr_13 [20] [i_8])))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_17 [i_0] [i_1] [(unsigned char)4])))))), (var_3))))));
                    }
                    var_29 -= ((/* implicit */unsigned short) ((((/* implicit */int) (short)32767)) - (164841991)));
                }
                var_30 ^= ((/* implicit */unsigned short) arr_0 [i_0]);
            }
        } 
    } 
}
