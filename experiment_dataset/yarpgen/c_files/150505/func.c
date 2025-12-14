/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150505
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_0])) : (-1))))) & (((((/* implicit */int) ((unsigned char) (unsigned short)50008))) ^ (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)17114))))))));
        var_12 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_11)), (max((((long long int) arr_1 [i_0])), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32760)) && (((/* implicit */_Bool) (signed char)91)))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((max((arr_5 [i_0] [i_2 + 2] [i_2] [i_0]), (((/* implicit */unsigned long long int) var_5)))) << (((((/* implicit */int) (short)-25172)) + (25212)))));
                        arr_11 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) var_8);
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned char) ((8070450532247928832LL) > (var_9)));
        var_13 = ((/* implicit */long long int) max((((((unsigned long long int) (signed char)-53)) + (((/* implicit */unsigned long long int) var_11)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))) * (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (14247300109495808063ULL) : (arr_5 [i_0] [i_0] [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
        {
            var_14 = arr_4 [i_5];
            arr_18 [i_4] [i_5] = arr_1 [i_5];
            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52070))) : (((((/* implicit */_Bool) -1LL)) ? (-1LL) : (((/* implicit */long long int) 4U))))));
            var_16 = ((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))) : (arr_5 [i_5] [i_4] [i_4] [i_5]));
        }
        for (long long int i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_4))));
            arr_22 [i_6] [i_4] [i_6] = ((/* implicit */short) arr_5 [i_6] [i_6] [i_6] [i_6]);
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)2))) / (5998282543410792576LL)))) ? (((((/* implicit */_Bool) arr_7 [i_6] [i_6] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_5 [i_4] [i_6] [i_6] [i_6]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_8 [0U] [i_6] [i_6] [i_6] [0U])) : (((/* implicit */int) arr_19 [i_4] [i_4])))))));
        }
        var_19 = ((/* implicit */unsigned char) ((var_11) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 4032420321U))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */int) max((min((((/* implicit */unsigned int) min((((/* implicit */short) var_4)), ((short)32766)))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) % (4294967278U))))), (1416478658U)));
        var_21 = ((/* implicit */_Bool) arr_6 [i_7]);
    }
    var_22 = ((/* implicit */long long int) var_5);
    var_23 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_3)))))) < (max((var_7), (((/* implicit */unsigned long long int) (short)480)))))) ? (min((((/* implicit */unsigned long long int) var_1)), (min((var_7), (((/* implicit */unsigned long long int) (short)-1871)))))) : (((min((((/* implicit */unsigned long long int) var_11)), (2ULL))) ^ (var_7)))));
}
