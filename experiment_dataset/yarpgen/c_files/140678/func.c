/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140678
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
    var_14 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1803922688)))))));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max((max((-8945798695309415375LL), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) (+(((/* implicit */int) var_13)))))))) ? (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-16))) : (-2980278888049499190LL))), (((/* implicit */long long int) (!(var_0)))))) : (((/* implicit */long long int) ((/* implicit */int) (short)32747)))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        var_16 ^= ((/* implicit */long long int) (short)-32748);
                        var_17 ^= ((/* implicit */short) arr_0 [i_2]);
                        arr_8 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)32762)), (arr_7 [i_0])))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_1 [i_2])), (arr_6 [i_0])))) : (arr_5 [i_1] [i_2] [i_1])))), (min(((~(7776134208370122769ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])))))))));
                    }
                    for (int i_4 = 2; i_4 < 7; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_2]))))), (-4171550097420176414LL)));
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) max(((+(-1603227683))), ((+(((/* implicit */int) (short)2401))))))), (min(((-(arr_6 [(short)2]))), (max((arr_7 [i_4]), (arr_10 [i_4] [i_2] [i_1] [i_0]))))))))));
                        arr_11 [(unsigned char)1] [i_0] [i_1] [i_2] [i_0] = min((((((/* implicit */_Bool) (~(arr_6 [i_0])))) ? (min((arr_5 [(short)2] [i_0] [0U]), (313554371624715998LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)-32749))))))), (((/* implicit */long long int) min(((~(((/* implicit */int) (short)-17172)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2])))))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        var_20 = ((/* implicit */short) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)2384))) : (min((min((arr_12 [5U] [5U] [i_2] [i_5]), (((/* implicit */long long int) arr_9 [i_5] [i_5] [i_2] [i_1] [i_1] [i_0])))), (((/* implicit */long long int) min((arr_0 [i_0]), (((/* implicit */unsigned int) (unsigned char)1)))))))));
                        arr_14 [i_0] = ((/* implicit */_Bool) arr_9 [i_5] [i_2] [i_2] [i_2] [i_1] [i_0]);
                        var_21 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((21272655U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1]))))))))));
                        var_22 = (+(((((/* implicit */_Bool) -9223372036854775803LL)) ? ((~(arr_13 [i_0] [i_0] [i_2] [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62833))))));
                    }
                    arr_15 [i_0] [8U] [i_0] [i_2] = ((/* implicit */unsigned short) arr_13 [i_0] [i_1] [8] [i_2]);
                    arr_16 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) : (arr_10 [6U] [i_2] [i_2] [i_0]))), ((-(arr_0 [3LL])))))) ? (((/* implicit */long long int) min((min((((/* implicit */unsigned int) (short)-2384)), (arr_13 [i_0] [10ULL] [i_2] [i_2]))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_1] [i_1])))))))) : (min((((((/* implicit */_Bool) (unsigned char)135)) ? (arr_12 [i_0] [i_0] [i_1] [i_2]) : (-426121045490197754LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)120)))))))));
                }
            } 
        } 
    } 
    var_23 = min((var_6), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))))));
}
