/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115893
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_14 *= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) / (arr_1 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (arr_1 [i_0] [(unsigned char)6]))))));
        var_15 &= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) - (((/* implicit */int) arr_0 [i_0] [i_0])))))))) >> (((((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))) + (((/* implicit */long long int) ((unsigned int) arr_1 [i_0] [i_0]))))) + (3382820962157973686LL)))));
        arr_2 [i_0] [i_0] = arr_1 [(short)0] [(short)0];
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) arr_8 [i_3 - 1] [i_2] [i_1]))));
                        arr_13 [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (((~(((/* implicit */int) arr_7 [i_0] [i_1] [i_0])))) >= (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)49581))))))) == (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_2] [i_2])) - (((/* implicit */int) arr_5 [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3 - 1])) & (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
                        arr_14 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */int) ((arr_3 [i_2]) < (arr_12 [i_0] [i_0] [i_0] [i_0])))) * (((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_0] [i_2] [i_2] [i_2])), (arr_0 [i_0] [i_1]))))))));
                        var_17 = ((/* implicit */int) max(((!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3])))), ((((-(arr_12 [i_0] [i_1] [i_2] [i_3]))) > (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_3 - 1] [4] [i_0])))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_4 = 1; i_4 < 10; i_4 += 3) 
        {
            var_18 = ((((((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_4] [(short)4] [i_0]))) : (arr_1 [i_0] [i_0]))) >> (((((/* implicit */int) arr_9 [(signed char)7] [i_0] [i_4] [(signed char)7] [i_4])) - (120))))) * (((((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [(_Bool)1]))))))) * (((arr_1 [i_0] [i_0]) / (arr_1 [i_0] [i_0]))))));
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)126)) % (-32768))) - (((/* implicit */int) max((arr_5 [i_0]), (((/* implicit */unsigned char) arr_6 [i_4] [i_4] [i_4] [i_0])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_4 + 1] [i_4])) && (arr_4 [i_0])))) >= (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_9 [i_4 + 1] [7] [i_4 + 1] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0] [3] [i_4] [i_0])) << (((arr_16 [i_0]) - (7784297443804561565LL)))))) : (((1ULL) / (((/* implicit */unsigned long long int) 2035038266))))))));
            var_20 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((arr_16 [i_4]) - (((/* implicit */long long int) ((/* implicit */int) arr_10 [(_Bool)1] [i_0] [i_0] [i_0])))))) ? (((arr_1 [i_0] [i_4]) - (arr_3 [i_0]))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_4] [i_4] [i_4 - 1]))))))), (((/* implicit */long long int) min((((((/* implicit */int) arr_5 [i_0])) & (((/* implicit */int) arr_8 [i_0] [i_4 + 1] [i_0])))), (((((/* implicit */_Bool) arr_0 [i_0] [i_4])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_0])))))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) max((arr_10 [i_5] [i_5] [i_5] [i_0]), (((/* implicit */short) arr_7 [i_0] [i_0] [i_0])))))))))));
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (int i_7 = 1; i_7 < 10; i_7 += 3) 
                {
                    for (int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) arr_19 [(_Bool)1] [(_Bool)1] [i_5] [i_0]);
                            var_23 = ((/* implicit */short) arr_18 [i_0] [i_5]);
                            var_24 = ((/* implicit */long long int) min((var_24), (((min((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0])) << (((((/* implicit */int) arr_17 [(unsigned short)1] [i_0])) - (53)))))), (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [3LL] [i_7 - 1] [i_8]))) | (arr_23 [i_8] [i_8] [(unsigned short)0] [i_8] [i_8] [i_8]))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_8] [i_6] [i_5] [i_6] [i_0])) ? (arr_24 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [10])))))) ? (((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_12 [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0])) > (((/* implicit */int) arr_17 [i_6] [i_8]))))))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                for (int i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    {
                        var_25 -= ((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_22 [i_0] [i_5] [i_9] [i_10])))) + (min((arr_23 [i_0] [i_0] [i_0] [10LL] [10LL] [i_0]), (((/* implicit */long long int) arr_0 [i_5] [i_9])))))), (((/* implicit */long long int) ((((((/* implicit */int) arr_20 [i_0] [i_5] [i_0])) | (arr_28 [i_10]))) - (((((/* implicit */int) arr_33 [i_0] [(unsigned short)6] [i_0] [(unsigned short)6])) << (((/* implicit */int) arr_26 [i_0])))))))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_23 [i_0] [i_5] [i_5] [i_10] [i_10] [i_10])))) ? (((/* implicit */int) ((unsigned char) arr_28 [i_9]))) : (((/* implicit */int) arr_27 [i_0] [i_5] [i_9] [3ULL]))))) || (((((/* implicit */_Bool) arr_23 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) || (((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_5] [i_0] [i_5])) - (((/* implicit */int) arr_33 [i_0] [(unsigned char)2] [i_9] [i_10])))))))));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_20 [i_9] [i_9] [i_10])) + (((/* implicit */int) arr_17 [i_0] [i_0])))), (((((/* implicit */int) arr_10 [i_0] [i_0] [i_9] [i_0])) << (((arr_12 [i_0] [i_5] [i_0] [3U]) + (8954253573449235611LL)))))))) > (((((arr_24 [i_0]) % (((/* implicit */unsigned long long int) arr_32 [i_9] [i_9] [i_9] [i_9])))) * (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_28 [i_0])), (arr_1 [i_0] [i_0]))))))));
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((arr_15 [i_0] [i_5] [i_5]), (((/* implicit */long long int) arr_6 [i_0] [(_Bool)1] [(_Bool)1] [i_5])))) & (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0])))))) ? (((((/* implicit */int) arr_11 [i_0] [i_5] [i_5] [0])) | (((/* implicit */int) max((((/* implicit */unsigned char) arr_6 [i_0] [4LL] [i_5] [4LL])), (arr_7 [i_0] [i_0] [i_5])))))) : (((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) | ((~(((/* implicit */int) arr_26 [i_0])))))))))));
        }
    }
    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 3) 
    {
        arr_36 [i_11] &= ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)65535)) ? ((-(15070082165551888138ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)27532)) + (-996969448)))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_11])))));
        var_29 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_11])) || (((/* implicit */_Bool) arr_34 [i_11]))))) << (((((/* implicit */int) arr_35 [i_11])) - (208)))))) && (((((/* implicit */int) arr_34 [i_11])) <= (((((/* implicit */int) arr_34 [i_11])) & (((/* implicit */int) arr_35 [i_11]))))))));
        arr_37 [i_11] = ((/* implicit */int) ((((long long int) ((((/* implicit */int) arr_35 [i_11])) & (((/* implicit */int) arr_35 [i_11]))))) ^ (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_35 [i_11]))) & (((/* implicit */int) ((((/* implicit */int) arr_34 [i_11])) != (((/* implicit */int) arr_35 [i_11]))))))))));
        var_30 *= ((/* implicit */unsigned char) max((((/* implicit */int) arr_34 [i_11])), (((((((/* implicit */int) arr_35 [i_11])) - (((/* implicit */int) arr_35 [i_11])))) >> (((((/* implicit */int) arr_35 [i_11])) >> (((((/* implicit */int) arr_34 [i_11])) - (57)))))))));
        arr_38 [i_11] = max(((((-(((/* implicit */int) arr_34 [i_11])))) + ((-(((/* implicit */int) (unsigned short)12102)))))), (((((/* implicit */_Bool) (((_Bool)1) ? (-1996030445) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) max((arr_35 [i_11]), (((/* implicit */unsigned char) arr_34 [i_11]))))) : (((/* implicit */int) arr_35 [i_11])))));
    }
    var_31 &= ((/* implicit */int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_8))))) : (((((/* implicit */long long int) var_5)) / (var_2))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_12)))))) <= (max((((/* implicit */long long int) var_0)), (var_2)))))))));
    var_32 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_1)) : (var_0)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))) : (((var_9) ? (((/* implicit */long long int) var_5)) : (var_10))))), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_3)))))));
}
