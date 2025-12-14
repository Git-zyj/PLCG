/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109034
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
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */int) ((short) var_6))) < ((+(((/* implicit */int) min((((/* implicit */unsigned short) var_18)), ((unsigned short)65507)))))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            var_20 ^= ((1071644672) | (((((/* implicit */int) (unsigned char)255)) << (((/* implicit */int) (_Bool)0)))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                var_21 -= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)26707)) - (((/* implicit */int) (short)32741))));
                var_22 ^= ((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0] [i_0] [i_1 - 1]))));
                var_23 = ((/* implicit */short) ((2147483647) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (156)))));
                arr_8 [i_0] &= ((/* implicit */unsigned char) (-(((long long int) (short)32767))));
            }
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) min((min((1071644659), (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) 1071644674)) ? (((/* implicit */int) (short)-32751)) : (((/* implicit */int) (unsigned char)18))))))) && (((/* implicit */_Bool) 17523466567680LL)))))));
            var_25 += ((/* implicit */int) var_13);
            var_26 = ((/* implicit */short) min(((signed char)86), (((/* implicit */signed char) ((_Bool) arr_10 [i_3])))));
            arr_11 [i_3] [i_3] = ((/* implicit */short) ((_Bool) ((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)46384)))) * (((/* implicit */int) var_3)))));
        }
        for (unsigned short i_4 = 1; i_4 < 9; i_4 += 4) 
        {
            var_27 += ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) (short)-10261)) != ((-(1071644674))))));
            /* LoopNest 3 */
            for (short i_5 = 3; i_5 < 11; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (int i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(125018387)))), (((var_7) / (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_6)))))));
                            var_29 &= ((/* implicit */long long int) min((((((/* implicit */_Bool) min((var_10), (var_1)))) ? (((/* implicit */int) ((signed char) var_2))) : (((/* implicit */int) ((var_15) || (((/* implicit */_Bool) (unsigned char)138))))))), (((/* implicit */int) arr_19 [i_0] [i_4] [i_0] [i_6] [i_7]))));
                            arr_24 [i_7] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)20795))))))));
                        }
                    } 
                } 
            } 
            arr_25 [i_0] = ((/* implicit */short) ((((1071644684) % (((/* implicit */int) (signed char)3)))) >> (((((/* implicit */int) arr_23 [2] [i_4] [i_4] [2] [2])) - (96)))));
        }
        var_30 += ((/* implicit */unsigned short) 6419452724966746802LL);
        arr_26 [i_0] [i_0] = ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_9))) ? (((((/* implicit */_Bool) 8191U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9234))) : (12939015608061601791ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)9656), ((short)-30815)))))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_8 = 2; i_8 < 21; i_8 += 3) 
    {
        var_31 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32753)) & (((/* implicit */int) min((var_13), ((signed char)-1))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_8 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-34))) : (4140003308U)))) : (((((var_0) <= (((/* implicit */int) (_Bool)1)))) ? (arr_29 [i_8]) : (((/* implicit */unsigned long long int) var_17))))));
        var_32 = ((/* implicit */unsigned long long int) ((_Bool) min((((((/* implicit */_Bool) 1071644649)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_29 [i_8]))), (((/* implicit */unsigned long long int) min((-6419452724966746802LL), (((/* implicit */long long int) var_8))))))));
    }
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_10 = 2; i_10 < 18; i_10 += 3) 
        {
            arr_37 [i_9] = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_36 [i_9 - 1] [i_10 - 1] [i_10 + 1])))) == (((/* implicit */int) arr_28 [i_9] [i_10]))));
            var_33 *= ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_31 [i_9 - 1] [i_9 - 1]), (arr_31 [7LL] [i_10 + 1])))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)127)), (var_1)))) : (((((/* implicit */int) arr_32 [i_9 - 1])) - (((/* implicit */int) (short)13627))))));
            var_34 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551611ULL)));
            arr_38 [i_9 - 1] [i_10] = ((/* implicit */unsigned int) min((((int) (+(((/* implicit */int) var_5))))), ((~(((/* implicit */int) max(((short)-21220), ((short)(-32767 - 1)))))))));
        }
        /* vectorizable */
        for (signed char i_11 = 0; i_11 < 19; i_11 += 1) 
        {
            var_35 |= ((/* implicit */_Bool) ((arr_34 [i_9] [i_9 - 1]) ? (var_2) : (((/* implicit */long long int) (-(((/* implicit */int) var_5)))))));
            arr_42 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4221484368476742893LL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_28 [i_9] [i_9]))))) > (12939015608061601791ULL)));
            var_36 += ((/* implicit */signed char) ((((/* implicit */int) arr_39 [(signed char)18])) <= (((/* implicit */int) (short)32767))));
            var_37 ^= ((unsigned int) var_13);
        }
        var_38 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_36 [i_9] [i_9] [i_9 - 1])))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_36 [i_9] [i_9] [i_9 - 1])) | (((/* implicit */int) var_8)))))));
    }
}
