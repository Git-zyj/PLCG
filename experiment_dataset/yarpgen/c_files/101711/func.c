/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101711
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) 6318039198355215ULL);
        arr_3 [i_0] = arr_1 [i_0] [i_0];
        var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) (+(arr_0 [4U] [4U]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((_Bool) arr_1 [i_0] [i_0]));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 15; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_2 = 2; i_2 < 13; i_2 += 3) 
        {
            var_11 = ((/* implicit */short) ((long long int) arr_9 [i_2 - 2] [i_2 - 2]));
            arr_10 [i_1] = ((/* implicit */unsigned char) (unsigned short)45679);
        }
        for (unsigned short i_3 = 1; i_3 < 15; i_3 += 2) 
        {
            arr_14 [i_1] [i_1] [i_1] = ((/* implicit */int) ((unsigned char) var_9));
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    {
                        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3724670793U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1] [i_3] [11LL] [11LL] [i_3]))) : (arr_12 [i_3 + 1])));
                        var_13 = ((/* implicit */long long int) max((var_13), (var_2)));
                    }
                } 
            } 
            arr_20 [i_1 + 1] [i_1] [i_1] = ((/* implicit */short) (unsigned char)234);
        }
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_7 = 1; i_7 < 13; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    for (int i_9 = 2; i_9 < 12; i_9 += 3) 
                    {
                        {
                            arr_30 [i_9] [i_8] [i_7 + 2] [i_6] [i_1] = ((/* implicit */short) var_9);
                            arr_31 [i_1] [i_1] [i_7] [i_6] [i_1] = ((/* implicit */int) (+(18440426034511196400ULL)));
                            arr_32 [i_6] [i_6] = var_5;
                        }
                    } 
                } 
                arr_33 [i_6] [i_6] [i_7] [(unsigned char)3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_1] [i_7 + 2] [i_1 - 2] [i_7 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_15 [i_7] [i_6] [i_7])))) : ((+(arr_22 [i_1 - 1] [i_6] [4LL])))));
                var_14 = ((/* implicit */_Bool) (unsigned char)142);
                /* LoopNest 2 */
                for (signed char i_10 = 2; i_10 < 12; i_10 += 3) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (short)-21774)) / (((/* implicit */int) var_9))))) % (9223372036854775798LL)));
                            var_16 = ((/* implicit */signed char) arr_27 [i_11] [i_1] [9LL] [i_1]);
                        }
                    } 
                } 
            }
            arr_38 [i_1] = ((/* implicit */_Bool) (unsigned short)12006);
        }
        arr_39 [i_1] = ((/* implicit */unsigned int) arr_17 [i_1] [i_1 + 1] [i_1 + 1] [13LL]);
    }
    var_17 = ((/* implicit */int) var_3);
}
