/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138753
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
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */unsigned char) (!((!(var_12)))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 2] = ((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2 + 2] [i_3] [2U]);
                                arr_13 [i_0] [i_0] [i_0] [(short)0] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_2 + 2] [i_2 + 2])))))));
                                arr_14 [i_0] [0] [i_0] [i_0] [0] [0] [0] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)17784)))))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_1))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 4) 
    {
        arr_19 [i_5 - 1] = ((/* implicit */short) (~((~((+(((/* implicit */int) arr_17 [i_5]))))))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            for (short i_7 = 1; i_7 < 17; i_7 += 2) 
            {
                {
                    var_15 = ((/* implicit */signed char) (~(min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)20661))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)20655))))))));
                    var_16 -= ((/* implicit */unsigned int) (((!((!(((/* implicit */_Bool) (unsigned short)44847)))))) ? (min((((/* implicit */int) ((((/* implicit */int) (signed char)-1)) >= (((/* implicit */int) (unsigned short)20663))))), ((+(((/* implicit */int) (unsigned short)44875)))))) : (((/* implicit */int) arr_15 [i_7]))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 20; i_9 += 4) 
            {
                for (unsigned char i_10 = 2; i_10 < 19; i_10 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) min((7267560746231631221ULL), (((/* implicit */unsigned long long int) 1813657552))));
                        arr_31 [i_5 + 4] = ((/* implicit */long long int) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)20651)))))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_11 = 3; i_11 < 18; i_11 += 4) 
                        {
                            arr_35 [i_11] [i_10] [(_Bool)1] [i_8] [i_5 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((~(-264291512)))))) ? (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) 3417718871U)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_18 [i_10 + 1]))));
                            arr_36 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_10 + 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_4)))))))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned int) var_5)), (var_7)))));
                            arr_39 [i_5 + 4] [i_5 + 1] [i_8] [i_9] [i_5 + 1] [i_10] [i_12] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)44883)))))))));
                            arr_40 [i_5] [i_5] [i_5] [(unsigned char)9] [14] = (!(((/* implicit */_Bool) (+((+(((/* implicit */int) var_10))))))));
                            var_19 = ((/* implicit */unsigned char) arr_18 [i_9]);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_13 = 4; i_13 < 19; i_13 += 2) 
                        {
                            var_20 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)6144)) : (((/* implicit */int) arr_41 [i_5] [i_5] [i_5] [i_5 - 1] [i_10 - 2])));
                            arr_43 [i_8] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
                        }
                        for (unsigned short i_14 = 0; i_14 < 20; i_14 += 2) 
                        {
                            var_21 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_15 [i_5 + 4])), (max((((/* implicit */unsigned long long int) (unsigned short)20661)), (2958167816326324291ULL)))));
                            var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_14] [(short)8] [i_10] [i_9] [i_5] [i_8] [i_5]))) : (var_4)))), (((-8697813623699234314LL) + (((/* implicit */long long int) var_4))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_33 [(unsigned short)6] [i_8] [6ULL] [(unsigned short)6] [i_8]))))))) : (((/* implicit */int) arr_32 [i_5 + 4] [i_5] [i_8] [(_Bool)1] [i_9] [i_10 - 1] [i_14]))));
                        }
                        var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) max(((unsigned short)44875), (((/* implicit */unsigned short) arr_30 [i_5 + 4] [i_5 + 2] [i_5 + 2] [i_5 + 3] [i_5 + 1])))))));
                    }
                } 
            } 
        } 
        arr_47 [i_5 + 4] = var_6;
    }
    var_24 ^= ((/* implicit */unsigned int) (((+(((/* implicit */int) ((-1) >= (((/* implicit */int) var_1))))))) == ((+(((/* implicit */int) max(((unsigned char)217), ((unsigned char)21))))))));
}
