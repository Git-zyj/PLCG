/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106071
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
    var_19 = ((/* implicit */int) (~(var_0)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) ((((arr_0 [i_0]) + (9223372036854775807LL))) >> (((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned int) ((((((arr_0 [i_0]) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((/* implicit */int) arr_1 [i_0])))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_14))));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((var_2) & (((/* implicit */long long int) ((/* implicit */int) (short)-18132))))))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-18131)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-47))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_0])) == (((/* implicit */int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] = ((/* implicit */_Bool) var_4);
        /* LoopSeq 1 */
        for (unsigned char i_4 = 2; i_4 < 21; i_4 += 1) 
        {
            var_22 = ((/* implicit */short) ((-5750363337730185505LL) != (arr_12 [i_3] [i_4 + 1])));
            var_23 -= ((/* implicit */signed char) (~(((/* implicit */int) var_16))));
            var_24 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
        }
    }
    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)55))) | (10827034585674735994ULL)));
        arr_23 [i_5] = ((/* implicit */signed char) ((min((var_18), (((/* implicit */unsigned int) ((unsigned char) (signed char)51))))) >> ((((+(((/* implicit */int) (short)18131)))) - (18122)))));
        var_26 = ((/* implicit */unsigned int) max((var_26), (((((((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))) ^ (min((((/* implicit */unsigned int) var_7)), (var_4))))) >> (((((/* implicit */int) ((short) var_17))) - (97)))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        var_27 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_6])) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6] [i_6] [i_6])))));
        var_28 = ((/* implicit */short) var_7);
    }
    for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
    {
        arr_29 [i_7] = ((/* implicit */short) (~(min(((~(((/* implicit */int) (unsigned char)32)))), (((/* implicit */int) (unsigned char)32))))));
        arr_30 [i_7] [(short)21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5750363337730185505LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)18157))) : (5750363337730185505LL)));
        arr_31 [i_7] = ((/* implicit */short) var_10);
        var_29 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28907)) ? (((/* implicit */int) arr_28 [i_7])) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) (signed char)-1)) : (max((((((/* implicit */_Bool) -5750363337730185505LL)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) arr_28 [i_7])))), (((/* implicit */int) arr_28 [i_7]))))));
        /* LoopSeq 2 */
        for (short i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            var_30 = ((/* implicit */_Bool) ((((/* implicit */int) max((arr_27 [i_7]), (max((((/* implicit */short) var_13)), (arr_27 [(short)17])))))) & ((~(((((/* implicit */int) var_3)) | (((/* implicit */int) arr_26 [i_7] [i_8]))))))));
            /* LoopNest 3 */
            for (short i_9 = 0; i_9 < 23; i_9 += 4) 
            {
                for (unsigned char i_10 = 0; i_10 < 23; i_10 += 3) 
                {
                    for (long long int i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */short) (~((~(((((/* implicit */_Bool) 2593984959U)) ? (((/* implicit */int) arr_40 [i_7] [i_7] [(unsigned char)7] [i_7] [i_7])) : (((/* implicit */int) var_11))))))));
                            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_12))))) ? (((/* implicit */int) ((9048163858065721224LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) (short)-7271)))))));
                            var_33 = ((/* implicit */unsigned int) (+(((long long int) (unsigned char)255))));
                        }
                    } 
                } 
            } 
            arr_42 [i_8] [i_8] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) max(((~(((/* implicit */int) arr_36 [i_7] [i_8] [i_8] [i_8])))), (((/* implicit */int) var_9))))) : (max((((/* implicit */long long int) ((((/* implicit */int) var_14)) & (((/* implicit */int) arr_40 [i_7] [i_7] [i_8] [i_8] [i_8]))))), (-1LL)))));
            var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) (+(min((((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-18129))) : (-5750363337730185489LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) (_Bool)1))))))))))));
        }
        for (signed char i_12 = 0; i_12 < 23; i_12 += 3) 
        {
            var_35 = ((/* implicit */short) min((var_35), (max(((short)28906), (((/* implicit */short) (signed char)122))))));
            arr_45 [i_12] = ((/* implicit */signed char) ((unsigned int) max((min((-1LL), (((/* implicit */long long int) (short)-28903)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (_Bool)1))))))));
            arr_46 [6U] [i_7] = max((((/* implicit */long long int) (!(((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_28 [i_7]))))))), (((((/* implicit */long long int) var_5)) | (arr_35 [i_7] [i_7] [i_12] [i_12]))));
        }
    }
    for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 3) 
    {
        var_36 *= ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((((/* implicit */_Bool) -9110122723903650556LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_48 [i_13]))))) + ((-(var_8))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_5))) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) min(((unsigned char)223), (var_13)))))))));
        var_37 = ((/* implicit */unsigned char) ((_Bool) arr_41 [i_13] [i_13] [i_13] [i_13]));
        var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) var_15))));
    }
}
