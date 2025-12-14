/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183437
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
    var_16 = ((/* implicit */unsigned short) var_10);
    var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_7)) + (((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_13))))) : (991522254391766137ULL)))));
    var_18 = ((/* implicit */_Bool) var_8);
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 36028797018962944ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18410715276690588694ULL)));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_0 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0])))) - ((+(var_6))))) - (11944824519728313404ULL)))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((unsigned int) var_7)), (((/* implicit */unsigned int) (-(-409688462))))))), (min((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (signed char)76))))), (arr_0 [i_0])))));
    }
    for (int i_1 = 3; i_1 < 8; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 1; i_2 < 8; i_2 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_12)) ? (((arr_5 [i_2] [i_2 + 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */unsigned long long int) var_8)))));
            var_22 ^= ((/* implicit */unsigned short) var_0);
            /* LoopSeq 1 */
            for (int i_3 = 1; i_3 < 9; i_3 += 4) 
            {
                arr_10 [i_1 - 3] = ((/* implicit */int) ((((arr_0 [i_1 + 2]) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) || (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1 - 2] [i_2] [i_2])) || (((/* implicit */_Bool) 2412912312U))))) >> (((arr_0 [i_1 - 2]) - (8348292369983428889LL))))))));
                arr_11 [i_2] [0ULL] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((arr_4 [i_1]) ? (1350284090453943082ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (min((var_14), (((/* implicit */int) arr_1 [i_1 - 2] [i_1])))) : (((/* implicit */int) (signed char)-1))))));
                var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1 - 2])) ? (((((/* implicit */_Bool) (unsigned char)34)) ? (11063762360968727114ULL) : (18410715276690588666ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_6 [i_3 + 1]), (arr_6 [i_1 - 3])))))));
            }
            var_24 ^= ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_1 + 3] [i_1 + 3] [i_1 + 3])) & (((/* implicit */int) arr_1 [i_1 - 2] [i_1 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_7 [i_1]), (arr_7 [i_1]))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-28))) | (18410715276690588694ULL))) ^ (((/* implicit */unsigned long long int) (~(var_5)))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_14 [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)47)) + (((/* implicit */int) (unsigned char)7)))) <= (((/* implicit */int) ((short) (unsigned char)7)))));
            arr_15 [i_1 - 2] |= ((/* implicit */int) (~(max((((/* implicit */long long int) (signed char)-78)), (3093142236383141060LL)))));
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            var_25 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_12 [i_1] [i_5] [i_5])) : (((/* implicit */int) arr_12 [i_5] [i_5] [i_1]))))) - (((var_11) ? (var_6) : (((/* implicit */unsigned long long int) var_7))))));
            arr_20 [i_5] [4] = ((/* implicit */unsigned short) arr_5 [i_1] [i_1 + 2]);
            var_26 = ((/* implicit */long long int) ((unsigned long long int) var_1));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                var_27 = ((/* implicit */short) arr_25 [i_1 - 3] [i_1] [i_1]);
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-76))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2449454740655585026ULL)) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) var_13)))))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 1; i_8 < 8; i_8 += 4) 
                {
                    for (signed char i_9 = 1; i_9 < 9; i_9 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [10ULL] [i_8 - 1] [i_8] [i_8])) ? (arr_9 [i_8 - 1] [i_8 - 1] [3U] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248)))));
                            var_30 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_8 - 1] [i_8 - 1] [i_6] [i_1] [i_6] [i_1]))) : (var_9))) << ((((-(var_6))) - (11944824519728313321ULL)))));
                        }
                    } 
                } 
            }
            for (long long int i_10 = 1; i_10 < 10; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 1; i_11 < 10; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            arr_42 [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_1 + 2] [i_10 + 1] [i_10]))));
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) % (((/* implicit */int) arr_4 [(unsigned char)4]))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)99)) : (var_14))) : (((/* implicit */int) arr_40 [i_1 + 2] [i_1 + 2] [i_1 - 3] [i_10 + 1] [i_11 + 1]))));
                            arr_43 [i_1] [i_6] [i_6] [i_11] [i_12] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(4041961008U))))));
                            var_32 = ((/* implicit */unsigned int) (+(arr_41 [i_11] [i_11 - 1] [i_11 + 1] [i_11] [i_11] [i_6])));
                        }
                    } 
                } 
                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_32 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 + 3])) : (((/* implicit */int) arr_32 [i_1 - 2] [i_1] [i_1] [i_1 + 3] [i_1 + 1]))));
                var_34 = ((/* implicit */unsigned long long int) arr_31 [i_1] [i_6] [i_6] [i_1]);
            }
            /* LoopNest 3 */
            for (unsigned int i_13 = 1; i_13 < 10; i_13 += 4) 
            {
                for (long long int i_14 = 0; i_14 < 11; i_14 += 4) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_39 [i_1 - 3] [i_6] [i_13 + 1] [i_6] [i_15]))));
                            arr_54 [i_1] [(unsigned char)6] [i_13] [i_15] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-76)) ^ (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((var_1) & (var_0)))) : (var_6)));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned char i_16 = 0; i_16 < 24; i_16 += 4) 
    {
        var_36 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_57 [i_16]) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_12)) < (var_7))))))))));
        /* LoopSeq 1 */
        for (int i_17 = 0; i_17 < 24; i_17 += 4) 
        {
            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 127912171U)) ? (((/* implicit */long long int) arr_58 [i_16])) : (((long long int) (((_Bool)1) ? (5621240696971828723ULL) : (5395137435513279340ULL))))));
            var_38 = ((/* implicit */signed char) arr_62 [i_16]);
            var_39 = ((/* implicit */long long int) ((unsigned long long int) ((var_15) | (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_17] [i_16]))))));
        }
    }
    for (unsigned char i_18 = 0; i_18 < 15; i_18 += 3) 
    {
        var_40 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((((/* implicit */_Bool) arr_63 [(unsigned short)10])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (var_2))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 575270524)) ? (((/* implicit */unsigned int) arr_58 [i_18])) : (127912171U)))))) > (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) arr_59 [i_18])) < (-9223372036854775803LL)))))))));
        var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_60 [i_18] [i_18] [i_18]), (arr_61 [i_18] [i_18])))) >> (((/* implicit */int) (unsigned char)15))));
        var_42 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_61 [i_18] [i_18])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (var_3)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_18]))) - (((unsigned int) var_8)))) : (((((/* implicit */_Bool) arr_56 [i_18] [i_18])) ? (arr_56 [i_18] [i_18]) : (arr_56 [i_18] [i_18])))));
    }
}
