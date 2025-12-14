/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143127
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned short) arr_4 [(short)7] [13U]);
                                var_11 = ((((/* implicit */int) arr_3 [i_1 - 2] [i_1 + 1] [i_1 - 2])) & ((-(((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 1] [i_1 + 1])))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */_Bool) (+((~(arr_8 [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1 - 2] [i_1 + 1] [i_1 - 1])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */int) arr_11 [i_5] [i_5]);
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (signed char)69)))), (((/* implicit */int) (!(((/* implicit */_Bool) 669393)))))))) ? (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) (unsigned char)91)))) : (((/* implicit */int) min((((var_1) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5] [i_6]))))), (((arr_0 [i_5]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5] [(unsigned char)4] [10ULL]))))))))));
                            var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)0))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_9 = 1; i_9 < 10; i_9 += 3) 
                {
                    for (signed char i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) ((min((arr_2 [0] [i_9 - 1] [i_9 - 1]), (arr_3 [3ULL] [i_9 + 1] [i_9 - 1]))) ? (((((/* implicit */_Bool) (unsigned char)91)) ? (5169179777044153369LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_9 - 1] [i_9 - 1] [i_9 + 1])) * (((/* implicit */int) arr_2 [i_9 - 1] [i_9 + 1] [i_9 - 1])))))));
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)1998))), (((/* implicit */unsigned short) var_7)))))) <= (0ULL)));
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)0)), (12940070800605172170ULL)))) ? (((unsigned long long int) arr_22 [(_Bool)1] [(short)8] [i_9 + 1] [(short)8])) : (((arr_0 [9LL]) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [0U] [5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_5] [4]))) : (arr_13 [i_5]))))))));
                            var_19 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) arr_19 [i_9 + 1])), (((((/* implicit */_Bool) (unsigned char)246)) ? (arr_24 [(unsigned short)0] [i_6] [i_9 - 1] [i_10]) : (arr_21 [7U] [7U] [7U] [7U]))))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((2888987397U), (4294967295U))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_11 = 0; i_11 < 18; i_11 += 1) 
    {
        for (int i_12 = 0; i_12 < 18; i_12 += 2) 
        {
            for (unsigned long long int i_13 = 1; i_13 < 16; i_13 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_14 = 0; i_14 < 18; i_14 += 3) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 18; i_15 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) 1892340241154776856ULL);
                                var_22 &= ((102382358768217209ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                                var_23 = max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)0), (var_2))))) < (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 536870784U)) : (143807364501015373ULL)))))), (((arr_36 [i_13 + 1] [i_13 + 2] [i_13 + 2]) % (arr_36 [i_13 + 1] [i_13 + 1] [i_13 + 1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                    {
                        for (unsigned char i_17 = 0; i_17 < 18; i_17 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) arr_46 [i_11] [i_11] [i_11] [i_11] [(short)14] [i_11]);
                                var_25 = ((/* implicit */unsigned int) (+(((/* implicit */int) min(((unsigned short)8), (((/* implicit */unsigned short) (unsigned char)91)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_18 = 0; i_18 < 18; i_18 += 2) 
                    {
                        for (long long int i_19 = 1; i_19 < 17; i_19 += 4) 
                        {
                            {
                                var_26 = max((((/* implicit */long long int) ((((708493428U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) / (arr_39 [i_11] [i_11])))), (arr_32 [i_11] [i_13] [i_11]));
                                var_27 = ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)35)))))))));
                                var_28 = ((/* implicit */unsigned int) ((long long int) 4145014996U));
                                var_29 += ((unsigned int) (+(arr_41 [16] [16] [(unsigned short)17] [i_13])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_20 = 2; i_20 < 17; i_20 += 1) 
    {
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            {
                var_30 &= ((/* implicit */unsigned short) (+(arr_39 [i_20] [(unsigned short)14])));
                /* LoopNest 2 */
                for (unsigned long long int i_22 = 0; i_22 < 18; i_22 += 1) 
                {
                    for (long long int i_23 = 3; i_23 < 16; i_23 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max(((unsigned char)36), (((/* implicit */unsigned char) arr_40 [i_23] [i_23 - 1] [i_23] [(_Bool)1] [i_23 - 2] [i_23 - 1]))))), (((unsigned long long int) arr_29 [i_20 - 2] [4]))));
                            var_32 = ((/* implicit */int) arr_52 [7] [7] [i_21] [i_21] [i_22] [10LL]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_24 = 0; i_24 < 20; i_24 += 4) 
    {
        for (unsigned long long int i_25 = 0; i_25 < 20; i_25 += 4) 
        {
            for (unsigned long long int i_26 = 0; i_26 < 20; i_26 += 4) 
            {
                {
                    var_33 = ((/* implicit */unsigned char) (~(max((((/* implicit */int) arr_69 [i_24] [i_25] [18U])), (-2048287501)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_27 = 3; i_27 < 18; i_27 += 4) 
                    {
                        for (unsigned int i_28 = 3; i_28 < 19; i_28 += 4) 
                        {
                            {
                                var_34 = ((/* implicit */short) ((int) ((unsigned char) 3647129582U)));
                                var_35 |= ((/* implicit */unsigned char) max((-5169179777044153379LL), (((/* implicit */long long int) (short)0))));
                                var_36 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((-7665669884505535156LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54407)))))), ((-(min((var_5), (((/* implicit */unsigned long long int) (signed char)78))))))));
                                var_37 = ((/* implicit */int) (~(9131038678790137703ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
