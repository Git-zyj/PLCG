/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13917
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
    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((~(var_7))), ((-(((/* implicit */int) var_10)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)235))))), (max((((/* implicit */long long int) var_6)), (var_11)))))));
                arr_5 [i_1] = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)61440)))))))), (min((((/* implicit */int) min(((unsigned short)50669), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))), ((-(((/* implicit */int) (unsigned short)12571))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            {
                arr_11 [i_2] [i_3] = ((/* implicit */long long int) (-((+((-(((/* implicit */int) arr_6 [i_2] [11ULL]))))))));
                /* LoopSeq 4 */
                for (int i_4 = 2; i_4 < 19; i_4 += 2) 
                {
                    var_16 = ((/* implicit */unsigned char) (+((+(max((((/* implicit */long long int) (signed char)82)), (9223372036854775807LL)))))));
                    arr_15 [i_3] [i_3] = ((/* implicit */signed char) (-((+(((/* implicit */int) min((arr_12 [22] [i_3] [i_3] [(signed char)2]), (((/* implicit */unsigned char) (signed char)-115)))))))));
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        arr_18 [i_3] [i_2] [i_4 - 1] [i_3] [i_3] = ((/* implicit */signed char) (~((+((+(var_12)))))));
                        /* LoopSeq 2 */
                        for (long long int i_6 = 1; i_6 < 20; i_6 += 1) 
                        {
                            arr_21 [i_6] [i_5] [i_3] [i_2] [i_3] [i_2] [(signed char)6] = (-(min((max((((/* implicit */unsigned long long int) (unsigned char)247)), (arr_13 [i_3]))), (max((((/* implicit */unsigned long long int) var_12)), (14234818087581180278ULL))))));
                            var_17 |= ((/* implicit */long long int) min(((~((~(((/* implicit */int) (signed char)121)))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) (signed char)121)), ((short)19643)))))))));
                            arr_22 [(unsigned short)8] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */unsigned char) min((max(((~(((/* implicit */int) (unsigned char)2)))), (((/* implicit */int) max((var_9), (arr_12 [0LL] [i_3] [i_4] [i_3])))))), ((~((~(-1103751952)))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 1; i_7 < 20; i_7 += 1) 
                        {
                            arr_27 [i_3] [i_3] [i_4] [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_9))))));
                            arr_28 [i_3] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (signed char)38))))));
                            var_18 += ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 317890699481262257LL)))))));
                        }
                        arr_29 [i_5] [i_3] [i_5] [i_5] [i_5] [(unsigned char)13] = ((/* implicit */unsigned short) (-(max((((/* implicit */int) max((var_0), (((/* implicit */unsigned short) (signed char)-38))))), ((~(((/* implicit */int) var_8))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 2; i_8 < 20; i_8 += 2) 
                        {
                            var_19 = ((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)127)), ((unsigned short)62124))))))), (min(((~(3414868117531160600LL))), (((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_2] [i_3] [i_5] [i_8])))))))));
                            var_20 = ((/* implicit */long long int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) 5212193484436618925ULL)))))))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 1) 
                        {
                            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(var_8)))), (max(((unsigned short)42876), (((/* implicit */unsigned short) var_2)))))))));
                            arr_36 [i_2] [i_3] [i_4 + 4] [(unsigned short)4] [i_9] = ((/* implicit */unsigned short) min((max((((/* implicit */int) max((var_1), (var_2)))), (max((((/* implicit */int) (signed char)(-127 - 1))), (var_7))))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))));
                            arr_37 [i_2] [i_3] [(unsigned char)4] [i_3] [i_2] [(unsigned char)4] [i_3] = ((/* implicit */long long int) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                        }
                    }
                    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned short) min((max(((+(((/* implicit */int) arr_19 [i_3])))), (((/* implicit */int) max(((unsigned short)3424), (var_13)))))), (((/* implicit */int) (!(((/* implicit */_Bool) min(((signed char)(-127 - 1)), ((signed char)-84)))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 1; i_11 < 21; i_11 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned short) (+(min(((+(((/* implicit */int) (unsigned char)248)))), ((+(((/* implicit */int) (unsigned char)247))))))));
                            var_24 = ((/* implicit */int) min((var_24), ((~(((/* implicit */int) (signed char)2))))));
                        }
                    }
                    arr_43 [i_3] = ((/* implicit */signed char) min((min((max((var_4), (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_3] [i_4])), (arr_16 [(unsigned char)4] [2LL] [i_3] [i_4 - 1] [12LL] [i_4])))))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
                }
                for (long long int i_12 = 0; i_12 < 23; i_12 += 2) 
                {
                    arr_46 [i_3] [i_3] [i_12] [(unsigned short)0] = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) (unsigned short)50295)), (1260623008760557575LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(arr_20 [i_2] [i_3] [i_3] [i_3] [13ULL] [(signed char)14])))))))));
                    var_25 += (~(min(((-(((/* implicit */int) var_13)))), ((+(((/* implicit */int) (unsigned char)51)))))));
                    var_26 += ((/* implicit */signed char) max(((!(((/* implicit */_Bool) max(((unsigned short)4096), (((/* implicit */unsigned short) (unsigned char)52))))))), ((!(((/* implicit */_Bool) (signed char)-75))))));
                }
                /* vectorizable */
                for (unsigned short i_13 = 2; i_13 < 20; i_13 += 2) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_48 [i_3] [i_3] [i_13]))))));
                    var_28 = ((/* implicit */unsigned char) (+((-(var_11)))));
                }
                for (unsigned short i_14 = 2; i_14 < 20; i_14 += 2) /* same iter space */
                {
                    var_29 -= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) min(((unsigned short)61321), (((/* implicit */unsigned short) var_14))))), (max((var_5), (((/* implicit */long long int) arr_25 [(signed char)21] [i_3] [i_3] [i_3] [i_3] [i_3] [i_2]))))))), ((~((~(18076100760627614688ULL)))))));
                    var_30 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)54)), ((unsigned short)6)))))))));
                    /* LoopSeq 4 */
                    for (long long int i_15 = 2; i_15 < 21; i_15 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 1101922504)), (max((max((0ULL), (((/* implicit */unsigned long long int) -1087606571346942721LL)))), (max((((/* implicit */unsigned long long int) 2147479552LL)), (18446744073709551607ULL))))))))));
                        var_32 = ((/* implicit */unsigned char) (~(((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))))), (min((((/* implicit */unsigned short) var_9)), ((unsigned short)28721))))))));
                    }
                    for (unsigned short i_16 = 4; i_16 < 21; i_16 += 2) 
                    {
                        var_33 -= ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)98))))))))));
                        arr_59 [i_2] [i_3] [i_2] = ((/* implicit */long long int) (!((!((!(((/* implicit */_Bool) 370643313081936937ULL))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        arr_62 [i_3] [(short)1] [i_17] = ((/* implicit */unsigned short) (-((-(var_12)))));
                        var_34 &= ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_52 [i_2] [i_3] [(unsigned short)13] [i_17]))))));
                        var_35 ^= ((/* implicit */signed char) (~((+(((/* implicit */int) arr_60 [i_14]))))));
                        var_36 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_58 [i_2] [i_3] [i_3] [i_2]))))));
                        arr_63 [i_2] [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)41)))))));
                    }
                    for (signed char i_18 = 0; i_18 < 23; i_18 += 2) 
                    {
                        var_37 ^= (-((-(max((var_5), (((/* implicit */long long int) arr_66 [i_14] [i_2] [i_2] [i_14 + 1] [i_18])))))));
                        var_38 ^= ((/* implicit */unsigned short) (+((~((-(((/* implicit */int) (unsigned short)24989))))))));
                    }
                }
            }
        } 
    } 
}
