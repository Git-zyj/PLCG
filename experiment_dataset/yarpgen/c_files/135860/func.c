/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135860
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
    for (short i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                arr_8 [i_0] [14U] [i_2 + 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)7))));
                arr_9 [(unsigned short)1] [(unsigned short)1] [i_0] = ((/* implicit */long long int) ((unsigned int) (unsigned short)18));
                arr_10 [i_0] [i_1 - 2] [(_Bool)1] = ((/* implicit */long long int) max((min((((/* implicit */unsigned int) (unsigned short)13)), (417671216U))), ((+(var_1)))));
                var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 13638539577192263040ULL)) ? (arr_4 [i_2 + 1]) : (arr_4 [i_2 + 1]))))));
            }
            arr_11 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)23455))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)23455)) ? (((/* implicit */int) (unsigned short)57456)) : (((/* implicit */int) (_Bool)1))))))) : (min((((/* implicit */unsigned int) (unsigned short)35860)), (145253789U)))));
        }
        for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            var_18 = ((/* implicit */long long int) ((unsigned int) min((arr_4 [i_3]), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1188260368U))))))));
            var_19 = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)7)), (((((/* implicit */int) max((arr_13 [i_3]), (arr_0 [i_0] [i_3])))) + (((/* implicit */int) var_0))))));
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                for (long long int i_5 = 3; i_5 < 13; i_5 += 4) 
                {
                    {
                        var_20 = ((/* implicit */int) arr_13 [i_3]);
                        arr_19 [i_0] [i_0] [i_3] [i_3] [i_4] [i_5 + 2] = ((/* implicit */unsigned int) max((((/* implicit */int) max((arr_12 [i_0] [i_4 + 1] [i_5]), (arr_12 [i_0] [i_3] [i_4])))), (((((/* implicit */_Bool) (unsigned short)65523)) ? (((/* implicit */int) (unsigned short)22)) : (((/* implicit */int) (unsigned short)42080))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */long long int) 2866231526U)) / (var_10)))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)242))) : ((-(((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) (unsigned short)11915)) : (((/* implicit */int) (_Bool)0))))))));
        }
        var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)10022)) * (((/* implicit */int) (short)-7132))));
    }
    for (short i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
    {
        var_23 += ((/* implicit */long long int) arr_15 [i_6] [(_Bool)1] [(_Bool)1] [i_6]);
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((short) (unsigned short)23458))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53646))) : (1428735779U))))))));
    }
    for (short i_7 = 0; i_7 < 15; i_7 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned int) (unsigned short)7);
        var_26 = ((/* implicit */short) (!((_Bool)1)));
        arr_26 [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65519)) >> (((/* implicit */int) (_Bool)1)))))));
        arr_27 [i_7] = ((/* implicit */short) var_9);
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_32 [i_8] = ((/* implicit */int) (+(((unsigned int) 1393610576U))));
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6)) ? (((((/* implicit */_Bool) (unsigned short)49200)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_8] [(_Bool)1] [(unsigned short)2] [i_8]))))) : (((/* implicit */unsigned int) max((1073741760), (((/* implicit */int) (unsigned short)31586)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [10U])) ? (var_5) : (var_9)))) ? (min((arr_18 [i_8] [i_8] [i_8] [i_8]), (((/* implicit */unsigned long long int) -2174328630695687836LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)3287)), ((unsigned short)65527))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-18877))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_13 [2U])) : (((/* implicit */int) var_12))))) : (var_9))))));
        var_28 = ((/* implicit */unsigned short) min((max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) 1207580628052418784ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))))), ((-(((/* implicit */int) arr_30 [i_8]))))));
    }
    /* LoopNest 3 */
    for (int i_9 = 4; i_9 < 12; i_9 += 4) 
    {
        for (unsigned long long int i_10 = 1; i_10 < 14; i_10 += 2) 
        {
            for (long long int i_11 = 3; i_11 < 12; i_11 += 2) 
            {
                {
                    var_29 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) (short)-11592))))) - (((((/* implicit */_Bool) var_0)) ? (var_13) : (8834890923854569969LL)))))) ? (max((((/* implicit */long long int) (-(1073741738)))), (((long long int) -1699565923)))) : (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)49210)), (arr_24 [i_10])))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 1830657005)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_11])))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 15; i_12 += 4) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 15; i_13 += 1) 
                        {
                            {
                                arr_47 [i_9] [4] [i_9 + 1] [i_13] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_9 - 3]))) / (var_9)))))));
                                arr_48 [i_9] [(unsigned short)12] [i_13] [i_12] [i_13] = ((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) var_12)))));
                            }
                        } 
                    } 
                    arr_49 [i_9] [i_9 + 1] [i_9] [i_9 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? ((((_Bool)1) ? (((/* implicit */int) (short)-21466)) : (((/* implicit */int) (unsigned short)29815)))) : (((/* implicit */int) ((unsigned char) ((unsigned short) 10117806434628860945ULL))))));
                    var_30 = ((/* implicit */unsigned short) max((((((((long long int) var_15)) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) (unsigned short)16306)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_10))) - (56LL))))), (((((/* implicit */long long int) ((/* implicit */int) arr_45 [i_9 - 4] [i_9 + 2] [i_9 + 2] [i_9 - 1] [i_9] [i_9]))) | (arr_23 [i_9 + 1])))));
                }
            } 
        } 
    } 
}
