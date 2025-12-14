/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170826
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_11 = ((/* implicit */int) var_3);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (!(((/* implicit */_Bool) 325343361U)))))));
            var_13 |= ((/* implicit */unsigned int) min((var_6), (arr_3 [i_0])));
        }
        var_14 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (-(arr_3 [i_0])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [12ULL] [i_0])) ? (arr_5 [i_0] [i_0]) : (arr_3 [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            var_15 = ((/* implicit */unsigned short) arr_2 [i_0] [(short)0]);
            var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) min((((/* implicit */unsigned long long int) var_2)), (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [(unsigned char)11])) : (arr_4 [3ULL] [3ULL]))), (((/* implicit */unsigned long long int) max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) var_1))))))))))));
        }
    }
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) min((arr_8 [i_3] [i_3]), (((/* implicit */long long int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_9 [i_3] [i_3]))))))))));
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            for (int i_5 = 2; i_5 < 21; i_5 += 4) 
            {
                for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    {
                        var_18 *= ((/* implicit */_Bool) var_2);
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_8 [i_3] [i_3]))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned short) (+(var_10)));
        arr_17 [2ULL] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_8 [i_3] [14LL]))) == (var_2))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_20 [i_7] [i_7] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))))), (max((((/* implicit */long long int) (_Bool)1)), (8008986735095827132LL)))));
        var_21 *= ((/* implicit */unsigned char) max(((-(((/* implicit */int) var_5)))), ((-(((/* implicit */int) max((var_5), (var_3))))))));
    }
    var_22 |= ((/* implicit */unsigned int) (+(((((unsigned long long int) 1462477375U)) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */long long int) var_10)))))))));
    var_23 = ((/* implicit */unsigned short) ((min((var_6), (((/* implicit */long long int) ((unsigned short) (unsigned short)24021))))) < (((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) var_1))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))))))));
    var_24 = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((unsigned int) var_3)), (3969623926U)))), (((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((((/* implicit */long long int) ((/* implicit */int) var_5))) / (var_2))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)107))))))));
}
