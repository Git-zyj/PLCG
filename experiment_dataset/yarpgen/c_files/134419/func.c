/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134419
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_16 = ((/* implicit */signed char) ((long long int) (signed char)-11));
            var_17 = ((/* implicit */unsigned long long int) (-(min((((arr_1 [i_0]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_0)))), (((/* implicit */int) (signed char)-15))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                var_18 &= ((/* implicit */unsigned short) arr_6 [i_2] [(short)4] [i_0]);
                var_19 = ((/* implicit */_Bool) min((var_19), (((((/* implicit */_Bool) ((short) -239068991))) && (((((/* implicit */int) (short)25788)) > (var_7)))))));
            }
        }
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            var_20 = ((/* implicit */short) (+(max((((((/* implicit */_Bool) arr_9 [i_0] [i_3])) ? (1908829545661260117LL) : (((/* implicit */long long int) ((/* implicit */int) var_15))))), (((/* implicit */long long int) min((((/* implicit */short) (unsigned char)64)), (var_15))))))));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 23; i_4 += 1) 
            {
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_17 [i_0] [i_0] [i_4] [i_4] = ((((/* implicit */int) ((arr_5 [i_5]) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_7 [i_5] [i_3])) < (arr_16 [i_0] [i_0] [i_0] [i_0] [0])))))))) < (((/* implicit */int) ((((((/* implicit */int) (signed char)-2)) < (((/* implicit */int) (unsigned short)26141)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_6 [(signed char)5] [i_0] [i_4])), ((unsigned short)40621))))))));
                        /* LoopSeq 3 */
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            arr_20 [i_0] [i_3] [i_4 - 1] [i_0] [i_6] = ((/* implicit */unsigned int) (unsigned char)155);
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_9 [i_3] [i_3])), (2239889466235500294LL)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_12 [i_3] [i_4] [i_3])))))));
                            var_22 = ((/* implicit */short) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30851))) > (3392197604U))), (((_Bool) (~(1602888531U))))));
                            arr_21 [i_0] [i_3] [i_3] [i_4] [i_0] [13U] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_16 [i_0] [i_3] [i_4 - 1] [i_5 - 1] [i_6]), (((/* implicit */unsigned long long int) var_14))))) ? (((/* implicit */long long int) ((var_7) | (((/* implicit */int) ((_Bool) arr_9 [i_0] [i_6])))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_6))) % (arr_8 [0LL] [i_3]))) : (((/* implicit */long long int) 65535U))))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            var_23 &= min((max((((/* implicit */long long int) ((var_0) ? (((/* implicit */int) arr_14 [i_3] [i_5] [(unsigned short)2])) : (((/* implicit */int) arr_6 [i_0] [i_3] [i_5]))))), (((long long int) 17440742043266222422ULL)))), (((/* implicit */long long int) min((var_13), ((!((_Bool)1)))))));
                            arr_25 [i_0] [i_7] [i_4] [i_4] [i_3] [i_0] = ((/* implicit */unsigned long long int) max((min((((/* implicit */int) var_11)), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_13 [i_0] [i_0] [i_4 + 1] [i_5])))))), (((/* implicit */int) arr_12 [i_0] [i_5] [i_0]))));
                        }
                        /* vectorizable */
                        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 4) 
                        {
                            arr_28 [i_0] [i_3] [i_0] = ((/* implicit */short) arr_5 [i_8]);
                            var_24 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_3])) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0])) : (arr_15 [i_0] [i_4] [i_5 - 1] [i_8])));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_14 [i_0] [i_3] [(_Bool)0]))) && (((/* implicit */_Bool) (+(arr_0 [i_4] [i_0]))))));
                            var_26 = ((/* implicit */signed char) (~(((((-2239889466235500294LL) + (9223372036854775807LL))) >> (((/* implicit */int) arr_24 [i_5 - 1]))))));
                        }
                    }
                } 
            } 
        }
        var_27 = ((/* implicit */long long int) max((min((arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_15 [i_0] [i_0] [i_0] [i_0]))), (((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0])))))));
    }
    /* LoopNest 2 */
    for (short i_9 = 2; i_9 < 16; i_9 += 3) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 3) 
        {
            {
                arr_36 [i_9] [(_Bool)1] |= ((/* implicit */signed char) (~(arr_18 [i_10] [i_10] [i_9 + 1] [i_9 + 1] [i_9] [11LL])));
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (min((arr_10 [i_9]), (((/* implicit */unsigned int) (unsigned char)150)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_32 [i_9])))))))) ? ((~(((/* implicit */int) ((signed char) arr_34 [i_9] [1ULL]))))) : (((/* implicit */int) ((_Bool) var_0)))));
                /* LoopSeq 2 */
                for (int i_11 = 3; i_11 < 16; i_11 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 2; i_12 < 18; i_12 += 1) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 19; i_13 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)34685)) >> (((((/* implicit */int) (unsigned short)27832)) - (27818)))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_1 [i_12])) : (((/* implicit */int) (unsigned short)54173)))) : (((/* implicit */int) var_2))))), (((unsigned long long int) 0LL))));
                                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)11362)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (var_7))))) : (max((((/* implicit */long long int) ((((/* implicit */int) (short)5818)) & (((/* implicit */int) var_11))))), (min((((/* implicit */long long int) arr_2 [i_11])), (-2239889466235500293LL)))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned int) (unsigned char)52);
                }
                for (unsigned int i_14 = 0; i_14 < 19; i_14 += 1) 
                {
                    arr_45 [i_9] [i_10] [i_10] [i_10] = ((((/* implicit */_Bool) (~(((/* implicit */int) ((var_0) && (((/* implicit */_Bool) (short)20806)))))))) ? (((((/* implicit */_Bool) arr_7 [i_14] [i_9 + 1])) ? ((-(arr_10 [(_Bool)1]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)30834)) && (((/* implicit */_Bool) arr_26 [i_9 - 2] [i_14])))))));
                    arr_46 [i_9] [14ULL] [(short)16] [i_14] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (656654104U))), (max((2813090549U), (((/* implicit */unsigned int) (unsigned short)34684))))))) ? ((+(((/* implicit */int) var_14)))) : (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11362))) >= (arr_18 [i_14] [i_14] [i_14] [i_14] [(unsigned char)4] [i_14])))) / (((/* implicit */int) arr_24 [i_9]))))));
                    arr_47 [i_9] [i_9] [i_14] [i_9 - 2] = ((/* implicit */short) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_10] [i_9]))) == (-6229593739616039913LL))));
                }
            }
        } 
    } 
    var_32 -= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_13)), (var_2)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((short) (unsigned char)71))))));
}
