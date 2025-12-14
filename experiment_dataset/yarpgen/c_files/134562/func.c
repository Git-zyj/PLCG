/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134562
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
    for (short i_0 = 1; i_0 < 6; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 7; i_2 += 3) 
            {
                {
                    var_15 = 1390246695;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 7; i_4 += 1) 
                        {
                            {
                                var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)31037))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_4] [i_0 + 3] [i_4 + 2] [i_0 + 3])) ? (((/* implicit */int) arr_5 [i_3] [(unsigned char)8] [(short)4] [i_3])) : ((-(((/* implicit */int) (short)-31038))))))) : (((min(((_Bool)0), ((_Bool)0))) ? (((arr_3 [(short)2]) + (arr_2 [6ULL]))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2 - 1] [i_2] [i_4 + 2] [i_4 + 3])))))));
                                var_17 = ((/* implicit */int) ((((/* implicit */int) ((short) var_1))) > (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-31037)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)13261))))) >= (max((203971781082484455LL), (((/* implicit */long long int) (short)31037)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_5 = 3; i_5 < 17; i_5 += 4) 
    {
        var_18 = ((/* implicit */short) max((var_18), ((short)11830)));
        arr_15 [(unsigned short)8] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (short)31052)) ? (((/* implicit */int) (short)31052)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((unsigned char) 2084443568))))) & (((((/* implicit */int) arr_14 [i_5] [i_5])) | (((/* implicit */int) max((((/* implicit */short) arr_14 [1] [i_5])), ((short)-31055))))))));
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            for (unsigned char i_7 = 1; i_7 < 19; i_7 += 3) 
            {
                {
                    arr_22 [i_5] [i_5] [16ULL] [i_7] = ((/* implicit */signed char) ((((/* implicit */long long int) (-2147483647 - 1))) > (1084148792846176467LL)));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_7 + 1] [i_6])) | (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (signed char)-1)) : (((((/* implicit */_Bool) min(((short)4096), (((/* implicit */short) (unsigned char)45))))) ? (arr_18 [i_5 + 2]) : ((-(((/* implicit */int) var_2))))))));
                    var_20 *= ((/* implicit */short) max((((((/* implicit */_Bool) 8838009726090493358ULL)) ? (((/* implicit */int) (short)32765)) : (2084443568))), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 11095953487302157941ULL))))) > ((~(((/* implicit */int) arr_14 [i_6] [i_7])))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */short) var_6);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            var_22 = (+(((/* implicit */int) arr_25 [i_5 + 3] [i_8] [i_5 - 2])));
            var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_20 [i_5] [i_5 + 3] [i_5 + 3]))));
        }
        for (int i_9 = 1; i_9 < 17; i_9 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_10 = 1; i_10 < 19; i_10 += 2) 
            {
                var_24 += max((((/* implicit */long long int) (unsigned char)2)), (-1062513797565990544LL));
                /* LoopNest 2 */
                for (signed char i_11 = 2; i_11 < 18; i_11 += 3) 
                {
                    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) min((((/* implicit */int) ((short) arr_14 [i_5 - 2] [i_10 - 1]))), ((-(((/* implicit */int) var_6))))));
                            var_26 += ((/* implicit */short) max((((/* implicit */long long int) 3814153136U)), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_5] [i_9])) || (((/* implicit */_Bool) (short)31044)))))) * (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) 603570464U)) : (7085141172250334054LL)))))));
                            var_27 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)27963))))), (((unsigned long long int) max((arr_20 [i_5] [i_10] [i_11]), (((/* implicit */unsigned short) var_7)))))));
                            var_28 = ((/* implicit */unsigned short) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_11 + 1]))) >= ((((_Bool)0) ? (arr_16 [i_5] [i_5 + 2]) : (var_0))))));
                        }
                    } 
                } 
                var_29 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_26 [i_5] [i_9 + 1] [(short)4])) ? (arr_13 [i_9]) : (((/* implicit */long long int) arr_34 [i_5] [i_5] [i_5] [16]))))))) ? (var_14) : (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_3)))))))));
            }
            for (short i_13 = 1; i_13 < 17; i_13 += 3) 
            {
                var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) min((((/* implicit */long long int) -2147483633)), (-7085141172250334054LL))))));
                /* LoopNest 2 */
                for (unsigned short i_14 = 3; i_14 < 18; i_14 += 4) 
                {
                    for (short i_15 = 2; i_15 < 18; i_15 += 4) 
                    {
                        {
                            var_31 += ((/* implicit */_Bool) ((unsigned char) (((!(((/* implicit */_Bool) var_12)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)32747)) : (((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) (!((_Bool)1)))))));
                            var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((348091687U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)32754))))))));
                            var_33 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((530342604284089491LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_36 [i_9])))))));
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (long long int i_16 = 1; i_16 < 16; i_16 += 3) 
            {
                var_34 = ((/* implicit */signed char) ((long long int) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_16 [i_16] [i_5]))), (((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) <= (8410774648639560854LL)))))));
                var_35 = ((/* implicit */int) max((((/* implicit */signed char) ((3946875602U) <= (((/* implicit */unsigned int) 37180731))))), (((signed char) ((((/* implicit */int) (signed char)(-127 - 1))) - (((/* implicit */int) arr_30 [i_9] [i_9])))))));
            }
            arr_52 [i_9] = ((/* implicit */signed char) ((5679166265557765949ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
            arr_53 [i_9] = ((/* implicit */long long int) max((min((((/* implicit */int) arr_19 [i_5 - 3])), (var_10))), (((((/* implicit */int) arr_19 [i_5 - 3])) | (((/* implicit */int) var_3))))));
        }
    }
    var_36 &= ((/* implicit */short) (-(((long long int) (short)32767))));
    var_37 &= ((/* implicit */unsigned char) var_13);
    var_38 -= ((/* implicit */short) max((var_14), (((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)10)))))));
}
