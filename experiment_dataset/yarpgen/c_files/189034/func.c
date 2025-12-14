/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189034
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
    var_10 = (~((+(var_2))));
    var_11 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_12 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10108928210648249478ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60))) : (8531768803461704389ULL)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) var_2)))))))));
        var_13 = ((/* implicit */long long int) ((unsigned long long int) ((arr_1 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)60), ((unsigned char)196))))))));
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? ((~(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)40431), (((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_0])))))))) >> (((max((((((/* implicit */_Bool) 7730032934338099011LL)) ? (((/* implicit */int) (_Bool)1)) : (arr_2 [i_0]))), (((((/* implicit */int) arr_4 [i_0] [2ULL] [2ULL])) & (((/* implicit */int) var_6)))))) - (47)))));
            /* LoopSeq 4 */
            for (long long int i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                var_15 = ((/* implicit */unsigned long long int) var_9);
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_16 |= (+(arr_5 [i_2 + 1]));
                    arr_10 [i_1] [i_2 + 2] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)40431)) ? (10600626370452036835ULL) : (7846117703257514780ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_5))))));
                }
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((unsigned long long int) max(((+(7730032934338098984LL))), (((/* implicit */long long int) var_0)))))));
            }
            for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                var_18 = ((/* implicit */_Bool) ((((3249319507U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25026))))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)143))) % (((24ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1] [i_4]))))))) - (130ULL)))));
                var_19 -= ((/* implicit */_Bool) arr_4 [i_4] [i_1] [i_1 - 1]);
                var_20 = (_Bool)1;
            }
            for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_6 = 1; i_6 < 17; i_6 += 3) /* same iter space */
                {
                    var_21 += ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_6 - 1] [i_1 - 1])) - (((/* implicit */int) (_Bool)1))));
                    var_22 += ((/* implicit */signed char) var_4);
                    var_23 = ((signed char) (_Bool)1);
                }
                for (unsigned int i_7 = 1; i_7 < 17; i_7 += 3) /* same iter space */
                {
                    arr_21 [i_0] [i_0] [(unsigned char)4] [9LL] [i_5] [i_7] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (((((/* implicit */unsigned long long int) var_2)) % (var_8))))) >> (((arr_20 [i_0]) - (6099552158289287280ULL)))));
                    var_24 = ((/* implicit */int) (~((~((~(var_4)))))));
                    arr_22 [i_0] [11U] [11U] [i_5] [(unsigned short)11] &= ((/* implicit */unsigned long long int) (((_Bool)1) ? (var_9) : (3455598623U)));
                }
                for (unsigned int i_8 = 1; i_8 < 17; i_8 += 3) /* same iter space */
                {
                    var_25 = ((max((arr_15 [i_1 + 1] [i_8 - 1] [i_8 + 1] [i_8 - 1]), (arr_15 [i_1 - 1] [i_8 + 1] [i_8 + 1] [i_8 + 1]))) ? (((((/* implicit */_Bool) arr_18 [i_0] [i_1 + 1] [i_5] [i_5] [i_8 + 1] [3ULL])) ? (((/* implicit */long long int) arr_16 [i_8 + 1])) : (9116511307227327142LL))) : (((/* implicit */long long int) ((arr_15 [i_1 - 1] [i_8 - 1] [i_8 + 1] [i_8 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [14LL] [14LL] [(signed char)4] [i_8] [i_8 - 1] [i_8 - 1]))) : (arr_16 [i_8 + 1])))));
                    arr_26 [i_0] [i_8] [i_8] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((max((var_9), (((/* implicit */unsigned int) var_0)))) + (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))))));
                    var_27 = ((/* implicit */unsigned long long int) ((var_9) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 17453762082579989982ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_5))) != (((/* implicit */unsigned long long int) ((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_7))))))))))));
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), ((-(max((992981991129561634ULL), (((/* implicit */unsigned long long int) (short)16647))))))));
                }
                arr_27 [3ULL] [i_5] |= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
            }
            for (unsigned int i_9 = 1; i_9 < 16; i_9 += 2) 
            {
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [14] [i_9] [i_1 - 1] [i_1 - 1])) & (((/* implicit */int) arr_15 [i_9] [(short)16] [i_1 - 1] [i_1 - 1]))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_15 [i_9 + 1] [2ULL] [i_9] [i_1 + 1])), (var_4))))));
                var_30 |= ((/* implicit */unsigned short) (~(((long long int) arr_4 [i_0] [i_9 + 2] [i_1]))));
            }
        }
        for (unsigned short i_10 = 0; i_10 < 18; i_10 += 3) 
        {
            var_31 *= ((/* implicit */unsigned long long int) arr_4 [i_0] [i_10] [i_10]);
            /* LoopSeq 2 */
            for (unsigned int i_11 = 0; i_11 < 18; i_11 += 3) 
            {
                var_32 -= ((/* implicit */long long int) var_6);
                var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) (+(7846117703257514774ULL))))));
            }
            for (short i_12 = 0; i_12 < 18; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (long long int i_14 = 0; i_14 < 18; i_14 += 2) 
                    {
                        {
                            arr_44 [i_0] [i_0] [i_0] [i_0] [i_10] = ((/* implicit */unsigned short) max((arr_34 [i_0] [(_Bool)1] [i_0] [i_0]), (((/* implicit */signed char) (_Bool)1))));
                            var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (3518230882264407881ULL) : (((/* implicit */unsigned long long int) var_2)))))))))));
                            var_35 = ((/* implicit */signed char) var_8);
                            var_36 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 2014753279186945816LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (arr_36 [i_0] [7LL] [i_0] [i_10]))), (((/* implicit */unsigned long long int) max((var_2), (arr_5 [i_0]))))));
                        }
                    } 
                } 
                var_37 = ((/* implicit */signed char) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))));
            }
            var_38 = ((/* implicit */unsigned long long int) var_9);
        }
        var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (max((((((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (6185280810761358238LL))), (((/* implicit */long long int) var_3))))));
        var_40 = ((/* implicit */unsigned int) var_8);
    }
    for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 1) 
    {
        var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_29 [i_15] [8U] [i_15])) >= (((/* implicit */int) arr_29 [i_15] [(_Bool)1] [i_15]))))) % (((((/* implicit */int) arr_29 [i_15] [i_15] [i_15])) | (((/* implicit */int) arr_29 [i_15] [i_15] [i_15])))))))));
        /* LoopNest 2 */
        for (int i_16 = 1; i_16 < 11; i_16 += 3) 
        {
            for (unsigned int i_17 = 1; i_17 < 9; i_17 += 3) 
            {
                {
                    var_42 = ((/* implicit */unsigned char) ((max((arr_8 [i_16] [i_17] [i_17] [i_17] [i_15] [i_16]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_13 [i_15]) : (arr_13 [i_15])))))) & (max((var_4), (((unsigned long long int) var_9))))));
                    var_43 = ((/* implicit */unsigned short) 0ULL);
                }
            } 
        } 
        var_44 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_46 [i_15] [i_15])), (((((/* implicit */_Bool) arr_1 [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))) : (min((((/* implicit */unsigned long long int) arr_51 [0LL] [0LL])), (var_8)))))));
        var_45 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-86)) : (((/* implicit */int) (signed char)86))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)25105))));
    }
    /* LoopSeq 1 */
    for (short i_18 = 0; i_18 < 10; i_18 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_19 = 0; i_19 < 10; i_19 += 4) 
        {
            var_46 = ((/* implicit */int) var_4);
            /* LoopNest 2 */
            for (unsigned int i_20 = 1; i_20 < 9; i_20 += 2) 
            {
                for (unsigned long long int i_21 = 1; i_21 < 7; i_21 += 1) 
                {
                    {
                        arr_64 [i_21 + 3] = ((/* implicit */short) var_9);
                        arr_65 [8ULL] [i_19] [i_20] [8ULL] = ((/* implicit */long long int) (unsigned char)34);
                        var_47 = ((/* implicit */unsigned char) ((arr_1 [(signed char)14]) < (((unsigned long long int) arr_41 [i_19] [2ULL] [i_21 + 3] [i_21 + 3]))));
                    }
                } 
            } 
            var_48 = ((/* implicit */unsigned char) var_6);
            arr_66 [i_19] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (unsigned char)159))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) min(((_Bool)1), ((_Bool)1)))))) : (0LL)));
        }
        /* LoopNest 3 */
        for (unsigned int i_22 = 1; i_22 < 9; i_22 += 2) 
        {
            for (unsigned int i_23 = 0; i_23 < 10; i_23 += 2) 
            {
                for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                {
                    {
                        arr_74 [i_18] [i_22] [i_24] = ((/* implicit */_Bool) ((short) arr_53 [i_24 - 1] [i_24 - 1] [i_24 - 1] [i_24 - 1]));
                        arr_75 [i_24] [i_18] [i_22] [i_24 - 1] = ((/* implicit */_Bool) ((arr_60 [i_18] [i_23] [i_24]) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -904918737)) ? (2147483638) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) var_9)) : (var_4))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 16421684406360441468ULL)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (arr_11 [(_Bool)1] [i_24 - 1] [i_22 + 1] [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (_Bool)1))))))))));
                        arr_76 [i_18] |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (min((max((var_8), (arr_41 [i_18] [i_18] [i_18] [i_18]))), (((/* implicit */unsigned long long int) max(((unsigned short)40447), (((/* implicit */unsigned short) (_Bool)1)))))))));
                        var_49 |= ((/* implicit */short) min(((~(((/* implicit */int) arr_29 [i_22] [i_22 - 1] [i_24 - 1])))), (((/* implicit */int) arr_29 [i_22] [i_22 - 1] [i_24 - 1]))));
                        var_50 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_6))))) && ((_Bool)1)));
                    }
                } 
            } 
        } 
        var_51 = ((/* implicit */short) (~(((/* implicit */int) var_1))));
    }
}
