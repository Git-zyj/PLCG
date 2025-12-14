/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114874
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (+(arr_0 [i_0 - 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : ((+(arr_0 [i_0 - 1])))))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min(((~(var_4))), (((/* implicit */long long int) arr_1 [i_0] [i_0 - 2]))))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min((((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) 9117046051737758162LL)) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) arr_5 [i_1])) : (var_8))))), (((/* implicit */unsigned long long int) var_11)))))));
        arr_6 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) min((var_8), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 2; i_2 < 9; i_2 += 3) 
        {
            var_16 *= ((/* implicit */short) 9117046051737758162LL);
            var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_2 - 1])) ? (9117046051737758177LL) : (((/* implicit */long long int) var_0))))));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    {
                        var_18 = ((/* implicit */short) 3296673489150859149LL);
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((int) var_0)))));
                    }
                } 
            } 
        }
        arr_17 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */long long int) (~(arr_0 [i_1])))) : (9117046051737758162LL)));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_20 += ((/* implicit */short) arr_19 [i_5]);
        arr_20 [(unsigned short)3] = ((/* implicit */short) arr_19 [i_5]);
    }
    for (int i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        arr_24 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_21 [i_6] [i_6]) % (((/* implicit */long long int) var_6))))), (((((/* implicit */_Bool) arr_23 [i_6] [i_6])) ? (arr_23 [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_6])))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((arr_23 [i_6] [i_6]) % (((/* implicit */unsigned long long int) arr_21 [i_6] [i_6])))) : (((/* implicit */unsigned long long int) 9117046051737758146LL)))) : (min((((/* implicit */unsigned long long int) arr_22 [i_6])), (arr_23 [i_6] [i_6])))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (~((+(((/* implicit */int) ((((/* implicit */int) (short)-14049)) != (((/* implicit */int) var_5))))))))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        for (int i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            for (short i_9 = 2; i_9 < 12; i_9 += 2) 
            {
                {
                    arr_31 [i_8] [i_8] [i_8] [(unsigned short)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_9] [i_9] [i_9 + 2] [i_9 + 2])) ? ((~(((/* implicit */int) arr_28 [i_9] [i_8] [i_7])))) : (((/* implicit */int) var_10))));
                    arr_32 [i_7] [i_8] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((+(-9117046051737758162LL)))))) ? (((((/* implicit */_Bool) arr_25 [i_9] [i_8])) ? ((+(arr_30 [i_9] [i_8] [(_Bool)1] [13ULL]))) : (((((/* implicit */_Bool) arr_29 [i_7] [i_8])) ? (var_13) : (((/* implicit */int) var_5)))))) : (min(((+(((/* implicit */int) var_10)))), (((/* implicit */int) ((short) (unsigned short)16815)))))));
                }
            } 
        } 
    } 
}
