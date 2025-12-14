/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101977
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
    for (signed char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            var_12 -= ((/* implicit */unsigned short) (-(max((((((/* implicit */_Bool) (short)5440)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_0] [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (short)-1))))))));
            var_13 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (short)-8)) ? (var_6) : (((/* implicit */unsigned int) arr_5 [i_0])))) : (((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))))));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)-3979);
            /* LoopNest 3 */
            for (unsigned short i_2 = 4; i_2 < 24; i_2 += 2) 
            {
                for (long long int i_3 = 3; i_3 < 23; i_3 += 1) 
                {
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((~(var_2))), (((1312805956U) << (((((/* implicit */int) (short)-18)) + (23)))))))) ? (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_4))))), (min((var_9), (var_9)))))) : (((/* implicit */int) (short)-1))));
                            var_15 = ((/* implicit */unsigned long long int) ((max((var_6), (var_0))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1]))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_5 = 2; i_5 < 24; i_5 += 2) 
        {
            arr_18 [i_5] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) var_4)), (arr_5 [i_5])));
            arr_19 [(unsigned char)14] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-112)) ? (((0U) & (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) < (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */int) arr_14 [i_5] [i_5] [22U] [(unsigned char)18] [i_0] [i_5] [(unsigned short)8])) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) var_2)) : (5304256280932376448ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-196)))));
            var_16 = ((/* implicit */unsigned long long int) (~(4294967295U)));
        }
        var_17 += ((/* implicit */unsigned char) (+((((!(((/* implicit */_Bool) 10784588824803965153ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)21623))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_2)))))))));
    }
    for (long long int i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                {
                    arr_30 [i_8] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)34006)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((var_3) != (((/* implicit */unsigned long long int) var_8))))), (max((arr_21 [i_6] [i_6]), (((/* implicit */unsigned short) var_4)))))))) : (min((arr_23 [i_6] [i_7]), (((/* implicit */unsigned long long int) ((unsigned short) arr_25 [(unsigned short)2] [i_6] [i_8])))))));
                    arr_31 [i_6] [i_7] [17LL] [(_Bool)1] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) var_1)), ((~(var_0))))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_6] [i_6])))));
                    var_18 = (~(((/* implicit */int) ((unsigned short) -1))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_9 = 2; i_9 < 21; i_9 += 4) 
        {
            arr_34 [i_6] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) ((signed char) -1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_6] [(unsigned char)21] [i_9]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(_Bool)1] [i_9] [i_9] [(unsigned char)24] [i_9] [i_9]))) * (arr_23 [i_6] [i_9]))))));
            var_19 = ((/* implicit */short) ((_Bool) (short)63));
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)30007)))))));
        }
        for (signed char i_10 = 1; i_10 < 19; i_10 += 1) 
        {
            arr_37 [i_6] = ((/* implicit */signed char) (-(((unsigned int) max((((/* implicit */unsigned long long int) (signed char)-125)), (arr_23 [i_6] [12]))))));
            arr_38 [i_6] [20U] = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned short)3896)) << (((/* implicit */int) (short)0)))), (((/* implicit */int) var_5))))), (((unsigned long long int) arr_29 [(signed char)2] [(short)17] [i_6] [3U]))));
            arr_39 [i_6] [i_10] [i_6] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((((/* implicit */short) var_4)), (var_5)))))) ? ((((!(((/* implicit */_Bool) arr_23 [i_6] [i_6])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)9)) <= (((/* implicit */int) var_11)))))) : (((var_8) << (((((/* implicit */int) (signed char)111)) - (111))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_13 [i_10] [i_10] [i_10 + 1] [(short)14] [6ULL] [i_6])))))));
        }
        for (unsigned short i_11 = 0; i_11 < 22; i_11 += 2) 
        {
            arr_43 [i_6] [i_11] [(short)8] = ((/* implicit */int) var_11);
            var_21 += ((/* implicit */long long int) max((((/* implicit */unsigned int) var_9)), (var_2)));
            arr_44 [i_6] = 17191300809354957395ULL;
        }
    }
    /* vectorizable */
    for (long long int i_12 = 0; i_12 < 22; i_12 += 3) /* same iter space */
    {
        var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [10LL] [i_12]))) > (arr_28 [i_12] [i_12] [i_12] [15ULL]))))));
        arr_47 [i_12] = ((/* implicit */unsigned int) ((signed char) ((unsigned long long int) var_3)));
    }
    var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_9))));
}
