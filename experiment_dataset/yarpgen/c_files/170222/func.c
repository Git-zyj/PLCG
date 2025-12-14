/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170222
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) 24U);
        var_20 ^= arr_1 [i_0];
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_21 = ((((/* implicit */_Bool) max((var_6), (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? ((-(((/* implicit */int) (signed char)-65)))) : (((/* implicit */int) ((_Bool) 17726864613170090802ULL))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        arr_11 [(signed char)12] [i_0] [i_2] [i_3] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) / (14573085589929855016ULL)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13))));
                        var_22 -= ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 17726864613170090825ULL)))))) : (var_18)))) : (min((((/* implicit */unsigned long long int) max(((signed char)112), (arr_1 [i_0])))), ((+(14573085589929855016ULL))))));
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((unsigned short) min((4294967272U), (((/* implicit */unsigned int) (signed char)-113))))))));
                        arr_12 [i_2] [i_0] = ((/* implicit */long long int) 14U);
                        var_24 = ((/* implicit */unsigned short) ((17726864613170090804ULL) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)1)))))));
                    }
                } 
            } 
            arr_13 [i_0] [i_0] [i_0] = ((unsigned long long int) arr_9 [i_0] [i_1] [i_0] [i_0]);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_4 = 1; i_4 < 15; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 4; i_5 < 17; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 4; i_6 < 18; i_6 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned long long int) var_18);
                        arr_23 [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */int) (unsigned short)51192))));
                        arr_24 [i_0] [i_4 - 1] [i_0] = ((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_4 - 1])) ? (4294967287U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-11466)))));
                        arr_25 [i_0] [i_5 + 1] [i_0] [i_0] = ((/* implicit */int) (short)-11467);
                    }
                } 
            } 
            arr_26 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (4294967282U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-55)))));
        }
    }
    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
    {
        var_26 &= ((/* implicit */signed char) min(((~(7963389962447161296ULL))), (((/* implicit */unsigned long long int) ((int) max((((/* implicit */short) arr_27 [i_7])), (var_2)))))));
        arr_29 [i_7] = ((/* implicit */_Bool) max((((/* implicit */signed char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (719879460539460811ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-51)))))), (var_11)));
        arr_30 [i_7] = ((/* implicit */int) (_Bool)1);
    }
    for (signed char i_8 = 0; i_8 < 12; i_8 += 2) 
    {
        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */_Bool) (+(arr_3 [i_8])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_15 [i_8])) >= (((/* implicit */int) (unsigned short)65535)))))) : (((11666853884962650601ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_17))))))))))));
        arr_34 [i_8] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)138)) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) 131068)), (-876070088718031258LL)))) ? (((((/* implicit */_Bool) var_10)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_8] [i_8] [i_8] [i_8]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)121))) / (24U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9))))));
    }
    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)41375))))) : (var_15)));
    var_29 = ((/* implicit */signed char) (+(max((((int) (signed char)112)), (((((/* implicit */_Bool) 4294967272U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))))));
    var_30 = ((/* implicit */short) ((long long int) ((((((/* implicit */int) ((signed char) var_4))) + (2147483647))) >> (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_17)))) - (1442))))));
}
