/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133109
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)19794))))) + (max((((/* implicit */unsigned long long int) arr_0 [3U])), (14794136977928725542ULL)))));
        var_14 = ((/* implicit */unsigned char) (+(((2520985141U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-20820)))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_0] &= ((unsigned char) (~(4096435371U)));
                        var_15 += ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        var_16 = (((~(min((((/* implicit */unsigned int) arr_3 [i_0])), (var_12))))) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)0)))))))));
                        var_17 |= ((/* implicit */unsigned long long int) min((((/* implicit */int) var_10)), (((((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_4])) - ((+(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0]))))))));
                        var_18 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (5327115535704518699ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31)))))) ? (((/* implicit */int) arr_10 [i_0] [i_0])) : (((/* implicit */int) var_7)))), (max((((/* implicit */int) max((var_5), (((/* implicit */unsigned char) (signed char)31))))), ((-(((/* implicit */int) arr_6 [i_2] [(unsigned short)6] [i_2] [i_2]))))))));
                        var_19 &= ((/* implicit */unsigned int) (unsigned char)230);
                        var_20 = ((/* implicit */_Bool) min((min((11063846258926839656ULL), (((/* implicit */unsigned long long int) (~(2170791561U)))))), (((/* implicit */unsigned long long int) ((signed char) 9361015485832490914ULL)))));
                    }
                    for (unsigned short i_5 = 3; i_5 < 21; i_5 += 4) 
                    {
                        arr_17 [(unsigned char)17] [i_5] = ((/* implicit */unsigned int) (signed char)84);
                        var_21 = ((/* implicit */unsigned int) var_11);
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)249)), (1068041112U)))) || ((!(((/* implicit */_Bool) arr_13 [i_5] [i_5 + 1] [i_5] [i_5 + 1]))))));
                    }
                    for (unsigned int i_6 = 1; i_6 < 22; i_6 += 4) 
                    {
                        arr_22 [i_0] [i_0] [i_2] [i_6] = ((/* implicit */unsigned char) min((((min((9085728587877060711ULL), (9361015485832490914ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_6 - 1]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)93)))))));
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) var_5)) >> (((/* implicit */int) ((((/* implicit */int) (unsigned char)69)) > (((/* implicit */int) var_11)))))))))));
                        var_24 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((signed char) (signed char)-84))) ? (((/* implicit */int) min((var_7), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) min((arr_8 [(signed char)11] [(unsigned char)2]), (((/* implicit */unsigned short) (signed char)82))))))) * ((~(((/* implicit */int) (signed char)(-127 - 1)))))));
                    }
                    /* LoopSeq 1 */
                    for (short i_7 = 0; i_7 < 23; i_7 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)(-127 - 1))), (var_10)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)-3))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [(short)19] [(_Bool)0] [(signed char)1] [i_0]))))) ? (max((((/* implicit */unsigned int) arr_20 [i_0] [i_0] [i_0] [i_7] [(unsigned short)2] [i_2])), (4294967288U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)122))))))))));
                            arr_29 [i_0] [(unsigned char)5] [16U] [i_2] [i_7] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1117041350U))));
                            var_27 += ((/* implicit */unsigned int) ((unsigned short) ((unsigned long long int) arr_2 [i_0])));
                        }
                        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 2) /* same iter space */
                        {
                            var_28 = ((/* implicit */_Bool) max(((+(1662859996U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_21 [i_7])))))));
                            var_29 = ((/* implicit */unsigned int) (_Bool)1);
                        }
                    }
                }
            } 
        } 
    }
    var_30 = ((/* implicit */signed char) (unsigned char)12);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 3) 
    {
        var_31 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)102)) && (((/* implicit */_Bool) (short)-17))));
        arr_35 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_10] [i_10])) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) arr_34 [i_10] [(_Bool)1]))));
    }
    var_32 -= ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((0U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)105))))))) == (min((((/* implicit */unsigned long long int) 2403184382U)), (var_6)))))), (min((((/* implicit */int) ((short) var_7))), (((((/* implicit */int) var_10)) << (((((/* implicit */int) var_4)) - (37464)))))))));
}
