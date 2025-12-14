/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179875
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
    var_19 = ((/* implicit */unsigned short) var_16);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1 + 1] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((16341366301563857942ULL), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) 4443252701859425175ULL)) ? (((/* implicit */unsigned long long int) 1735398890U)) : (18446744073709551605ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_12 [i_0] [(short)21] [(_Bool)1] [i_0] [22U] [4LL]))))))) ? (((/* implicit */int) (signed char)61)) : (((/* implicit */int) (short)-64))));
                                var_20 = ((/* implicit */unsigned short) min(((((-(227101287))) + (((/* implicit */int) arr_6 [i_0] [(short)4] [(signed char)11] [i_4])))), (((/* implicit */int) arr_11 [i_0] [i_0]))));
                            }
                        } 
                    } 
                    arr_14 [8U] [i_1 - 1] [(unsigned char)5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) var_0)) * (((((/* implicit */int) (signed char)-118)) * (0)))))) * (arr_2 [10LL] [10LL] [i_2])));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_5 = 1; i_5 < 19; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_23 [i_5] [17LL] [i_5] |= ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) min((arr_1 [i_5 + 3]), (16341366301563857939ULL)))))));
                        arr_24 [18LL] [i_6] |= ((/* implicit */signed char) (((+(((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_7 [i_0] [(_Bool)1] [i_0]))))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_5] [i_5] [i_0]))) : (18059228482519005079ULL)))) ? (((((/* implicit */_Bool) arr_0 [i_6])) ? (arr_20 [i_0] [(unsigned char)12]) : (((/* implicit */int) var_6)))) : ((-(arr_20 [(unsigned short)3] [(short)22])))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            for (unsigned int i_9 = 0; i_9 < 23; i_9 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(unsigned char)11] [(unsigned short)4] [(unsigned char)11] [(short)14] [(unsigned char)11] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (16341366301563857955ULL)))) ? (((/* implicit */int) ((signed char) arr_3 [i_0]))) : (((/* implicit */int) min(((unsigned short)3762), (((/* implicit */unsigned short) (unsigned char)166)))))))));
                    /* LoopSeq 2 */
                    for (short i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        arr_31 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_0] [17ULL] [i_0])) ? (arr_29 [i_0] [i_8] [i_9] [i_10] [22LL]) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_6)))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 0; i_11 < 23; i_11 += 4) 
                        {
                            arr_36 [i_10] &= ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)103))) * (2549927691U));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [i_0] [i_8] [i_8] [i_10] [i_8] [i_0])) ? (max((arr_1 [i_0]), (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_0] [i_8]))))))));
                            arr_37 [11LL] [11LL] [i_0] [i_9] [i_11] &= arr_1 [(_Bool)1];
                            var_23 |= ((/* implicit */unsigned char) max((((arr_26 [i_8] [i_8]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_9] [i_8]))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_0] [i_11])))))));
                            arr_38 [(unsigned short)9] [(unsigned short)9] [i_9] [(unsigned short)10] [i_8] [i_0] [10LL] = ((/* implicit */int) (~(arr_35 [i_0] [i_0] [(unsigned short)0] [(unsigned char)11] [i_0])));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 4) 
                        {
                            arr_43 [i_9] [i_9] [i_9] [(unsigned short)11] [i_9] [i_9] [i_9] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 2105377772145693692ULL)) || (((/* implicit */_Bool) (short)445)))) || (((/* implicit */_Bool) ((unsigned short) arr_33 [i_0] [i_8] [i_8] [11LL] [i_10] [(_Bool)1])))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)50)))) <= (((/* implicit */int) ((arr_0 [i_0]) > (((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_0] [13U])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_0] [i_8] [i_9] [14] [i_12])))))));
                            arr_44 [i_9] [i_10] = var_6;
                            var_25 = ((/* implicit */signed char) 67108864);
                            arr_45 [(short)14] [i_8] [i_8] [i_10] [i_12] |= ((/* implicit */unsigned short) (~(1507087636U)));
                        }
                        arr_46 [i_0] [i_9] |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [i_8] [i_9] [i_9] [i_10])) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)104))) : (-1784199827612921046LL))) : (((((/* implicit */_Bool) (signed char)-4)) ? (arr_9 [(unsigned short)20] [(short)6] [i_9] [i_10] [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                        arr_47 [i_0] [i_8] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((18059228482519005088ULL) / (((/* implicit */unsigned long long int) arr_35 [i_10] [(short)7] [(unsigned char)11] [8LL] [i_0]))))) ? (((((/* implicit */_Bool) arr_29 [i_0] [5U] [i_0] [i_9] [i_10])) ? (arr_29 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)76)))))) / (((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)62)), (5814956074499041759LL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-4))))) : ((-(arr_1 [i_8]))))));
                        arr_48 [i_0] [i_0] [i_9] [16U] &= ((/* implicit */short) (~((~(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [(short)9] [12U] [i_0] [(short)9] [i_0])) && (((/* implicit */_Bool) (short)-64)))))))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 23; i_13 += 1) 
                    {
                        arr_51 [i_0] [i_8] [i_9] [i_13] = ((/* implicit */short) arr_26 [i_0] [i_13]);
                        arr_52 [i_0] [i_8] [i_9] [i_0] = ((/* implicit */unsigned int) ((arr_1 [i_13]) / (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_22 [i_0] [i_8] [i_8] [i_9] [(short)9] [i_13])))))))));
                    }
                }
            } 
        } 
    }
}
