/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104385
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
    var_19 = ((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (!((_Bool)1))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 20; i_1 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */_Bool) min((((var_9) ? (((/* implicit */int) var_8)) : (arr_3 [i_1 + 1] [i_1 - 1]))), (arr_3 [i_1 - 1] [i_1 - 2])));
            var_21 = ((/* implicit */unsigned long long int) var_12);
        }
        for (short i_2 = 3; i_2 < 20; i_2 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_15) == (((/* implicit */int) arr_1 [i_0])))))) ^ (arr_5 [i_2 - 3])))) ? (((/* implicit */int) ((var_10) != (((/* implicit */unsigned int) arr_6 [i_2 - 2] [10U]))))) : (251658240))))));
            var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) max(((+(arr_6 [i_2] [i_0]))), (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (var_1)))))))));
            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) (unsigned short)23606)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)44)))) + (((/* implicit */int) ((unsigned char) (unsigned short)16384))))))))));
            arr_7 [i_2] [i_2] = ((/* implicit */int) arr_5 [i_2]);
        }
        var_25 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((signed char) var_9))) ? (((/* implicit */unsigned long long int) 63LL)) : (17686486827342526344ULL))) != (((((((/* implicit */unsigned int) var_15)) > (1850993754U))) ? (((/* implicit */unsigned long long int) (~(var_18)))) : (((((/* implicit */_Bool) (short)-14090)) ? (18446744073709551594ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))))))));
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)16)), (arr_3 [i_0] [i_0])))) <= (((1037341951620558713ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_0 [21ULL])))))))))));
    }
    for (int i_3 = 1; i_3 < 16; i_3 += 2) 
    {
        arr_10 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(arr_9 [i_3] [i_3]))), (((/* implicit */unsigned int) ((arr_3 [i_3] [i_3]) | (((/* implicit */int) (unsigned short)38625)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_3 - 1] [i_3 + 2])) && (((/* implicit */_Bool) (unsigned char)115))))) : (((/* implicit */int) (signed char)86))));
        arr_11 [i_3] = ((((((var_9) ? (5624193090478566330ULL) : (var_17))) != (((/* implicit */unsigned long long int) (-(2318528127U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) || (((((/* implicit */_Bool) var_3)) && ((_Bool)1))))))) : (arr_4 [i_3 + 1] [i_3 + 2]));
        var_27 = ((/* implicit */signed char) max((((((/* implicit */int) var_3)) != (((((/* implicit */_Bool) 26ULL)) ? (((/* implicit */int) arr_2 [i_3 + 1])) : (((/* implicit */int) var_4)))))), (((((/* implicit */_Bool) arr_3 [i_3] [i_3 - 1])) || (((/* implicit */_Bool) arr_3 [i_3 - 1] [i_3 - 1]))))));
        var_28 = ((/* implicit */long long int) ((unsigned long long int) ((_Bool) var_3)));
    }
    for (long long int i_4 = 2; i_4 < 15; i_4 += 1) 
    {
        var_29 ^= ((/* implicit */unsigned int) ((unsigned short) var_6));
        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (signed char)41)) <= (((/* implicit */int) (unsigned char)194))))) % (((/* implicit */int) (_Bool)1))))) ? (((int) ((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_17)))) : ((~((-(var_6)))))));
        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [3ULL])) * (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) var_1)))) & (((var_11) & (((/* implicit */int) var_2))))))));
        arr_14 [i_4] [i_4] = (signed char)67;
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((_Bool) ((_Bool) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) ((short) arr_3 [i_4] [(signed char)7]))) == (((((/* implicit */_Bool) 449720890)) ? (((/* implicit */int) arr_2 [6])) : (((/* implicit */int) (short)-25802)))))))));
    }
    var_32 = ((/* implicit */short) var_11);
    var_33 = ((/* implicit */unsigned long long int) var_18);
}
