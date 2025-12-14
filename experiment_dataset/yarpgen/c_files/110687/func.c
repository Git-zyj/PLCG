/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110687
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
    var_13 = var_11;
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)108)) ? (-1963610301) : (((/* implicit */int) (unsigned char)124))))) : (-2234252122711431932LL)));
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (unsigned short i_3 = 3; i_3 < 10; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) arr_15 [i_3] [i_3 + 2] [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 3] [i_3 - 3]);
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_2]))));
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) -1125489574)) <= (arr_13 [i_2] [i_2] [i_2])));
                            var_16 = ((4294967279U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)14))));
                        }
                    } 
                } 
            } 
            arr_17 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_4 [i_0])) > (16U))))) >= ((-(16U)))));
            arr_18 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [10U]))));
        }
        for (long long int i_5 = 1; i_5 < 10; i_5 += 2) /* same iter space */
        {
            arr_22 [i_0] [i_0] = ((/* implicit */short) (!(min(((!(((/* implicit */_Bool) arr_11 [i_5] [i_0] [i_5])))), (((((/* implicit */_Bool) 971542266584720731ULL)) && (((/* implicit */_Bool) arr_12 [i_0] [8LL] [i_0] [4ULL]))))))));
            arr_23 [i_0] [i_0] [i_0] = (+(((((/* implicit */_Bool) arr_20 [i_5 + 2] [i_5] [i_5])) ? (((/* implicit */int) arr_21 [i_5 - 1] [i_5 - 1])) : (((/* implicit */int) arr_21 [i_5 + 1] [(unsigned short)11])))));
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [4ULL])) && (((/* implicit */_Bool) arr_2 [i_5 - 1] [10LL])))))) / (((((/* implicit */_Bool) arr_15 [i_0] [6U] [i_0] [i_5 + 2] [i_0] [0LL] [i_5 + 2])) ? (17592183947264ULL) : ((-(10113238604996241443ULL))))))))));
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (-((+(((/* implicit */int) (_Bool)1)))))))));
        }
        for (long long int i_6 = 1; i_6 < 10; i_6 += 2) /* same iter space */
        {
            var_19 += ((/* implicit */_Bool) 16U);
            arr_28 [i_0] = ((/* implicit */_Bool) 10U);
        }
        for (long long int i_7 = 1; i_7 < 10; i_7 += 2) /* same iter space */
        {
            arr_32 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 41637403)), (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_7] [i_0])), (3114176464627321870LL)))) ? (4294967285U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967286U))))))))));
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                for (unsigned short i_9 = 2; i_9 < 11; i_9 += 4) 
                {
                    {
                        arr_40 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) 18446744073709551608ULL);
                        arr_41 [i_0] [i_0] [i_0] [i_9] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(4294967285U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0]))) : (min((((/* implicit */unsigned long long int) (unsigned short)49020)), (971542266584720731ULL))))) != ((+(((((/* implicit */unsigned long long int) 4294967278U)) * (18446744073709551603ULL)))))));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 2105417052)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483641)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [(unsigned char)8]))) : (16U)))) ? (((((/* implicit */_Bool) 4294967280U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0]))) : (971542266584720730ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((min(((short)-2), (((/* implicit */short) (unsigned char)0)))), (arr_10 [i_0] [i_7] [i_9 - 1])))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_10 = 4; i_10 < 10; i_10 += 1) 
            {
                for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    for (signed char i_12 = 0; i_12 < 12; i_12 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */short) ((17475201807124830884ULL) >> ((((((+(min(((-2147483647 - 1)), (((/* implicit */int) (unsigned short)26309)))))) - (-2147483621))) + (74)))));
                            arr_50 [i_0] [i_0] = ((/* implicit */unsigned char) min(((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17322))) + (arr_19 [i_0] [i_0] [i_0]))))), (((arr_14 [i_7 - 1] [i_10 - 4] [i_0] [i_10] [i_10 - 3] [i_11] [i_11]) * (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) * (16U))))))));
                            arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((min(((-(arr_19 [i_10] [i_10] [i_10]))), (max((((/* implicit */unsigned long long int) 0LL)), (8268278771476610861ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_15 [i_0] [2LL] [i_10] [6U] [i_12] [i_12] [i_10]), (arr_13 [i_0] [8ULL] [i_0])))))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 2; i_13 < 11; i_13 += 2) 
        {
            for (short i_14 = 0; i_14 < 12; i_14 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) 2105417042))));
                    var_23 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_10 [i_0] [i_13] [i_13 - 1])) ? (arr_54 [i_0] [i_0]) : ((+(arr_37 [i_0] [(signed char)8] [i_14] [(signed char)1] [i_14] [(signed char)10])))))));
                }
            } 
        } 
    }
    var_24 = 17475201807124830877ULL;
}
