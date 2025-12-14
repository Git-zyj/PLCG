/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171787
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
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-(max((var_4), (((/* implicit */int) (unsigned short)24970))))))), (((unsigned long long int) ((467016908U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))))));
    var_17 -= ((/* implicit */signed char) (((+(max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)28694)))))) != (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_3)))))))));
    var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) max(((~(var_4))), (((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_11)))))))) ? (((var_9) + (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))))) : (((/* implicit */unsigned int) var_4))));
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((unsigned long long int) max(((unsigned short)36842), ((unsigned short)28694)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((var_10) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28694))))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-41))) % (14015875290351030712ULL))) - (4430868783358520846ULL)))))), (((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0 - 3]) : (arr_1 [i_0 + 1])))));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((arr_1 [(short)3]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)40))))))) ? (min(((((_Bool)0) ? (arr_1 [i_1 + 2]) : (((/* implicit */unsigned long long int) var_6)))), (min((((/* implicit */unsigned long long int) arr_2 [i_1 + 3])), (9388713483847353950ULL))))) : (max((((unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) 4007491396410610726LL)) ? (((/* implicit */unsigned long long int) var_15)) : (arr_0 [i_0])))))));
                var_22 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 600527029)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)-21324))))) ? ((+(arr_1 [i_0 + 3]))) : (((/* implicit */unsigned long long int) var_9)));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    arr_6 [i_2] [(signed char)15] [i_2] = ((/* implicit */int) (-(((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 1] [i_1 + 1])))))));
                    var_23 = ((/* implicit */unsigned short) (signed char)-41);
                    arr_7 [i_0 + 1] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (unsigned short)58109))) & (((/* implicit */int) ((short) arr_4 [i_2] [i_2] [i_2])))))) ? (((((/* implicit */_Bool) var_2)) ? (arr_0 [i_0 + 1]) : (arr_1 [i_0 + 3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12)))));
                    var_24 = ((/* implicit */_Bool) min((var_24), (min(((!(((/* implicit */_Bool) ((unsigned int) 18446744073709551615ULL))))), ((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0])))))))))));
                    arr_8 [i_2] [i_2] [i_2] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_3 [i_2])))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)39)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) != (var_10)))) : (((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_8)), (arr_4 [i_0] [i_1] [16U]))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)21309)) / (((/* implicit */int) var_3))))))))));
                }
                var_25 = ((/* implicit */_Bool) min(((+(arr_3 [i_1 + 3]))), ((-(((((/* implicit */_Bool) 4294967295U)) ? (arr_3 [i_0 - 2]) : (4430868783358520904ULL)))))));
            }
        } 
    } 
}
