/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100259
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (1073741823U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
    var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_15))))) ? (min((((((/* implicit */unsigned int) ((/* implicit */int) var_14))) - (4294967280U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_5))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_14)) + (2147483647))) << (((((/* implicit */int) var_8)) - (158)))))) && (((/* implicit */_Bool) var_15))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((min((((/* implicit */long long int) (unsigned short)33296)), (var_7))) > (((/* implicit */long long int) ((/* implicit */int) (short)2047)))))), (max((arr_0 [i_1] [i_0]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1] [i_1])))))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    var_19 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) < (var_4)))), ((~(((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 3] [i_1]))) % (5221173656457542608LL)))))));
                    arr_8 [i_1 + 1] = ((/* implicit */int) var_14);
                }
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    arr_12 [i_3] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) > (arr_5 [i_0 - 1] [i_3])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) 10720275369096151598ULL)))))));
                    var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3] [i_0]))) : (3919324544U))))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (arr_11 [(signed char)0] [(signed char)0]))), (((/* implicit */unsigned long long int) var_5))))));
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) max((((/* implicit */int) var_14)), (min((((/* implicit */int) var_13)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-97)) : (((/* implicit */int) var_3)))))))))));
                }
                /* LoopNest 3 */
                for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    for (signed char i_5 = 2; i_5 < 10; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_22 *= ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)52230))))), (min((var_9), (arr_19 [i_0] [i_1] [i_0] [i_5] [i_1])))))));
                                arr_20 [i_0] [i_0] [i_0] [i_4] [i_5] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */int) (short)-1)) ^ (((/* implicit */int) arr_10 [i_1 + 1] [i_6 - 1] [i_6]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((unsigned long long int) (-(((((/* implicit */_Bool) var_6)) ? (-6452105389205706849LL) : (((/* implicit */long long int) 4294967278U))))))))));
    var_24 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_1))) > (((/* implicit */int) var_11))));
}
