/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143660
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)133))))), ((~(3115707380U))))))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1064954266)) ? (3115707365U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)32751)) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237))) >= (arr_1 [i_0]))))))))));
        var_19 = ((/* implicit */unsigned char) ((unsigned short) arr_2 [i_0]));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */_Bool) max((var_20), ((!(((((/* implicit */long long int) (-(10U)))) >= (((((/* implicit */long long int) arr_0 [i_1])) | (var_16)))))))));
            arr_6 [i_0] [15] [i_1] = ((/* implicit */_Bool) 15545991766817843620ULL);
            var_21 = ((/* implicit */unsigned char) var_6);
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */unsigned int) var_10)) : (arr_0 [i_2])))) || (((/* implicit */_Bool) -2199023255552LL))));
            var_23 = ((/* implicit */signed char) ((unsigned long long int) ((signed char) var_6)));
            var_24 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (unsigned short)7163))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            var_25 = ((/* implicit */int) (unsigned short)7169);
            var_26 = ((/* implicit */signed char) var_8);
        }
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        var_27 = ((/* implicit */unsigned short) ((short) (signed char)63));
        var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) arr_12 [i_4])))) > (((/* implicit */int) var_8))));
    }
    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) 
    {
        var_29 = ((/* implicit */unsigned char) var_16);
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 1) 
        {
            for (unsigned short i_7 = 4; i_7 < 18; i_7 += 1) 
            {
                {
                    var_30 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)237))));
                    var_31 = ((/* implicit */int) ((((arr_15 [i_5]) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-84))))) << ((((~(var_10))) - (2038474181)))));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            {
                                var_32 |= ((/* implicit */int) ((((/* implicit */int) (unsigned char)156)) < (((/* implicit */int) ((unsigned short) (-2147483647 - 1))))));
                                var_33 = ((/* implicit */long long int) ((((((/* implicit */_Bool) -1576075475649015015LL)) ? (7689938632921132599LL) : (((/* implicit */long long int) -1577629970)))) >= (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-12118))) : (((((/* implicit */long long int) var_12)) / (900900122659004250LL)))))));
                                var_34 = ((/* implicit */long long int) max((var_34), (var_6)));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_27 [i_5] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-1))));
        /* LoopSeq 1 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_35 = ((/* implicit */short) var_0);
            var_36 = max((((/* implicit */signed char) ((_Bool) (unsigned char)237))), ((signed char)9));
            arr_30 [i_5] [i_5] [(signed char)7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
            var_37 = ((/* implicit */signed char) ((900900122659004250LL) >> ((((~(arr_23 [i_5] [i_5] [i_5] [i_5] [i_5]))) - (18132210310379967489ULL)))));
        }
        var_38 = ((/* implicit */signed char) ((int) ((arr_26 [(signed char)8] [(unsigned char)8] [(signed char)8]) / (((/* implicit */int) arr_5 [i_5] [i_5])))));
    }
    var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) (_Bool)1))));
    /* LoopNest 2 */
    for (long long int i_11 = 0; i_11 < 18; i_11 += 4) 
    {
        for (short i_12 = 0; i_12 < 18; i_12 += 4) 
        {
            {
                var_40 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (arr_26 [i_11] [i_12] [i_12]))))))));
                arr_35 [i_11] = ((/* implicit */unsigned char) (((~(max((((/* implicit */long long int) var_13)), (var_4))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_1)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_13 = 0; i_13 < 10; i_13 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_14 = 0; i_14 < 10; i_14 += 1) 
        {
            for (long long int i_15 = 0; i_15 < 10; i_15 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_16 = 1; i_16 < 6; i_16 += 1) 
                    {
                        var_41 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_36 [i_14] [i_15]))));
                        var_42 -= ((/* implicit */long long int) ((unsigned int) 18));
                        /* LoopSeq 1 */
                        for (signed char i_17 = 0; i_17 < 10; i_17 += 1) 
                        {
                            var_43 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) -1368220100)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_8))))));
                            var_44 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_10)))) ? (((((/* implicit */_Bool) arr_41 [i_13] [i_14] [i_15])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 4966650075842065614LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)37285)) != (((/* implicit */int) (unsigned short)2815))))))))) ? ((~(((((/* implicit */_Bool) arr_29 [i_13])) ? (900900122659004235LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)80))))))) : (((((/* implicit */_Bool) 3115707383U)) ? (((var_4) + (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_14]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58372)))))));
                        }
                    }
                    for (short i_18 = 0; i_18 < 10; i_18 += 1) 
                    {
                        var_45 = ((short) ((3030900695U) > (3115707380U)));
                        var_46 *= ((/* implicit */int) min((min((((unsigned int) arr_25 [i_18] [i_18] [(short)14] [(short)14] [(unsigned short)0] [i_13])), (((/* implicit */unsigned int) ((arr_45 [i_13] [i_13] [i_15] [i_15] [i_18]) << (((((((/* implicit */int) var_5)) + (14603))) - (1)))))))), (((/* implicit */unsigned int) (unsigned char)243))));
                    }
                    /* vectorizable */
                    for (unsigned int i_19 = 2; i_19 < 6; i_19 += 1) 
                    {
                        var_47 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)(-127 - 1)))));
                        var_48 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
                    }
                    arr_53 [i_13] [i_14] [i_15] [i_14] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)102))));
                    var_49 = ((/* implicit */unsigned long long int) max((var_49), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_49 [i_15] [i_15] [4] [i_14] [i_13])))))));
                }
            } 
        } 
        var_50 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) var_3)), (arr_18 [i_13] [i_13] [i_13] [(unsigned short)6]))), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-64))))));
        var_51 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-48))))) ? (((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) arr_25 [i_13] [i_13] [(unsigned short)16] [i_13] [i_13] [i_13])) : (((/* implicit */int) var_2)))) : ((-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) ((((/* implicit */_Bool) 900900122659004254LL)) && (((/* implicit */_Bool) (signed char)(-127 - 1))))))))) : (((/* implicit */int) (signed char)127))));
    }
}
