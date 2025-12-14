/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147217
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
    for (int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */short) arr_3 [i_2] [i_2] [i_2]);
                    arr_7 [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            var_19 = ((/* implicit */int) ((signed char) -317544477));
            var_20 = ((/* implicit */_Bool) var_17);
        }
        for (int i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                var_21 ^= ((/* implicit */unsigned char) min((-675119049872296180LL), (((/* implicit */long long int) arr_12 [i_5] [i_4] [i_0]))));
                arr_15 [i_0] [i_0] [i_4] [i_5] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -8255027071420490658LL)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_4] [i_0])) : (((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */_Bool) 8255027071420490658LL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_15))))))), (arr_2 [i_0 + 1])));
            }
            /* vectorizable */
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                var_22 = ((/* implicit */long long int) arr_3 [i_6] [i_4] [i_0]);
                var_23 -= ((/* implicit */signed char) ((_Bool) arr_17 [(unsigned char)0] [i_0] [i_0 - 1] [i_0 + 1]));
                var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 + 2])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)-112))));
                var_25 = ((/* implicit */int) ((unsigned char) 8255027071420490657LL));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_21 [i_0 + 2] [(unsigned short)10] [i_7] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_9 [i_0 + 2] [i_0] [i_7])), (arr_17 [i_0] [i_0] [i_0 - 1] [i_0])))) ? (8255027071420490658LL) : (max((8255027071420490658LL), (((/* implicit */long long int) ((unsigned char) arr_17 [i_0] [i_4] [i_4] [i_4])))))));
                /* LoopNest 2 */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_8])), ((+(arr_2 [i_8]))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0 + 2] [i_0 - 1])) ? (arr_13 [i_0 + 2] [i_0 + 2]) : (arr_13 [i_0 + 1] [i_0 + 1]))))));
                            var_27 = ((/* implicit */signed char) var_0);
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned char) ((int) var_17));
                var_29 *= ((/* implicit */_Bool) arr_4 [i_0 - 1] [i_4]);
            }
            for (unsigned short i_10 = 0; i_10 < 13; i_10 += 2) 
            {
                var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
                var_31 += ((/* implicit */long long int) ((int) ((long long int) arr_29 [i_0] [i_10])));
            }
            var_32 &= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) max(((unsigned short)49935), (((/* implicit */unsigned short) (unsigned char)45))))) ? (((((/* implicit */_Bool) var_14)) ? (-8255027071420490658LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0 + 1] [i_4] [i_0] [5ULL]))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_26 [i_0] [2LL])), (var_2))))))));
            /* LoopNest 2 */
            for (unsigned char i_11 = 0; i_11 < 13; i_11 += 1) 
            {
                for (unsigned char i_12 = 2; i_12 < 11; i_12 += 3) 
                {
                    {
                        arr_37 [(short)10] [i_4] [i_11] [i_12 - 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((unsigned short) arr_6 [i_0] [i_11] [i_4] [i_0]))))) == (max((max((-8255027071420490663LL), (((/* implicit */long long int) arr_8 [i_4] [i_4])))), (((/* implicit */long long int) max((((/* implicit */int) arr_23 [i_0] [i_0])), (arr_0 [i_0]))))))));
                        arr_38 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (signed char)-108)), (max((((/* implicit */long long int) ((((/* implicit */long long int) var_6)) <= (-8255027071420490686LL)))), (max((arr_22 [i_0] [i_4] [i_11] [i_11] [i_4] [i_4]), (-8255027071420490641LL)))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_13 = 1; i_13 < 12; i_13 += 1) 
        {
            var_33 = ((((/* implicit */_Bool) arr_41 [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_34 [(_Bool)1] [i_0])))) : (((long long int) (_Bool)0)));
            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((int) (-(8255027071420490657LL)))))));
        }
        arr_43 [i_0 + 2] [i_0] = arr_9 [i_0] [i_0] [i_0 - 1];
    }
    for (unsigned char i_14 = 0; i_14 < 11; i_14 += 2) /* same iter space */
    {
        var_35 &= ((/* implicit */_Bool) arr_10 [i_14]);
        arr_46 [i_14] = ((/* implicit */int) max((((/* implicit */long long int) arr_10 [i_14])), ((~(arr_27 [i_14] [i_14])))));
        var_36 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) var_3)), (arr_2 [i_14]))), (((/* implicit */unsigned long long int) ((long long int) var_2)))));
    }
    for (unsigned char i_15 = 0; i_15 < 11; i_15 += 2) /* same iter space */
    {
        var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_20 [i_15] [i_15])), (var_6)))) ? (((/* implicit */int) min(((unsigned char)11), (((/* implicit */unsigned char) (_Bool)1))))) : (((arr_9 [i_15] [i_15] [i_15]) ? (((/* implicit */int) ((_Bool) (short)-6431))) : (((/* implicit */int) ((_Bool) 18446744073709551585ULL)))))));
        var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (short)-6431))) ? ((+(((/* implicit */int) var_13)))) : ((+(arr_4 [i_15] [i_15])))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_4 [i_15] [i_15])), (var_17)))) == (min((((/* implicit */unsigned long long int) var_11)), (6438199384425909100ULL)))))) : (((((/* implicit */_Bool) arr_33 [i_15] [i_15] [i_15] [i_15])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_30 [i_15] [i_15] [i_15] [i_15]))))));
    }
    var_39 = ((/* implicit */short) ((unsigned short) max((((/* implicit */unsigned short) (short)-6431)), (var_5))));
}
