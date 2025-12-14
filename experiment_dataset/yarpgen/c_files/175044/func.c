/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175044
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
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 14; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (-(0LL)));
        var_16 ^= ((/* implicit */int) arr_0 [(_Bool)1]);
    }
    for (int i_1 = 1; i_1 < 14; i_1 += 1) /* same iter space */
    {
        var_17 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [6])))))));
        arr_6 [i_1] [i_1] = (i_1 % 2 == zero) ? (((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) arr_5 [i_1])) : (var_10))) >> (((arr_5 [i_1]) - (710621904266595773LL))))) : (((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) arr_5 [i_1])) : (var_10))) >> (((((arr_5 [i_1]) - (710621904266595773LL))) - (2088602304357353989LL)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_18 = ((/* implicit */unsigned long long int) (-(arr_8 [i_2 - 1])));
            var_19 = ((/* implicit */short) (signed char)127);
        }
        arr_9 [i_1] [i_1] = ((/* implicit */short) var_9);
    }
    for (int i_3 = 1; i_3 < 14; i_3 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (var_13))))) : ((~(((((/* implicit */_Bool) arr_8 [i_3])) ? (var_7) : (var_7)))))));
        arr_13 [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)11755)), (arr_5 [i_3])));
        /* LoopSeq 3 */
        for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 4) /* same iter space */
        {
            arr_17 [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-2))))), (((((/* implicit */_Bool) var_7)) ? (arr_5 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))) ? ((+(((((/* implicit */_Bool) (unsigned short)11755)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) % (var_9))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(var_0))))))))));
            var_21 ^= ((/* implicit */unsigned short) (+(max((min((arr_14 [i_3]), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) arr_7 [i_3] [i_4] [i_3]))))));
            var_22 ^= ((/* implicit */unsigned long long int) ((((min((((/* implicit */int) (unsigned short)53806)), (-1317324168))) % ((+(((/* implicit */int) var_5)))))) * (((/* implicit */int) min((var_12), (((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) var_11)))))))));
        }
        for (unsigned long long int i_5 = 3; i_5 < 15; i_5 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */signed char) (((+(arr_12 [i_3] [i_5 - 1]))) << ((((~(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))) + (58)))));
            arr_20 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [7LL] [7LL] [(_Bool)1]))) * (arr_12 [i_3] [i_5]))))))));
            arr_21 [7] [i_3] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) arr_0 [i_3])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
            var_24 = ((/* implicit */long long int) (-(((min((((/* implicit */unsigned long long int) (unsigned short)11773)), (arr_12 [i_3] [i_5]))) * ((-(arr_12 [i_3] [i_3])))))));
        }
        for (unsigned long long int i_6 = 3; i_6 < 15; i_6 += 4) /* same iter space */
        {
            arr_24 [2] [2] &= ((/* implicit */_Bool) 4095);
            arr_25 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3] [i_3 + 2]))) : (((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53780))) : (arr_19 [14] [i_3 + 3] [i_3]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3 + 3] [i_6 - 1])))))));
            var_25 *= ((/* implicit */int) (((-(((/* implicit */int) arr_7 [i_3] [i_3 - 1] [(unsigned char)10])))) <= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_3 + 2] [i_3]))) < (var_11))))));
            arr_26 [i_3] [i_6] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? ((+(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (-(arr_19 [i_6 - 1] [i_6 - 1] [4]))))));
        }
    }
    var_27 = ((/* implicit */long long int) (unsigned short)13268);
}
