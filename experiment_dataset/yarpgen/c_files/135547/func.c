/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135547
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
    var_15 += ((/* implicit */unsigned char) min((((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */short) var_10)), ((short)27194))))))), (((((long long int) var_5)) - (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
    var_16 = ((/* implicit */int) var_4);
    var_17 = var_13;
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)114))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (unsigned char i_3 = 3; i_3 < 9; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) min((var_19), (((((/* implicit */int) arr_5 [(short)9] [i_1])) == (((/* implicit */int) (short)32767))))));
                        var_20 += ((/* implicit */short) 3390451195665137602ULL);
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        var_21 = ((/* implicit */signed char) arr_9 [i_4] [(short)2]);
        arr_11 [i_4] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (arr_9 [i_4] [i_4])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (arr_9 [i_4] [i_4])))) : (max((((/* implicit */unsigned long long int) var_3)), (arr_8 [i_4] [i_4]))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_2) + (((/* implicit */int) var_9))))) ? (((/* implicit */int) (unsigned short)55870)) : (((/* implicit */int) ((unsigned char) arr_9 [i_4] [i_4]))))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_12)))))))), (((unsigned int) arr_12 [i_5] [i_5]))));
        /* LoopSeq 2 */
        for (short i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            var_23 += ((/* implicit */short) min((((((/* implicit */_Bool) min((((/* implicit */int) (short)-27189)), (var_2)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [i_5] [(_Bool)1])))), (var_2)));
            var_24 += ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned char) (short)-27194))), (min((((/* implicit */int) arr_16 [i_5] [i_6])), (arr_17 [i_6])))));
        }
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            arr_22 [(signed char)5] [(short)13] [i_5] = ((/* implicit */_Bool) ((unsigned int) (signed char)-27));
            arr_23 [i_5] = ((/* implicit */unsigned long long int) ((long long int) var_1));
        }
        var_25 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned short) ((var_13) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_18 [i_5] [i_5] [i_5]))))), (8799133918840544239ULL)));
        var_26 = arr_19 [i_5] [i_5];
        var_27 += ((/* implicit */signed char) var_0);
    }
}
