/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169699
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 3) /* same iter space */
    {
        arr_2 [2LL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) var_7)) % (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_0 [i_0])))))))) ^ (min((((var_4) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21))))), (((/* implicit */long long int) arr_0 [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(-7173506171035890700LL)))) ? (-7173506171035890691LL) : (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0]))))))) <= (max((((/* implicit */long long int) var_13)), (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)0))))))));
            var_15 = ((/* implicit */long long int) arr_3 [i_1]);
        }
        arr_5 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-82)));
    }
    for (unsigned char i_2 = 3; i_2 < 21; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(arr_8 [i_2 - 2])))) / (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(short)4] [i_2]))) : (((var_0) / (((/* implicit */long long int) ((/* implicit */int) (signed char)123)))))))));
        /* LoopSeq 1 */
        for (unsigned char i_3 = 1; i_3 < 22; i_3 += 2) 
        {
            arr_13 [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    {
                        var_16 *= ((/* implicit */unsigned short) ((long long int) (signed char)81));
                        var_17 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)60))));
                        var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_3)), (var_2))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) : (((((/* implicit */_Bool) (short)-8480)) ? (min((-7173506171035890700LL), (((/* implicit */long long int) (unsigned short)33490)))) : (var_0)))));
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_10 [i_2]))));
        }
    }
    for (unsigned char i_6 = 3; i_6 < 21; i_6 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_7 = 1; i_7 < 20; i_7 += 3) 
        {
            for (short i_8 = 2; i_8 < 21; i_8 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_9 = 3; i_9 < 20; i_9 += 3) 
                    {
                        var_20 *= ((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))) / (((long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)15593)))))));
                        var_21 = ((/* implicit */unsigned long long int) ((unsigned short) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_7 + 3] [i_8 + 2]))) : (-1475254824667231056LL))))));
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((long long int) max((((/* implicit */unsigned int) arr_16 [i_9 - 2] [i_7] [i_9 - 2] [i_9 - 2] [i_7])), (arr_8 [i_6])))))));
                        var_23 ^= ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)56364))));
                    }
                    arr_27 [16ULL] [i_7] [i_8] [i_7] = ((/* implicit */short) arr_21 [i_6]);
                    /* LoopSeq 4 */
                    for (unsigned short i_10 = 3; i_10 < 19; i_10 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */long long int) min(((~(((/* implicit */int) var_13)))), (((/* implicit */int) (short)18732))));
                        var_25 = ((/* implicit */long long int) (~(((unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) var_1)))))));
                    }
                    for (unsigned short i_11 = 3; i_11 < 19; i_11 += 2) /* same iter space */
                    {
                        arr_32 [i_8] = ((/* implicit */signed char) arr_10 [i_7]);
                        arr_33 [i_7] [i_8] = ((/* implicit */_Bool) max((max((((/* implicit */long long int) ((signed char) arr_29 [i_8] [i_8]))), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) max(((unsigned char)80), (((/* implicit */unsigned char) (signed char)67)))))));
                        var_26 = ((/* implicit */unsigned long long int) ((unsigned char) var_4));
                    }
                    for (unsigned short i_12 = 3; i_12 < 19; i_12 += 2) /* same iter space */
                    {
                        var_27 += ((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_12] [(unsigned char)10] [i_6])) > (((/* implicit */int) arr_1 [i_8 - 1] [i_8 + 2]))));
                        var_28 -= ((/* implicit */signed char) max((((/* implicit */long long int) ((arr_15 [19LL]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_16 [10LL] [16ULL] [i_7] [i_6] [i_6])))))))), (7173506171035890700LL)));
                    }
                    for (unsigned short i_13 = 3; i_13 < 19; i_13 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (long long int i_14 = 3; i_14 < 19; i_14 += 2) 
                        {
                            var_29 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) % (var_5)))) ? (((8131903200352254094LL) * (((/* implicit */long long int) ((/* implicit */int) arr_15 [(unsigned char)12]))))) : ((~(-4273047096595913435LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_6] [(signed char)9] [(signed char)9] [(signed char)9] [i_6] [i_14])) ? (((/* implicit */int) (short)-3156)) : (((/* implicit */int) arr_38 [(signed char)20]))))) ? (max((var_5), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [8LL] [i_13 + 2]))))) : (((/* implicit */long long int) ((/* implicit */int) max(((short)32767), (((/* implicit */short) (_Bool)1)))))));
                            var_30 ^= ((/* implicit */unsigned char) min((arr_6 [i_6] [i_6 - 2]), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)32375))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_17 [i_7] [i_14])) : (((/* implicit */int) var_1))))))))));
                            arr_43 [i_6] [i_7] [i_7] [i_8] [i_8] [i_14] = ((/* implicit */short) (~(((arr_34 [i_7] [i_7 + 1] [i_7 + 1] [i_8] [i_8] [i_8 - 2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                            var_31 ^= ((((var_5) < (-4273047096595913435LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_5));
                        }
                        for (unsigned short i_15 = 0; i_15 < 23; i_15 += 3) 
                        {
                            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) max((((int) (short)3150)), (((/* implicit */int) arr_6 [14ULL] [14ULL])))))));
                            var_33 += ((/* implicit */int) ((unsigned char) ((((/* implicit */int) ((((/* implicit */int) (signed char)-60)) < (((/* implicit */int) (signed char)-27))))) <= (((/* implicit */int) (short)27826)))));
                            var_34 = ((/* implicit */short) (~(((var_10) + (arr_30 [i_8 - 1] [i_8] [i_8])))));
                        }
                        var_35 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_18 [i_6 - 2])) ? (arr_18 [i_6 - 3]) : (var_2))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3)))))));
                    }
                    var_36 |= ((/* implicit */short) ((((/* implicit */_Bool) (short)-30756)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_6] [18U] [i_8 + 1]))) * (var_8))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-60)))))));
                }
            } 
        } 
        var_37 = ((/* implicit */long long int) (~(max((1348629207U), (((/* implicit */unsigned int) -84190256))))));
        var_38 = min((((((/* implicit */_Bool) arr_7 [i_6 + 1])) ? (-6973430856323639280LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)125))))), (((/* implicit */long long int) (signed char)-126)));
    }
    for (unsigned char i_16 = 3; i_16 < 21; i_16 += 3) /* same iter space */
    {
        var_39 = ((/* implicit */short) ((signed char) min((((/* implicit */unsigned char) (signed char)65)), (var_3))));
        var_40 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
    }
    var_41 = min((((/* implicit */long long int) var_13)), (((((((/* implicit */int) var_6)) < (((/* implicit */int) (unsigned char)110)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) min((var_11), (var_11))))))));
    var_42 |= var_10;
}
