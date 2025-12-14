/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10862
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) (signed char)29));
                    arr_9 [i_1] [i_1] = ((/* implicit */short) min((min((((/* implicit */unsigned short) arr_6 [i_1 - 1] [i_2 - 2] [i_1 - 1])), ((unsigned short)11299))), (((unsigned short) arr_6 [i_1 + 1] [i_2 - 2] [i_2 - 2]))));
                    var_17 ^= ((/* implicit */unsigned short) (signed char)18);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_4] [i_4] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)126))));
                                arr_22 [i_6] [i_5] [i_5] [i_0] [i_0] [i_0] [i_0] = 3982052485U;
                                arr_23 [i_0] [i_0] = ((3982052486U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-20))));
                            }
                        } 
                    } 
                    arr_24 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_7 [i_0] [i_0])) > (((/* implicit */int) arr_5 [i_0])))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_4])) <= (((/* implicit */int) (unsigned short)11308))))) : (((/* implicit */int) arr_5 [i_0])))) : (((((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) (unsigned short)52059))))) * (((/* implicit */int) ((((/* implicit */long long int) 1026645041)) <= (arr_12 [i_0] [i_0] [i_0] [i_0]))))))));
                    var_18 = ((/* implicit */unsigned short) -1401814700511947980LL);
                }
            } 
        } 
        arr_25 [i_0] = ((/* implicit */long long int) var_1);
        var_19 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_10 [i_0]))), (((/* implicit */unsigned long long int) ((((-1563894377) <= (((/* implicit */int) (signed char)-63)))) || (((/* implicit */_Bool) ((int) (signed char)-54))))))));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                arr_31 [i_8] = ((/* implicit */unsigned short) var_0);
                var_20 = ((/* implicit */int) min(((unsigned short)42920), (((/* implicit */unsigned short) (signed char)-10))));
                arr_32 [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11326)) ? (((arr_29 [i_8] [i_8] [i_8]) - (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)123)) / (-583895818))))))) ? (max((-1026645042), (((/* implicit */int) arr_28 [i_7] [i_8])))) : (((((/* implicit */int) (signed char)49)) + (min((((/* implicit */int) (signed char)1)), (-1026645054)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (signed char)14);
    /* LoopNest 2 */
    for (signed char i_9 = 0; i_9 < 15; i_9 += 2) 
    {
        for (unsigned short i_10 = 0; i_10 < 15; i_10 += 1) 
        {
            {
                arr_39 [i_9] [i_9] &= ((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)5), ((unsigned short)15689))))));
                arr_40 [i_9] = ((/* implicit */long long int) var_2);
                /* LoopNest 2 */
                for (long long int i_11 = 1; i_11 < 14; i_11 += 4) 
                {
                    for (unsigned char i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        {
                            arr_46 [i_10] [i_11] [i_10] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_36 [i_11 - 1])), (max((var_11), (((/* implicit */unsigned long long int) arr_36 [i_11 - 1]))))));
                            /* LoopSeq 3 */
                            for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 2) 
                            {
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)253)), ((unsigned short)13)))), (arr_43 [i_10] [i_12]))))));
                                arr_49 [i_9] [i_10] [i_11] [i_12] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) 5924075055090866521ULL))));
                                arr_50 [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */int) var_2)) - (((/* implicit */int) (signed char)37)))), (((/* implicit */int) min((var_9), (var_16))))))) ? (((/* implicit */int) arr_41 [i_10] [i_10] [i_11] [i_10])) : (((/* implicit */int) (signed char)50))));
                                arr_51 [i_12] [i_12] [i_12] [i_13] [i_11] [i_10] = min((((/* implicit */unsigned int) -1909299237)), (0U));
                                arr_52 [i_13] [i_11] [i_9] [i_9] [i_9] [i_11] [i_9] = (~((~(1198013939))));
                            }
                            for (unsigned char i_14 = 3; i_14 < 13; i_14 += 4) 
                            {
                                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */int) max((arr_41 [i_11] [i_14 - 2] [i_9] [i_11 - 1]), (arr_41 [i_14] [i_14 - 1] [i_9] [i_11 - 1])))) * (((((/* implicit */_Bool) 2147483647U)) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) (_Bool)1)))))))));
                                arr_57 [i_9] [i_9] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) 2147483668U);
                                arr_58 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) (~(872288150919126803LL)));
                                arr_59 [i_9] [i_9] [i_9] [i_11] [i_11] = ((/* implicit */unsigned char) (_Bool)1);
                            }
                            for (unsigned int i_15 = 0; i_15 < 15; i_15 += 3) 
                            {
                                var_24 = ((/* implicit */unsigned int) arr_29 [i_11] [i_11] [i_11]);
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (unsigned char)103))) || (((/* implicit */_Bool) arr_28 [i_9] [i_9]))));
                                var_26 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) arr_27 [i_11 - 1] [i_11 - 1])), (872288150919126800LL))), (((/* implicit */long long int) 2755228700U))));
                                arr_63 [i_12] [i_12] [i_9] [i_12] [i_9] &= max((((/* implicit */int) arr_38 [i_10] [i_11] [i_11 - 1])), (max((1957263848), (((/* implicit */int) (unsigned short)30649)))));
                                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (!(((((/* implicit */unsigned long long int) arr_37 [i_11] [i_11 + 1] [i_11])) != (26ULL))))))));
                            }
                            arr_64 [i_9] [i_9] [i_11] [i_9] [i_11] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_30 [i_9] [i_9])) ? (42ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) % (var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_54 [i_9] [i_10] [i_10] [i_9] [i_12])))) - (min((872288150919126792LL), (arr_34 [i_12])))))));
                        }
                    } 
                } 
                arr_65 [i_9] = ((/* implicit */int) max((arr_34 [i_9]), (((/* implicit */long long int) arr_44 [i_9] [i_9] [i_10] [i_10] [i_9] [i_9]))));
            }
        } 
    } 
}
