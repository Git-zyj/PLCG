/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155118
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
    var_12 = ((/* implicit */_Bool) (((~(var_3))) / (((/* implicit */long long int) (~((-(var_9))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned char) var_8);
            var_14 = ((((/* implicit */_Bool) (short)-24893)) ? (((/* implicit */unsigned long long int) 0LL)) : (500380813053259874ULL));
        }
        for (long long int i_2 = 1; i_2 < 20; i_2 += 3) 
        {
            var_15 = ((/* implicit */short) max(((!(((/* implicit */_Bool) var_6)))), (((((/* implicit */_Bool) arr_4 [i_0] [i_2 - 1] [i_2 + 2])) && (((/* implicit */_Bool) var_9))))));
            var_16 = ((/* implicit */short) max((var_7), (((/* implicit */long long int) (((+(((/* implicit */int) arr_6 [15LL] [i_2 + 2])))) * (((((/* implicit */int) (unsigned char)238)) / (var_9))))))));
        }
        var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((unsigned char) var_1)))));
        arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))) < (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : ((+(arr_1 [(_Bool)1])))))));
        var_18 = ((/* implicit */unsigned long long int) ((_Bool) arr_0 [i_0]));
        var_19 = ((/* implicit */unsigned long long int) (-(((((((/* implicit */long long int) ((/* implicit */int) var_1))) - (var_7))) | (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))));
    }
    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        arr_11 [i_3] |= ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (0ULL)))) ? (((/* implicit */unsigned long long int) (~(var_7)))) : (((arr_1 [i_3]) >> (((/* implicit */int) var_1)))))) >> (((((long long int) ((((/* implicit */int) var_5)) << (((/* implicit */int) var_1))))) - (437LL)))));
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((((var_7) + (9223372036854775807LL))) << (((((/* implicit */int) arr_2 [i_3])) - (126))))) << (((((min((-398040007144675965LL), (((/* implicit */long long int) arr_2 [i_3])))) + (398040007144675992LL))) - (27LL)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_5))));
            arr_16 [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
        }
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            for (long long int i_7 = 2; i_7 < 13; i_7 += 3) 
            {
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_7 - 2] [(unsigned char)8])) ? (((/* implicit */int) arr_10 [i_7 - 2] [i_7 - 2])) : (((/* implicit */int) arr_10 [i_7 - 2] [i_7 - 2]))));
                    var_22 += ((/* implicit */short) (+(((arr_19 [(unsigned char)3] [(unsigned char)3]) % (((/* implicit */long long int) var_6))))));
                    arr_24 [i_5] [i_6] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5] [i_5]))) : (var_3))) < (var_10)));
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) ((unsigned char) arr_0 [i_5]));
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) ((arr_13 [i_5] [i_8] [i_9]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_5] [i_5])) ? (var_11) : (((/* implicit */unsigned int) var_9)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 3; i_10 < 13; i_10 += 4) 
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (18) : (18)))) ? (((/* implicit */unsigned long long int) arr_30 [i_10 - 3] [i_10 - 3] [i_8] [i_8])) : (arr_13 [i_8] [i_8] [i_10])));
                        var_26 = ((/* implicit */unsigned char) var_10);
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_30 [i_10 + 1] [(_Bool)1] [i_10 - 3] [i_10])) >= ((-9223372036854775807LL - 1LL))));
                    }
                }
            } 
        } 
    }
}
