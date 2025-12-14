/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141971
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
    var_16 = ((/* implicit */int) max((var_16), ((-(((/* implicit */int) var_6))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
        {
            var_17 ^= ((/* implicit */unsigned char) ((long long int) (~(var_15))));
            arr_4 [7] [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) arr_2 [5LL] [i_0]));
        }
        for (long long int i_2 = 0; i_2 < 13; i_2 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                for (int i_4 = 4; i_4 < 10; i_4 += 3) 
                {
                    {
                        var_18 = ((((/* implicit */_Bool) max((8632295926500127736LL), (((/* implicit */long long int) 362934492))))) ? ((~((-(var_10))))) : (((/* implicit */long long int) var_13)));
                        arr_14 [i_0] [i_0] [i_4 - 4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_13 [i_0 - 2] [i_4] [i_4 + 3] [i_4] [i_4] [i_0]), (arr_13 [i_0 + 1] [i_2] [i_4 + 1] [i_0 + 1] [i_4] [i_0])))) ? (((/* implicit */int) ((_Bool) (unsigned char)119))) : (((/* implicit */int) arr_13 [i_0 - 2] [i_0 - 2] [i_4 - 1] [i_4] [i_4] [i_0]))));
                    }
                } 
            } 
            arr_15 [i_0] = ((/* implicit */int) ((unsigned char) min((891550891), (891550901))));
        }
        for (long long int i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
        {
            arr_20 [i_5] [i_5] &= ((/* implicit */int) ((((min((var_11), (-7751371753903464745LL))) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_18 [i_0] [i_0])), (arr_3 [i_0] [i_5] [i_0])))) ? (((/* implicit */int) ((arr_9 [i_5]) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : ((~(((/* implicit */int) arr_6 [i_5]))))))));
            var_19 = ((/* implicit */long long int) arr_6 [i_0]);
        }
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_6 [4])))) == (((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0]) : (((/* implicit */long long int) arr_7 [i_0] [(unsigned short)8] [(unsigned char)6]))))))), (arr_3 [i_0] [8LL] [(unsigned char)0]))))));
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            for (int i_7 = 2; i_7 < 12; i_7 += 3) 
            {
                for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 2; i_9 < 12; i_9 += 3) 
                        {
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((signed char) var_15));
                            arr_33 [i_9 - 1] [i_0] [i_8] [i_7] [i_6] [i_0] [i_0] = ((/* implicit */signed char) (((+(min((12842098156363011452ULL), (((/* implicit */unsigned long long int) var_14)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_0 - 2] [i_0] [i_0] [i_6] [i_9 + 1])))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (_Bool)1))));
                            var_22 = ((/* implicit */_Bool) arr_10 [i_0] [i_0 - 2] [i_7 - 1] [i_0]);
                        }
                        for (signed char i_10 = 0; i_10 < 13; i_10 += 4) 
                        {
                            arr_37 [i_0] [i_0] [i_0] [i_0 + 1] [5U] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)191)) / (((/* implicit */int) arr_29 [i_0] [i_6] [i_6]))));
                            arr_38 [i_0] [i_0] [i_0] [(unsigned char)4] [i_10] [i_6] = var_13;
                            var_23 -= ((/* implicit */long long int) (((+(((/* implicit */int) (unsigned char)65)))) & (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_26 [i_8] [(_Bool)1] [i_7 - 1] [i_0 - 2] [i_0 - 2] [i_0 - 1])) : (((/* implicit */int) var_3))))));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((long long int) 3956572114002529615LL)) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16383))))))));
                            arr_39 [i_0] [(unsigned short)12] [i_0] [i_7] [7LL] [i_10] = ((/* implicit */int) ((unsigned int) arr_18 [i_6] [i_6]));
                        }
                        var_25 = ((/* implicit */int) arr_27 [i_7 - 2] [i_0 + 1] [i_0 + 1] [i_0]);
                        var_26 = ((int) arr_17 [i_0 - 2]);
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned char) var_15);
        /* LoopSeq 1 */
        for (unsigned long long int i_11 = 2; i_11 < 11; i_11 += 4) 
        {
            var_28 += ((/* implicit */long long int) (signed char)5);
            var_29 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)59), (((/* implicit */unsigned char) (signed char)8))))))))) % (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_35 [i_0])))) % (arr_0 [i_11]))));
            var_30 = ((/* implicit */unsigned long long int) var_6);
            var_31 |= ((/* implicit */int) (~(((((/* implicit */long long int) ((int) arr_7 [i_0] [i_11] [12]))) / ((-(var_15)))))));
        }
    }
    var_32 += ((/* implicit */int) var_3);
    var_33 = ((/* implicit */unsigned short) var_7);
    var_34 *= ((/* implicit */unsigned short) min((((/* implicit */int) var_5)), (((int) var_11))));
}
