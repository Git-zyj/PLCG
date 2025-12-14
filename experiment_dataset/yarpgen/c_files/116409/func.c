/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116409
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_11 = (~(((((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */int) (unsigned char)91)))) / (((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))))));
        var_12 = ((/* implicit */_Bool) ((-9223372036854775792LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-13992)) && (((/* implicit */_Bool) min((9ULL), (((/* implicit */unsigned long long int) var_3))))))) && (((/* implicit */_Bool) max(((~(-9223372036854775792LL))), (((/* implicit */long long int) (+(var_6)))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_5)) ? (10U) : (var_6)))));
            arr_9 [i_1] = ((/* implicit */unsigned short) (~((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (630328782U)))));
        }
        for (short i_2 = 0; i_2 < 22; i_2 += 4) /* same iter space */
        {
            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) max((var_5), (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned long long int) arr_11 [i_0] [i_2])))) : (max((((/* implicit */unsigned long long int) arr_10 [10ULL] [(_Bool)1] [(_Bool)1])), (var_5))))))))));
            /* LoopNest 2 */
            for (long long int i_3 = 1; i_3 < 21; i_3 += 3) 
            {
                for (unsigned short i_4 = 1; i_4 < 21; i_4 += 4) 
                {
                    {
                        var_14 -= ((/* implicit */signed char) ((int) (+((-(var_10))))));
                        var_15 -= ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_10 [i_3 - 1] [(short)18] [i_4 + 1])), (var_5))))));
                    }
                } 
            } 
            var_16 = ((/* implicit */long long int) max((arr_14 [i_0] [i_0] [0LL] [i_2]), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_1)))) || (((/* implicit */_Bool) 8905960293324851031ULL)))))));
            arr_19 [i_0] [i_2] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_2)), ((+((+(arr_11 [i_0] [i_0])))))));
        }
        for (short i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_0])) ? (var_0) : (((/* implicit */unsigned int) -2020217298)))) >> (((((unsigned int) arr_4 [i_0])) * (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0]))))))))))));
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (1289218929U)))) ? (((/* implicit */unsigned long long int) (+(9223372036854775806LL)))) : (var_5)))))));
            arr_23 [i_0] [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) var_9))));
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((int) arr_14 [i_0] [i_0] [i_5] [i_0]))))) < (((((/* implicit */_Bool) (~(-6068061611228342648LL)))) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [i_5] [(signed char)12])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24528))) : (57125740031826094ULL)))))));
        }
        for (short i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned int) min((var_20), (var_6)));
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (+(((/* implicit */int) (signed char)15)))))));
            var_22 = ((/* implicit */unsigned short) (+(((int) (signed char)-114))));
        }
    }
    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
    {
        arr_30 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((-2147483634), (((/* implicit */int) var_4)))) + (((/* implicit */int) min(((short)17506), (((/* implicit */short) var_7)))))))) ? (var_3) : (((/* implicit */long long int) ((int) (~(((/* implicit */int) (unsigned char)234))))))));
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (+((-(((((/* implicit */_Bool) 6917529027641081856ULL)) ? (arr_6 [i_7]) : (var_5))))))))));
    }
    var_24 = ((/* implicit */short) var_2);
    /* LoopSeq 3 */
    for (unsigned char i_8 = 2; i_8 < 20; i_8 += 3) 
    {
        arr_33 [i_8] = var_3;
        var_25 = ((/* implicit */unsigned long long int) (+(arr_20 [i_8] [i_8] [i_8 - 1])));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_26 -= ((/* implicit */_Bool) min(((+(((unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) (short)17509))));
        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (short)-32766)) : (((/* implicit */int) (short)-16653))));
        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((unsigned int) min((arr_14 [i_9] [i_9] [20] [(_Bool)1]), (((/* implicit */unsigned int) arr_12 [i_9] [i_9] [i_9]))))))));
        var_29 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) var_4))))));
        arr_36 [i_9] = ((/* implicit */unsigned char) ((((_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_20 [i_9] [i_9] [i_9])) : (-9223372036854775789LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)60766)) || (((/* implicit */_Bool) 4150317344U))))) : (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned short i_10 = 0; i_10 < 23; i_10 += 4) 
    {
        arr_39 [i_10] = (+(var_6));
        /* LoopNest 3 */
        for (unsigned int i_11 = 1; i_11 < 19; i_11 += 4) 
        {
            for (int i_12 = 1; i_12 < 21; i_12 += 2) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 4) 
                {
                    {
                        arr_50 [i_12] [i_11] [i_12] [i_11 + 4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)60766)) && (((/* implicit */_Bool) 6424649988681617989ULL))))), (((((/* implicit */_Bool) arr_38 [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_12 - 1]))) : (((unsigned int) var_7))))));
                        var_30 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (((long long int) ((var_6) >= (var_0)))));
                    }
                } 
            } 
        } 
    }
    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? (var_2) : (var_10)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))));
}
