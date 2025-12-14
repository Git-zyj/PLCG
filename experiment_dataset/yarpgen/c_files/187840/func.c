/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187840
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((((unsigned long long int) ((11852754369983890870ULL) >= (3941292423589733706ULL)))) - (((/* implicit */unsigned long long int) var_8))))));
        var_12 = ((var_6) & (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (18446744073709551603ULL) : (arr_1 [i_0] [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_13 = ((/* implicit */long long int) min((var_13), ((+(arr_3 [i_1])))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 3; i_2 < 23; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 1; i_4 < 23; i_4 += 3) 
                    {
                        var_14 &= ((unsigned long long int) ((9199187820023065989ULL) / (14505451650119817909ULL)));
                        arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((unsigned char) ((18446744073709551591ULL) < (19ULL)));
                    }
                    var_15 &= 2271961905113931878ULL;
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) arr_8 [i_1] [i_2] [i_3]))));
                }
            } 
        } 
        var_17 |= var_9;
        var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) ((unsigned char) var_2)))));
    }
    var_19 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)71))))), ((-((+(var_5)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            {
                arr_21 [i_5] [i_5] [i_5] = max((arr_7 [i_5] [i_6] [i_6]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_6] [i_5] [i_5])) ? (3375482489656334229LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)22)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 3; i_8 < 11; i_8 += 2) 
                    {
                        for (long long int i_9 = 3; i_9 < 11; i_9 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) 4246877352422674677ULL);
                                var_21 &= ((/* implicit */long long int) min((((((/* implicit */_Bool) ((long long int) arr_23 [i_5] [i_7] [5ULL]))) ? (15517619330649419684ULL) : (max((((/* implicit */unsigned long long int) -7550954445068700427LL)), (2962349909266688644ULL))))), (((/* implicit */unsigned long long int) arr_27 [i_5] [i_5] [i_5] [i_7 + 1] [i_8] [i_9 - 3]))));
                                arr_30 [i_5] [i_5] [i_5] [1ULL] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) (unsigned char)65)) ? (var_0) : (var_3))) % (var_4))) != (((((/* implicit */_Bool) arr_16 [i_6])) ? (((((/* implicit */_Bool) (unsigned char)134)) ? (arr_7 [21ULL] [i_7] [i_7]) : (((/* implicit */unsigned long long int) -2984114334347142942LL)))) : (2178070674149676184ULL)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    for (unsigned char i_11 = 2; i_11 < 10; i_11 += 2) 
                    {
                        {
                            var_22 *= var_7;
                            arr_36 [i_5] [i_6] = arr_20 [i_11] [i_6] [i_5];
                            var_23 = ((((/* implicit */_Bool) min((2060141322444602559ULL), (((/* implicit */unsigned long long int) (unsigned char)169))))) ? (min((var_7), (((/* implicit */unsigned long long int) arr_8 [i_11] [i_11 + 2] [i_11])))) : (max((var_9), (((/* implicit */unsigned long long int) arr_8 [16ULL] [i_11 + 1] [i_11])))));
                            var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)123))) : (var_6)))) ? (((((/* implicit */_Bool) 6986034825197267917ULL)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5] [i_5] [i_6] [i_10] [i_11]))))) : (((/* implicit */unsigned long long int) (+(7550954445068700415LL))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_6] [i_6] [i_6] [i_6] [(unsigned char)4])))))) : (((((7967247150372100408ULL) >> (((var_7) - (1369553178676079980ULL))))) >> (((((arr_24 [10ULL] [10ULL] [10ULL] [10ULL]) * (var_7))) - (6537852018330400350ULL))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
