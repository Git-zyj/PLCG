/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175052
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            arr_8 [11LL] [i_1] [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) 1913535288)) ^ (arr_2 [(signed char)7] [(unsigned short)11])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)114))) : (max((var_3), (((/* implicit */long long int) var_7))))))));
            var_12 = ((/* implicit */long long int) ((unsigned int) 1858043854U));
        }
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (signed char)114))));
            var_14 -= ((/* implicit */unsigned short) (((~(((/* implicit */int) (signed char)-118)))) <= (((/* implicit */int) ((_Bool) arr_0 [i_0] [(signed char)13])))));
            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((arr_11 [i_0] [i_0] [i_0]) ? (805306368U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_2] [(unsigned short)14]))))))));
        }
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            var_16 = ((/* implicit */unsigned int) ((_Bool) min((arr_7 [i_0] [i_0]), (arr_7 [i_0] [i_0]))));
            var_17 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((arr_13 [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_3]))))) && (((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned short) (signed char)-106))))))))));
        }
        arr_14 [i_0] = ((/* implicit */signed char) min(((~(((/* implicit */int) arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (signed char)98)) : (((/* implicit */int) var_0))))));
        var_18 = (!(((/* implicit */_Bool) ((arr_13 [i_0] [i_0] [(signed char)5]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))) : (9942254300655536809ULL)))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) arr_15 [i_4] [(unsigned short)16]))));
                var_20 = ((/* implicit */unsigned int) max((var_20), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (805306368U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (min((4138810462U), (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) % (((/* implicit */int) var_2)))))))))));
                arr_22 [i_4] [5U] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((signed char) (~(((unsigned int) (signed char)-127)))));
                var_21 = ((/* implicit */unsigned int) var_4);
            }
            for (signed char i_7 = 3; i_7 < 15; i_7 += 3) 
            {
                arr_25 [i_4] [i_4] [i_5] [4ULL] |= ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_1)))) * (arr_19 [i_4] [i_5] [(unsigned short)12]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (max((((/* implicit */long long int) (signed char)11)), (var_3))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_18 [(_Bool)1] [(signed char)14]))))))))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */short) min(((signed char)114), ((signed char)-42)))), (arr_15 [i_7] [i_4])))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [(signed char)5] [i_7] [i_5] [i_4])))))));
                var_23 = ((/* implicit */unsigned long long int) var_2);
                arr_26 [i_4] [i_5] = ((signed char) ((long long int) (signed char)1));
            }
            for (unsigned int i_8 = 4; i_8 < 18; i_8 += 1) 
            {
                var_24 = ((/* implicit */signed char) (-(max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)11239)) != (((/* implicit */int) (signed char)-39))))), (min((arr_29 [i_4] [i_4] [i_4] [i_4]), (((/* implicit */unsigned int) var_6))))))));
                var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_17 [i_5] [(_Bool)1] [i_8 + 1]), (((/* implicit */long long int) arr_15 [14U] [i_4])))))));
                var_26 = ((/* implicit */int) ((((((/* implicit */_Bool) ((signed char) (unsigned short)1601))) && ((!(((/* implicit */_Bool) (signed char)106)))))) && (((/* implicit */_Bool) var_8))));
                var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-125)))))));
                /* LoopSeq 4 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_34 [i_4] [i_4] [i_8] [i_4] [i_4] = ((/* implicit */short) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_19 [i_4] [16LL] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_4] [i_4]))) : (arr_19 [(unsigned char)18] [(signed char)8] [14ULL])))))));
                    arr_35 [i_4] = ((/* implicit */signed char) ((min((arr_17 [i_8 - 2] [i_8 - 2] [i_8 - 3]), (arr_17 [i_9] [i_8 + 1] [i_8 - 3]))) | (((((/* implicit */_Bool) var_2)) ? (arr_17 [i_9] [i_8 - 3] [i_8 - 3]) : (arr_17 [i_8] [i_8 - 3] [i_8 - 1])))));
                }
                for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 4) /* same iter space */
                {
                    arr_38 [i_4] [i_5] [i_4] [i_8] = ((/* implicit */unsigned int) min((5851973714642831274LL), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_20 [i_10] [i_8] [i_4] [i_4])) ? (arr_19 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) 3367155274U)))) >= (arr_24 [i_4] [7LL] [i_4]))))));
                    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (arr_20 [i_8 - 1] [i_8] [i_8] [i_8])))), (arr_24 [i_4] [i_5] [i_10]))))));
                }
                for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 4) /* same iter space */
                {
                    var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) arr_29 [i_11] [i_11] [i_11] [i_4]))));
                    var_30 -= arr_41 [i_4] [i_11] [i_4] [2ULL] [i_8] [i_11];
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)93))))) ? (((/* implicit */int) arr_41 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) : (((int) arr_41 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 4) /* same iter space */
                {
                    arr_45 [(signed char)10] [i_4] [i_4] [(signed char)10] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_24 [i_8 - 2] [i_8 - 1] [i_8 + 1])) ? (arr_24 [i_8 - 1] [i_8 - 2] [i_8 - 2]) : (((/* implicit */unsigned long long int) 19U)))));
                    /* LoopSeq 1 */
                    for (signed char i_13 = 2; i_13 < 18; i_13 += 1) 
                    {
                        arr_50 [i_12] [(unsigned short)18] [i_4] [i_8 + 1] [(_Bool)1] [i_8 - 4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_23 [i_4]))))))) || (((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) var_8))))))));
                        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) (short)-15248))));
                    }
                    var_33 = ((/* implicit */int) arr_17 [i_4] [i_4] [i_4]);
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((short) ((min((((/* implicit */long long int) var_9)), (-1144513733068182220LL))) < (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
                        arr_55 [i_14] [i_4] [i_12] [i_8] [i_5] [i_4] [i_4] = ((/* implicit */int) (!(((((/* implicit */_Bool) arr_49 [i_4] [i_4] [4] [i_4] [i_4] [4] [i_4])) && (((/* implicit */_Bool) arr_21 [i_5]))))));
                        var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                    }
                }
            }
            arr_56 [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((1966080U) + (arr_29 [7ULL] [(signed char)16] [i_4] [i_5])))) <= (max((max((11457374430070021755ULL), (((/* implicit */unsigned long long int) (signed char)13)))), (((/* implicit */unsigned long long int) var_9))))));
            var_36 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) 11349029025045982869ULL)) || ((!(((/* implicit */_Bool) 16498966950137972705ULL))))))));
            arr_57 [(signed char)10] [i_4] [i_5] = ((/* implicit */_Bool) arr_52 [i_4] [i_4] [i_4]);
        }
        var_37 = ((/* implicit */signed char) var_6);
        arr_58 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) 16498966950137972705ULL))) || (((/* implicit */_Bool) var_1))));
    }
    for (long long int i_15 = 2; i_15 < 20; i_15 += 1) /* same iter space */
    {
        var_38 = ((/* implicit */unsigned short) var_8);
        var_39 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) (signed char)-42)) + (((/* implicit */int) arr_60 [i_15 + 1])))));
    }
    /* vectorizable */
    for (long long int i_16 = 2; i_16 < 20; i_16 += 1) /* same iter space */
    {
        arr_63 [i_16] = ((/* implicit */int) ((_Bool) ((10087378638883920951ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
        arr_64 [i_16 - 1] = ((/* implicit */signed char) ((unsigned short) 12375322668265466101ULL));
    }
    /* LoopSeq 1 */
    for (unsigned int i_17 = 0; i_17 < 10; i_17 += 4) 
    {
        arr_67 [i_17] = ((/* implicit */signed char) arr_0 [i_17] [i_17]);
        arr_68 [(_Bool)1] = ((/* implicit */unsigned short) min((((((((/* implicit */int) arr_4 [i_17] [14LL])) > (((/* implicit */int) var_2)))) ? ((+(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_7)))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-114))))))))));
        var_40 = ((/* implicit */long long int) arr_15 [i_17] [i_17]);
        var_41 = ((/* implicit */unsigned int) ((unsigned char) (~((+(var_3))))));
    }
    var_42 = var_10;
}
