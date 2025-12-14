/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106792
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
    var_14 = ((/* implicit */unsigned char) (+(min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_11))), (var_9)))));
    var_15 = ((/* implicit */int) var_3);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) var_3);
        var_17 = ((/* implicit */unsigned int) (-((-(var_12)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            var_18 = ((/* implicit */unsigned char) (-(var_2)));
            var_19 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (arr_2 [i_1]) : (((/* implicit */int) arr_1 [i_2] [i_2])))) + (2147483647))) << (((((8388606) & (arr_2 [i_1]))) - (5847300)))));
        }
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)77)) ^ (((/* implicit */int) var_13)))) ^ (((/* implicit */int) (unsigned char)77))))) == (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)77))))) ? (((unsigned long long int) arr_11 [i_1])) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (2417109817U)))))))))));
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_21 |= ((/* implicit */signed char) (+(((/* implicit */int) (!(((var_6) && (((/* implicit */_Bool) 2417109817U)))))))));
                    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_5]))));
                }
                var_23 = ((/* implicit */unsigned short) var_4);
                var_24 = ((/* implicit */unsigned int) (-(max((arr_13 [i_1] [i_3] [i_4]), (((/* implicit */int) (unsigned short)19667))))));
            }
            var_25 = ((/* implicit */short) (+(((((/* implicit */_Bool) (~(-4940813347476449233LL)))) ? ((-(((/* implicit */int) arr_11 [i_3])))) : ((+(((/* implicit */int) var_0))))))));
        }
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            arr_20 [i_6] [i_6] [9] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((int) (+(var_3))))) >= (((((/* implicit */unsigned int) var_1)) / (((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6198))) : (1877857478U)))))));
            var_26 = (i_6 % 2 == 0) ? (((/* implicit */short) min(((((!(((/* implicit */_Bool) 1877857478U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19667))))) : (((/* implicit */int) var_8)))), (((max((-13), (((/* implicit */int) arr_10 [i_1])))) << (((arr_2 [i_6]) + (1940309764)))))))) : (((/* implicit */short) min(((((!(((/* implicit */_Bool) 1877857478U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19667))))) : (((/* implicit */int) var_8)))), (((max((-13), (((/* implicit */int) arr_10 [i_1])))) << (((((arr_2 [i_6]) - (1940309764))) + (528868582))))))));
            var_27 = ((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */int) arr_1 [i_6] [i_6])) : (((/* implicit */int) arr_15 [i_1] [7] [i_1] [i_1] [i_6])));
            var_28 = (~(((/* implicit */int) var_7)));
            var_29 = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_8)), (var_9))), (((/* implicit */long long int) (+(arr_13 [i_1] [i_6] [i_6]))))));
        }
        var_30 = ((/* implicit */unsigned int) (-(((var_4) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_1]))))));
        var_31 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)126)) * (((/* implicit */int) arr_4 [i_1]))))) ? (((((/* implicit */int) var_8)) * (((/* implicit */int) var_6)))) : (((((/* implicit */int) var_13)) / (var_1))))), (505141963)));
        var_32 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) min((arr_16 [(short)8] [(short)8] [3]), ((unsigned char)126)))))))));
    }
    for (int i_7 = 0; i_7 < 12; i_7 += 3) 
    {
        var_33 = ((/* implicit */short) (unsigned short)62917);
        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) max(((-(((arr_2 [(unsigned short)0]) + (var_1))))), (((/* implicit */int) ((short) (-(((/* implicit */int) (unsigned short)508)))))))))));
        var_35 = arr_0 [12LL] [i_7];
        var_36 = max((((unsigned char) (-(var_2)))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_7])) && (((/* implicit */_Bool) arr_21 [i_7]))))));
        var_37 += ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_2 [(unsigned short)14])) || (((/* implicit */_Bool) arr_2 [12ULL])))), ((!(((/* implicit */_Bool) arr_2 [6U]))))));
    }
    var_38 = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_8)), (max((2417109817U), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)37633)) >> (((((/* implicit */int) var_7)) + (9789))))))))));
}
