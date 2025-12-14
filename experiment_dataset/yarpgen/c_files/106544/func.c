/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106544
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
        var_19 &= ((/* implicit */unsigned short) 4611686018427387872ULL);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_9 [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124))) > (arr_5 [i_0] [i_1]))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_2] [i_0]))))) : (11LL)));
                    var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)123))));
                    var_21 -= ((/* implicit */long long int) (signed char)-1);
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) (((_Bool)0) ? ((-(((/* implicit */int) (signed char)-123)))) : (((/* implicit */int) (unsigned char)3))));
                }
            } 
        } 
        var_22 = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            arr_21 [i_6] [i_6] [i_6] = ((/* implicit */int) (unsigned char)255);
                            arr_22 [i_5] [i_5] [i_4] |= ((/* implicit */unsigned short) (signed char)-1);
                        }
                        arr_23 [i_0] [i_0] [i_3] [i_3] [i_3] [i_5] = ((/* implicit */unsigned char) max(((-(arr_19 [i_0] [i_3] [i_5] [i_5] [i_5]))), (arr_19 [(signed char)10] [i_3] [i_3] [i_3] [i_3])));
                        var_23 = ((/* implicit */_Bool) (signed char)123);
                    }
                } 
            } 
        } 
    }
    for (long long int i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            for (unsigned char i_9 = 0; i_9 < 14; i_9 += 4) 
            {
                {
                    arr_31 [i_7] [i_8] [i_9] = ((/* implicit */unsigned char) 13835058055282163743ULL);
                    arr_32 [i_7] [i_8] [i_9] [i_9] = ((/* implicit */long long int) ((((arr_30 [i_7]) / (((/* implicit */unsigned long long int) 73142216U)))) <= ((-(arr_30 [i_7])))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) 
        {
            for (long long int i_11 = 0; i_11 < 14; i_11 += 1) 
            {
                for (long long int i_12 = 0; i_12 < 14; i_12 += 1) 
                {
                    {
                        arr_41 [i_7] [i_11] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) min(((signed char)96), (((/* implicit */signed char) ((144115188075855871LL) == (((/* implicit */long long int) 3194091799U)))))));
                        arr_42 [i_7] [i_7] [i_11] [i_7] [i_12] &= ((/* implicit */unsigned char) (((~(arr_34 [i_7]))) != ((~(((/* implicit */int) (signed char)61))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_13 = 0; i_13 < 14; i_13 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_14 = 0; i_14 < 14; i_14 += 2) 
        {
            arr_51 [i_14] = (unsigned char)128;
            var_24 |= ((/* implicit */long long int) (-(arr_26 [i_13] [13ULL])));
        }
        /* LoopNest 2 */
        for (long long int i_15 = 0; i_15 < 14; i_15 += 3) 
        {
            for (long long int i_16 = 0; i_16 < 14; i_16 += 4) 
            {
                {
                    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (signed char)-47))));
                    arr_57 [i_13] = ((/* implicit */signed char) ((max((-1), (((/* implicit */int) (unsigned char)134)))) ^ (2147483647)));
                }
            } 
        } 
        arr_58 [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_35 [i_13] [i_13] [i_13]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_13] [i_13] [i_13] [i_13]))) : ((+(min((((/* implicit */unsigned long long int) arr_47 [i_13])), (18446744073709551615ULL)))))));
        var_26 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)122)) != ((-(((/* implicit */int) (signed char)127))))));
    }
    var_27 = ((/* implicit */int) ((1921342302500150849ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 23LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)220))) : (28ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
    var_28 = ((/* implicit */_Bool) var_17);
}
