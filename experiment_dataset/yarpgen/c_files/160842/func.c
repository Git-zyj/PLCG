/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160842
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_0 + 2] [i_0 + 2] [i_1] [i_2 + 1] [i_2] [i_0 + 2] [i_0 + 2]))));
                                arr_16 [i_4] [i_1] = ((min((167822931U), (((/* implicit */unsigned int) arr_1 [i_3])))) != (((/* implicit */unsigned int) min(((~(((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] = ((/* implicit */short) ((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-6514)) : (((/* implicit */int) (short)-6520)))) >= (((/* implicit */int) arr_11 [i_0] [i_1 + 3] [i_1] [i_1 + 3])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)6514)) : (((/* implicit */int) (short)-6522))))) ? (((/* implicit */int) arr_8 [i_0 - 2] [(short)7] [(signed char)20] [i_1])) : ((+(((/* implicit */int) arr_1 [i_1])))))) : ((+(((/* implicit */int) max((arr_9 [i_0] [i_0 - 3] [i_0] [i_1]), ((short)-6508))))))));
                /* LoopNest 3 */
                for (unsigned int i_5 = 3; i_5 < 18; i_5 += 2) 
                {
                    for (signed char i_6 = 1; i_6 < 18; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 21; i_7 += 1) 
                        {
                            {
                                arr_26 [i_7] [i_7] [i_5] [i_7] [i_0 - 2] = ((/* implicit */int) arr_2 [i_5 + 2] [i_6] [i_6]);
                                arr_27 [i_7] [(_Bool)0] [16] [(_Bool)1] [(_Bool)0] [i_0 - 1] = ((/* implicit */short) ((((max((3U), (((/* implicit */unsigned int) (short)(-32767 - 1))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) != (arr_12 [i_0]))))))) ? (((arr_23 [(short)14] [i_7] [i_1] [(short)14] [i_7]) ? (((((/* implicit */_Bool) arr_13 [i_0] [(unsigned char)17] [i_6] [i_7])) ? (0U) : (((/* implicit */unsigned int) -544659248)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_10)))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_7] [i_6] [i_5 - 2])))));
                                arr_28 [0] [(_Bool)1] [i_5 - 3] [i_7] = ((/* implicit */unsigned char) arr_18 [19] [i_6] [i_0]);
                                arr_29 [i_0] [i_1] [i_5] [i_6] [i_7] [12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((((_Bool)0) ? (((/* implicit */int) (unsigned short)57021)) : (var_4))), (((/* implicit */int) ((((/* implicit */int) arr_2 [i_6] [i_6 + 2] [i_6 + 2])) != (((/* implicit */int) (_Bool)1)))))))) ? (((((((/* implicit */int) arr_19 [i_5] [i_1 + 2] [i_0])) >= (2090339733))) ? (((/* implicit */int) ((((/* implicit */int) arr_20 [(signed char)4])) != (((/* implicit */int) var_5))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))) : (((/* implicit */int) (signed char)-1))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_8 = 0; i_8 < 12; i_8 += 4) 
    {
        arr_32 [i_8] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_8] [i_8] [i_8] [i_8]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8953)) ? (((/* implicit */int) (short)224)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((((/* implicit */short) (signed char)-1)), (var_10)))) : (((/* implicit */int) (short)-8965))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24441)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (short)-20546))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -2147483633)) ? (((/* implicit */int) arr_1 [i_8])) : (((/* implicit */int) var_11))))) : (4294967293U)))));
        arr_33 [i_8] = ((/* implicit */int) var_8);
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_38 [i_9] &= ((/* implicit */signed char) ((((/* implicit */_Bool) min(((+(-1498789945))), (((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) (short)-17987)) : (((/* implicit */int) (_Bool)1))))))) ? (((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)29952)))) ? (((((/* implicit */_Bool) arr_13 [i_9] [i_9] [i_9] [i_9])) ? (-1052239067) : (((/* implicit */int) (signed char)125)))) : (min((var_12), (((/* implicit */int) arr_7 [i_9] [i_9] [i_9] [i_9])))))) : ((-(((/* implicit */int) min((arr_5 [i_9]), (((/* implicit */signed char) var_6)))))))));
        arr_39 [i_9] [i_9] = ((/* implicit */signed char) ((short) (~(((/* implicit */int) var_7)))));
        arr_40 [(signed char)11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) (short)-26260)) : (((/* implicit */int) var_14)))), (((((/* implicit */_Bool) arr_34 [i_9] [i_9])) ? (arr_6 [(_Bool)1]) : (((/* implicit */int) (short)-5650))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((short) (_Bool)1))) < ((+(((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (arr_4 [i_9])))) ? (((9736878457257862781ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))) : (var_1)))))));
    }
}
