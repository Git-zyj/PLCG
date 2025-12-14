/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167556
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
    var_13 = var_6;
    var_14 ^= max((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (0)))), (var_0));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (short)252))));
                arr_7 [i_0] = var_8;
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */short) max((1384422598), (((((/* implicit */int) var_9)) - (((/* implicit */int) var_7))))));
                            var_16 = (+(max((((/* implicit */int) arr_9 [14] [i_1] [i_2] [i_2])), (((int) (_Bool)1)))));
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -19)) || (((/* implicit */_Bool) (+((+(2147483647)))))))))));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) max((arr_9 [i_0] [(unsigned char)4] [i_2] [i_2]), (var_11)))) : (((int) (unsigned char)207))))) / (((((/* implicit */_Bool) max((7082532364826451949ULL), (arr_5 [i_1] [i_2])))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)49758))))))));
                            arr_12 [i_1] [i_1] [i_1] [(unsigned char)18] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_0] [(unsigned char)10] [i_0] [i_0]))))) ^ (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                var_19 &= ((/* implicit */int) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29404))) ^ (var_3))) >> (((max((2147483647), (-1415059537))) - (2147483622))))), (((/* implicit */unsigned long long int) ((_Bool) var_5)))));
                                var_20 = ((/* implicit */int) (unsigned char)48);
                                var_21 = ((/* implicit */int) -5789692268482931036LL);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_7 = 2; i_7 < 20; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        for (int i_9 = 1; i_9 < 20; i_9 += 2) 
                        {
                            {
                                arr_30 [(short)20] [(unsigned char)6] [7ULL] [i_9] [i_9] [7ULL] [i_9] = ((((min((((/* implicit */long long int) -697516932)), (-7446565066028993488LL))) != (((/* implicit */long long int) ((/* implicit */int) (short)-259))))) ? (arr_5 [i_0] [i_0]) : (((var_12) + (min((11364211708883099666ULL), (((/* implicit */unsigned long long int) 0)))))));
                                var_22 *= ((/* implicit */unsigned long long int) ((unsigned char) (~(((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_10 = 2; i_10 < 20; i_10 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_11 = 4; i_11 < 19; i_11 += 2) 
        {
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((10395710942080125709ULL), (((/* implicit */unsigned long long int) -1384422609))))) ? ((+(arr_25 [i_11 - 4] [i_11]))) : (((arr_25 [i_11 - 4] [i_11]) + (arr_25 [i_11 - 2] [i_11])))));
            arr_39 [i_11] = ((/* implicit */unsigned long long int) arr_23 [i_10] [i_10 + 1] [i_10] [i_10] [i_10 + 1] [(_Bool)1]);
            /* LoopNest 3 */
            for (long long int i_12 = 1; i_12 < 19; i_12 += 4) 
            {
                for (int i_13 = 3; i_13 < 20; i_13 += 1) 
                {
                    for (int i_14 = 3; i_14 < 20; i_14 += 2) 
                    {
                        {
                            var_24 = (i_12 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) arr_42 [i_14] [i_11] [i_11] [i_12] [1U])) - (82)))))) ? (((((/* implicit */_Bool) arr_42 [i_10 - 1] [i_10 - 2] [i_10 - 1] [i_12] [i_12])) ? (((/* implicit */int) arr_42 [i_10] [i_10] [i_10] [i_12] [i_10 + 1])) : (((/* implicit */int) arr_32 [i_10 - 2])))) : ((~(((/* implicit */int) arr_32 [i_10]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (((((((/* implicit */int) arr_42 [i_14] [i_11] [i_11] [i_12] [1U])) - (82))) - (62)))))) ? (((((/* implicit */_Bool) arr_42 [i_10 - 1] [i_10 - 2] [i_10 - 1] [i_12] [i_12])) ? (((/* implicit */int) arr_42 [i_10] [i_10] [i_10] [i_12] [i_10 + 1])) : (((/* implicit */int) arr_32 [i_10 - 2])))) : ((~(((/* implicit */int) arr_32 [i_10])))))));
                            arr_47 [i_10] [i_11] [i_10] [i_12] [16U] [i_14] [i_14] = ((min((((/* implicit */long long int) var_6)), (((long long int) 1384422598)))) / (((/* implicit */long long int) ((/* implicit */int) var_7))));
                            var_25 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [(unsigned char)13])) << (((((((/* implicit */int) arr_15 [i_11])) % (((/* implicit */int) (unsigned char)255)))) - (92)))))) ? (((((/* implicit */_Bool) ((unsigned char) arr_3 [i_10] [i_12] [i_13]))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) (_Bool)1))))));
                            arr_48 [i_10] [i_10] [i_12] [i_12] [i_10] [i_10] = ((/* implicit */long long int) (((-(max((((/* implicit */int) (unsigned char)0)), (-976804417))))) % ((+(((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
            } 
            arr_49 [i_10] [i_10] [i_10 - 2] = ((/* implicit */unsigned long long int) arr_27 [i_11] [i_11 + 1]);
        }
        /* vectorizable */
        for (unsigned long long int i_15 = 2; i_15 < 19; i_15 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_16 = 2; i_16 < 18; i_16 += 3) 
            {
                for (unsigned char i_17 = 0; i_17 < 21; i_17 += 1) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned long long int) ((-1384422599) != (((/* implicit */int) arr_11 [i_10 - 2] [i_15 + 1]))));
                            arr_63 [i_10] [i_17] [i_10] [i_10] [i_17] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)15)) + (arr_25 [i_10 - 1] [i_15 + 2])));
                            var_27 = ((/* implicit */unsigned long long int) arr_18 [i_10] [i_16] [i_16] [i_18]);
                        }
                    } 
                } 
            } 
            var_28 = (+(((/* implicit */int) arr_9 [i_10 + 1] [i_10 - 1] [i_10 - 2] [i_10 - 2])));
        }
        for (unsigned long long int i_19 = 2; i_19 < 19; i_19 += 2) /* same iter space */
        {
            var_29 = ((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) max(((unsigned char)240), ((unsigned char)97)))) ? ((-(((/* implicit */int) var_7)))) : (1)))));
            var_30 += ((/* implicit */unsigned char) ((((int) ((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */int) var_7)) : (arr_19 [i_10 - 1] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10 - 1])))) ^ (((/* implicit */int) ((unsigned char) arr_43 [i_10] [i_10] [i_10 + 1] [i_10] [i_10])))));
        }
        var_31 = ((/* implicit */unsigned long long int) (_Bool)1);
    }
    var_32 *= ((/* implicit */int) (_Bool)0);
}
