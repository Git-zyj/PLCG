/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142127
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
    var_11 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */unsigned long long int) 3117460000U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7680)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7691))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_2 [4U] [i_0])))) < (((/* implicit */int) arr_0 [i_0] [i_0 + 1]))));
        var_13 = ((/* implicit */unsigned char) (unsigned short)57855);
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((int) (+(-214255674))))), (min((var_10), (((/* implicit */long long int) arr_3 [i_1] [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 17; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                {
                    arr_11 [i_2] [i_2 - 2] [i_1] [i_2] = ((/* implicit */unsigned short) var_4);
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                                arr_18 [i_2] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((signed char) arr_7 [i_1] [i_2] [(unsigned char)17]));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned char) arr_8 [i_2] [i_2 - 1]);
                    /* LoopNest 2 */
                    for (signed char i_6 = 2; i_6 < 16; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) arr_15 [i_2] [i_2] [i_2]);
                                var_18 = ((/* implicit */unsigned char) arr_19 [i_2 + 1] [i_6 - 1] [i_7]);
                                arr_25 [i_1] [i_1] [i_2 - 2] [i_2] [i_3] [i_6] [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2 + 1] [(unsigned short)16]))));
                            }
                        } 
                    } 
                    arr_26 [i_2] = ((/* implicit */unsigned short) max((((long long int) arr_4 [i_2 + 1] [i_2 - 2])), (((/* implicit */long long int) arr_5 [i_2]))));
                }
            } 
        } 
        var_19 = ((/* implicit */long long int) arr_7 [i_1] [i_1] [i_1]);
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [4U]), (((/* implicit */short) arr_24 [i_1] [i_1] [i_1] [i_1])))))) : (663760809937193885LL))) : (var_3)));
        /* LoopNest 3 */
        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            for (unsigned int i_9 = 0; i_9 < 18; i_9 += 2) 
            {
                for (int i_10 = 1; i_10 < 17; i_10 += 4) 
                {
                    {
                        var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)16)) >> (((arr_9 [i_10] [i_9] [i_8] [i_1]) - (330307063U)))))) ? (((/* implicit */int) (unsigned short)19868)) : (((/* implicit */int) arr_32 [i_1] [i_8] [(_Bool)1] [i_8] [i_10] [i_10]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_31 [i_1] [i_8] [i_10 - 1])))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_8] [i_9] [i_10]))) : (arr_3 [i_1] [i_1])))), (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */long long int) var_2)))))));
                        var_22 = ((/* implicit */long long int) var_7);
                    }
                } 
            } 
        } 
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        arr_38 [i_11] = ((/* implicit */unsigned short) -663760809937193886LL);
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 65535)) ? (var_9) : (((/* implicit */unsigned long long int) arr_37 [i_11] [i_11])))), (((/* implicit */unsigned long long int) min((3914618602U), (((/* implicit */unsigned int) arr_36 [i_11])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_35 [10LL] [10LL])) : (((/* implicit */int) arr_36 [16LL]))))) ? (((long long int) (unsigned char)19)) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_11] [i_11])))))) : (((((/* implicit */_Bool) (unsigned short)33877)) ? (var_9) : (((/* implicit */unsigned long long int) 1725143521)))))))));
        var_24 = ((/* implicit */_Bool) min((var_24), (((min((((/* implicit */unsigned long long int) arr_37 [i_11] [i_11])), (((((/* implicit */_Bool) arr_37 [i_11] [0U])) ? (((/* implicit */unsigned long long int) arr_37 [i_11] [(signed char)9])) : (var_7))))) == (((/* implicit */unsigned long long int) arr_37 [i_11] [i_11]))))));
    }
    var_25 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_4)) + (((((((/* implicit */unsigned long long int) var_4)) - (var_1))) + (((/* implicit */unsigned long long int) 663760809937193893LL))))));
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */long long int) var_6)), (var_10))) : (var_4)));
}
