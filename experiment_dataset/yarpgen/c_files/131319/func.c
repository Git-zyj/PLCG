/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131319
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
    var_16 = ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */unsigned long long int) -6256060457013197270LL)), (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) : (((((/* implicit */_Bool) 1125899906842620LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (15305323143616822248ULL))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_17 = (~((+(arr_0 [i_0 - 1]))));
        var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 10ULL)) || ((_Bool)1))) ? (((/* implicit */unsigned long long int) ((long long int) 10ULL))) : (max((((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned char) arr_1 [i_0]))))), (max((var_5), (((/* implicit */unsigned long long int) var_9))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_1 [i_0]) ? (((var_4) / (arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
    }
    for (long long int i_1 = 3; i_1 < 9; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] [4ULL] &= ((/* implicit */long long int) (+(25ULL)));
        arr_6 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_0 [i_1]))))))));
        var_19 ^= var_3;
    }
    for (long long int i_2 = 3; i_2 < 9; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_20 *= ((/* implicit */long long int) ((_Bool) 17351195980886030939ULL));
            arr_12 [(_Bool)1] [i_2] = ((/* implicit */long long int) 18446744073709551605ULL);
            arr_13 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 23ULL)) ? (28ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL))));
        }
        /* vectorizable */
        for (long long int i_4 = 3; i_4 < 8; i_4 += 4) 
        {
            arr_16 [i_2] [i_4] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */int) ((41ULL) == (((/* implicit */unsigned long long int) 8071576737307001771LL))))) : (((arr_15 [i_2] [i_4]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14))))));
            arr_17 [i_2] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_15 [i_2] [i_4])))))));
            var_21 = ((/* implicit */_Bool) ((arr_9 [i_2 - 2] [i_2 - 2]) ? (((/* implicit */int) arr_11 [i_2 - 3])) : (((/* implicit */int) (unsigned short)25622))));
            /* LoopSeq 2 */
            for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 1) 
            {
                arr_21 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)142))) ^ (arr_0 [i_4 + 3])));
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6304394435706573013LL)) ? (-1387143072374445688LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63)))));
            }
            for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                arr_25 [i_2] [i_2] [i_6] = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-9223372036854775786LL))) ^ (((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4])))))));
                arr_26 [i_2] [(_Bool)1] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_11))));
                var_24 = arr_7 [i_2];
            }
            arr_27 [i_2] = ((/* implicit */long long int) (unsigned char)63);
        }
        var_25 = min((((unsigned long long int) ((unsigned short) arr_0 [i_2]))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_0 [i_2])))) & (((unsigned long long int) arr_0 [i_2 - 2])))));
    }
    var_26 &= ((/* implicit */unsigned short) var_7);
}
