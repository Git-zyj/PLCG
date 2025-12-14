/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170159
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_19 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0] [i_0])) & (((/* implicit */int) (unsigned short)65528))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (var_13) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_12))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_21 &= ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-32766)) : (((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_4 [i_1])))));
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1])))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_23 = ((/* implicit */signed char) var_2);
            var_24 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) >> (((((/* implicit */int) (unsigned short)65528)) - (65514)))));
        }
    }
    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            for (signed char i_5 = 1; i_5 < 14; i_5 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 3) 
                        {
                            var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_5] [(_Bool)1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((unsigned short) (unsigned short)65535)))));
                            var_26 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_16 [i_3] [i_4] [i_4] [i_5] [i_6] [i_7])), (((((/* implicit */_Bool) (unsigned short)7)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_7])))))))), (max((arr_5 [i_3] [i_5] [i_6]), (((/* implicit */long long int) var_8))))));
                        }
                        arr_20 [i_3] [i_4] [i_5] [(short)2] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_16 [i_3] [i_6] [(short)8] [i_6] [i_4] [i_3]), (arr_16 [i_3] [i_5 - 1] [i_5 - 1] [i_4] [i_4] [i_3])))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_5 + 2])))))));
                    }
                    arr_21 [(short)2] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) arr_5 [i_5 - 1] [i_4] [i_3]))) == ((~(((/* implicit */int) (short)32745))))));
                }
            } 
        } 
        var_27 += ((/* implicit */short) ((((/* implicit */_Bool) (+(3028642608179429052LL)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)105))))) : (((((/* implicit */_Bool) ((3661531075U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24)))))) ? ((~(arr_15 [i_3] [i_3] [i_3] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-105))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 16; i_8 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned short i_11 = 0; i_11 < 16; i_11 += 2) 
                    {
                        {
                            arr_33 [i_3] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2195848327U)) ? (arr_26 [i_3] [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65514)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)2988))) : (2099118977U))));
                            var_28 *= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_12 [i_11] [i_8] [i_11]))))));
                            arr_34 [i_3] [i_10] [2U] = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_9])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : ((~(((/* implicit */int) (signed char)115))))));
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) var_10))));
            var_30 *= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((var_13) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7)))))) : (((/* implicit */int) arr_8 [i_3]))));
        }
        for (long long int i_12 = 0; i_12 < 16; i_12 += 2) /* same iter space */
        {
            var_31 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)21589)))) ? (((((/* implicit */int) (unsigned short)7)) ^ (((/* implicit */int) (signed char)110)))) : (((/* implicit */int) arr_29 [i_3] [i_12]))));
            /* LoopSeq 4 */
            for (int i_13 = 0; i_13 < 16; i_13 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_14 = 1; i_14 < 12; i_14 += 3) 
                {
                    for (unsigned char i_15 = 0; i_15 < 16; i_15 += 4) 
                    {
                        {
                            var_32 |= ((((((/* implicit */int) arr_17 [i_15] [i_15] [i_15] [i_15] [i_14] [i_14 + 1])) & (((/* implicit */int) arr_17 [i_15] [i_15] [i_15] [i_15] [i_15] [i_14 - 1])))) ^ (((/* implicit */int) var_10)));
                            arr_46 [i_3] [i_12] [i_13] [i_14] [i_15] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-119))));
                        }
                    } 
                } 
                arr_47 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_45 [i_3] [i_12] [i_13] [i_13])) == (((((/* implicit */_Bool) 1872124823U)) ? (((/* implicit */int) arr_45 [i_13] [i_12] [i_3] [i_3])) : (((/* implicit */int) arr_28 [i_13] [i_13] [i_12] [i_12] [i_3] [i_3]))))));
            }
            /* vectorizable */
            for (signed char i_16 = 0; i_16 < 16; i_16 += 3) 
            {
                var_33 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_16]))));
                var_34 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)1))) ^ (9223372036854775807LL)));
                var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-121)) ? (arr_15 [i_3] [i_3] [(signed char)10] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_3])))));
                arr_50 [i_3] [i_12] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_3] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (var_12)));
            }
            for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_18 = 0; i_18 < 16; i_18 += 3) 
                {
                    for (int i_19 = 0; i_19 < 16; i_19 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */_Bool) arr_57 [i_19] [i_18] [i_17] [i_12] [(unsigned short)14]);
                            var_37 = ((/* implicit */unsigned long long int) ((806285367U) | (((/* implicit */unsigned int) min((((((/* implicit */int) var_17)) ^ (((/* implicit */int) var_3)))), (((/* implicit */int) arr_3 [i_17] [i_19])))))));
                            var_38 |= ((/* implicit */unsigned char) arr_4 [i_17]);
                            var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_4) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_19] [i_12])) ? (((/* implicit */int) var_11)) : (var_7))))))) ? (((((/* implicit */_Bool) arr_45 [i_3] [i_12] [i_18] [i_19])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_3] [i_17] [i_18] [2LL]))) : (7538999486180716290ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_51 [i_12])) || (((/* implicit */_Bool) arr_43 [i_3] [i_17] [i_17] [i_18] [i_19])))))) : (min((var_13), (((/* implicit */long long int) (short)0))))))))))));
                            var_40 = ((/* implicit */unsigned long long int) max((var_40), ((+(arr_24 [i_12])))));
                        }
                    } 
                } 
                var_41 = ((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned short)38851), (var_5)))) <= (((((/* implicit */int) (!(arr_1 [i_3] [i_17])))) ^ (((/* implicit */int) var_11))))));
                arr_58 [i_3] [i_12] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_38 [i_3])) + (((/* implicit */int) arr_38 [i_3]))));
                var_42 = ((/* implicit */signed char) (((+(arr_7 [i_17]))) * (((/* implicit */unsigned long long int) (((-(var_13))) % (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))))))));
            }
            for (short i_20 = 0; i_20 < 16; i_20 += 2) 
            {
                var_43 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) arr_11 [i_3] [i_12] [i_20])) : (((/* implicit */int) (unsigned short)65526)))) / (((/* implicit */int) arr_38 [i_12]))));
                var_44 += ((/* implicit */unsigned short) (_Bool)1);
                var_45 = ((/* implicit */_Bool) arr_38 [i_3]);
            }
        }
    }
    /* LoopNest 2 */
    for (unsigned long long int i_21 = 0; i_21 < 25; i_21 += 2) 
    {
        for (short i_22 = 0; i_22 < 25; i_22 += 3) 
        {
            {
                arr_69 [i_22] [(short)19] = (_Bool)1;
                var_46 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_65 [i_21] [i_22] [i_22]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_21] [23U]))) : (((unsigned long long int) arr_63 [i_22] [i_21]))));
                var_47 = max((((((((/* implicit */_Bool) (short)31)) ? (arr_62 [i_22]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) | (((/* implicit */unsigned int) (+(((/* implicit */int) arr_65 [11LL] [11LL] [i_22]))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_12))) && (((/* implicit */_Bool) arr_63 [i_22] [i_21]))))));
                var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) ((((/* implicit */_Bool) (short)-24661)) ? ((+(((long long int) (short)0)))) : (((/* implicit */long long int) (-(((/* implicit */int) ((signed char) (_Bool)1)))))))))));
            }
        } 
    } 
}
