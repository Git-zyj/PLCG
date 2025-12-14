/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178990
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) (-2147483647 - 1))))))) : (var_5)));
    var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_13))));
    var_16 = max((((/* implicit */long long int) (~(2147483647)))), (var_10));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) >> (((arr_1 [i_0]) - (1819211955)))))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_3 [i_1]), (((/* implicit */short) var_13))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0 - 2])))))));
            arr_4 [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
            var_18 ^= ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (1855503459664525602LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [(short)10]))))), (((/* implicit */long long int) max((arr_1 [i_0]), (((/* implicit */int) arr_0 [i_0]))))))), (((/* implicit */long long int) arr_0 [i_0]))));
        }
        for (long long int i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_2 [i_0]))));
            arr_7 [i_0 + 2] [i_2] = ((/* implicit */long long int) ((arr_1 [i_0 + 1]) ^ (((/* implicit */int) arr_3 [i_0 + 1]))));
            arr_8 [i_0] = ((/* implicit */long long int) ((((((((/* implicit */int) (signed char)-103)) / (arr_1 [i_2]))) * (((/* implicit */int) (unsigned char)238)))) <= (((/* implicit */int) arr_3 [i_2]))));
            var_20 = (((-(((/* implicit */int) arr_3 [i_0 - 2])))) >= ((-(arr_1 [i_0 - 2]))));
            var_21 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(min((((/* implicit */int) var_8)), (arr_1 [i_0])))))), (min((-1855503459664525598LL), (-1855503459664525610LL)))));
        }
        /* LoopSeq 2 */
        for (long long int i_3 = 2; i_3 < 12; i_3 += 2) 
        {
            arr_12 [i_0 + 1] = ((/* implicit */_Bool) (((_Bool)1) ? (2147483647) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 321335247342447808LL))))) < (-2147483643))))));
            var_22 = ((/* implicit */int) (((+((+(var_6))))) / (((((/* implicit */_Bool) arr_6 [i_3] [i_3 + 1])) ? (arr_10 [i_3 - 2] [i_3 + 1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [9] [i_3 + 1])))))));
        }
        for (unsigned char i_4 = 1; i_4 < 12; i_4 += 2) 
        {
            arr_16 [i_0] = ((/* implicit */unsigned char) max((((((arr_1 [i_4]) / (((/* implicit */int) var_2)))) / ((-(-2147483647))))), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (unsigned char)88)) ? (((/* implicit */int) (unsigned char)149)) : (((/* implicit */int) (unsigned char)243))))))));
            /* LoopSeq 2 */
            for (int i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
            {
                arr_19 [i_5] = arr_9 [i_5];
                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_18 [(_Bool)1] [i_4 - 1] [i_0 + 2] [i_0 + 2]), (arr_18 [i_4] [i_4 - 1] [i_4 - 1] [i_0 - 2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_5] [i_4 + 1] [i_4] [i_0 - 1])) ? (((/* implicit */int) var_3)) : (-2147483643)))) : (((((arr_18 [i_5] [i_4 - 1] [i_0] [i_0 + 1]) + (9223372036854775807LL))) >> (((2147483647) - (2147483623))))))))));
            }
            for (int i_6 = 0; i_6 < 13; i_6 += 1) /* same iter space */
            {
                arr_23 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) arr_11 [i_0 + 2] [i_0 + 2]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_4]))) / (-1855503459664525596LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_4] [i_4] [i_4] [i_4 - 1])) || (((/* implicit */_Bool) arr_18 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])))))) : (min((max((((/* implicit */long long int) -2147483644)), (1948799651911779805LL))), (((/* implicit */long long int) min((arr_13 [i_0 + 2]), (arr_13 [i_6]))))))));
                arr_24 [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((808527051) << (((((var_7) + (796228044))) - (8))))))))) >= ((~(((/* implicit */int) arr_0 [i_4 + 1]))))));
                var_24 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((arr_21 [i_0] [i_6] [i_6]), (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) max((var_8), (var_12)))))) - (((((/* implicit */_Bool) max((arr_10 [i_0] [i_4 + 1] [i_6]), (((/* implicit */long long int) var_7))))) ? (((((/* implicit */int) (unsigned char)95)) + (((/* implicit */int) arr_11 [i_4] [i_4])))) : (((/* implicit */int) max((((/* implicit */short) var_3)), (var_2))))))));
                arr_25 [i_0] [i_6] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_21 [i_0] [i_6] [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 2] [i_4 - 1]))) : (((((/* implicit */_Bool) arr_13 [i_4 - 1])) ? (arr_17 [i_0 - 2] [i_0 + 2] [10U]) : (((/* implicit */unsigned long long int) var_4)))))));
            }
        }
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0 + 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0])) < (((/* implicit */int) arr_15 [i_0 - 1])))))))) | (((((/* implicit */_Bool) arr_17 [i_0] [i_0 - 1] [i_0 + 1])) ? (arr_17 [i_0] [i_0 - 1] [i_0]) : (arr_17 [i_0] [i_0 - 1] [i_0])))));
    }
}
