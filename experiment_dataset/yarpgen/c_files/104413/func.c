/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104413
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
    /* LoopSeq 4 */
    for (short i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        var_13 |= ((/* implicit */int) arr_0 [i_0]);
        arr_3 [i_0 - 4] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)1)))))))));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 16; i_2 += 3) 
        {
            for (short i_3 = 2; i_3 < 18; i_3 += 3) 
            {
                {
                    arr_11 [i_1] [i_2] [i_3 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_2 [7LL]))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((short) var_9)))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((int) arr_10 [i_1]))) : (((((/* implicit */long long int) ((/* implicit */int) var_1))) | (arr_5 [(_Bool)0])))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 1; i_5 < 18; i_5 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_5] [i_1] [i_3]))))) && (((/* implicit */_Bool) (~(arr_10 [i_3 + 2]))))));
                                var_15 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_1 [i_1])), (((unsigned long long int) arr_7 [18U] [14] [i_1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13702)) ? (((/* implicit */int) (short)-13693)) : (((/* implicit */int) (short)-13690))));
        var_17 = ((/* implicit */unsigned long long int) min((1605344944), (((((/* implicit */int) var_8)) | (((((/* implicit */int) (short)13700)) | (((/* implicit */int) (short)-11499))))))));
        var_18 -= ((/* implicit */signed char) 109463925331661944ULL);
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
    {
        var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) var_2))));
        var_20 = ((/* implicit */signed char) arr_2 [i_6]);
    }
    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) 
    {
        arr_22 [i_7] = arr_0 [i_7];
        var_21 = (+(max((((/* implicit */unsigned int) var_1)), (4064831970U))));
        arr_23 [i_7] = ((/* implicit */unsigned long long int) ((((int) (!(var_1)))) < (max((((((/* implicit */_Bool) arr_1 [i_7])) ? (arr_10 [i_7]) : (((/* implicit */int) arr_13 [14] [12U] [i_7] [12U] [i_7])))), (((/* implicit */int) var_11))))));
        /* LoopSeq 4 */
        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */short) (+(((/* implicit */int) (short)13693))));
            /* LoopNest 2 */
            for (unsigned char i_9 = 2; i_9 < 11; i_9 += 4) 
            {
                for (signed char i_10 = 0; i_10 < 15; i_10 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_11 = 3; i_11 < 14; i_11 += 2) 
                        {
                            var_23 -= ((/* implicit */signed char) (((!((_Bool)1))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 9266515417469597864ULL)) ? (((/* implicit */int) arr_21 [i_8])) : (((((((/* implicit */int) (short)-13694)) + (2147483647))) << (((9266515417469597864ULL) - (9266515417469597864ULL))))))))));
                            arr_37 [12U] [i_8] [12U] = ((/* implicit */short) arr_13 [i_11 - 2] [i_8] [8U] [i_11] [i_11]);
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 4) 
                        {
                            var_24 = ((min((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_24 [i_7] [i_8] [i_7]))))), (((((/* implicit */int) var_11)) | (1675301938))))) >> (((/* implicit */int) ((arr_15 [i_7] [i_9] [i_9]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_8])))))));
                            var_25 = ((/* implicit */signed char) (short)-8289);
                            var_26 = ((/* implicit */int) max((var_26), (((int) (!(((/* implicit */_Bool) arr_9 [i_12] [i_9] [i_9])))))));
                        }
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) max((((/* implicit */int) arr_29 [8ULL] [i_9] [i_7])), (arr_10 [i_8]))))));
                        arr_41 [i_10] [i_10] [i_9] [i_9] [i_7] [i_7] = ((/* implicit */int) ((var_6) | (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)164))))) ? (((/* implicit */unsigned long long int) var_9)) : (max((arr_15 [i_7] [i_9] [i_10]), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                    }
                } 
            } 
            arr_42 [(_Bool)1] = ((/* implicit */short) arr_8 [i_8]);
        }
        /* vectorizable */
        for (unsigned int i_13 = 0; i_13 < 15; i_13 += 4) /* same iter space */
        {
            var_28 = ((/* implicit */short) var_6);
            arr_45 [i_13] = ((/* implicit */short) arr_14 [i_13]);
        }
        for (short i_14 = 0; i_14 < 15; i_14 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */signed char) arr_5 [i_7]);
            var_30 = (!(((/* implicit */_Bool) (~(((arr_15 [i_7] [8U] [i_7]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_7] [i_14] [i_14])))))))));
            var_31 |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (((4064831970U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_14] [i_7])))))));
            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (~(((unsigned long long int) arr_8 [i_14])))))));
            arr_48 [(_Bool)1] [i_7] [i_14] |= ((/* implicit */unsigned long long int) var_10);
        }
        for (short i_15 = 0; i_15 < 15; i_15 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned long long int) arr_9 [i_7] [i_15] [(short)4]);
            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((var_5), (((/* implicit */unsigned int) arr_24 [i_15] [(short)12] [7ULL])))), (((/* implicit */unsigned int) min(((short)13728), (((/* implicit */short) var_3)))))))) ? (var_5) : (((/* implicit */unsigned int) -586729975))));
            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1734490909707653865LL)) ? (((/* implicit */int) (short)-13693)) : (((/* implicit */int) (short)-32435))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_16 = 0; i_16 < 15; i_16 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_17 = 0; i_17 < 15; i_17 += 1) 
                {
                    for (int i_18 = 4; i_18 < 12; i_18 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */_Bool) ((short) ((var_6) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32755))))));
                            var_37 = ((/* implicit */unsigned int) arr_32 [13U] [13U] [i_15] [i_7]);
                            var_38 = ((/* implicit */short) var_1);
                            var_39 = ((/* implicit */short) ((((/* implicit */int) ((signed char) (unsigned char)62))) - (((/* implicit */int) arr_14 [i_18]))));
                            arr_59 [i_7] [i_17] [i_16] [i_16] [10U] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) arr_39 [i_18 + 1] [4] [i_18] [i_18 - 1] [i_18 + 2] [i_18 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_18 + 3] [i_18] [i_18] [i_18 - 2] [i_18] [i_18 + 2]))) : (arr_33 [i_18 - 2] [i_18] [i_18] [i_18 - 1] [i_18] [i_18])));
                        }
                    } 
                } 
                var_40 -= ((/* implicit */short) (~(((unsigned int) 1423239788))));
                /* LoopNest 2 */
                for (unsigned long long int i_19 = 0; i_19 < 15; i_19 += 3) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 15; i_20 += 3) 
                    {
                        {
                            var_41 = ((/* implicit */int) (short)23212);
                            var_42 = ((/* implicit */short) ((unsigned long long int) (short)-28978));
                        }
                    } 
                } 
            }
        }
        var_43 = ((/* implicit */int) ((unsigned int) (~(arr_2 [i_7]))));
    }
    var_44 = ((/* implicit */int) var_4);
    var_45 |= ((/* implicit */long long int) var_12);
}
