/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17210
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((-9131822076586311859LL) <= (9131822076586311858LL)))) | (((/* implicit */int) ((((/* implicit */int) (unsigned short)3893)) != (((/* implicit */int) (unsigned short)61660)))))));
            var_21 -= ((/* implicit */unsigned long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_1 + 2] [(signed char)12]))))), (var_16)));
            var_22 = ((/* implicit */unsigned short) 2305842992033824768LL);
            arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1))));
        }
        for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            arr_10 [i_2] [i_0] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) ((int) 8796093014016ULL))), (min((arr_3 [i_2]), (((/* implicit */unsigned int) var_6)))))), (((/* implicit */unsigned int) (+(((((((/* implicit */int) arr_4 [i_0] [i_2])) + (2147483647))) << (((var_0) - (761482971U))))))))));
            arr_11 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_12) >> (((min((((/* implicit */unsigned int) (unsigned short)3907)), (16777184U))) - (3900U)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-33)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (18446744073709551614ULL))))));
            var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32766)) && (((/* implicit */_Bool) -5132786767664145486LL))));
            arr_12 [i_2] = ((/* implicit */unsigned short) arr_8 [i_0] [i_2]);
        }
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) arr_2 [i_0]))));
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            var_25 = ((/* implicit */short) min((((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_4 [i_0] [i_0])))) % (((2305842992033824772LL) % (-2305842992033824751LL))))), (max((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_6 [i_0] [i_0]))), (((/* implicit */long long int) var_3))))));
            arr_15 [i_0] [i_3] = ((/* implicit */unsigned long long int) (~(((unsigned int) arr_3 [i_3]))));
            arr_16 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */unsigned int) (_Bool)1)), (2924346386U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)3907)) && (((/* implicit */_Bool) (signed char)65))))))))) ? (8796093014016ULL) : (((/* implicit */unsigned long long int) -9131822076586311850LL))));
            /* LoopSeq 1 */
            for (short i_4 = 3; i_4 < 22; i_4 += 1) 
            {
                var_26 = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) (_Bool)0)), (((unsigned int) (unsigned char)25))))));
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [0ULL] [i_4 + 1]))) <= (var_10)));
            }
            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [(short)8] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2984083006944453797LL)) ? (2517543713U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) : ((-(((var_18) | (var_18))))))))));
        }
    }
    var_29 = ((/* implicit */long long int) var_3);
    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (1777423582U)));
}
