/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123832
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
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_10 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4117))) : (339270427054173808ULL)))) ? ((-(((/* implicit */int) (unsigned char)214)))) : (min((((/* implicit */int) var_4)), (0)))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 5)) + (4884217677148201566LL)))) ? (((/* implicit */unsigned int) (~(-1)))) : (((unsigned int) 19))));
                                arr_15 [i_0] [(unsigned char)17] [i_3] [i_3] [i_4] [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [i_3])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6144))))), (((/* implicit */unsigned long long int) 3429949343U))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (short)6144)))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_0])))) - ((-(-1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)4)) ? (arr_8 [i_4] [(unsigned short)11] [4LL] [(unsigned short)11] [(unsigned short)11] [(unsigned short)11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)67)))))) ? (((/* implicit */long long int) (+(1527882534U)))) : (((-1502755174954577770LL) / (-6521280379625860966LL)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4 + 1]))) ^ (var_5)))));
                                var_11 = ((/* implicit */int) ((((arr_9 [i_2 - 1] [i_2] [i_2 + 1] [i_4 - 1]) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)62))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3712430676U)) ? (((/* implicit */int) (unsigned char)41)) : (((/* implicit */int) var_3))))) / (min((var_8), (((/* implicit */unsigned long long int) var_1)))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) var_4)))), (((((/* implicit */int) arr_20 [i_2 - 1] [9] [i_2 + 1] [i_1] [i_0])) ^ (((/* implicit */int) (unsigned char)57))))));
                                arr_23 [i_0] [i_0] [i_2] [(unsigned char)15] [i_6] [i_6] [i_2] = ((/* implicit */short) var_0);
                                arr_24 [i_1] = ((/* implicit */long long int) (+((+(((/* implicit */int) (_Bool)1))))));
                                arr_25 [i_2] = ((/* implicit */signed char) max((((int) var_4)), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) <= (min((((/* implicit */unsigned int) arr_19 [i_5] [i_5] [(short)2] [(_Bool)1])), (var_1))))))));
                                var_13 = ((/* implicit */_Bool) -8996140387583701219LL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        for (int i_8 = 0; i_8 < 21; i_8 += 3) 
                        {
                            {
                                arr_31 [0LL] [i_1] [17LL] [i_1] [i_1] [(unsigned char)3] [(unsigned char)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_3))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max(((short)-14190), (((/* implicit */short) var_6)))))));
                                arr_32 [i_8] [i_7] [(_Bool)1] [i_1] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) arr_26 [i_2 - 1] [i_2] [i_2] [i_8])) : (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) arr_26 [i_2 - 1] [20ULL] [i_7] [i_2 - 1])) : (((/* implicit */int) (unsigned char)89))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_9 = 3; i_9 < 22; i_9 += 1) 
    {
        for (signed char i_10 = 1; i_10 < 22; i_10 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_11 = 3; i_11 < 20; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 3) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_46 [i_9] [i_9] [i_11] [i_9] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_39 [i_11]))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))) : ((+(((0LL) - (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
                                var_14 ^= 984781583U;
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    for (short i_15 = 0; i_15 < 24; i_15 += 1) 
                    {
                        {
                            var_15 -= ((((/* implicit */_Bool) ((signed char) var_1))) ? ((-(((((/* implicit */_Bool) arr_49 [i_9])) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (signed char)-99)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)38))))));
                            arr_52 [i_9] [i_10] [i_14] [i_14] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_48 [i_9] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_48 [i_14] [i_14]))) % (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 21; i_16 += 3) 
    {
        for (unsigned int i_17 = 1; i_17 < 20; i_17 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_18 = 0; i_18 < 21; i_18 += 4) 
                {
                    for (unsigned char i_19 = 0; i_19 < 21; i_19 += 1) 
                    {
                        {
                            var_16 ^= (+(max(((-(-5161450664768862113LL))), (-8996140387583701219LL))));
                            var_17 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)20)), (2004838885187070786ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6144)) ? (8996140387583701221LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)115)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(8996140387583701219LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */int) var_7)) : (arr_5 [i_16] [15] [i_18] [i_19])))))))) : (var_5)));
                            arr_61 [i_16] [i_17] [i_16] [i_19] = ((/* implicit */long long int) ((((/* implicit */int) (short)-1)) / (((/* implicit */int) (short)11762))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_20 = 0; i_20 < 21; i_20 += 1) 
                {
                    for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
                    {
                        {
                            arr_66 [i_16] [i_16] [i_20] [i_20] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)16368), (((/* implicit */short) (signed char)55))))) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) (short)-22395)) : (((/* implicit */int) (signed char)15)))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_3)), (arr_29 [i_17 - 1] [i_17 - 1] [i_17] [7U] [i_16])))) : (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))), (((unsigned long long int) 8996140387583701210LL)))));
                            arr_67 [i_16] [i_20] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 0)) == (((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-77))))) / ((-(2046948156199783834LL)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_22 = 2; i_22 < 20; i_22 += 4) 
                {
                    for (unsigned char i_23 = 2; i_23 < 18; i_23 += 1) 
                    {
                        {
                            arr_74 [i_16] [i_23] [i_23] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)52)) - ((+(((/* implicit */int) (unsigned short)7957))))));
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (var_0)))))));
                            arr_75 [i_16] [i_23] [(_Bool)1] [i_23] = ((/* implicit */_Bool) max((((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-22395)) : (((/* implicit */int) (unsigned char)225)))) < ((-(((/* implicit */int) (short)-22208))))))), ((-(((/* implicit */int) ((8996140387583701223LL) == (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((((/* implicit */int) (short)(-32767 - 1))) - (((/* implicit */int) (signed char)-64)))) : (((/* implicit */int) (unsigned char)16))))) ? (10709804636886840573ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)99)))));
                            arr_76 [i_16] [i_23] = (+(((/* implicit */int) ((_Bool) (unsigned char)29))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_24 = 0; i_24 < 21; i_24 += 4) 
                {
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        {
                            arr_82 [i_16] [i_17] [i_24] [i_25] [i_25] [i_25] = ((/* implicit */unsigned int) -3710936128370682903LL);
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_49 [i_17 + 1]) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-32030)) : (arr_39 [i_24]))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)-32030))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)67))) ^ (min((((/* implicit */long long int) var_2)), (-1LL)))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_2))) ? (((/* implicit */int) min((arr_11 [i_16] [i_17] [i_24] [i_17 - 1] [i_25]), (((/* implicit */short) var_7))))) : (((/* implicit */int) max((arr_11 [i_16] [i_17] [i_24] [i_17 + 1] [i_24]), (arr_11 [i_16] [i_17] [i_17] [i_17 - 1] [i_17]))))));
                            arr_83 [i_25] [i_24] [i_17] [i_16] = (-(((/* implicit */int) (_Bool)1)));
                        }
                    } 
                } 
            }
        } 
    } 
}
