/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162078
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
    var_13 = ((/* implicit */int) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) ((var_5) >= (((/* implicit */long long int) var_9)))))) % (((((/* implicit */_Bool) 2147483647LL)) ? (((/* implicit */long long int) var_9)) : (-2147483647LL))))));
    var_14 |= ((/* implicit */unsigned short) var_4);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_1] [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (((!(var_8))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-91)) || (((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_3] [i_0] [i_3] [i_4]))))) : (((/* implicit */int) var_2))))), (((((((/* implicit */_Bool) arr_6 [(unsigned char)2])) ? (6414531088800621431LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) ^ (((/* implicit */long long int) arr_7 [i_4] [i_0 - 1] [i_2] [i_3]))))));
                            var_15 = ((/* implicit */short) (+(((/* implicit */int) var_1))));
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_0] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_4] [i_3] [i_3] [i_4] [i_3])) ? (((/* implicit */unsigned int) ((int) var_10))) : (min((arr_1 [i_3] [i_2]), (((/* implicit */unsigned int) arr_0 [i_0]))))))) ? (((((/* implicit */_Bool) (+(arr_1 [i_0 + 1] [i_0])))) ? (((var_8) ? (arr_1 [i_1] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)0))))))) : (((((var_0) < (2524479330U))) ? (((/* implicit */unsigned int) -1261482947)) : (arr_4 [i_0 - 1])))));
                            arr_13 [i_0] [i_0] [i_2] [i_3] [i_3] [i_0] [i_2] = (~(((long long int) 13431893780350824919ULL)));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_5 = 1; i_5 < 9; i_5 += 3) 
                {
                    var_16 += ((/* implicit */unsigned char) (+(((/* implicit */int) var_6))));
                    arr_16 [i_5] [i_2] [i_0] [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned char) arr_7 [8LL] [i_1] [i_2] [i_5 + 1]);
                    var_17 = ((/* implicit */long long int) ((((((/* implicit */int) var_10)) >= (((/* implicit */int) arr_2 [i_2])))) ? (((((/* implicit */_Bool) var_9)) ? (1060679638) : (((/* implicit */int) var_4)))) : ((+(((/* implicit */int) arr_10 [i_0] [i_0] [i_5 + 1] [i_5] [i_2] [i_1]))))));
                }
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((10793749272003322146ULL), (((/* implicit */unsigned long long int) (signed char)-32))))) ? (max((((/* implicit */unsigned int) (signed char)109)), (2524479330U))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))) ^ (arr_5 [i_0] [i_0])))));
                var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (805306368U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))))));
            }
            arr_17 [i_0] [i_1] [i_0 + 1] = ((/* implicit */long long int) min((((unsigned long long int) ((_Bool) 0LL))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) >= (((/* implicit */int) (unsigned char)190)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) var_10)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [5ULL] [i_1] [5ULL] [i_1] [5ULL] [i_0] [i_0]))) | (arr_1 [i_0] [i_1]))))))));
            var_20 = ((/* implicit */short) min((16971579005410056079ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)9206))) >= (var_0)))) : (((/* implicit */int) var_6)))))));
            arr_18 [i_1] [i_0] = ((/* implicit */unsigned char) ((signed char) (short)-21431));
        }
        arr_19 [i_0] [i_0] = ((/* implicit */int) var_12);
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((-1928240239) > (((/* implicit */int) (signed char)29)))) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_7) >= (((/* implicit */int) arr_14 [i_0 + 1] [i_0 - 1] [3ULL] [i_0 + 1] [i_0 - 1] [i_0])))))) : (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) -1060679638)) : (10LL)))));
    }
    for (unsigned char i_6 = 1; i_6 < 17; i_6 += 2) 
    {
        var_22 = ((/* implicit */short) ((5014850293358726704ULL) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)41889)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)5))) : (0U))))));
        /* LoopSeq 2 */
        for (unsigned int i_7 = 1; i_7 < 19; i_7 += 4) 
        {
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5786221004589434588LL)) ? (-2147483646) : (((/* implicit */int) (_Bool)0))))), (min((min((arr_23 [i_7] [i_7] [i_6]), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) (unsigned short)10896)))))))));
            arr_24 [i_6] [i_7] [i_7 + 1] = ((/* implicit */signed char) ((long long int) ((((110720141331436241ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)190))))) ? (((int) var_8)) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)190)))))));
            var_24 = ((/* implicit */unsigned long long int) ((signed char) ((long long int) ((((/* implicit */_Bool) 7U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_20 [i_6 + 3]))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                arr_28 [i_8] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_22 [i_6 + 1] [i_6])) : (((/* implicit */int) arr_20 [i_6 + 1]))));
                /* LoopSeq 1 */
                for (signed char i_9 = 1; i_9 < 19; i_9 += 3) 
                {
                    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)235)) < (((/* implicit */int) (unsigned short)1277)))))));
                    arr_31 [i_6] [i_6] = ((/* implicit */int) (unsigned short)0);
                }
            }
            for (unsigned int i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                arr_35 [i_6 + 3] [i_6 + 3] [i_6] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) 367877451)) || (((/* implicit */_Bool) 6U)))))));
                /* LoopSeq 1 */
                for (int i_11 = 3; i_11 < 18; i_11 += 2) 
                {
                    var_26 = ((/* implicit */_Bool) max((4049595910919320433LL), (((long long int) (_Bool)1))));
                    var_27 = ((/* implicit */long long int) var_8);
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        var_28 *= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((arr_32 [i_6] [i_7] [i_10] [i_11]) | (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))));
                        arr_43 [i_6] [i_6] [i_10] [i_11] [i_11] [i_12] = ((/* implicit */int) (short)-21270);
                    }
                }
            }
            for (unsigned char i_13 = 4; i_13 < 16; i_13 += 3) 
            {
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(var_3))) ^ (((/* implicit */int) (short)254))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (arr_33 [i_6 + 2] [i_13 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)148))))))) : (5014850293358726704ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_30 [i_7] [i_7 - 1] [i_13] [i_13] [i_7 + 1])) + (((/* implicit */int) var_2)))))));
                var_30 |= ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((8363723753899734843LL) < (3610701815504537283LL))))) > (((unsigned long long int) (unsigned char)229)))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))) + (((/* implicit */int) ((unsigned char) var_11)))))) : (((((/* implicit */_Bool) (short)-21270)) ? (arr_32 [i_6] [i_7 - 1] [i_6] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57600))))));
                var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) -2147483646))));
                var_32 = max((((((/* implicit */_Bool) ((var_5) ^ (((/* implicit */long long int) var_0))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)21274)))) : (((((/* implicit */_Bool) arr_38 [i_13] [i_7 + 1] [i_7] [i_6 - 1])) ? (((/* implicit */int) var_11)) : (arr_25 [i_13] [i_7 - 1] [i_6]))))), ((((+(((/* implicit */int) var_6)))) + (((/* implicit */int) arr_21 [i_13])))));
            }
            for (unsigned char i_14 = 1; i_14 < 19; i_14 += 4) 
            {
                var_33 = ((/* implicit */unsigned long long int) (-(max((arr_32 [i_6] [i_7] [i_7 + 1] [i_14 + 1]), (((/* implicit */unsigned int) var_8))))));
                var_34 = ((/* implicit */long long int) max(((unsigned short)15181), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (arr_34 [i_6 - 1] [i_7 + 1] [i_14 - 1]))))));
            }
        }
        for (unsigned char i_15 = 0; i_15 < 20; i_15 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_16 = 1; i_16 < 19; i_16 += 4) 
            {
                var_35 = ((/* implicit */unsigned long long int) ((((((((/* implicit */long long int) ((/* implicit */int) (short)21270))) + (-1083868742588015999LL))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16654))) < (arr_32 [i_6] [(short)13] [i_15] [i_16]))))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)50354))) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) (unsigned short)22279)))))));
                arr_52 [i_16] [i_6] [i_6] = ((/* implicit */unsigned char) arr_25 [i_16] [i_15] [i_6]);
                var_36 = var_8;
                var_37 = ((/* implicit */int) ((arr_29 [i_6] [i_6] [i_15] [5U]) < (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_33 [i_6 + 2] [i_6 + 2]) % (var_0)))) ? (((/* implicit */int) arr_30 [i_16 - 1] [i_6 - 1] [i_6 + 3] [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) arr_26 [i_6] [i_6 + 3] [i_6 - 1] [i_16 - 1])))))));
            }
            for (long long int i_17 = 1; i_17 < 19; i_17 += 1) 
            {
                var_38 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) arr_29 [i_6] [i_15] [i_17] [i_15])) ? (2132092087) : (((/* implicit */int) (unsigned char)6)))))))));
                arr_55 [i_6] = ((/* implicit */unsigned long long int) var_8);
            }
            arr_56 [i_6] [i_6] = ((/* implicit */_Bool) (((((~(((/* implicit */int) var_4)))) >= ((((_Bool)0) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_45 [i_6] [i_15] [i_6] [i_15])))))) ? (((/* implicit */long long int) min((((201667953) % (-367877451))), (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */int) var_4))))))) : (((((/* implicit */_Bool) ((short) arr_33 [i_6] [i_15]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2219793497U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13))) : (3448205807U)))) : (-744228288942010864LL)))));
        }
        var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_6 + 2] [i_6 - 1] [i_6] [i_6 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_51 [i_6] [i_6] [i_6]))))) < (((long long int) (-(((/* implicit */int) (signed char)-69))))))))));
    }
    for (signed char i_18 = 0; i_18 < 25; i_18 += 4) 
    {
        arr_60 [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) 16289303391563412559ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21270))) : (14143307180383970695ULL)));
        arr_61 [i_18] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_59 [i_18])) ? (((/* implicit */int) arr_59 [i_18])) : (((/* implicit */int) arr_59 [i_18])))), (max((var_3), (((/* implicit */int) arr_59 [i_18]))))));
        arr_62 [i_18] [i_18] = ((/* implicit */unsigned int) ((((int) -367877451)) & (((/* implicit */int) var_2))));
        var_40 = ((/* implicit */short) -744228288942010864LL);
    }
    var_41 = ((/* implicit */short) (unsigned short)32130);
}
