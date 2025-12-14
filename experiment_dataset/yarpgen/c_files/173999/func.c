/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173999
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
    var_16 = ((((/* implicit */unsigned int) (-((~(((/* implicit */int) var_9))))))) != (var_4));
    var_17 = ((/* implicit */_Bool) var_14);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 &= ((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)139)), (max((((/* implicit */unsigned short) (unsigned char)99)), ((unsigned short)0)))))), (((int) (unsigned char)255))));
        arr_2 [i_0] = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)112)) : (1977043653)))) & (((((/* implicit */_Bool) (signed char)124)) ? (var_7) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-81))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] [i_1 - 1] = ((/* implicit */signed char) (+(((/* implicit */int) var_0))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 2; i_2 < 19; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                for (unsigned int i_4 = 2; i_4 < 17; i_4 += 4) 
                {
                    {
                        arr_14 [i_1] [i_4] [i_4] [i_4] = (~(((/* implicit */int) var_3)));
                        arr_15 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) (unsigned char)139);
                        var_19 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_9)))));
                        arr_16 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_10);
                    }
                } 
            } 
        } 
        var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) & (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_2))))));
        arr_17 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)117))));
    }
    for (unsigned short i_5 = 3; i_5 < 13; i_5 += 3) 
    {
        arr_20 [i_5] [i_5] |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (4294967295U)))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_5] [i_5] [(unsigned short)14])) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) (unsigned char)117))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)117)))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5] [i_5])) ? (((/* implicit */int) var_2)) : (var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((246681447U) != (((/* implicit */unsigned int) -189290899)))))) : ((~(0U)))));
    }
    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
    {
        var_22 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_15))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_5)) << (((15465179699860861671ULL) - (15465179699860861665ULL)))))))) ^ (((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)65527)) : (((/* implicit */int) (signed char)-124))))) : (((((/* implicit */_Bool) 4526590371366265393ULL)) ? (((/* implicit */unsigned long long int) var_13)) : (var_8))))));
        arr_24 [i_6] = ((/* implicit */int) var_2);
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_6])) ? ((~(((/* implicit */int) ((((/* implicit */int) (unsigned char)157)) >= (((/* implicit */int) (short)18473))))))) : (((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */int) max(((unsigned char)246), (var_3)))) : (((/* implicit */int) ((signed char) (signed char)123)))))));
        /* LoopSeq 2 */
        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
        {
            var_24 *= ((/* implicit */long long int) min((min((((/* implicit */int) var_12)), (((-517581911) / (var_10))))), (((/* implicit */int) (_Bool)1))));
            /* LoopSeq 2 */
            for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) 
            {
                arr_31 [i_7] = ((/* implicit */unsigned int) var_5);
                arr_32 [i_7] [i_6] = ((/* implicit */unsigned int) max((max(((-(((/* implicit */int) var_15)))), (var_13))), (((/* implicit */int) (_Bool)1))));
                arr_33 [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) (!(((((/* implicit */int) var_9)) != (var_10)))));
                var_25 = ((/* implicit */long long int) var_8);
            }
            for (unsigned short i_9 = 3; i_9 < 9; i_9 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    var_26 ^= ((/* implicit */int) 0U);
                    arr_41 [i_6] [(unsigned char)9] [i_7] [i_7] [i_10] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_10) / (((/* implicit */int) var_12))))) ? (4526590371366265413ULL) : (((/* implicit */unsigned long long int) var_1))));
                    var_27 ^= ((/* implicit */_Bool) var_3);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        var_28 -= ((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned char)184)))) / (((/* implicit */int) (unsigned short)65527))));
                        arr_44 [i_7] = ((/* implicit */unsigned char) (unsigned short)4);
                        var_29 = ((/* implicit */unsigned short) ((long long int) arr_26 [i_7] [i_9 + 1]));
                    }
                    for (unsigned short i_12 = 3; i_12 < 11; i_12 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned short) (_Bool)1);
                        arr_47 [i_12] [i_12] [i_7] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */int) (short)16383)) & (((var_13) / (((/* implicit */int) var_12))))));
                    }
                }
                var_31 ^= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_9 - 3])) : (((/* implicit */int) arr_30 [i_6] [i_6] [i_6])))));
            }
            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (~((-2147483647 - 1)))))));
            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) (~(((/* implicit */int) max((var_12), (((/* implicit */unsigned char) var_9)))))))), ((+(max((((/* implicit */unsigned int) var_10)), (var_4))))))))));
            arr_48 [i_7] = ((/* implicit */short) arr_34 [i_6] [9LL] [i_7] [i_7]);
        }
        for (unsigned int i_13 = 0; i_13 < 12; i_13 += 1) /* same iter space */
        {
            var_34 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_7 [i_13])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_28 [i_13] [i_13])) : (var_8))))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned char)34), (((/* implicit */unsigned char) var_2))))) & (((/* implicit */int) var_0)))))));
            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)139))))) != (max((var_11), (((/* implicit */unsigned long long int) (signed char)(-127 - 1)))))));
            var_36 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((1360444396U) & (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)10))));
            var_37 = ((unsigned char) max(((~(((/* implicit */int) (_Bool)1)))), (var_13)));
        }
    }
    var_38 = ((/* implicit */unsigned int) (~(min(((~(var_11))), (((/* implicit */unsigned long long int) 3U))))));
    var_39 |= (~(var_10));
}
