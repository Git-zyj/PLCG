/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111924
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
    var_13 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) > ((+(9438232340401756824ULL)))))) % (((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) (signed char)-118))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) 1079353816901061151LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)186))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (var_1))))));
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_4)), (arr_0 [12U] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)8110), (((/* implicit */short) (unsigned char)103)))))) : (((((/* implicit */_Bool) 1090055505U)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))))))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) var_4)))))))))))));
        var_16 = ((/* implicit */short) 12ULL);
        var_17 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) min((arr_2 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
        var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)11)), (var_12)))), (((((/* implicit */_Bool) 1079353816901061164LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_10)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) 6425475811557580060LL)) : (18287805645092037102ULL))), (((((/* implicit */_Bool) (unsigned short)38563)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)4))) : (158938428617514514ULL)))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_3 = 2; i_3 < 15; i_3 += 1) 
            {
                arr_10 [i_3] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) (~(-1757643641723161769LL)));
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)60386)) && (var_7)));
            }
            arr_11 [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (arr_8 [i_2] [i_2])))), ((-((~(((/* implicit */int) var_9))))))));
            var_21 = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_2 + 4] [i_2 + 3])) + (((/* implicit */int) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) (short)7162))))))))));
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_5 [i_2 - 1])))) ? (((long long int) var_4)) : (((/* implicit */long long int) ((((/* implicit */int) var_4)) % (((/* implicit */int) arr_4 [i_2 + 2]))))))))));
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_9))))) ? (arr_3 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1])))));
            var_24 = ((/* implicit */short) ((((/* implicit */int) var_8)) <= (arr_12 [i_4] [i_4] [i_1])));
            arr_16 [i_1] = ((/* implicit */long long int) var_4);
            arr_17 [i_1] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1]))) : (var_12)));
        }
    }
    for (short i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_1 [i_5] [i_5])))) | (((long long int) ((((/* implicit */_Bool) 18287805645092037102ULL)) ? (((/* implicit */unsigned long long int) arr_18 [i_5])) : (var_10)))))))));
        /* LoopSeq 4 */
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (short)-18290))));
            arr_23 [(short)1] [i_6] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_3 [i_5] [i_6])) ? (-4542168570839277561LL) : (((/* implicit */long long int) 2000278855U)))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_1 [i_6] [i_5]))))))));
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)70)), (arr_3 [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)4)) & (((/* implicit */int) (unsigned char)174))))) ? (((((/* implicit */int) arr_8 [i_6] [i_5])) | (((/* implicit */int) arr_19 [i_5])))) : (((/* implicit */int) arr_0 [i_5] [i_5]))))) : ((~(((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23242))) : (18287805645092037102ULL)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                arr_26 [i_5] [(signed char)0] [(_Bool)0] [i_6] = ((/* implicit */unsigned int) arr_3 [(unsigned char)6] [i_7]);
                var_28 = ((/* implicit */_Bool) ((unsigned char) 1090055505U));
                var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36704))) & (18446744073709551590ULL))))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 1; i_8 < 10; i_8 += 2) 
                {
                    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_25 [i_5] [i_6] [i_7] [i_9]))));
                            var_31 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_25 [i_5] [10ULL] [i_5] [i_8 - 1]))));
                            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((arr_24 [i_8 - 1] [i_8 - 1]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_24 [i_8 - 1] [i_8 - 1])))))));
                        }
                    } 
                } 
            }
            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_6 [i_5] [i_6])) & (((/* implicit */int) (!(((/* implicit */_Bool) 8338604497504354426ULL))))))) != (((((((/* implicit */int) var_4)) > (((/* implicit */int) (unsigned char)86)))) ? (((var_7) ? (-1578502602) : (((/* implicit */int) (signed char)44)))) : (((/* implicit */int) var_3)))))))));
        }
        for (signed char i_10 = 0; i_10 < 11; i_10 += 4) 
        {
            var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_34 [i_5] [i_10]))))) != (((((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)64500))) - (985162418487296ULL))))))));
            var_35 = ((/* implicit */unsigned short) max((var_35), ((unsigned short)1027)));
            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_5] [i_5])) ? ((~(var_12))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_5] [i_5])) ? (((/* implicit */int) arr_8 [i_5] [i_10])) : (((/* implicit */int) arr_8 [i_5] [i_5])))))));
            arr_35 [i_5] [i_5] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((((/* implicit */int) arr_2 [i_5] [i_5])) ^ (((/* implicit */int) var_2)))) : (((/* implicit */int) var_7)))) & ((~(((/* implicit */int) (unsigned short)16020))))));
        }
        for (signed char i_11 = 0; i_11 < 11; i_11 += 1) 
        {
            var_37 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (signed char)97)), ((unsigned short)64484)));
            var_38 = ((/* implicit */short) (-(((((((/* implicit */int) arr_4 [i_11])) >> (((var_1) - (3234804762831019321LL))))) | (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [i_11])) : (((/* implicit */int) (unsigned short)42424))))))));
        }
        for (unsigned char i_12 = 0; i_12 < 11; i_12 += 1) 
        {
            var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) (unsigned char)190))));
            var_40 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_13 [i_5] [i_12] [i_12])), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)13))))) ? (((((/* implicit */_Bool) (signed char)-39)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_10))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))))));
        }
    }
    var_41 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((short) var_12)))))) : (var_12)));
}
