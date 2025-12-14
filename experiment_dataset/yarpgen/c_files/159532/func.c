/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159532
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_17 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1272817239U)) ? (max((var_6), (((/* implicit */unsigned long long int) var_1)))) : ((+(arr_3 [i_0] [i_0])))))) ? (max((((/* implicit */unsigned long long int) var_3)), (arr_2 [i_0]))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_2) & (arr_1 [i_0] [i_0])))) ? (((((/* implicit */int) (unsigned short)39155)) / ((+(((/* implicit */int) var_15)))))) : (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_15)))), (((/* implicit */int) var_5))))));
        arr_5 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(var_0))))));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */int) arr_1 [i_1] [i_1]);
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                arr_17 [i_1] [i_1] [i_3] [i_2] = ((/* implicit */unsigned short) ((_Bool) ((arr_1 [i_2 + 1] [i_2 + 1]) >> (((arr_1 [i_2 + 1] [i_2 + 1]) - (12296461389944356838ULL))))));
                /* LoopSeq 1 */
                for (short i_4 = 1; i_4 < 19; i_4 += 4) 
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (~(9150048280782680885ULL))))));
                    arr_20 [i_1] [i_1] [i_1] [i_3] &= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) var_12)), (arr_9 [i_4]))) <= (((/* implicit */unsigned long long int) arr_8 [i_4 + 2]))))), ((+(((var_6) ^ (14473829150088970729ULL)))))));
                }
                arr_21 [i_2] = ((/* implicit */short) (-((+(((/* implicit */int) arr_19 [i_2]))))));
                arr_22 [i_3] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)5724)) : (((/* implicit */int) (unsigned char)31))))) ? (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (short)-5710)))) : (((/* implicit */int) var_15))))));
            }
            for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                arr_25 [i_1] [i_2] [4ULL] [i_1] = ((/* implicit */_Bool) (~(((min((arr_10 [i_2] [i_2]), (((/* implicit */int) var_9)))) ^ (((/* implicit */int) ((short) (short)-16246)))))));
                arr_26 [i_2] [i_2] [i_5] = ((((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))) / (arr_8 [i_5]));
                var_20 = (-((-(((((var_1) + (9223372036854775807LL))) << (((500253833U) - (500253833U))))))));
            }
            /* vectorizable */
            for (unsigned int i_6 = 1; i_6 < 20; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 17; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) (short)5729);
                            var_22 = (_Bool)1;
                        }
                    } 
                } 
                var_23 = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_28 [i_1] [i_2] [i_2])) : (((/* implicit */int) (_Bool)1)));
            }
            var_24 = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 2041648285U)))))))) & (((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_0)))) / (((3336001427782241405LL) & (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
        }
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_10 = 0; i_10 < 21; i_10 += 4) 
            {
                var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? ((+(arr_38 [i_1] [i_10]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))))) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_9 + 1])) ? (1880590606) : ((-(((/* implicit */int) var_9)))))) : ((((+(((/* implicit */int) var_15)))) / ((+(arr_12 [i_9] [i_1]))))));
                var_26 = ((/* implicit */unsigned int) min((var_26), (var_0)));
            }
            arr_41 [i_9] = ((/* implicit */signed char) (-(((var_14) / (((/* implicit */long long int) arr_0 [i_1] [i_9 + 1]))))));
            /* LoopSeq 3 */
            for (unsigned int i_11 = 0; i_11 < 21; i_11 += 3) 
            {
                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */int) (short)5724)) <= (((/* implicit */int) (short)15865)))))));
                var_28 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_12 [i_9] [i_9])) ? (arr_12 [i_9] [i_9]) : (((/* implicit */int) var_5)))));
                arr_46 [i_1] [i_9] [i_1] [i_9 + 1] = ((/* implicit */_Bool) (short)-5728);
            }
            for (short i_12 = 3; i_12 < 18; i_12 += 2) /* same iter space */
            {
                var_29 ^= ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_0)) * (((((/* implicit */unsigned long long int) var_14)) / (arr_7 [i_1]))))) * (((/* implicit */unsigned long long int) (-(((arr_40 [i_12] [i_12] [i_12] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))))));
                var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (((~(((/* implicit */int) var_3)))) == (((/* implicit */int) var_13)))))));
            }
            for (short i_13 = 3; i_13 < 18; i_13 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_14 = 0; i_14 < 21; i_14 += 2) 
                {
                    for (int i_15 = 0; i_15 < 21; i_15 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_9 [i_9 + 1]))) ? ((~((~(65528LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))));
                            var_32 |= ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (var_2))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_42 [i_14] [i_13 - 3] [i_13 - 3])))))));
                        }
                    } 
                } 
                arr_59 [i_9] [i_9] [i_9] [i_1] = ((/* implicit */unsigned long long int) var_3);
                var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)106))))) ? (((((/* implicit */_Bool) ((-1939018214538506724LL) | (((/* implicit */long long int) 1285536077U))))) ? (((/* implicit */unsigned long long int) 4086120992U)) : ((~(0ULL))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)101)))))));
            }
            /* LoopNest 3 */
            for (signed char i_16 = 0; i_16 < 21; i_16 += 2) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 2) 
                {
                    for (signed char i_18 = 0; i_18 < 21; i_18 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */short) (~((~(((3336001427782241420LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57965)))))))));
                            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) & (max((((/* implicit */unsigned long long int) var_14)), (var_6))))))))));
                        }
                    } 
                } 
            } 
            var_36 = ((/* implicit */int) (((-(((arr_33 [i_9] [i_9] [i_9] [i_9] [17]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_1] [i_9]))))))) - (((/* implicit */unsigned int) (+(((/* implicit */int) arr_29 [i_1] [(_Bool)1] [(unsigned short)7] [i_1] [i_1] [i_1])))))));
        }
    }
    for (unsigned int i_19 = 0; i_19 < 21; i_19 += 2) /* same iter space */
    {
        arr_70 [i_19] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
        arr_71 [i_19] [i_19] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (unsigned char)239)), (((((/* implicit */_Bool) 1680512138U)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (12178396945614567403ULL))) : (19ULL)))));
        var_37 = ((/* implicit */short) min((((1521057284) / (((/* implicit */int) (unsigned char)117)))), (arr_0 [i_19] [i_19])));
        var_38 = ((/* implicit */int) arr_24 [i_19] [i_19] [i_19] [(unsigned short)16]);
        var_39 -= ((/* implicit */signed char) (~(arr_10 [i_19] [i_19])));
    }
    /* LoopNest 2 */
    for (signed char i_20 = 0; i_20 < 24; i_20 += 2) 
    {
        for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 3) 
        {
            {
                arr_78 [i_20] [i_21] [8] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) arr_74 [i_21])) : (arr_73 [(signed char)1])))));
                var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) var_16))))) ? ((+(((/* implicit */int) var_3)))) : (min((arr_74 [(signed char)5]), (((/* implicit */int) (short)16258))))))) ? (27ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                var_41 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (var_6)))) || (((/* implicit */_Bool) ((long long int) var_0)))));
            }
        } 
    } 
}
