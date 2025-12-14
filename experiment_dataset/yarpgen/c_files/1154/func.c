/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1154
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_1);
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) 16609583314735427265ULL);
        }
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            arr_10 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) arr_9 [i_2] [i_0]);
            arr_11 [i_0] [i_2] = ((/* implicit */long long int) (-(var_5)));
        }
        arr_12 [i_0] [i_0] = ((/* implicit */int) ((unsigned int) var_6));
        arr_13 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((16609583314735427258ULL) >> (((((/* implicit */int) var_10)) - (60293)))))) ? (((((/* implicit */_Bool) var_10)) ? (1837160758974124376ULL) : (((/* implicit */unsigned long long int) 229376)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1837160758974124330ULL))))))));
        arr_14 [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_8 [i_0] [i_0] [i_0]) / (arr_8 [i_0] [i_0] [i_0])));
        /* LoopSeq 1 */
        for (int i_3 = 3; i_3 < 12; i_3 += 4) 
        {
            arr_17 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 3)) && (((/* implicit */_Bool) 6ULL))));
            arr_18 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) -12);
        }
    }
    /* vectorizable */
    for (long long int i_4 = 1; i_4 < 20; i_4 += 3) /* same iter space */
    {
        arr_22 [i_4] [i_4] = ((((/* implicit */int) (_Bool)1)) >> (((var_4) - (1500647538))));
        arr_23 [i_4] [i_4] = ((/* implicit */unsigned long long int) (!(var_9)));
    }
    for (long long int i_5 = 1; i_5 < 20; i_5 += 3) /* same iter space */
    {
        arr_26 [i_5] [i_5] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_2)))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16609583314735427307ULL)) || (var_3)))), (max((((/* implicit */unsigned long long int) var_3)), (1837160758974124344ULL)))))));
        arr_27 [i_5] [i_5] = ((/* implicit */long long int) 16609583314735427286ULL);
    }
    for (long long int i_6 = 1; i_6 < 20; i_6 += 3) /* same iter space */
    {
        arr_30 [(signed char)16] |= ((/* implicit */long long int) min(((~(((/* implicit */int) arr_29 [(_Bool)1] [i_6 + 1])))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_21 [i_6 + 1]))))));
        arr_31 [10U] [i_6] |= ((/* implicit */_Bool) ((int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) % (var_5))))));
        arr_32 [i_6] [18LL] = ((/* implicit */unsigned short) ((unsigned long long int) max((2114776217U), (((/* implicit */unsigned int) ((int) 7))))));
        arr_33 [(unsigned char)6] = ((/* implicit */unsigned long long int) var_3);
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                for (unsigned char i_9 = 2; i_9 < 22; i_9 += 2) 
                {
                    {
                        arr_41 [i_9] [i_9] = ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) arr_34 [i_9])))))) && (((/* implicit */_Bool) arr_34 [i_9])));
                        arr_42 [i_6] [i_6] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */signed char) (-(var_6)));
                        arr_43 [i_6] [i_9] = ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) (signed char)2)))));
                        arr_44 [i_6] [i_9] [i_8] [i_9] = ((/* implicit */long long int) ((-2147483635) / (86925188)));
                        /* LoopSeq 3 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_47 [i_6] [i_6] [i_6] [i_9] [i_6] = ((/* implicit */signed char) ((((/* implicit */long long int) ((4294967289U) / (max((4294967294U), (2896674134U)))))) & (-8801569517314850006LL)));
                            arr_48 [i_6] = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_3)))))), (((613291494) + (((/* implicit */int) arr_46 [i_6 - 1]))))));
                        }
                        for (unsigned char i_11 = 3; i_11 < 21; i_11 += 3) 
                        {
                            arr_52 [i_6] [i_7] [i_8] [i_9] [i_11] [i_9] &= ((/* implicit */_Bool) ((((unsigned int) (_Bool)1)) | (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) / (((/* implicit */int) arr_50 [i_6] [i_7] [i_9] [i_8 + 1] [i_11 - 3])))))));
                            arr_53 [i_6] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((unsigned int) (unsigned char)218)) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (+(2896674146U))))))));
                            arr_54 [i_6] [i_6] [i_6] [i_6] [i_6] = ((unsigned char) min((((_Bool) 503316480LL)), (((5062033349872000384LL) != (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                        }
                        for (int i_12 = 3; i_12 < 21; i_12 += 4) 
                        {
                            arr_57 [i_6] [i_6] [i_7] [i_9] [i_9] [i_12] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) var_4))))) || (((/* implicit */_Bool) (unsigned short)65535))))) + (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_25 [i_6] [i_7])) | (2046094400U)))) || (((/* implicit */_Bool) 3718307207U)))))));
                            arr_58 [i_6] [i_6] [i_6] = ((/* implicit */signed char) max((423799722), (((/* implicit */int) (unsigned char)31))));
                            arr_59 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) min((0), (((/* implicit */int) var_7))))) ? ((+(((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))) : (((/* implicit */unsigned long long int) max((1398293161U), (((/* implicit */unsigned int) arr_28 [i_6] [i_7])))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_11 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 2 */
    for (unsigned char i_13 = 0; i_13 < 10; i_13 += 1) 
    {
        for (unsigned short i_14 = 1; i_14 < 8; i_14 += 3) 
        {
            {
                arr_66 [i_13] [i_14] [i_13] |= ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(arr_1 [i_14 + 1] [i_14])))) & (max((-988681032105380033LL), (988681032105380032LL)))));
                arr_67 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_2))))))) && (((/* implicit */_Bool) ((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */int) (+(max((((/* implicit */unsigned long long int) 3718307203U)), (16609583314735427286ULL)))));
}
