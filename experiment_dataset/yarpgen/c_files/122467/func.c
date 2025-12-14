/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122467
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_10 = var_9;
        arr_3 [i_0] = ((_Bool) var_3);
        var_11 = ((/* implicit */short) 0ULL);
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_12 = ((/* implicit */long long int) min((var_0), (((/* implicit */unsigned long long int) ((long long int) var_1)))));
                        var_13 -= ((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)0)));
                        var_14 -= ((/* implicit */int) (unsigned char)155);
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
                        {
                            var_15 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) min((var_8), (((/* implicit */short) var_6)))))))) ? (((unsigned long long int) 1631897626U)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                            arr_14 [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)21275)), (min((((/* implicit */unsigned long long int) var_3)), (var_0)))))) ? ((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)5))) <= ((-9223372036854775807LL - 1LL))))))) : (((/* implicit */int) var_2))));
                        }
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)230)) == (((/* implicit */int) (signed char)6)))))));
                            var_17 -= ((/* implicit */long long int) var_6);
                            var_18 &= ((/* implicit */short) ((unsigned int) (short)21275));
                        }
                        for (short i_6 = 0; i_6 < 19; i_6 += 1) /* same iter space */
                        {
                            arr_19 [i_6] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)-8812)) && (((/* implicit */_Bool) var_0)))))));
                            var_19 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)242))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) (unsigned char)65))))) ? (var_0) : (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)228)))))) ? (-2261332490986872577LL) : (((/* implicit */long long int) (~(((/* implicit */int) min((var_6), (var_6)))))))));
                        }
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)21275))))), (min((((/* implicit */unsigned long long int) var_4)), (5833311029646335029ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)251)) && (((/* implicit */_Bool) -9223372036854775786LL)))))) : (min((((/* implicit */unsigned int) min((((/* implicit */unsigned char) (signed char)-45)), (var_2)))), (((((/* implicit */_Bool) 7125342751036870847LL)) ? (3383800563U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)44)))))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned char)214))))))));
        var_23 = ((min((((/* implicit */unsigned int) (signed char)45)), (var_5))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_1)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) == (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)44)))))));
            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (18446744073709551615ULL)));
            var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 13417266315159927912ULL))));
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)1257)) ? (((/* implicit */long long int) var_5)) : (var_4)));
        }
        for (unsigned int i_9 = 0; i_9 < 19; i_9 += 2) /* same iter space */
        {
            var_28 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */short) min((((/* implicit */unsigned char) var_9)), ((unsigned char)214)))), (min((((/* implicit */short) (_Bool)1)), (var_8))))))));
            arr_28 [i_7] [1] [i_9] = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) 1574691175U)), (7049660684067020091ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 0ULL)))))));
            /* LoopSeq 1 */
            for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) 
            {
                var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) var_3))));
                arr_32 [(short)0] [i_9] [i_9] [(short)0] = ((/* implicit */signed char) max((((/* implicit */long long int) var_3)), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ ((-9223372036854775807LL - 1LL))))));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 3) 
            {
                var_30 = ((/* implicit */long long int) max((((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)197))))) <= (980485194U)))), (min(((unsigned char)197), (((/* implicit */unsigned char) var_1))))));
                /* LoopSeq 1 */
                for (unsigned short i_12 = 0; i_12 < 19; i_12 += 4) 
                {
                    var_31 = ((/* implicit */unsigned int) var_9);
                    var_32 += ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (var_0))), (((((/* implicit */unsigned long long int) 9223372036787666944LL)) / (((((/* implicit */_Bool) (unsigned char)191)) ? (4644682379338297344ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                }
                var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) 980485194U)) ? (((/* implicit */int) (_Bool)1)) : (var_3)))))));
                arr_39 [i_11] [i_11] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)224)) % (((/* implicit */int) (signed char)76))));
            }
            arr_40 [i_7] [i_9] |= ((/* implicit */short) min(((((_Bool)1) ? (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */int) var_2))))) : (((6945091763964378278ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)221))))))), (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_6)) * (((/* implicit */int) (signed char)0)))), (((/* implicit */int) ((unsigned char) (-9223372036854775807LL - 1LL)))))))));
        }
        for (short i_13 = 0; i_13 < 19; i_13 += 2) 
        {
            arr_44 [i_13] [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */int) min((var_2), (var_6)))) != (((/* implicit */int) var_6)))) ? (((/* implicit */long long int) -1763933033)) : (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)119)))))))));
            var_34 = (-(((/* implicit */int) var_9)));
            var_35 += ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (short)-4211)) ? (((/* implicit */int) (unsigned char)46)) : (((/* implicit */int) (_Bool)1)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_14 = 0; i_14 < 19; i_14 += 3) 
            {
                var_36 = ((/* implicit */short) ((_Bool) var_3));
                arr_47 [i_7] = ((/* implicit */short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1587156684486635706LL))) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-16)))))));
            }
        }
        /* LoopSeq 1 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_37 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) % (18446744073709551596ULL)))) ? (min((((/* implicit */unsigned long long int) 2305843009213693696LL)), ((-(13928424477596314261ULL))))) : (((/* implicit */unsigned long long int) ((((int) var_6)) + ((+(((/* implicit */int) var_1)))))))));
            arr_50 [i_7] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2503)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))) ? (17387697356647661345ULL) : (((/* implicit */unsigned long long int) 2838894031U)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)15775)))))));
        }
    }
    var_38 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)9)))) ? (((((/* implicit */int) (short)-32766)) / (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_9))));
    var_39 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2305843009213693674LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (3228445964U)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))));
    var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))), (var_7))))));
}
