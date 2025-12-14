/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147525
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
    var_13 = (+(min((min((var_4), (var_4))), (min((var_6), (((/* implicit */int) var_7)))))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [2LL] [i_0] [(unsigned short)8] &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min(((~(var_4))), ((~(((/* implicit */int) (signed char)83))))))), (((((/* implicit */_Bool) (~(2147483647)))) ? (((/* implicit */unsigned long long int) (+(var_12)))) : ((-(var_2)))))));
                    var_14 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 0ULL)) ? (8672541911451120883ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-83))))), (((((/* implicit */_Bool) (unsigned short)24304)) ? (18370813737840581305ULL) : (((/* implicit */unsigned long long int) 2147483647))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_3 = 2; i_3 < 23; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_4 = 2; i_4 < 24; i_4 += 1) 
        {
            /* LoopSeq 3 */
            for (long long int i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_6))));
                    arr_16 [i_4] = ((/* implicit */unsigned short) ((int) (!(var_10))));
                }
                for (unsigned short i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    var_16 += ((/* implicit */unsigned long long int) var_7);
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) min((75930335868970327ULL), (((/* implicit */unsigned long long int) 3659579215U)))))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)24289))) : ((+(min((1095216660480ULL), (((/* implicit */unsigned long long int) 0U))))))));
                }
                var_19 = ((/* implicit */int) min(((~(((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned long long int) var_6)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? ((-(var_0))) : (((/* implicit */unsigned int) (+(var_6)))))))));
                var_20 = ((((/* implicit */_Bool) min(((~(var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_6) : (var_12))))))) ? ((-(min((var_11), (var_11))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (var_11)))) ? ((+(((/* implicit */int) var_10)))) : (min((((/* implicit */int) var_9)), (var_12)))))));
            }
            for (long long int i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) /* same iter space */
                {
                    arr_25 [i_4] [4] [i_8] = ((/* implicit */signed char) var_5);
                    arr_26 [i_9] [i_9] [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) min(((short)13790), (((/* implicit */short) var_7)))))))), (((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))) ? (((long long int) var_8)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (var_12))))))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((4294967266U), (3659579215U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_12)) : (var_11)))) ? (var_3) : (((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) 8607243831719668201LL)) ? (10699261182958102499ULL) : (((/* implicit */unsigned long long int) 2335445052U))))));
                }
                /* vectorizable */
                for (unsigned int i_10 = 0; i_10 < 25; i_10 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (var_5)));
                    arr_29 [i_4] [i_4] [i_8] [i_4 + 1] [i_4] [i_3 - 2] = ((/* implicit */unsigned char) ((unsigned int) var_4));
                    arr_30 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_0)))) ? ((~(((/* implicit */int) var_1)))) : ((-(((/* implicit */int) (unsigned short)19517))))));
                }
                var_23 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */int) var_7))))) ? (min((((/* implicit */unsigned long long int) var_12)), (var_2))) : (((/* implicit */unsigned long long int) (+(var_3)))))), (((/* implicit */unsigned long long int) var_1))));
                arr_31 [i_8] [i_4] [i_8] [11U] = ((((/* implicit */_Bool) min((min((var_11), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))))))) ? (((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */int) var_7))))) : (min((((/* implicit */unsigned long long int) var_4)), (var_2))))) : (((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned long long int) var_12)), (var_5))))));
            }
            /* vectorizable */
            for (long long int i_11 = 0; i_11 < 25; i_11 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((((/* implicit */_Bool) (-(var_2)))) ? (((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_0))))))));
                arr_35 [i_4] [i_4 + 1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? ((+(((/* implicit */int) (short)24638)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))));
                arr_36 [i_3] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -134217728)) ? (((/* implicit */int) (unsigned short)41232)) : (((/* implicit */int) (unsigned short)3069))));
            }
            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (~((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) ((unsigned short) 18446744073709551610ULL))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))))));
        }
        for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 3) 
        {
            arr_39 [i_3 + 1] [i_3] [i_3] = ((/* implicit */int) var_2);
            var_26 = ((/* implicit */short) (-(((((/* implicit */_Bool) 2748950805592525977ULL)) ? (((((/* implicit */_Bool) 1612151388U)) ? (((/* implicit */unsigned long long int) 1494846573U)) : (4367499632604709347ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15)))))));
            arr_40 [i_3] [i_12] [24] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-((+(var_4)))))), (((unsigned int) var_7))));
        }
        var_27 = ((/* implicit */int) min((((((/* implicit */_Bool) min((var_9), (var_8)))) ? (min((var_5), (var_2))) : (min((var_2), (((/* implicit */unsigned long long int) var_8)))))), (min((((/* implicit */unsigned long long int) ((long long int) var_5))), (((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned long long int) var_6))))))));
        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) min(((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10)))))), ((~(((/* implicit */int) min((var_9), (var_8)))))))))));
    }
    for (unsigned int i_13 = 2; i_13 < 23; i_13 += 4) /* same iter space */
    {
        arr_43 [i_13] [i_13 + 2] = ((/* implicit */signed char) min((min(((~(var_2))), (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */int) var_8))))))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_3)))) ? (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */int) var_1)))) : ((~(var_6))))))));
        arr_44 [i_13] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min(((-(var_4))), (((/* implicit */int) ((signed char) var_1)))))), (((((/* implicit */_Bool) var_8)) ? (min((var_2), (var_11))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10)))))))));
    }
}
