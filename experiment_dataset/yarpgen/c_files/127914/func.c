/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127914
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
    var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)128)) != (((/* implicit */int) (short)-3089)))))));
    var_18 = ((/* implicit */long long int) (signed char)50);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_19 = (-((+(((/* implicit */int) arr_1 [i_0])))));
        var_20 = ((/* implicit */short) min((var_6), (((/* implicit */unsigned short) var_8))));
        var_21 = (!(((-1621083543073596378LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)180))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_22 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1867738630)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_1])))))));
        var_23 = ((/* implicit */long long int) max(((unsigned short)17046), (((/* implicit */unsigned short) (signed char)115))));
        var_24 = ((/* implicit */signed char) -2147483646);
        arr_6 [i_1] [(unsigned char)20] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (signed char)-124)) & (-1527706614))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_12))))) : ((-(((unsigned long long int) var_1))))));
    }
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)118)) || (((/* implicit */_Bool) (-(-858689583)))))))));
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((int) ((arr_9 [i_2]) % (arr_9 [i_2])))))));
        var_27 *= ((/* implicit */unsigned char) min(((+((((_Bool)1) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) (unsigned short)17046)))))), (((/* implicit */int) (signed char)83))));
    }
    /* LoopSeq 2 */
    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */long long int) ((min((((/* implicit */int) arr_1 [i_3])), (arr_0 [i_3]))) * (((int) arr_1 [i_3]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                var_28 = ((/* implicit */_Bool) ((unsigned char) var_6));
                arr_20 [i_3] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) (unsigned char)7))));
            }
            arr_21 [i_3] = ((/* implicit */signed char) var_14);
            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (~(-1527706621))))));
        }
        for (short i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            arr_24 [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) 1527706622))) * (((/* implicit */int) (_Bool)0))));
            arr_25 [i_3] = ((((/* implicit */_Bool) max((max(((unsigned short)17040), (((/* implicit */unsigned short) var_11)))), (((/* implicit */unsigned short) var_8))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [(short)9])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((_Bool) var_9)))))));
            var_30 = ((/* implicit */unsigned long long int) var_8);
        }
        /* LoopSeq 3 */
        for (unsigned int i_7 = 2; i_7 < 20; i_7 += 3) 
        {
            var_31 = ((/* implicit */long long int) max((((((/* implicit */int) (signed char)108)) & (((/* implicit */int) var_2)))), (((/* implicit */int) ((arr_16 [(unsigned char)20] [(unsigned char)20] [(unsigned char)20] [i_7 - 1]) || (arr_16 [i_7] [i_7] [i_7] [i_7 + 1]))))));
            arr_28 [i_3] = ((/* implicit */long long int) var_4);
            var_32 = ((/* implicit */unsigned char) arr_3 [(unsigned char)0]);
            var_33 *= var_7;
        }
        for (signed char i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            var_34 = ((/* implicit */int) min((var_34), (((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)127))))));
            /* LoopSeq 1 */
            for (int i_9 = 2; i_9 < 20; i_9 += 3) 
            {
                arr_35 [15ULL] [i_3] [i_9] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (_Bool)1))))));
                var_35 &= ((/* implicit */signed char) min((((/* implicit */long long int) (signed char)-97)), (((((/* implicit */_Bool) ((var_15) & (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_3] [i_3] [i_3]))) : (((long long int) var_1))))));
            }
            arr_36 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~((((_Bool)0) ? (((/* implicit */int) (unsigned short)62887)) : (((/* implicit */int) (unsigned char)48)))))))));
        }
        for (signed char i_10 = 2; i_10 < 20; i_10 += 2) 
        {
            var_36 += ((/* implicit */long long int) (unsigned char)7);
            var_37 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-16428)) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) (signed char)27))));
        }
        var_38 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_16 [i_3] [i_3] [(signed char)7] [i_3])), ((-(((/* implicit */int) (signed char)127))))));
    }
    for (long long int i_11 = 0; i_11 < 25; i_11 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_12 = 1; i_12 < 21; i_12 += 3) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    arr_48 [i_13] [(_Bool)0] [i_13] = ((/* implicit */signed char) min((min((((/* implicit */int) ((_Bool) (signed char)-102))), ((-(1990537271))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1952)) ? (((/* implicit */long long int) 1867738629)) : (-1LL)))) ? (((/* implicit */int) (signed char)-112)) : (((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */int) (short)20799)) : (((/* implicit */int) (_Bool)1))))))));
                    var_39 = ((/* implicit */signed char) (!(((_Bool) (!(((/* implicit */_Bool) (unsigned short)62887)))))));
                    var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))) | (((((/* implicit */int) (unsigned short)2652)) + (((/* implicit */int) (_Bool)1))))))) ? (min((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) (signed char)109)))), (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)20787)) : (arr_40 [(unsigned short)23])))))));
                    /* LoopNest 2 */
                    for (signed char i_14 = 0; i_14 < 25; i_14 += 3) 
                    {
                        for (int i_15 = 0; i_15 < 25; i_15 += 3) 
                        {
                            {
                                var_41 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1990537271)) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) var_11))))) ? (((int) var_4)) : (((((/* implicit */_Bool) 9020134510155577589LL)) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) (short)32767))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))));
                                var_42 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_12] [i_13] [i_14] [i_14])) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(4723900592776168744LL)))))))));
                            }
                        } 
                    } 
                    arr_55 [i_13] [i_12] [i_13] = ((/* implicit */unsigned char) var_14);
                }
            } 
        } 
        arr_56 [20U] [20U] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 7431882903022994222LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
        var_43 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))));
        var_44 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)2647)) ? (-2163663027890497701LL) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_11])))))), ((+(((966724786981465373ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    }
}
