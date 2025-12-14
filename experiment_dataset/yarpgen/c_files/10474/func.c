/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10474
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) != (min((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1] [i_0 - 1])) && (((/* implicit */_Bool) (unsigned char)189))))), ((+(var_10)))))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (short i_4 = 4; i_4 < 15; i_4 += 4) 
                    {
                        {
                            arr_11 [i_4] [i_1] [i_2] [i_1] [i_0] = (-(((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)38398)) && (((/* implicit */_Bool) var_4))))))));
                            arr_12 [i_1] [i_4] [i_3] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (3686128989245654243ULL) : (((/* implicit */unsigned long long int) -614920969)))))));
                            var_13 ^= ((/* implicit */short) max((((/* implicit */int) ((0U) <= (((/* implicit */unsigned int) 0))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                            arr_13 [i_4 - 4] [i_3] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) arr_8 [i_3]);
                        }
                    } 
                } 
                var_14 -= ((/* implicit */int) (_Bool)1);
                arr_14 [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)52343))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_6 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0])))), ((((-(((/* implicit */int) (signed char)-1)))) / ((-(((/* implicit */int) (signed char)-4))))))));
            }
            for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                arr_17 [i_0] [i_0] [i_0 - 2] [i_1] = (-(((/* implicit */int) var_3)));
                arr_18 [i_5] [i_1] [i_1] [i_0 + 1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((((/* implicit */int) var_1)) % (((/* implicit */int) var_9)))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_1)), ((unsigned char)66))))))));
            }
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((short) max(((unsigned char)239), ((unsigned char)194))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_4 [(signed char)3] [i_0]))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)174))))))))));
                            arr_30 [i_7] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_9 [i_0] [i_8] [i_7] [i_6] [i_0]))) && (((/* implicit */_Bool) arr_19 [i_0] [i_0 + 1] [i_0 - 1]))))), (((1991797223U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32)))))));
                            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_8)))))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_10 = 3; i_10 < 17; i_10 += 3) 
            {
                arr_33 [i_0] [(unsigned char)5] [i_0] [i_0 - 1] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)3))))), (((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_6] [i_10] [i_6] [i_0] [i_0] [i_0]))) : (0ULL))))) >= (((/* implicit */unsigned long long int) (~(2911753256U))))));
                var_17 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_9 [i_10] [i_6] [13U] [i_0] [i_0 - 1])) ? (arr_9 [17LL] [i_10 + 1] [i_10 - 1] [i_6] [i_0 - 1]) : (arr_9 [i_0] [i_0] [i_0 - 2] [i_0 - 1] [i_0])))));
                arr_34 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_21 [i_0 - 1] [i_6]) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 15320593614820836770ULL))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((896) / (((/* implicit */int) (unsigned char)83)))))))) : (arr_29 [3ULL] [i_6] [i_0 - 1] [i_6] [i_0 - 1])));
            }
            arr_35 [i_6] [i_6] [i_0] = (-(((/* implicit */int) var_3)));
        }
        var_18 = ((/* implicit */unsigned int) 6383276598734499839LL);
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((short) ((((((/* implicit */int) var_6)) ^ (((/* implicit */int) (signed char)127)))) & (((/* implicit */int) (_Bool)0))))))));
        /* LoopNest 2 */
        for (unsigned short i_11 = 2; i_11 < 15; i_11 += 4) 
        {
            for (short i_12 = 1; i_12 < 16; i_12 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 0; i_13 < 18; i_13 += 3) 
                    {
                        arr_44 [i_13] [i_12] [i_11] [i_11] [i_0 + 1] [i_0] = ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) (+(arr_21 [i_0 - 2] [6ULL])))))));
                        /* LoopSeq 3 */
                        for (signed char i_14 = 2; i_14 < 14; i_14 += 4) 
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))) : (3479594337U)));
                            var_21 -= min(((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0] [i_0] [i_0 - 2]))) - (arr_28 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [(_Bool)1]))))), (((/* implicit */unsigned long long int) min(((unsigned char)0), (((/* implicit */unsigned char) (signed char)-1))))));
                        }
                        for (long long int i_15 = 0; i_15 < 18; i_15 += 3) 
                        {
                            var_22 = min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)50049)) && (((/* implicit */_Bool) (unsigned char)1))))), ((~(((/* implicit */int) var_1)))));
                            arr_50 [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_15] = ((unsigned long long int) var_7);
                            arr_51 [4LL] [(unsigned short)3] [i_12] [i_12] [i_15] = ((/* implicit */signed char) ((int) arr_26 [i_0 - 1] [(_Bool)1] [(unsigned char)10] [i_12 + 1] [i_13] [(_Bool)1]));
                        }
                        for (signed char i_16 = 2; i_16 < 14; i_16 += 2) 
                        {
                            arr_55 [i_16 - 1] [3ULL] [(unsigned short)11] [i_12 + 1] [i_12] [i_11 + 3] [i_0 - 1] = ((/* implicit */unsigned short) arr_16 [i_11] [i_11]);
                            var_23 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (-(1908888099)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_16] [i_16 + 2]))) : (arr_45 [i_12 + 1]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (unsigned char)246)) : (arr_29 [i_16 + 2] [i_13] [i_12] [i_11] [i_0])))))))));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_46 [i_16 + 4] [i_12 + 2] [i_11 + 1] [i_0 - 1] [i_0]) : (arr_46 [i_16 + 1] [i_12 - 1] [i_11 + 3] [i_0 - 1] [i_0])))) < (7115309015660952241ULL)));
                            arr_56 [i_12] = ((/* implicit */unsigned short) var_0);
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_17 = 0; i_17 < 18; i_17 += 3) 
                        {
                            arr_60 [i_0] [i_17] = ((/* implicit */long long int) (signed char)-22);
                            var_25 -= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((arr_5 [i_0] [i_0] [i_0 - 1] [i_0 - 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)191)))))))))));
                            arr_61 [i_17] [i_12] [i_17] = ((min((((/* implicit */unsigned long long int) ((arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1]) >> (((/* implicit */int) arr_26 [i_17] [(_Bool)1] [i_12] [i_12 + 2] [i_0] [i_0]))))), (10099930911188841143ULL))) >= (((/* implicit */unsigned long long int) ((int) ((_Bool) 7327981130855159201ULL)))));
                            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) max((((((/* implicit */unsigned long long int) (+(-266405452)))) & (((unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((max((arr_4 [i_11 + 1] [i_13]), (((/* implicit */long long int) (_Bool)1)))) & ((((_Bool)1) ? (arr_59 [i_0] [i_11] [i_12] [i_13] [i_17] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_11 - 2])))))))))))));
                        }
                        var_27 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_12] [i_11] [i_12])) ? ((~(((/* implicit */int) (unsigned char)254)))) : (arr_58 [i_13] [i_12] [i_11] [i_0])))), ((-(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)57344))) | (-13LL)))))));
                        var_28 = ((/* implicit */unsigned long long int) (((-(arr_58 [(short)3] [i_11] [i_11] [i_11 - 2]))) + (((/* implicit */int) var_9))));
                    }
                    var_29 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) min((((/* implicit */int) (unsigned char)88)), (1968192418)))))) / (max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [(_Bool)1] [i_11 + 1] [i_11]))) ^ (4294967270U)))))));
                    arr_62 [(unsigned char)15] [i_11 - 1] [i_0] = ((/* implicit */int) ((unsigned char) ((((((/* implicit */int) var_6)) | (((/* implicit */int) arr_26 [i_0 - 1] [i_11] [i_12] [(unsigned short)11] [i_12] [i_12])))) ^ (((((/* implicit */_Bool) arr_22 [i_12 + 2] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)59355)))))));
                }
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned char) min((((/* implicit */int) var_3)), (((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) << ((((~(((/* implicit */int) var_5)))) + (161)))))));
}
