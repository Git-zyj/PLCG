/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109957
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
    var_18 = ((/* implicit */long long int) var_2);
    var_19 -= ((/* implicit */short) (+(((((/* implicit */_Bool) min(((signed char)71), ((signed char)-71)))) ? (max((((/* implicit */int) (signed char)89)), (-1))) : (((/* implicit */int) (signed char)-67))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            var_20 = ((/* implicit */long long int) max((var_20), (min((((/* implicit */long long int) ((short) var_2))), (((long long int) var_16))))));
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_0 + 1] [i_1 + 2]))))) ? (((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_2 [i_0] [3U] [(short)9])))) ? (((/* implicit */unsigned int) arr_2 [i_1] [i_1 + 1] [i_0])) : (min((((/* implicit */unsigned int) var_15)), (var_17))))) : (((/* implicit */unsigned int) ((int) ((unsigned char) (_Bool)1))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 = ((/* implicit */int) 3907787669005056820LL);
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 1) 
            {
                arr_11 [i_0] [i_3 + 2] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) arr_2 [i_0 + 2] [i_3 - 2] [i_3]))) > (((arr_8 [i_3] [i_3 + 2] [i_3] [i_3]) ? (((/* implicit */int) arr_8 [i_3] [i_3 - 1] [6U] [i_3])) : (((/* implicit */int) arr_3 [0ULL] [i_3 + 1] [i_3]))))));
                arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) -81798272518401533LL)) ? (-6446621143119883577LL) : (((/* implicit */long long int) ((/* implicit */int) (short)20517)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)20539))) : (var_17)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [11LL])) : (((/* implicit */int) arr_5 [(short)9] [i_3]))))) : (var_0)))));
            }
            arr_13 [i_0 + 1] [i_0 + 1] [i_0] |= ((/* implicit */unsigned short) arr_7 [i_0] [i_2] [i_0 - 1]);
        }
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned short) ((short) max((arr_7 [i_4] [i_4] [i_4]), (arr_7 [5] [i_4] [i_0]))));
            arr_17 [i_0] [i_4] = ((/* implicit */unsigned char) min((arr_9 [i_0 + 1]), (((/* implicit */short) ((((/* implicit */int) ((unsigned short) var_13))) == (((/* implicit */int) arr_0 [i_0 - 1])))))));
        }
        for (int i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */short) (+(min((((/* implicit */long long int) max(((unsigned char)108), (((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0 + 1]))))), (((((/* implicit */_Bool) var_16)) ? (arr_14 [8LL] [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
            var_25 = (_Bool)1;
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                arr_23 [i_6] &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (signed char)-8)), (max((var_12), (((/* implicit */unsigned long long int) arr_1 [i_5]))))));
                arr_24 [i_0 + 1] [i_0 + 1] [i_6] [5] &= ((/* implicit */short) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_10 [i_5])) : (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (arr_15 [i_6])))))) == (((/* implicit */int) arr_9 [i_5]))));
                var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_9 [i_0 - 1]))) ? (((/* implicit */int) ((short) var_1))) : ((-(((/* implicit */int) (unsigned short)7125))))));
                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) min((((/* implicit */long long int) ((arr_8 [7] [i_0 + 2] [i_0] [i_0 - 1]) ? (((/* implicit */int) arr_4 [i_0] [i_0 - 1])) : (((/* implicit */int) var_3))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_0 + 1] [i_5] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (var_6)))), (((long long int) (signed char)-21)))))))));
                var_28 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((unsigned char) (unsigned char)116))))) > (81798272518401562LL)));
            }
        }
        arr_25 [i_0 + 2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((var_11), (((((/* implicit */_Bool) arr_16 [i_0] [(_Bool)1])) ? (((/* implicit */int) arr_10 [i_0 + 1])) : (((/* implicit */int) arr_10 [i_0]))))))) / (max((3907787669005056804LL), (81798272518401533LL)))));
    }
    for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 13; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 1; i_9 < 12; i_9 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (short i_11 = 3; i_11 < 13; i_11 += 2) 
                        {
                            {
                                arr_40 [i_8] = ((/* implicit */int) ((max((var_12), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_36 [i_7] [i_8] [i_9] [i_7] [i_9])), (-655143423)))))) > (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((signed char) arr_34 [i_8]))), ((-(-81798272518401533LL))))))));
                                var_29 = (short)-20520;
                                var_30 = ((/* implicit */short) (unsigned short)255);
                            }
                        } 
                    } 
                    arr_41 [i_7] [i_8] [i_9 + 1] [i_9] &= ((/* implicit */unsigned char) min((max((3907787669005056820LL), (((/* implicit */long long int) (unsigned short)11)))), (arr_37 [i_8 - 3] [i_7])));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_12 = 2; i_12 < 12; i_12 += 2) 
        {
            for (signed char i_13 = 0; i_13 < 14; i_13 += 2) 
            {
                for (long long int i_14 = 1; i_14 < 11; i_14 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_15 = 3; i_15 < 13; i_15 += 2) 
                        {
                            arr_52 [i_7] [i_15] = ((/* implicit */unsigned long long int) max((1631891622), (((/* implicit */int) max((((unsigned short) -3907787669005056824LL)), (((unsigned short) arr_35 [i_14])))))));
                            arr_53 [i_14] [i_15] [i_13] [i_15] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_17)), (var_12))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_15])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))) ? (max((var_1), (((/* implicit */unsigned long long int) ((signed char) var_10))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_32 [(_Bool)1] [i_14] [i_13])))))));
                        }
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_16)))) < ((+(arr_43 [i_7] [(_Bool)1])))))) * ((~(((((/* implicit */int) var_13)) * (((/* implicit */int) var_2)))))))))));
                        var_32 = ((/* implicit */int) var_10);
                    }
                } 
            } 
        } 
    }
}
