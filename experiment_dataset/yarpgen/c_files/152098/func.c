/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152098
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
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned char)74))))))) || (arr_1 [i_0] [i_0])));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 16; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [(unsigned short)4] [(unsigned short)4] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */short) arr_3 [i_0 + 1])), (max((((/* implicit */short) (_Bool)1)), (arr_6 [i_3] [i_2] [i_1] [4U])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_0] [i_1] [i_1] [i_1] [i_2] [i_1]))) || ((!(((/* implicit */_Bool) -1965306312))))))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_9 [i_0] [i_0 - 1] [i_2 - 1] [i_3]))))));
                            arr_11 [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)65521);
                            arr_12 [i_0] [i_0] [i_2] [i_0] [i_3] = min(((-(-1965306287))), (((/* implicit */int) (unsigned char)6)));
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) max(((unsigned short)16417), (((/* implicit */unsigned short) (signed char)112)))))));
                            arr_13 [i_0] [i_0] [i_1] [i_2 - 2] [i_3] [i_3] = ((unsigned int) min((((/* implicit */int) arr_6 [i_0] [i_1] [i_2 - 2] [i_3])), (((((/* implicit */int) (unsigned short)61549)) ^ (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        {
                            arr_20 [i_5] [i_4] [7ULL] [i_5] [7ULL] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((9223372036854775807LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [17LL] [9LL])), (arr_0 [i_0])))) ? (((((/* implicit */long long int) (-2147483647 - 1))) - (arr_7 [i_0 - 1] [i_0 - 1] [i_1] [i_4] [i_4] [(unsigned char)13]))) : (min((((/* implicit */long long int) (unsigned char)235)), (var_0)))))));
                            arr_21 [i_0] [i_0] [i_0 - 2] [13U] = ((long long int) max((((/* implicit */unsigned int) arr_1 [i_0 + 2] [i_0 + 1])), (var_15)));
                            arr_22 [(unsigned char)10] [i_0 + 2] [i_1] [i_0 + 2] [i_5] [i_5] = ((/* implicit */unsigned short) (unsigned char)17);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (!(((((/* implicit */_Bool) -1965306287)) && (((/* implicit */_Bool) arr_8 [1] [i_6] [i_6] [i_6])))))))));
                /* LoopNest 3 */
                for (unsigned int i_8 = 1; i_8 < 18; i_8 += 2) 
                {
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 4) 
                    {
                        for (long long int i_10 = 4; i_10 < 17; i_10 += 3) 
                        {
                            {
                                arr_38 [i_6] [i_6] [i_8 + 1] [i_7] [i_9] [i_6] = ((/* implicit */unsigned char) max((max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) 1965306287))))))), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_8 + 1] [(signed char)11])) && (((/* implicit */_Bool) arr_33 [i_7])))))));
                                arr_39 [i_6] [i_6] [i_8] [i_9] [i_7] [i_10] = ((/* implicit */signed char) ((-1965306287) + (((/* implicit */int) (_Bool)1))));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4604833769053601240LL)) || (((/* implicit */_Bool) -4604833769053601241LL))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */int) (-(max((((/* implicit */long long int) arr_18 [(unsigned char)11] [i_7] [i_7] [i_7] [i_7] [9])), (min((-401575703980178168LL), (((/* implicit */long long int) var_13))))))));
                var_22 ^= ((/* implicit */short) min(((~(arr_32 [(unsigned char)10] [i_6] [(unsigned char)10] [(unsigned char)10] [i_7] [i_7]))), (((((/* implicit */_Bool) arr_25 [i_6])) ? (((/* implicit */int) arr_25 [i_7])) : (((/* implicit */int) arr_37 [i_6] [5LL] [i_7] [i_7]))))));
                var_23 *= ((/* implicit */unsigned short) var_11);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 2) 
    {
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            for (unsigned char i_13 = 2; i_13 < 7; i_13 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 3) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 10; i_15 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)59616)), (-1965306322)))) ? (((((/* implicit */int) (unsigned char)235)) & (((/* implicit */int) (unsigned char)94)))) : ((+(((/* implicit */int) (signed char)121))))));
                                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned int) (unsigned char)6))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_12)), (var_14)))) : (min((7384572167360755559ULL), (((/* implicit */unsigned long long int) (unsigned char)114))))))) ? (((min((((/* implicit */long long int) (unsigned short)6769)), (var_0))) & (((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_11] [i_12]))))))) : (((long long int) var_10))));
                                arr_55 [i_11] [i_12 - 1] [i_11] [i_14] [i_14] = ((((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) != (var_1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_15]), (var_9))))) : (((unsigned long long int) var_7)))) != (((/* implicit */unsigned long long int) arr_17 [i_11] [i_13] [i_13] [i_15])));
                                var_26 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_12] [i_14] [i_15])) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) arr_46 [i_11] [i_12 - 1] [i_13]))))), (((((((/* implicit */_Bool) 1071821339U)) || (((/* implicit */_Bool) (unsigned short)49118)))) ? (((((/* implicit */_Bool) arr_16 [i_11] [i_12] [i_12] [i_14] [i_15])) ? (((/* implicit */unsigned long long int) var_2)) : (5746972802230383648ULL))) : (((/* implicit */unsigned long long int) min((arr_54 [i_13]), (8388352LL))))))));
                                arr_56 [i_11] [(unsigned char)1] [i_13] [(unsigned short)8] [i_14] [i_15] = ((/* implicit */long long int) max((max((3213840962U), (((/* implicit */unsigned int) -1102584606)))), (((/* implicit */unsigned int) max((min((-2097578149), (((/* implicit */int) arr_9 [i_11] [i_11] [(unsigned short)8] [i_11])))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)141)) > (((/* implicit */int) (unsigned short)27))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 1; i_16 < 7; i_16 += 2) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                arr_62 [i_11] [i_12 - 1] [i_11] [i_11] [i_17] = ((/* implicit */unsigned short) ((((arr_19 [i_11] [i_11] [i_13 + 1] [i_13] [i_13 - 1] [i_13 + 1]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)141))))) / (max((arr_19 [1U] [i_12] [1U] [1U] [1U] [i_13 - 1]), (arr_19 [(unsigned char)14] [(unsigned char)14] [(unsigned char)14] [i_13] [i_13] [i_13 - 2])))));
                                var_27 *= ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) 0)) || (((/* implicit */_Bool) arr_48 [i_12 - 1] [i_17]))))), (((((/* implicit */_Bool) arr_30 [i_11] [i_11] [i_13] [i_13])) ? (((/* implicit */int) (short)10482)) : (((/* implicit */int) arr_18 [i_17] [4] [i_13] [i_12] [9LL] [16U]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_18 = 0; i_18 < 22; i_18 += 2) 
    {
        for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_20 = 0; i_20 < 22; i_20 += 3) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        for (short i_22 = 0; i_22 < 22; i_22 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned short) max((var_3), (((/* implicit */unsigned long long int) var_0))));
                                arr_77 [i_18] [i_19] [10] [i_18] [i_22] |= ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) 9161794603591458533LL))))), (max((255222784), (((/* implicit */int) (short)10499))))));
                            }
                        } 
                    } 
                } 
                var_29 = ((/* implicit */unsigned short) max((2097578149), (max((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), (arr_66 [i_19])))));
            }
        } 
    } 
}
