/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112058
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) (+(3603140864106486765LL)));
        var_15 = ((/* implicit */long long int) (unsigned char)31);
    }
    for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 1) 
    {
        var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_4)), ((unsigned short)31216)))) + (((/* implicit */int) arr_6 [i_1 + 2] [i_1 - 1]))))), (max((((unsigned int) var_13)), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_1 + 2] [(unsigned char)16])))))))));
        var_17 = ((/* implicit */unsigned short) arr_4 [i_1 - 1] [i_1 + 2]);
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 2; i_3 < 20; i_3 += 3) 
        {
            for (unsigned int i_4 = 1; i_4 < 22; i_4 += 1) 
            {
                {
                    var_18 *= ((/* implicit */unsigned short) var_8);
                    var_19 &= ((/* implicit */unsigned char) arr_7 [(short)18] [(short)18]);
                    /* LoopSeq 3 */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((short) arr_6 [i_2 + 1] [i_3 + 1])))));
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_19 [19ULL] [(unsigned char)14] [i_4] [i_5] [i_6]))));
                            var_22 = ((/* implicit */unsigned short) ((long long int) arr_15 [i_2]));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2])) || (((/* implicit */_Bool) 4294967288U))));
                            var_24 += ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_2 + 2] [i_2 + 2])) & (((/* implicit */int) var_0))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
                        {
                            arr_24 [i_2] [i_3] [i_2] [i_2] [i_7] = ((/* implicit */_Bool) arr_5 [i_2] [i_2]);
                            arr_25 [i_4] [(unsigned char)18] [(unsigned char)18] [i_4] [21LL] [i_2] [i_4 - 1] = ((/* implicit */unsigned char) (-((-(arr_12 [i_2])))));
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_2 + 1] [i_5])))))));
                        }
                    }
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
                    {
                        arr_28 [i_2] [i_3] [i_2] [i_2] [12U] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)31222)) - (31214)))));
                        var_26 = (-(((/* implicit */int) var_11)));
                    }
                    for (long long int i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (113797159U)));
                        arr_31 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_19 [(_Bool)1] [i_3] [i_3] [i_3] [i_3]))) ? (((/* implicit */int) arr_4 [i_2] [i_2])) : (arr_30 [i_2 + 2])));
                    }
                }
            } 
        } 
        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */int) ((arr_26 [i_2] [i_2] [i_2] [i_2] [i_2]) >= (arr_17 [i_2] [i_2] [i_2] [(_Bool)0] [i_2] [5U])))) / (((/* implicit */int) ((short) var_7))))))));
        arr_32 [i_2] = ((/* implicit */short) ((long long int) arr_22 [i_2] [i_2] [i_2] [i_2] [i_2]));
    }
    for (long long int i_10 = 0; i_10 < 11; i_10 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_11 = 0; i_11 < 11; i_11 += 1) 
        {
            for (int i_12 = 3; i_12 < 9; i_12 += 4) 
            {
                for (unsigned char i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    {
                        var_29 = ((/* implicit */unsigned int) ((int) (~(4047877219U))));
                        arr_42 [i_10] [i_10] [i_12] [(unsigned char)8] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_29 [i_10] [(unsigned short)22] [(unsigned short)22] [i_10])), (var_10)));
                        var_30 = ((/* implicit */unsigned short) max((var_30), (max((((/* implicit */unsigned short) var_5)), (var_2)))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_14 = 0; i_14 < 11; i_14 += 3) 
        {
            for (unsigned long long int i_15 = 2; i_15 < 8; i_15 += 3) 
            {
                for (short i_16 = 2; i_16 < 8; i_16 += 1) 
                {
                    {
                        var_31 -= ((/* implicit */_Bool) ((short) -3603140864106486772LL));
                        arr_53 [i_10] [i_10] [i_10] [0U] [i_10] [0U] = ((/* implicit */long long int) ((unsigned int) (unsigned short)7040));
                    }
                } 
            } 
        } 
        var_32 = ((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) arr_5 [i_10] [i_10])))));
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 16; i_17 += 4) 
    {
        for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 3) 
        {
            {
                var_33 &= ((/* implicit */short) max((((((/* implicit */_Bool) 4047877211U)) ? (((/* implicit */int) arr_4 [i_17] [i_17])) : (((/* implicit */int) arr_4 [i_18] [i_17])))), ((-(((/* implicit */int) (unsigned short)65459))))));
                var_34 = ((/* implicit */unsigned int) min((arr_54 [i_17]), (((/* implicit */long long int) ((arr_55 [i_17]) != (max((((/* implicit */long long int) var_6)), (-3603140864106486751LL))))))));
            }
        } 
    } 
}
