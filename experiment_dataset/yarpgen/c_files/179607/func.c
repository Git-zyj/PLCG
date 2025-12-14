/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179607
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
    var_14 = ((/* implicit */unsigned long long int) var_7);
    var_15 = ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_5)) ? (var_3) : (var_0))) : (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)65535)), (var_2)))))) : (((/* implicit */unsigned int) (+(901954025)))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65532)) && (((/* implicit */_Bool) -9223372036854775798LL))));
        arr_3 [i_0] = ((((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))) + (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0])))));
        arr_4 [3] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((var_3) << (((-2147483638) + (2147483638)))))))) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (unsigned short)65527))));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        arr_7 [i_1] = max((((((/* implicit */_Bool) (unsigned short)65523)) ? (max((((/* implicit */unsigned long long int) arr_6 [i_1])), (1ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)19045)) ? (arr_5 [i_1] [i_1]) : (arr_6 [i_1])))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1]))) + (((/* implicit */unsigned int) ((var_2) - (var_9))))))));
        arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (9223372036854775781LL)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (24ULL) : (((/* implicit */unsigned long long int) 9223372036854775797LL)))) == (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) arr_6 [i_1])))))))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65521))))) != (1217961788))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 23; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) -1262853407);
                arr_15 [i_2] [i_2] = ((((/* implicit */_Bool) max((arr_11 [i_2 + 2]), (arr_11 [i_2 - 2])))) ? ((-(arr_11 [i_2 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_11 [i_2 - 2])))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        {
                            arr_22 [i_2] [i_5] [i_2] [i_2] = ((/* implicit */short) arr_12 [i_5]);
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65532)) ? (12615931196521037479ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65532)))));
                        }
                    } 
                } 
                var_18 -= ((/* implicit */unsigned char) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)17963)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_6);
}
