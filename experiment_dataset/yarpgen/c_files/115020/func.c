/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115020
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
    var_20 = ((/* implicit */long long int) var_5);
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_21 = max((((/* implicit */signed char) arr_3 [i_0])), ((signed char)121));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0 - 1])) >> (((((/* implicit */int) (signed char)-122)) + (132)))));
            /* LoopNest 2 */
            for (signed char i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_12 [i_0 - 1] [i_1] [i_1] [i_2 - 1] [i_3])) : (((/* implicit */int) (unsigned short)314))));
                        var_22 = var_10;
                    }
                } 
            } 
        }
        arr_14 [i_0 - 1] |= ((/* implicit */long long int) (~((((~(var_19))) << (((((/* implicit */int) ((unsigned char) (unsigned short)65535))) - (237)))))));
        var_23 = ((/* implicit */short) ((((arr_0 [i_0]) <= (((((/* implicit */_Bool) (short)10378)) ? (arr_0 [i_0 - 1]) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])))))) ? (((((/* implicit */int) var_1)) % (((/* implicit */int) arr_1 [i_0 - 1])))) : (((/* implicit */int) var_8))));
    }
    /* LoopSeq 4 */
    for (long long int i_4 = 4; i_4 < 10; i_4 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((long long int) var_12)))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 3; i_5 < 10; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        arr_24 [i_4] [i_4] [i_4] [i_6] [i_4] [i_6] = ((/* implicit */unsigned long long int) ((long long int) ((1614998681666427818LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_6] [i_6] [i_6] [i_6]))))));
                        arr_25 [i_5] [i_6] = ((/* implicit */unsigned short) arr_15 [i_5]);
                    }
                    for (int i_8 = 3; i_8 < 9; i_8 += 2) 
                    {
                        arr_30 [i_4] [i_6] = ((/* implicit */unsigned long long int) min((min((min((var_12), ((signed char)121))), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_17 [i_8 - 1] [i_5 - 1] [i_6]))))))), ((signed char)-85)));
                        var_25 ^= ((/* implicit */signed char) (+((-(((/* implicit */int) arr_15 [i_4 - 3]))))));
                        /* LoopSeq 1 */
                        for (signed char i_9 = 2; i_9 < 10; i_9 += 1) 
                        {
                            arr_33 [i_4] [i_5] [i_6] [i_8] [i_8 + 2] [i_6] = ((/* implicit */short) var_13);
                            arr_34 [i_9] [i_9 + 2] [i_6] [i_6] [i_5 - 2] [i_4] = ((/* implicit */_Bool) 0LL);
                        }
                        arr_35 [i_4 - 4] [i_6] [i_4] [i_4] [i_4] = ((/* implicit */long long int) arr_32 [i_8 + 2] [i_8] [i_8] [i_6]);
                    }
                    for (unsigned short i_10 = 3; i_10 < 8; i_10 += 3) 
                    {
                        arr_40 [i_6] = ((/* implicit */unsigned short) (signed char)89);
                        arr_41 [i_4 + 2] [i_5] [i_5] [i_6] [i_6] = ((/* implicit */long long int) min((((/* implicit */int) (signed char)121)), ((-(((/* implicit */int) arr_39 [i_4 - 2] [i_5 - 2] [i_10 + 2] [i_10]))))));
                    }
                    /* vectorizable */
                    for (signed char i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        arr_44 [i_6] [i_6] = ((/* implicit */int) arr_36 [i_4] [i_5 + 2] [i_6] [i_5] [i_6]);
                        arr_45 [i_5 - 3] [i_6] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)142))) | (((var_19) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))));
                    }
                    arr_46 [i_4] [i_5 + 2] [i_6] = ((/* implicit */unsigned char) max(((~((+(var_6))))), (((/* implicit */long long int) (~((+(arr_20 [i_4 + 2] [i_4] [i_6] [i_6]))))))));
                }
            } 
        } 
    }
    for (long long int i_12 = 4; i_12 < 10; i_12 += 2) /* same iter space */
    {
        arr_49 [i_12 - 3] [i_12 - 3] = ((/* implicit */long long int) (signed char)121);
        var_26 = ((/* implicit */unsigned int) min(((~(arr_23 [i_12]))), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (signed char)121)) && (((/* implicit */_Bool) var_19))))))));
        var_27 *= ((/* implicit */signed char) (-((+(var_13)))));
        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned char)142)))))))));
        arr_50 [i_12 - 4] [i_12 - 4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_31 [i_12]))))), (max((var_19), (((/* implicit */unsigned int) arr_39 [i_12 - 2] [i_12] [i_12 - 2] [i_12 - 3]))))))) ? ((~((((_Bool)0) ? (2671836527U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-66))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */long long int) (unsigned char)114)), (0LL))) == (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_12] [i_12] [i_12] [i_12])))))))));
    }
    for (long long int i_13 = 4; i_13 < 10; i_13 += 2) /* same iter space */
    {
        arr_53 [i_13] [i_13] = ((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)48870))))), (max((((/* implicit */unsigned long long int) arr_32 [i_13] [i_13] [i_13 + 2] [i_13])), (2579090123777593904ULL)))))));
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-1331714221) - (((/* implicit */int) var_4))))) ? (min((arr_23 [i_13]), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned short)16666))))))) : (((/* implicit */long long int) var_2))));
    }
    for (unsigned char i_14 = 0; i_14 < 24; i_14 += 2) 
    {
        arr_57 [i_14] [i_14] = ((/* implicit */unsigned char) 2355026367U);
        var_30 ^= ((/* implicit */signed char) min((((/* implicit */long long int) (+(((/* implicit */int) min((arr_56 [i_14]), (var_8))))))), (max((((/* implicit */long long int) ((arr_56 [i_14]) || ((_Bool)1)))), (min((((/* implicit */long long int) arr_54 [i_14])), (7588459644644775488LL)))))));
        var_31 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))));
        var_32 += ((/* implicit */int) ((unsigned char) var_10));
    }
    var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) -759704378)), (3082824259039724476LL)))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_1)) < (((/* implicit */int) var_3)))) ? (((var_16) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))) : ((~(((/* implicit */int) var_9))))))) : (var_15)));
}
