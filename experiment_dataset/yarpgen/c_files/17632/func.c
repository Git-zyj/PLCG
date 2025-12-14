/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17632
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
    var_12 = ((/* implicit */unsigned int) min((4915071247951043674LL), (((/* implicit */long long int) (short)-32297))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        var_13 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9213308314519412223ULL)))))) != (((((/* implicit */_Bool) (unsigned char)4)) ? (-4915071247951043655LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
        arr_2 [i_0 - 2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((2267594625009676174ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)38406)) ^ (((/* implicit */int) var_4))))) ^ (var_0)))));
    }
    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) % (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_6)) ? (16179149448699875441ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
    /* LoopNest 2 */
    for (unsigned int i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) ((((6548425818275691036ULL) / (2267594625009676156ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 - 1] [i_1])))));
                /* LoopSeq 4 */
                for (unsigned long long int i_3 = 2; i_3 < 8; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_4 = 3; i_4 < 8; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_15 [i_1] [i_1] [i_1 + 1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((0U) - (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_3 + 2] [i_1] [0U] [i_3 + 2])) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) (signed char)-1)))))))) ? (((/* implicit */int) ((unsigned short) var_1))) : (((/* implicit */int) ((unsigned char) (short)0)))));
                                arr_16 [i_1] [i_2] [i_3 + 1] [i_4] [i_1] = ((/* implicit */signed char) var_8);
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_2] = ((/* implicit */short) ((((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (4286578688U))) * (3U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_0))))));
                    arr_18 [7LL] [i_1] [i_3] = ((/* implicit */_Bool) min((16179149448699875442ULL), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-112)) * (((/* implicit */int) var_6)))) + (((/* implicit */int) ((unsigned short) var_3))))))));
                    arr_19 [i_1] [i_1] [i_3] [i_3 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((var_7) ? (((/* implicit */int) arr_10 [i_1] [i_1 + 1] [i_1 + 1] [i_1] [0U] [i_1])) : (((/* implicit */int) var_11))))))) ? (((((/* implicit */int) arr_10 [(signed char)8] [8LL] [i_3] [i_3] [(_Bool)1] [i_1])) * (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_2] [i_3 - 1] [i_3 - 1])))) : (((/* implicit */int) var_5))));
                    arr_20 [i_1] [i_3] = ((/* implicit */_Bool) ((((2821973052U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1 - 1] [i_2] [i_2] [i_3 - 2] [i_3 + 1]))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [(unsigned char)3] [7] [(_Bool)0])))));
                }
                /* vectorizable */
                for (long long int i_6 = 3; i_6 < 9; i_6 += 3) /* same iter space */
                {
                    arr_24 [i_1 - 1] [i_1] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2267594625009676173ULL)) ? (18403119301712518169ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8534)))));
                    arr_25 [i_1] [i_2] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) var_10))));
                }
                for (long long int i_7 = 3; i_7 < 9; i_7 += 3) /* same iter space */
                {
                    arr_29 [i_1] [i_2] [i_7] [i_1] = ((/* implicit */unsigned char) 2267594625009676180ULL);
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3704))) & (((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)8)) ^ (((/* implicit */int) var_7))))) - (((unsigned int) var_9))))));
                                arr_35 [i_1] [i_2] [i_7] [i_1] [i_9] [i_9] = ((/* implicit */_Bool) var_2);
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) | (((((/* implicit */_Bool) arr_10 [(unsigned char)8] [i_1 + 1] [i_7 + 1] [i_7 - 1] [i_9 - 1] [(signed char)6])) ? (((/* implicit */int) arr_10 [i_2] [(_Bool)1] [i_7] [i_7 - 1] [i_9 - 1] [i_9])) : (((/* implicit */int) var_11))))));
                                var_17 ^= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) arr_10 [(signed char)1] [i_9 - 1] [i_7 + 1] [i_8] [(short)7] [i_7 - 1]))))) > (((((/* implicit */int) var_10)) + (((/* implicit */int) arr_31 [i_7] [i_7] [i_7 - 3] [(unsigned short)2]))))));
                                arr_36 [0] [(signed char)6] [i_1] [i_7] [i_8] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_1) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))))) % ((~(min((((/* implicit */unsigned long long int) (_Bool)1)), (2267594625009676180ULL)))))));
                            }
                        } 
                    } 
                    arr_37 [i_1] [7] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)32)) + (((((/* implicit */int) var_10)) & (((/* implicit */int) arr_4 [i_1]))))));
                    arr_38 [i_1] = ((((/* implicit */int) ((((/* implicit */int) arr_22 [i_1] [i_7] [i_7 - 3])) < (((/* implicit */int) arr_22 [(_Bool)1] [(_Bool)1] [i_7 - 1]))))) * ((+(975401782))));
                }
                for (unsigned char i_10 = 0; i_10 < 10; i_10 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_11 = 2; i_11 < 8; i_11 += 2) 
                    {
                        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                        {
                            {
                                arr_47 [8U] [8U] [i_1] [9LL] [i_12] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_5)) || (var_1))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))));
                                var_18 = ((/* implicit */unsigned short) (~(((var_7) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)22286)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) -4915071247951043649LL)))))))));
                                var_19 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_31 [i_1 - 1] [i_1] [i_1 - 1] [i_11])) > (((/* implicit */int) (unsigned short)22303))))), (min((16179149448699875442ULL), (((/* implicit */unsigned long long int) (((_Bool)1) ? (4915071247951043662LL) : (arr_11 [i_1] [4LL] [i_10] [i_11] [i_11] [(_Bool)1]))))))));
                                var_20 = ((/* implicit */int) (short)32755);
                                arr_48 [i_1] [i_1] [3] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) var_3);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (16179149448699875435ULL)))))))));
                    arr_49 [(unsigned char)4] &= ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]))) / (1675929480U))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_34 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]))))))));
                }
                arr_50 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_23 [i_1] [i_1 - 1] [i_2]) < (arr_23 [i_1 - 1] [i_1 + 1] [i_1])))) & (((((/* implicit */int) var_1)) / (((/* implicit */int) var_10))))));
                arr_51 [i_1] = var_8;
                var_22 ^= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)14)) >> (0ULL))) << ((((((~(((/* implicit */int) (_Bool)1)))) + (32))) - (16)))))), (min((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (var_0))), (((/* implicit */unsigned int) var_1))))));
            }
        } 
    } 
}
