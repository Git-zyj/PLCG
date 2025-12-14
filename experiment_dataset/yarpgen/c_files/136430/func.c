/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136430
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) var_0);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) var_3);
                    /* LoopSeq 2 */
                    for (int i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((long long int) (((-2147483647 - 1)) & (((/* implicit */int) (unsigned char)104))))))));
                        arr_12 [i_1] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) var_5);
                    }
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) var_8))));
                            arr_18 [i_0] [i_0] [i_2] [i_4] [i_1] = ((/* implicit */unsigned short) min((((arr_0 [i_4]) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [7])) : (((/* implicit */int) (unsigned char)133)))), (((((/* implicit */_Bool) ((unsigned long long int) -962964606))) ? (max((arr_10 [i_1] [i_4] [i_1] [i_4] [7U]), (-202124722))) : (((var_3) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_5 [i_1] [i_4]))))))));
                        }
                        var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1785258333U))));
                        var_14 += ((/* implicit */_Bool) var_1);
                        var_15 = ((/* implicit */unsigned char) ((((unsigned int) (unsigned char)68)) & (((/* implicit */unsigned int) -343221001))));
                    }
                    arr_19 [i_1] [(_Bool)1] [i_2] [i_2] = ((/* implicit */int) var_4);
                    var_16 = (i_1 % 2 == 0) ? (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))) : (var_0))) << (((max((arr_10 [i_1] [i_1] [i_1] [i_1] [i_1]), (arr_10 [i_1] [i_0] [i_0] [i_0] [i_0]))) - (256188087)))))) : (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))) : (var_0))) << (((((max((arr_10 [i_1] [i_1] [i_1] [i_1] [i_1]), (arr_10 [i_1] [i_0] [i_0] [i_0] [i_0]))) - (256188087))) - (1547602413))))));
                    var_17 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((unsigned int) (unsigned char)106))), ((+(min((((/* implicit */long long int) var_0)), (var_7)))))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_0])))));
    }
    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
    {
        var_19 = ((/* implicit */long long int) arr_1 [i_6] [11U]);
        var_20 = ((/* implicit */unsigned char) arr_15 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]);
        arr_22 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_1 [9ULL] [i_6])) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) (unsigned char)133)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_6]))))) : (((((unsigned int) 1785258333U)) * (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_16 [i_6] [i_6] [i_6] [i_6])), (arr_21 [i_6] [i_6])))))))));
        /* LoopSeq 2 */
        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
        {
            var_21 = ((/* implicit */unsigned char) (((~(552255816))) + ((+(((/* implicit */int) arr_3 [i_7]))))));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_6]))))) ? (((/* implicit */int) min((var_4), (((/* implicit */short) (unsigned char)163))))) : (((((/* implicit */_Bool) min((arr_21 [i_6] [i_6]), (((/* implicit */unsigned short) var_3))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_6])) || (((/* implicit */_Bool) 4386922676492866070LL))))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_7])), (arr_8 [i_6] [i_7] [i_7] [i_7]))))))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            var_23 = ((/* implicit */unsigned short) ((unsigned char) arr_21 [i_8] [i_8]));
            var_24 = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_6] [i_8])) > (((arr_7 [i_8]) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) var_4))))));
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    {
                        var_25 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_6] [i_8] [i_9] [i_10] [i_10] [i_6] [i_8])) ? (arr_17 [i_6] [(unsigned char)7] [i_6] [i_8] [i_8] [i_9] [i_10]) : (((/* implicit */unsigned long long int) arr_10 [i_9] [i_8] [i_8] [i_8] [12]))));
                        arr_34 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) << (((((/* implicit */int) arr_1 [(unsigned char)3] [i_9])) - (18693)))));
                    }
                } 
            } 
            arr_35 [i_6] [i_6] = ((/* implicit */int) var_4);
            var_26 = ((/* implicit */unsigned short) (unsigned char)202);
        }
    }
    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 1) 
    {
        arr_40 [10ULL] = ((/* implicit */int) max((-2496694910791640151LL), (((/* implicit */long long int) (unsigned short)16643))));
        arr_41 [i_11] = ((/* implicit */unsigned short) min((max((0), (((arr_39 [i_11] [i_11]) ^ (arr_38 [i_11]))))), (((/* implicit */int) ((((/* implicit */int) ((unsigned char) (unsigned char)236))) > (((/* implicit */int) var_3)))))));
    }
    for (int i_12 = 4; i_12 < 20; i_12 += 4) 
    {
        var_27 = ((/* implicit */long long int) (short)(-32767 - 1));
        var_28 = ((/* implicit */long long int) var_8);
        var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)68))));
        var_30 = ((/* implicit */unsigned int) max((((unsigned char) arr_43 [i_12 + 3])), (var_8)));
        var_31 = (+(((((int) arr_43 [i_12 + 4])) % (((((/* implicit */_Bool) arr_45 [i_12])) ? (((/* implicit */int) (unsigned short)10901)) : (((/* implicit */int) (unsigned char)236)))))));
    }
    var_32 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)82))))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) max(((+(((/* implicit */int) var_10)))), (((/* implicit */int) ((unsigned char) (unsigned char)105))))))));
    /* LoopNest 2 */
    for (unsigned int i_13 = 0; i_13 < 12; i_13 += 2) 
    {
        for (unsigned char i_14 = 2; i_14 < 11; i_14 += 2) 
        {
            {
                var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (!(var_3))))) ? (((/* implicit */long long int) (~(arr_38 [i_13])))) : (arr_24 [i_13])));
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 12; i_15 += 2) 
                {
                    for (unsigned char i_16 = 2; i_16 < 9; i_16 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned short) max((((arr_47 [i_14 + 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)181))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) == (((/* implicit */int) arr_30 [i_13] [i_13] [i_13])))))));
                            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (var_0))), (((((/* implicit */_Bool) arr_11 [12U] [i_15] [i_14] [i_13])) || (((/* implicit */_Bool) var_8))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_15] [i_16]))) : (4294967291U)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)123))) / (3727248972558652982ULL))))))))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_13] [i_13])) ? (((/* implicit */int) arr_23 [i_13] [i_13])) : (((/* implicit */int) max((arr_23 [i_13] [i_13]), (((/* implicit */unsigned short) var_9)))))));
                var_37 |= ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((1565455790), (2147483638)))), (min((arr_42 [i_14 - 2]), (((/* implicit */unsigned int) 193625841)))))))));
            }
        } 
    } 
}
