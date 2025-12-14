/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172210
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
    for (short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) (+(((arr_2 [i_0] [i_0]) | (var_1)))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        arr_13 [i_0] [i_3] [i_2] [i_0] = ((/* implicit */_Bool) var_9);
                        arr_14 [i_0] = ((/* implicit */int) (unsigned short)47561);
                    }
                } 
            } 
            arr_15 [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) 5100226088124119334LL)));
            var_12 = ((unsigned int) arr_0 [i_0] [i_1 - 1]);
            var_13 = ((long long int) (_Bool)1);
        }
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_26 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -5758207022633737178LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_9)));
                        arr_27 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_1);
                        var_14 = -6583225768171347804LL;
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                    }
                } 
            } 
            arr_29 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((2964144748U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) / (max((var_8), (((/* implicit */unsigned long long int) var_0))))))) ? (((/* implicit */int) min(((!(arr_22 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0]))), ((_Bool)0)))) : (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (_Bool)1))))))));
            arr_30 [i_0] [i_0] = ((/* implicit */unsigned int) ((((long long int) -1680084217)) >= (((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_0 + 1])) * (((/* implicit */int) ((signed char) arr_25 [i_4] [i_0] [i_0] [i_0]))))))));
            /* LoopNest 3 */
            for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) ((((arr_31 [i_0 + 1] [i_0 + 1]) != (arr_31 [i_0 - 2] [i_0 - 2]))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
                            var_16 = arr_39 [i_0] [i_7] [i_0] [i_7] [i_9];
                            arr_42 [i_8] [i_8] [i_0] [i_8] [i_8] [i_8] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) arr_24 [i_9] [i_0] [i_0 + 1] [i_0] [i_0 + 1])), ((~(arr_12 [i_0] [i_0] [i_7] [i_0] [i_7] [i_9]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_0 - 2])) ? (arr_36 [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            arr_45 [i_0] [i_0] [i_0] = ((/* implicit */int) (-((-(((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (arr_18 [i_0] [i_0] [i_0])))))));
            /* LoopNest 3 */
            for (signed char i_11 = 0; i_11 < 10; i_11 += 3) 
            {
                for (long long int i_12 = 1; i_12 < 8; i_12 += 2) 
                {
                    for (signed char i_13 = 0; i_13 < 10; i_13 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) min(((~(((/* implicit */int) arr_21 [i_13])))), ((+(1242274007)))));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_0] [i_10] [i_11] [i_12] [i_13] [i_11])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_20 [i_12 - 1] [i_12 + 1] [i_12 - 1] [i_0 + 1]))))) ? (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_23 [i_0] [i_0] [i_10] [i_11] [i_12] [i_0]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_13] [i_13] [i_13]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_0] [i_10] [i_0] [i_13]))))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_0)))))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_14 = 3; i_14 < 9; i_14 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_15 = 3; i_15 < 9; i_15 += 4) 
            {
                for (int i_16 = 2; i_16 < 8; i_16 += 2) 
                {
                    {
                        arr_66 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) var_0));
                        arr_67 [i_0] [i_0] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) arr_49 [i_0] [i_14] [i_15] [i_16]);
                        /* LoopSeq 3 */
                        for (long long int i_17 = 0; i_17 < 10; i_17 += 3) 
                        {
                            var_19 = (!(((/* implicit */_Bool) ((max((-6583225768171347784LL), (((/* implicit */long long int) var_5)))) >> (((((/* implicit */int) var_0)) - (59049)))))));
                            var_20 = ((/* implicit */signed char) (+(((unsigned long long int) arr_18 [i_15 - 3] [i_14 - 3] [i_0 - 2]))));
                        }
                        for (signed char i_18 = 0; i_18 < 10; i_18 += 4) 
                        {
                            arr_72 [i_18] [i_0] [i_0] [i_0] [i_14] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_8))) != (((unsigned long long int) (_Bool)1))));
                            arr_73 [i_0] [i_14] [i_15] [i_0] [i_18] = ((/* implicit */unsigned short) var_2);
                        }
                        for (signed char i_19 = 1; i_19 < 7; i_19 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned char) ((_Bool) (_Bool)1));
                            var_22 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */unsigned long long int) arr_41 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_15])) % (var_1))));
                        }
                    }
                } 
            } 
            arr_77 [i_0] [i_0] = ((/* implicit */short) max((((arr_17 [i_14 - 2] [i_14 + 1] [i_0 + 1]) / (arr_17 [i_14 - 2] [i_14 - 2] [i_0 - 1]))), (((/* implicit */unsigned long long int) ((unsigned short) arr_17 [i_14 - 1] [i_14 + 1] [i_0 - 2])))));
            arr_78 [i_0] [i_0] [i_14] = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)31)) >> (((325052169U) - (325052166U))))) < ((-(((/* implicit */int) arr_53 [i_0] [i_0]))))));
            /* LoopNest 2 */
            for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
            {
                for (long long int i_21 = 1; i_21 < 9; i_21 += 3) 
                {
                    {
                        arr_85 [i_0] [i_20] [i_0] [i_0] = ((/* implicit */signed char) var_3);
                        var_23 = ((/* implicit */long long int) max((var_23), (((((/* implicit */_Bool) var_5)) ? (-3423199016489401948LL) : (((/* implicit */long long int) (+(((/* implicit */int) var_5)))))))));
                        var_24 = ((/* implicit */long long int) var_0);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_22 = 0; i_22 < 10; i_22 += 3) 
            {
                for (short i_23 = 0; i_23 < 10; i_23 += 2) 
                {
                    for (int i_24 = 0; i_24 < 10; i_24 += 2) 
                    {
                        {
                            arr_94 [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((((((/* implicit */int) min((arr_48 [i_22] [i_22]), (var_0)))) + (((/* implicit */int) (!(arr_20 [i_0] [i_14] [i_22] [i_24])))))) << (((((unsigned int) ((arr_37 [i_0] [i_0] [i_14] [i_0] [i_0] [i_24]) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_0] [i_14])))))) - (3397139385U)))))) : (((/* implicit */signed char) ((((((/* implicit */int) min((arr_48 [i_22] [i_22]), (var_0)))) + (((/* implicit */int) (!(arr_20 [i_0] [i_14] [i_22] [i_24])))))) << (((((((unsigned int) ((arr_37 [i_0] [i_0] [i_14] [i_0] [i_0] [i_24]) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_0] [i_14])))))) - (3397139385U))) - (897827961U))))));
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0 + 1])) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_58 [i_23])), (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0]))) == (var_3))))) : (max((((/* implicit */unsigned long long int) var_11)), (var_1))))) : (((/* implicit */unsigned long long int) ((int) arr_5 [i_0])))));
                        }
                    } 
                } 
            } 
        }
        arr_95 [i_0] = ((/* implicit */signed char) (-(((unsigned long long int) arr_71 [i_0] [i_0]))));
    }
    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
    {
        /* LoopNest 3 */
        for (short i_26 = 0; i_26 < 22; i_26 += 3) 
        {
            for (int i_27 = 0; i_27 < 22; i_27 += 2) 
            {
                for (unsigned short i_28 = 3; i_28 < 20; i_28 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_29 = 0; i_29 < 22; i_29 += 3) 
                        {
                            var_26 = (+(((/* implicit */int) ((1888416978201173480ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                            var_27 = ((/* implicit */signed char) ((_Bool) -1422532228722706500LL));
                            var_28 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_101 [i_28 - 1] [i_28 - 3] [i_28 - 3] [i_28 - 1])))))));
                        }
                        arr_106 [i_25] [i_26] = ((/* implicit */unsigned long long int) ((_Bool) ((int) (+(arr_96 [i_25])))));
                        arr_107 [i_25] [i_25] [i_25] = ((/* implicit */short) ((long long int) var_8));
                        var_29 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)159))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_30 = 0; i_30 < 22; i_30 += 3) 
        {
            for (long long int i_31 = 0; i_31 < 22; i_31 += 1) 
            {
                for (unsigned int i_32 = 2; i_32 < 19; i_32 += 3) 
                {
                    {
                        var_30 += ((/* implicit */short) ((((/* implicit */unsigned long long int) 6583225768171347804LL)) / (min((((/* implicit */unsigned long long int) arr_102 [i_32 + 3])), (var_8)))));
                        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_99 [16LL]))))) ? (arr_105 [i_25] [4U] [i_32] [i_32] [i_32] [i_25] [i_25]) : (((/* implicit */long long int) ((/* implicit */int) ((short) 676815358))))))), (((((((/* implicit */_Bool) 540933119)) ? (17938526610463513141ULL) : (((/* implicit */unsigned long long int) 1098319093291584454LL)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_110 [i_32 - 1] [i_32 + 1] [i_32 + 1]))))))))));
                        var_32 = ((/* implicit */unsigned short) min((var_32), (max((arr_110 [i_30] [i_31] [i_30]), (((/* implicit */unsigned short) var_6))))));
                    }
                } 
            } 
        } 
    }
    var_33 = ((/* implicit */int) var_10);
}
