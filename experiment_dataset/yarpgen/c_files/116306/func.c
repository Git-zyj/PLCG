/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116306
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
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (long long int i_4 = 3; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((((((/* implicit */int) arr_12 [i_4 - 3] [i_4 - 3] [i_4 - 3])) + (2147483647))) << (((((((/* implicit */int) arr_12 [i_4 - 3] [i_4 - 2] [i_4 - 1])) + (26429))) - (18))))) | (((/* implicit */int) max((arr_12 [i_4 + 2] [i_4 + 2] [i_4 + 1]), (arr_12 [i_4 + 1] [i_4 - 2] [i_4 - 1]))))));
                                var_15 ^= ((/* implicit */unsigned short) arr_0 [i_0]);
                                var_16 |= ((/* implicit */long long int) ((signed char) ((unsigned long long int) ((_Bool) arr_11 [i_0] [i_1] [i_1] [i_2]))));
                                var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_7 [i_4 - 3] [i_1] [i_3] [i_2] [i_4])))) ? (min((((/* implicit */unsigned long long int) arr_10 [i_4 - 3] [i_4 - 3] [i_2] [i_3] [i_4] [i_1])), (arr_7 [i_4 - 3] [i_1] [i_1] [i_4] [i_3]))) : (((arr_7 [i_4 - 3] [i_1] [i_4 + 1] [i_3] [i_1]) + (arr_7 [i_4 - 3] [i_3] [i_2] [i_3] [i_1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                arr_18 [i_0] [i_1] [i_1] [i_0] [i_2] [i_5] [i_6] = ((/* implicit */short) var_4);
                                var_18 ^= (~(((/* implicit */int) ((unsigned char) ((_Bool) arr_3 [i_0] [i_2] [i_6])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (int i_8 = 0; i_8 < 17; i_8 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((unsigned char) var_2)))));
                                var_20 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9205357638345293824LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 1) 
    {
        for (signed char i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_12 = 1; i_12 < 12; i_12 += 1) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_21 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_16 [i_11 + 1] [i_11 + 1] [i_12 + 2] [i_12] [i_12 + 1])) ? (arr_16 [i_11 + 1] [i_11 + 1] [i_12 + 3] [i_12] [i_12 + 3]) : (arr_16 [i_11 + 1] [i_11 + 1] [i_12 - 1] [i_12] [i_12 + 2]))) << ((+(((/* implicit */int) (_Bool)0))))));
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_8))));
                                arr_37 [i_10] [i_10] [i_11 + 1] [i_12] [i_13] = ((/* implicit */unsigned int) var_0);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 15; i_14 += 3) 
                    {
                        for (unsigned short i_15 = 1; i_15 < 14; i_15 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_17 [i_15 + 1] [i_14] [i_11] [i_10] [i_9])) : (var_8))) - (((/* implicit */int) min((((/* implicit */short) arr_14 [i_11] [i_11] [i_11] [i_10] [i_11 + 1] [i_11])), (var_7))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_10] [i_10])) ? (((/* implicit */int) arr_29 [i_10] [i_11])) : (((/* implicit */int) arr_29 [i_10] [i_11]))))) : (max((1777252236529897746LL), (((/* implicit */long long int) 24576U))))));
                                var_24 -= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) * (((unsigned int) ((var_5) - (arr_7 [i_15 - 1] [i_11] [i_11] [i_10] [i_9]))))));
                                arr_42 [i_10] [i_10] [i_10] = ((/* implicit */_Bool) ((long long int) ((long long int) ((unsigned char) arr_40 [i_9]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        for (signed char i_17 = 0; i_17 < 15; i_17 += 1) 
                        {
                            {
                                var_25 ^= ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)136)), (1777252236529897741LL)))) ? (((/* implicit */int) ((signed char) arr_6 [i_16] [i_10] [i_11]))) : ((+(((/* implicit */int) arr_2 [i_9] [i_9] [i_9])))))));
                                arr_49 [i_9] [i_10] [i_11] [i_16 - 1] [i_17] = ((/* implicit */signed char) (~(((/* implicit */int) arr_28 [i_10] [i_16 - 1] [i_10]))));
                                var_26 = max((((((/* implicit */_Bool) (+(1777252236529897761LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((var_4) + (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_9] [i_9] [i_9] [i_9] [i_17] [i_17]))))))), (((/* implicit */long long int) ((((((/* implicit */int) arr_28 [i_9] [i_9] [i_10])) << (((16848297102137250426ULL) - (16848297102137250403ULL))))) - ((-(arr_11 [i_9] [i_10] [i_11] [i_16 - 1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 4) 
                    {
                        for (short i_19 = 0; i_19 < 15; i_19 += 1) 
                        {
                            {
                                arr_56 [i_11] [i_10] [i_9] [i_18] [i_10] [i_10] [i_19] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) arr_36 [i_10] [i_11 + 1] [i_18] [i_19] [i_19])) - (arr_11 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_10]))));
                                var_27 = ((/* implicit */short) (-(arr_34 [i_9] [i_9] [i_11] [i_18] [i_19])));
                                var_28 = ((/* implicit */unsigned char) min(((~(max((((/* implicit */unsigned long long int) var_3)), (var_5))))), (max((((((/* implicit */_Bool) var_9)) ? (arr_7 [i_9] [i_10] [i_9] [i_18] [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), ((~(1598446971572301177ULL)))))));
                                var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (+(((((/* implicit */_Bool) ((int) arr_24 [i_9]))) ? ((~(4294942721U))) : (arr_0 [i_10]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_20 = 0; i_20 < 18; i_20 += 1) 
    {
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    for (unsigned long long int i_23 = 0; i_23 < 18; i_23 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_58 [i_20] [i_21])) ? (arr_61 [i_20]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) & ((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_23]))) : (var_10)))))));
                            arr_66 [i_20] [i_20] [i_21] [i_22] [i_23] = max((var_4), (arr_61 [i_22]));
                            var_31 ^= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((/* implicit */unsigned long long int) ((int) arr_65 [i_20] [i_21] [i_22] [i_23] [i_20]))) : (max((var_2), (((/* implicit */unsigned long long int) var_8))))))));
                            var_32 ^= ((((((/* implicit */long long int) ((/* implicit */int) arr_62 [i_20] [i_21] [i_22] [i_23]))) < (arr_61 [i_23]))) || (((/* implicit */_Bool) arr_58 [i_20] [i_21])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_24 = 2; i_24 < 16; i_24 += 3) 
                {
                    for (unsigned int i_25 = 0; i_25 < 18; i_25 += 2) 
                    {
                        {
                            arr_75 [i_20] [i_21] [i_24] [i_25] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) var_1))) % (arr_61 [i_24 - 2]))) > (((/* implicit */long long int) ((unsigned int) arr_71 [i_24 - 2] [i_24 + 1] [i_25] [i_25])))));
                            arr_76 [i_20] [i_20] [i_20] [i_20] = ((/* implicit */unsigned long long int) ((signed char) 776796123U));
                            arr_77 [i_21] [i_25] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_7)))) - (((arr_65 [i_25] [i_24] [i_24] [i_21] [i_20]) - (arr_58 [i_21] [i_25]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((long long int) var_9))))));
                            arr_78 [i_21] [i_21] [i_21] [i_21] = ((/* implicit */_Bool) (-((+(arr_70 [i_20] [i_20] [i_20])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_26 = 0; i_26 < 18; i_26 += 4) 
                {
                    for (short i_27 = 1; i_27 < 17; i_27 += 2) 
                    {
                        {
                            arr_86 [i_20] [i_20] [i_20] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((arr_82 [i_20] [i_21] [i_21] [i_27] [i_20] [i_27]) + (9223372036854775807LL))) << (((((/* implicit */int) var_11)) - (13533)))))))) > (((unsigned long long int) (+(((/* implicit */int) var_3)))))));
                            arr_87 [i_20] [i_21] [i_27] [i_27] = ((/* implicit */unsigned char) (!((((!(((/* implicit */_Bool) arr_81 [i_20] [i_21] [i_26])))) || (((/* implicit */_Bool) arr_65 [i_21] [i_21] [i_26] [i_27] [i_27]))))));
                            var_33 ^= var_3;
                        }
                    } 
                } 
            }
        } 
    } 
}
