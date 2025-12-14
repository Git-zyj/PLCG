/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145507
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
    var_12 = ((/* implicit */unsigned char) var_9);
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))), (min((var_7), (1739215413183169565ULL)))))) ? (((/* implicit */unsigned long long int) var_1)) : (((11936787588304628379ULL) % (((/* implicit */unsigned long long int) ((var_0) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned char) -1179059281);
                var_15 = ((/* implicit */long long int) 1179059269);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        var_16 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned char)153)) ? (arr_3 [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_3))))))), (((((((/* implicit */long long int) -1179059270)) <= (var_5))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)890), (((/* implicit */short) arr_4 [i_2] [i_2] [i_2])))))) : (((((/* implicit */_Bool) 1603316094U)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49735)))))))));
        var_17 = ((/* implicit */unsigned int) ((unsigned char) (_Bool)0));
        var_18 = ((/* implicit */int) (short)24055);
        arr_8 [i_2] = ((((/* implicit */_Bool) (signed char)88)) ? (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (short)-24047)), ((unsigned short)63)))), (((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58877))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_2])) | (((/* implicit */int) (signed char)(-127 - 1)))))));
        var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) 1179059269)), (arr_3 [i_2] [i_2] [i_2])));
    }
    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 3) 
    {
        var_20 = ((/* implicit */signed char) arr_1 [i_3] [i_3]);
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)22))) : (456265746125534588ULL)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_4 = 2; i_4 < 11; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_5 = 4; i_5 < 11; i_5 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    var_22 += ((/* implicit */signed char) var_2);
                    arr_18 [(signed char)11] [i_3 + 2] [i_4] [i_5 - 1] [i_5 - 2] [i_6] = ((/* implicit */signed char) ((unsigned long long int) arr_2 [i_5 + 1] [i_5 - 1] [i_5]));
                }
                for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */int) (signed char)59)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
                    arr_22 [i_3] [i_3 + 2] [i_3] [i_3] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (unsigned short)38316)) < (1179059269))));
                    var_24 = ((/* implicit */long long int) ((unsigned int) arr_6 [i_3 - 1]));
                    arr_23 [i_3] [i_4] [11ULL] [i_7] = ((/* implicit */unsigned long long int) (unsigned char)7);
                }
                arr_24 [i_3 + 2] [(_Bool)0] [i_3 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) 1179059269))));
                arr_25 [i_3] [i_3] [i_4 + 2] [i_5 + 2] = ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (arr_16 [i_5 - 3] [i_5 - 4] [i_4] [i_3]) : (((/* implicit */unsigned long long int) arr_15 [9LL])));
            }
            for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
            {
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-104)) ? (arr_29 [i_4 + 2] [i_4] [i_3 - 2]) : (((/* implicit */long long int) var_1))));
                arr_30 [10U] [i_4 - 2] [(_Bool)1] = ((long long int) arr_27 [i_3] [i_3 - 2] [i_4 - 2]);
            }
            var_26 = ((/* implicit */short) arr_5 [i_3 + 2]);
            var_27 = ((/* implicit */unsigned short) 1179059260);
            var_28 += ((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [i_4 - 2] [i_4 + 1] [i_4 - 2]))));
        }
        var_29 = ((/* implicit */short) max((arr_9 [i_3]), (((/* implicit */unsigned int) (signed char)-120))));
    }
    for (unsigned int i_9 = 3; i_9 < 10; i_9 += 1) 
    {
        arr_34 [i_9] = ((/* implicit */signed char) arr_10 [i_9]);
        /* LoopNest 2 */
        for (signed char i_10 = 1; i_10 < 9; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                {
                    arr_43 [i_9 + 1] [i_9] [0U] [i_11] = ((/* implicit */unsigned short) (signed char)-10);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        arr_46 [i_9] [i_10] [i_11] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_45 [i_9 - 1] [(unsigned short)3] [i_10] [(unsigned char)8] [i_12] [i_12]))))) && (((/* implicit */_Bool) 5664595736589983981LL))));
                        var_30 = ((/* implicit */long long int) ((((((var_4) + (2147483647))) >> (((((/* implicit */int) (signed char)123)) - (93))))) << (((((long long int) -3338927045762071092LL)) + (3338927045762071110LL)))));
                    }
                    for (long long int i_13 = 1; i_13 < 8; i_13 += 3) 
                    {
                        arr_51 [i_10] [i_9] = ((((/* implicit */_Bool) arr_2 [i_11] [i_10] [i_9])) ? (min((((arr_47 [i_9] [i_9] [(unsigned short)3] [i_11] [i_13] [i_13]) % (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) -1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_9] [i_9] [i_9]))));
                        arr_52 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_33 [i_9 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_9 - 1]))) : (max((var_5), (-4250131722014809033LL)))));
                    }
                    for (signed char i_14 = 4; i_14 < 8; i_14 += 4) 
                    {
                        var_31 = ((((/* implicit */_Bool) -1179059297)) ? ((-(min((((/* implicit */unsigned long long int) arr_32 [(unsigned short)7])), (var_7))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_2)), (((((/* implicit */int) (unsigned char)7)) ^ (((/* implicit */int) (unsigned short)56119))))))));
                        var_32 = (+(max((((long long int) var_1)), (((/* implicit */long long int) (signed char)-1)))));
                        var_33 = ((/* implicit */long long int) var_2);
                    }
                    var_34 = ((/* implicit */int) var_2);
                }
            } 
        } 
        var_35 = ((/* implicit */int) ((((/* implicit */_Bool) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((var_6) - (8934108822409765994ULL)))))) ? (((((/* implicit */unsigned long long int) arr_55 [i_9 - 1] [i_9 - 2] [i_9] [i_9 - 2])) & (5440331807227609070ULL))) : (((/* implicit */unsigned long long int) ((arr_55 [i_9 - 2] [i_9 + 1] [i_9 + 1] [i_9 - 1]) | (((/* implicit */unsigned int) var_4)))))));
        var_36 = ((/* implicit */unsigned short) 16847127504115766891ULL);
        arr_56 [i_9] [i_9 + 1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_9 - 2])) << (((((/* implicit */int) (short)24055)) - (24053)))))), (min((((/* implicit */unsigned long long int) (signed char)0)), (18446744073709551609ULL)))));
    }
}
