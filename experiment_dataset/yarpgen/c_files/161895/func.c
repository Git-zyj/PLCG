/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161895
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_1 [i_1 - 3] [i_1 - 1]))));
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                var_21 = ((/* implicit */int) var_0);
                arr_7 [i_2] = ((/* implicit */_Bool) var_17);
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    for (short i_4 = 2; i_4 < 22; i_4 += 3) 
                    {
                        {
                            arr_13 [(unsigned short)0] [(short)9] [i_1] [i_2] [i_4] [i_4 + 2] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1 + 2] [i_1]))) : (var_9)))));
                            arr_14 [i_4] [i_3] [i_1 - 3] [i_4] = ((/* implicit */short) var_5);
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)49225)) >> (((((/* implicit */int) (short)13126)) - (13126))))) > (((((/* implicit */int) var_8)) % (((/* implicit */int) (unsigned short)65535))))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 1) 
                {
                    for (unsigned short i_6 = 1; i_6 < 23; i_6 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (short)30423)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)32748))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] = (~(var_7));
                            arr_22 [i_6] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */signed char) ((arr_12 [i_0] [i_1] [10U] [i_6] [i_5] [i_5 - 2] [(signed char)8]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_6] [i_0] [i_5 - 2] [i_0]))));
                        }
                    } 
                } 
            }
            for (long long int i_7 = 1; i_7 < 20; i_7 += 1) 
            {
                var_24 -= ((((/* implicit */_Bool) ((signed char) var_6))) ? (((/* implicit */int) arr_17 [i_0] [(_Bool)1] [i_1 + 2] [(_Bool)1] [i_7])) : (((/* implicit */int) var_6)));
                arr_25 [i_0] [i_1] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-37)) > (-2091940832)));
            }
            arr_26 [i_0] = ((/* implicit */long long int) (+(8967740519818261233ULL)));
            var_25 = ((/* implicit */short) (unsigned short)19787);
        }
        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-84)) > (((/* implicit */int) (_Bool)1)))))));
                        var_27 += ((/* implicit */unsigned long long int) var_3);
                        arr_34 [(unsigned short)19] [i_8] [i_9] [i_9] [i_9] [i_10] = ((/* implicit */unsigned short) var_0);
                    }
                } 
            } 
            arr_35 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_8]))) | (var_16)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_16)));
        }
        var_28 = ((/* implicit */unsigned short) arr_11 [(_Bool)1] [i_0] [i_0] [i_0]);
        arr_36 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [9ULL] [i_0] [i_0] [i_0])) == (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0]))));
    }
    for (unsigned short i_11 = 0; i_11 < 19; i_11 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */short) arr_30 [i_11]);
        arr_40 [i_11] [i_11] = ((/* implicit */int) arr_37 [i_11] [i_11]);
        arr_41 [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_10 [i_11] [i_11] [i_11] [i_11])))) ? (((/* implicit */int) arr_8 [i_11] [2ULL])) : ((~(((/* implicit */int) arr_11 [i_11] [(signed char)18] [i_11] [(short)3]))))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) 7400236594089734462ULL)) ? (((/* implicit */int) arr_2 [i_11] [(signed char)17])) : (((/* implicit */int) (_Bool)0))))), (((((/* implicit */long long int) ((/* implicit */int) var_8))) ^ (-2039204646611168364LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 3667527627U)) ? (-53397118) : (((/* implicit */int) (unsigned short)30735)))))));
        var_30 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_5 [17LL] [i_11] [i_11])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) : (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) arr_9 [i_11] [i_11] [i_11] [i_11])))))));
    }
    /* vectorizable */
    for (unsigned short i_12 = 0; i_12 < 19; i_12 += 1) /* same iter space */
    {
        arr_44 [i_12] = ((/* implicit */unsigned int) ((((int) 9836623515869363813ULL)) * ((+(((/* implicit */int) arr_9 [9LL] [9LL] [9LL] [i_12]))))));
        var_31 = ((/* implicit */short) arr_0 [i_12]);
    }
    var_32 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) && (((/* implicit */_Bool) 9223372036854775807LL)))) ? ((-(min((var_1), (((/* implicit */long long int) var_12)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_6)))))))))));
    var_33 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0))));
}
