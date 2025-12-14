/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10566
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
    var_20 ^= ((/* implicit */short) ((((/* implicit */int) var_16)) ^ (((/* implicit */int) ((((((/* implicit */_Bool) -3180560713203332755LL)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))));
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) max(((unsigned char)121), (((/* implicit */unsigned char) var_19))))) ? ((-(var_18))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((816462447U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))), (((/* implicit */unsigned long long int) var_9)))))));
    var_22 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 0LL)) & (((((/* implicit */_Bool) 262080ULL)) ? (18318957931033726786ULL) : (18318957931033726786ULL)))));
    var_23 = ((/* implicit */long long int) max((var_23), ((-(min((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_7)) : (-1811656198)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (short)24457))) : (-7832985038046082181LL)))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = max((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))), (((/* implicit */long long int) ((max((((/* implicit */long long int) (unsigned char)96)), (arr_1 [i_0] [i_0]))) != ((~(var_4)))))));
        var_24 = var_14;
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) -1LL)))))))) - ((~(((((/* implicit */_Bool) 127786142675824846ULL)) ? (((/* implicit */long long int) 2290627219U)) : (-1LL))))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    {
                        var_26 = ((/* implicit */long long int) var_6);
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_1]))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_13))))) : (var_1))))));
                        var_28 = ((/* implicit */long long int) (-((-(((/* implicit */int) (_Bool)0))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            arr_20 [i_2] [i_2] [i_4] = var_17;
                            var_29 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)9254))));
                            var_30 = ((/* implicit */short) ((var_0) >> (((var_1) + (6231188236517036714LL)))));
                            arr_21 [i_1] [i_4] [i_4] [i_4] [i_5] = ((/* implicit */signed char) var_2);
                        }
                        var_31 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((1811656203) >= (((/* implicit */int) (unsigned char)22))))) != ((~(((/* implicit */int) (short)32767))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (short i_6 = 1; i_6 < 15; i_6 += 1) 
        {
            var_32 ^= ((/* implicit */int) var_11);
            /* LoopSeq 1 */
            for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                arr_27 [i_6] [(short)16] [i_6 + 1] [i_6] = ((/* implicit */unsigned char) (((_Bool)1) ? (((((/* implicit */_Bool) var_8)) ? (-7832985038046082181LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23254))))) : (((/* implicit */long long int) ((unsigned int) 0LL)))));
                var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23254))) % (127786142675824829ULL))))));
                var_34 = ((/* implicit */signed char) (!(((((/* implicit */int) var_7)) <= (((/* implicit */int) (short)20735))))));
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_34 [5LL] [i_6] [i_7] [i_8] [i_6] = ((unsigned char) ((-3762852286136848396LL) / (-2837580563090565762LL)));
                            var_35 |= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 4253955949U)) >= (var_0))))) | (((long long int) (unsigned short)18691))));
                        }
                    } 
                } 
            }
        }
        for (unsigned char i_10 = 0; i_10 < 17; i_10 += 1) 
        {
            var_36 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) var_0)))));
            arr_38 [i_1] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((var_9) == (((/* implicit */long long int) ((/* implicit */int) (short)32767))))))) + ((~(-7832985038046082181LL)))));
            arr_39 [i_1] [i_1] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1402649594U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_10] [i_10] [i_10] [i_1]))) : (41011356U)));
        }
        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) (unsigned short)41862))))))));
        var_38 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)17932)) != (((/* implicit */int) var_10))))) - (((((/* implicit */int) var_17)) + (((/* implicit */int) (unsigned short)17922))))));
        /* LoopNest 2 */
        for (unsigned short i_11 = 0; i_11 < 17; i_11 += 1) 
        {
            for (short i_12 = 1; i_12 < 15; i_12 += 1) 
            {
                {
                    var_39 = ((/* implicit */signed char) var_0);
                    /* LoopSeq 2 */
                    for (unsigned int i_13 = 0; i_13 < 17; i_13 += 3) 
                    {
                        arr_47 [i_11] = ((unsigned short) (unsigned short)24911);
                        var_40 += ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)46845))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_50 [i_11] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((int) var_5))) - (4253955940U)));
                        var_41 = ((/* implicit */_Bool) max((var_41), ((!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)3680)))))))));
                        var_42 = ((/* implicit */_Bool) (short)31138);
                        var_43 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)61847)) != ((-(((/* implicit */int) (short)(-32767 - 1)))))));
                        arr_51 [i_1] [i_11] = ((/* implicit */unsigned short) arr_37 [i_1] [i_12 + 1] [(short)8]);
                    }
                    var_44 = ((/* implicit */unsigned short) ((((unsigned int) var_13)) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)68)))));
                    var_45 += ((/* implicit */short) var_0);
                }
            } 
        } 
    }
    for (unsigned short i_15 = 0; i_15 < 21; i_15 += 3) 
    {
        var_46 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) 15)) > (305527017U)));
        var_47 |= ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) arr_52 [i_15] [i_15])))));
        var_48 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((1402649593U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))), (max((var_18), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)61847)))))))));
        var_49 = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)194)) >= (((/* implicit */int) (unsigned char)13)))) ? (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) (unsigned char)68)), (376314711374966038ULL))))) : (((/* implicit */int) max(((short)-12452), (((/* implicit */short) ((((/* implicit */int) var_19)) <= (((/* implicit */int) arr_52 [i_15] [i_15]))))))))));
    }
}
