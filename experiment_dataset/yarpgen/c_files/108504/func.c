/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108504
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
    var_11 = ((/* implicit */long long int) (unsigned short)14);
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (_Bool)1))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) arr_4 [i_0 - 1] [i_0] [i_1]))));
            var_14 -= ((/* implicit */signed char) max((((/* implicit */int) ((((((/* implicit */_Bool) 12458601355210416276ULL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1)))) < (arr_1 [i_0])))), (((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_4 [i_0 - 1] [10ULL] [i_1])))) << (((((/* implicit */int) min((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */signed char) arr_0 [i_0]))))) + (132)))))));
            /* LoopSeq 1 */
            for (short i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_7 [i_0] [i_2]), (((/* implicit */unsigned long long int) arr_4 [i_0] [5] [i_2]))))) ? (((/* implicit */int) arr_3 [i_2] [i_0] [14LL])) : (arr_1 [i_2 + 3])));
                var_16 = ((/* implicit */signed char) arr_0 [i_2]);
                var_17 += ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) max((var_3), ((_Bool)1))))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (arr_7 [i_1] [(_Bool)1]) : (arr_7 [i_0] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [7LL] [7LL] [i_2 - 1]))) : (min((arr_7 [i_2] [i_0 - 1]), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                var_18 = ((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_0]) ? (((((/* implicit */_Bool) 18446744073709551613ULL)) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 - 1])))) : (((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0 - 1]))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 2) 
                {
                    var_19 = arr_2 [i_0];
                    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_3] [(unsigned short)8] [i_0 - 1] [i_1] [i_0 - 1])) ? (((/* implicit */int) arr_5 [i_3] [i_1])) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_3 [i_0] [i_1] [i_2]))))))) * ((+(((((/* implicit */_Bool) (signed char)-121)) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(18446744073709551608ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-54))))) : (max((arr_8 [i_1] [i_2] [(short)7] [i_1] [(_Bool)1] [i_0]), (arr_7 [i_0] [i_1])))))) ? (((/* implicit */unsigned long long int) (+(arr_9 [i_0] [i_1] [i_3 - 1] [i_2 + 2] [i_1])))) : ((~(max((11ULL), (((/* implicit */unsigned long long int) 3))))))));
                }
                for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [(signed char)6] [i_1] [i_2 - 1])) & ((+(((/* implicit */int) (signed char)-50))))))), (min((18446744073709551602ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [16ULL] [i_0 - 1])))))))));
                    arr_13 [i_0] [i_1] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) ((14ULL) << (6)));
                }
            }
            arr_14 [i_0] [i_0] = ((/* implicit */int) max((((max((((/* implicit */int) var_3)), (arr_1 [i_0]))) == (((/* implicit */int) (_Bool)1)))), (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1] [i_1])))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (34355544064ULL))))))));
        }
    }
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            {
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) -6))));
                var_24 = ((((/* implicit */_Bool) 18446744073709551606ULL)) ? (((((((/* implicit */int) arr_17 [i_6] [i_6] [(_Bool)1])) + (2147483647))) << ((((+(((/* implicit */int) (unsigned short)949)))) - (949))))) : (((/* implicit */int) (unsigned char)21)));
                var_25 -= ((/* implicit */short) arr_16 [i_6]);
                var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_15 [i_5])) + (((/* implicit */int) arr_15 [i_6])))) == (max((((/* implicit */int) min((((/* implicit */unsigned short) arr_17 [i_5] [i_5] [i_6])), ((unsigned short)43460)))), (((((/* implicit */_Bool) arr_11 [i_5] [i_5] [8ULL] [6])) ? (((/* implicit */int) (unsigned char)68)) : (((/* implicit */int) (unsigned short)5634))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (~(((((/* implicit */int) (signed char)127)) * (((((/* implicit */_Bool) 16552015232996989208ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)77)))))))))));
}
