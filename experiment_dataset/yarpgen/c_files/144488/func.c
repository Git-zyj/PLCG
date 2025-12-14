/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144488
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
    var_13 -= ((/* implicit */signed char) var_3);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned long long int) var_10);
                var_14 = ((long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [(unsigned char)2])) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_0])));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((unsigned char) ((((((/* implicit */int) var_5)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)208)) - (202)))))), (arr_10 [i_0] [i_1] [i_1] [i_2])));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)82)) | (((((/* implicit */_Bool) arr_1 [i_2] [i_1])) ? (((/* implicit */int) arr_1 [i_1] [i_0])) : (((/* implicit */int) var_7))))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_2 [i_0]), (arr_2 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (var_12) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)30), ((unsigned char)219)))))));
                    var_17 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_6 [i_0] [i_0] [i_0]))) / ((-(4825122951973147830ULL)))));
                    var_18 = ((/* implicit */unsigned long long int) ((signed char) ((unsigned char) (+(4825122951973147845ULL)))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    var_19 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)71))) : (arr_3 [i_1] [i_3]))), (((((((/* implicit */_Bool) 3204254155688912024ULL)) || (((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_4))))))));
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_3]))))), (arr_6 [i_0] [7ULL] [i_1])))) ? (((((/* implicit */_Bool) 3204254155688912027ULL)) ? (10935692186885409918ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)90)) / (((/* implicit */int) (unsigned char)158))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (((/* implicit */short) arr_9 [i_0]))))))))));
                    arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)92))) * (2251799813619712LL)))) ? (max((var_9), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_3] [i_0]))))))) : ((+(arr_6 [i_3] [i_1] [(signed char)9])))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (536870912U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))))) >> (((arr_3 [i_1] [i_0]) - (14544123184381953176ULL)))))) ? (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)126)) ? (8556380160ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)186)))))) ? (((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)85))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)33)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))))))));
                }
            }
        } 
    } 
}
