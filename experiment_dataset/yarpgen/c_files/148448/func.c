/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148448
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [7LL] = ((/* implicit */unsigned long long int) (~(((unsigned int) (short)15769))));
        var_13 = ((/* implicit */signed char) (~((~(((/* implicit */int) var_5))))));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_14 -= ((/* implicit */unsigned short) max((((((unsigned int) arr_3 [i_1] [i_1])) & (((/* implicit */unsigned int) (-(-100690496)))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [(unsigned char)15] [i_1])))))));
        /* LoopSeq 3 */
        for (long long int i_2 = 2; i_2 < 13; i_2 += 2) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned int) (-(-6508721128475757338LL)));
            var_15 = ((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */long long int) 6291456)) != (4015636313040496159LL)))) ^ (((/* implicit */int) arr_6 [i_2 + 3])))) | ((~((~(((/* implicit */int) arr_4 [i_2] [i_2 + 2]))))))));
        }
        for (unsigned short i_3 = 1; i_3 < 16; i_3 += 4) 
        {
            arr_11 [i_3 - 1] = ((/* implicit */int) ((((((/* implicit */int) arr_3 [i_3 + 1] [i_3 - 1])) ^ (((/* implicit */int) arr_3 [i_3 + 1] [i_3 - 1])))) < (756903895)));
            var_16 = ((/* implicit */short) (~(((/* implicit */int) (signed char)-90))));
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    for (signed char i_6 = 3; i_6 < 15; i_6 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) max((((/* implicit */long long int) 4294967295U)), (min((((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_1] [i_1] [i_4] [i_4] [i_4] [16])) != (((/* implicit */int) arr_4 [i_3] [i_5]))))), (min((((/* implicit */long long int) arr_13 [i_6] [i_5] [i_4] [i_1])), (arr_5 [15])))))));
                            var_18 = ((/* implicit */long long int) (unsigned char)4);
                        }
                    } 
                } 
            } 
            var_19 -= ((/* implicit */unsigned long long int) min((1297277694U), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4294967282U)) || (((/* implicit */_Bool) (unsigned char)234)))) || (((/* implicit */_Bool) ((3538145784714464869LL) / (((/* implicit */long long int) 1297277689U))))))))));
        }
        for (short i_7 = 1; i_7 < 13; i_7 += 2) 
        {
            arr_22 [i_7] [i_7] [i_7] = ((/* implicit */int) (((+(((((/* implicit */_Bool) arr_3 [i_1] [0])) ? (((/* implicit */long long int) 268304384U)) : (var_1))))) % (((/* implicit */long long int) min(((~(arr_13 [i_1] [i_1] [i_1] [i_1]))), (var_3))))));
            var_20 = ((/* implicit */int) min((var_20), (min(((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [14] [i_7]))))))), (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [(signed char)12])) > (((/* implicit */int) arr_4 [9U] [i_7 + 3])))))))));
            var_21 = ((/* implicit */signed char) (~((~(((/* implicit */int) (unsigned short)26453))))));
        }
    }
    for (int i_8 = 0; i_8 < 15; i_8 += 2) 
    {
        arr_26 [i_8] [i_8] = ((/* implicit */_Bool) ((unsigned short) ((max((((/* implicit */long long int) (unsigned short)26453)), (arr_20 [i_8]))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)90)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_9 = 3; i_9 < 14; i_9 += 2) 
        {
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) (unsigned short)61462)) & (((/* implicit */int) (unsigned char)234))))))));
            var_23 = ((/* implicit */int) arr_24 [3U]);
            var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [(short)13] [i_8])))))) == (4294967282U)));
        }
    }
    var_25 = ((/* implicit */unsigned char) (~(75987202)));
}
