/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171095
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        arr_12 [i_3] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) var_12);
                        var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (max((arr_5 [i_0] [i_1] [15U]), (-7265202256128028341LL))))) + (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                        var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (var_2)))) ? (arr_4 [i_2] [i_1]) : ((((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 127U))))))) ? (((((((/* implicit */unsigned long long int) 3288847845U)) >= (var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17796))) : (max((var_7), (((/* implicit */unsigned long long int) arr_9 [11] [i_1] [i_2] [i_2])))))) : (((((/* implicit */_Bool) min((4897433434215070765LL), (((/* implicit */long long int) var_13))))) ? ((~(4347906164770787248ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)117))))));
                    }
                } 
            } 
        } 
        arr_13 [15ULL] [(unsigned char)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 576460752302899200ULL)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) / (((((/* implicit */_Bool) 2538474018U)) ? (-7350216922682074469LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)121)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6121))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_8 [(signed char)2] [i_0] [i_0] [6LL]))))) ? (((/* implicit */unsigned long long int) 2538474010U)) : (((((/* implicit */_Bool) arr_5 [(signed char)7] [i_0] [i_0])) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned long long int) 2096160922))))))));
        arr_14 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) != (((((/* implicit */_Bool) arr_5 [i_0] [1U] [i_0])) ? (((/* implicit */int) arr_7 [9] [9])) : ((~(((/* implicit */int) var_9))))))));
        arr_15 [i_0] = ((/* implicit */unsigned int) 8725143990622109432LL);
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                {
                    arr_21 [i_0] [13ULL] [i_0] [16] = ((/* implicit */signed char) min((((((((/* implicit */int) (unsigned char)72)) | (((/* implicit */int) (signed char)103)))) << (((((119U) + (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) - (54638U))))), (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_5] [i_0])) == (((/* implicit */int) var_1))))), (var_11))))));
                    arr_22 [14U] [i_4] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9))) > (var_2)));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        for (int i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            {
                                var_18 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((max((var_7), (((/* implicit */unsigned long long int) arr_27 [i_7] [i_7] [i_6] [i_5] [i_4] [(signed char)4] [i_0])))) + (((/* implicit */unsigned long long int) 4294967295U)))))));
                                var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [i_4]))) <= (540318035U)))) : (((/* implicit */int) ((var_13) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119)))))))) % (((/* implicit */int) max((((/* implicit */signed char) ((var_15) > (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))), ((signed char)63))))));
                                arr_28 [14LL] [i_0] [11ULL] [i_6] [(unsigned char)5] [i_6] = ((/* implicit */_Bool) 1006119448U);
                            }
                        } 
                    } 
                    arr_29 [i_4] = ((/* implicit */int) 15267612311893272080ULL);
                    arr_30 [i_0] [(signed char)13] [i_5] [0LL] = ((/* implicit */signed char) min((min((5585926749134825ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17179869183ULL)) || (((/* implicit */_Bool) (unsigned short)32760))))))), (((/* implicit */unsigned long long int) ((((-14LL) | (((/* implicit */long long int) ((/* implicit */int) var_9))))) ^ (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (-982537919816135146LL))))))));
                }
            } 
        } 
    }
    var_20 = var_10;
    var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 266694815U)) ? (((/* implicit */long long int) 1023)) : (-1LL)));
    /* LoopSeq 1 */
    for (short i_8 = 0; i_8 < 10; i_8 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            for (long long int i_10 = 4; i_10 < 6; i_10 += 1) 
            {
                {
                    arr_41 [i_8] = ((/* implicit */unsigned long long int) arr_18 [i_8] [i_8]);
                    var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)21)) ? (arr_10 [i_10 - 2] [i_10 + 1] [i_10 + 3]) : (arr_10 [i_10 + 3] [i_10 - 2] [i_10 - 4])))) ? (((/* implicit */int) (signed char)70)) : (((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) (signed char)101)) : (((/* implicit */int) arr_7 [i_10] [i_9]))))));
                    var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_12))));
                    var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-120))));
                }
            } 
        } 
        arr_42 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) min((15293251472170973633ULL), (((/* implicit */unsigned long long int) arr_11 [i_8] [17LL] [i_8])))))) ? ((+(max((((/* implicit */unsigned long long int) (unsigned short)13525)), (var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1)))));
    }
    var_25 = ((/* implicit */long long int) var_1);
}
