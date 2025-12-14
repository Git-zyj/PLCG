/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111376
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_9))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (13215935325944630513ULL) : (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-1)), (-1124365752)))))))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)65513)), (var_11)))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)(-127 - 1))) - (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (min((((/* implicit */long long int) var_13)), (var_10))))));
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) arr_0 [0LL] [0LL]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)62345)), (arr_2 [i_0])))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_2 [i_0]))))));
                            arr_13 [(unsigned short)13] [4ULL] [i_2] [i_0] [i_4] = ((/* implicit */short) (~((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (1124365745)))))));
                            var_18 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)224), (((/* implicit */unsigned char) arr_0 [i_0] [i_1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8354)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30669))) : (var_11))))))) * ((-(((/* implicit */int) ((((/* implicit */unsigned long long int) 9U)) != (68719476480ULL))))))));
                            var_19 = max((((((((/* implicit */int) arr_11 [i_0])) % (((/* implicit */int) (unsigned short)65513)))) % (((/* implicit */int) var_2)))), (((((/* implicit */int) ((18446744004990075135ULL) >= (((/* implicit */unsigned long long int) var_7))))) % (((/* implicit */int) (signed char)108)))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            var_20 *= ((/* implicit */unsigned int) arr_1 [i_0]);
                            arr_16 [i_0] [i_5] [i_2] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-30660)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-96))) : (arr_12 [(unsigned short)11])))), (min((((/* implicit */unsigned long long int) var_0)), (var_11))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            var_21 = ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_1 [i_2])));
                            var_22 += ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) 0LL)) : (18446744004990075135ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27679)))));
                        }
                        arr_20 [i_3] [i_3] [i_0 - 3] |= ((/* implicit */signed char) (+((-(((/* implicit */int) (_Bool)1))))));
                        var_23 = ((/* implicit */signed char) max(((+((-(((/* implicit */int) arr_19 [i_0 - 3] [(short)10] [i_2] [i_1] [i_0])))))), (((/* implicit */int) min((arr_10 [i_3]), (arr_0 [i_0] [i_0]))))));
                        var_24 = ((/* implicit */signed char) (_Bool)1);
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) var_5)), (var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)65489)))) : ((-(2147483648U)))));
                    }
                    arr_21 [i_0] [12LL] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)108))))) ? (((/* implicit */int) arr_5 [i_1] [i_0])) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)31)))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (signed char)-99))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 2; i_7 < 14; i_7 += 2) 
    {
        for (unsigned char i_8 = 2; i_8 < 14; i_8 += 2) 
        {
            for (int i_9 = 0; i_9 < 16; i_9 += 4) 
            {
                {
                    var_26 *= ((/* implicit */signed char) var_12);
                    var_27 = ((/* implicit */int) ((short) (unsigned char)255));
                    var_28 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_7 + 1])) ? (2088960U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_7 + 1]))))));
                    var_29 += ((/* implicit */unsigned char) (-(((/* implicit */int) max((var_0), (var_1))))));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */signed char) var_4);
}
